#pragma once
typedef int Result; // �Զ�����������

class CRandom
{
public:
	//nBound��ʾ������������Ͻ磬Ĭ��ֵΪ10���������ɵ�������[0,10)��
	//nLimit��ʾ�����û��²����������Ĭ��ֵΪ10
	CRandom(int nBound,int nLimit);
	Result Judge(int nValue);
	//enum class Result{ EQUAL,LESS,GREAT,EXCEED };
	enum Result { EQUAL, LESS, GREAT, EXCEED };	//�������Result Judge()�ĺ��棬ԭ�������Ʋ�����Ϊ��������������ö�ٱ�����ͬ
	void Start();
	int getValue(); // ��ȡ�����
	int getremCount(); // ��ȡʣ��²����
private:
	int m_nBound = 10;	//m_nBound��ʾ������������Ͻ磬Ĭ��ֵΪ10
	int m_nLimit = 10;	//m_nLimit��ʾ�����û��²����������Ĭ��ֵΪ10
	int m_nValue=0;		//m_nValue��ʾ������ɵ�ֵ
	int m_nCount=0;		//m_nCount��ʾ�Ѳ´���
};

