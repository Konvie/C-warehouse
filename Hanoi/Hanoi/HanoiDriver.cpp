#include<iostream>

using namespace std;

class CHanoi
{
public:
	static CHanoi* instance;

	//汉诺塔移动模式
	void Move(int n, char source, char station, char target);	
	
	//单例模式，采⽤惰性⽅式创建其全局唯⼀的实例
	static CHanoi* GetInstance() {
		if (instance == NULL)
			instance = new CHanoi;
		return instance;
	}
	~CHanoi();

private:
	CHanoi();		//构造函数私有
	//显示汉诺塔移动方式
	void Show(int n, char source, char target);
};
CHanoi* CHanoi::instance = NULL;

CHanoi::CHanoi()
{
}

CHanoi::~CHanoi()
{
}

//n表示圆盘数量，source表示源座，target表示目标座即n个圆盘初始所在的座，station表示中转座，初始为空；target表示⽬标座，即n个圆盘应该被移动⾄的座
void CHanoi::Move(int n, char source, char station, char target) {
	if (n == 1) {
		Show(n, source, target);	//源座移动到目标座
	}
	else {
		Move(n - 1, source, target,station );	//先将n-1个圆盘移动到当前所谓的中转座上
		Show(n, source, target);	//源座移动到目标座
		Move(n - 1, station, source, target);	//将移动到中转座上的n-1个圆盘移至目标座
	}	//递归重复以上步骤
}
/*其实show就相当于实现了汉诺塔的移动，实际上并没有汉诺塔这个东西，它本身并不存在，只不过是通过显示步骤来实现了而已*/

//n表示第n号圆盘，source表示源座，target表示⽬标座；显示格式为：#n：source -> target
void CHanoi::Show(int n, char source, char target) {
	cout << "#" << n << ": " <<source<< "->" << target << endl;
}

int main() {
	CHanoi* p = CHanoi::GetInstance();
	p->Move(5, 'A', 'B', 'C');
	return 0;
}