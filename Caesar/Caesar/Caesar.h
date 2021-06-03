#pragma once
#ifndef CAESAR_H_
#define CAESAR_H_
#include<iostream>
#include<string>

using namespace std;
#define WID 32		//�����ı�����
#define LEN 56		//���뱾����
#define KEY 4		//��Կ����

class CCaesar
{
public:
	static CCaesar* GetInstance();	//��ȡ���Ψһʵ���ĺ���

	static void menu();

	static char code[LEN];
	static void initCode();
	static void printCode();

	static char* Encrypt(/*const*/ char* const);
	static char* Decrypt(/*const*/ char* const);

	static void deleteCaesar();
	
private:
	static CCaesar* instance;
	CCaesar() {
		cout << "����һ����������" << endl;
	}
	~CCaesar() {
		cout << "����һ����������" << endl;
	}

};

#endif