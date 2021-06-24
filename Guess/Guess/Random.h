#pragma once
typedef int Result; // 自定义类型名称

class CRandom
{
public:
	//nBound表示生成随机数的上界，默认值为10，即所生成的整数在[0,10)中
	//nLimit表示允许用户猜测的最大次数，默认值为10
	CRandom(int nBound,int nLimit);
	Result Judge(int nValue);
	//enum class Result{ EQUAL,LESS,GREAT,EXCEED };
	enum Result { EQUAL, LESS, GREAT, EXCEED };	//必须放在Result Judge()的后面，原因不明，推测是因为声明的新类型与枚举变量相同
	void Start();
	int getValue(); // 获取随机数
	int getremCount(); // 获取剩余猜测次数
private:
	int m_nBound = 10;	//m_nBound表示生成随机数的上界，默认值为10
	int m_nLimit = 10;	//m_nLimit表示允许用户猜测的最大次数，默认值为10
	int m_nValue=0;		//m_nValue表示随机生成的值
	int m_nCount=0;		//m_nCount表示已猜次数
};

