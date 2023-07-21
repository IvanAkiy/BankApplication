#pragma once
#include "Card.h"
#include "MyBank.h"

using namespace System;

public ref class CClient	
{
public:
	void SetCardNumber(String^ CardNUmber);
	void SetDay(int day);
	void SetMonth(int month);
	void SetYear(int year);
	void SetCVC(int CVC);
	String ^FirstName;
	String ^LastName;
	int age;
	String ^PhoneNumber;
	int day;
	String ^month;
	int year;
	String^ password;
	CCard^ cd = gcnew CCard();
	int moneyUAN;
	int moneyUSD;
	int moneyEUR;
};


