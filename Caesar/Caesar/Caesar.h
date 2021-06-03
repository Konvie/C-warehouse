#pragma once
#ifndef CAESAR_H_
#define CAESAR_H_

class CCaesar
{
public:
	char* Encrypt(const char* const);
	char* Decrypt(const char* const);
	CCaesar();
	~CCaesar();

private:

};

CCaesar::CCaesar()
{
}

CCaesar::~CCaesar()
{
}

#endif