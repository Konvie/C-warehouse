#pragma once
#ifndef CAESAR_H_
#define CAESAR_H_
#include<iostream>
#include<string>

using namespace std;
#define WID 32		//输入文本长度
#define LEN 56		//密码本长度
#define KEY 4		//密钥长度

class CCaesar
{
public:
	static CCaesar* GetInstance();	//获取类的唯一实例的函数

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
		cout << "创建一个单例对象" << endl;
	}
	~CCaesar() {
		cout << "析构一个单例对象" << endl;
	}

};

#endif