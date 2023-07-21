#pragma once
#include <string>

using namespace std;
using namespace System;



public ref class CCard
{
public:
    String ^cardNumber;
	int CVC;
	int day;
	int month;
	int year;
	void SetCardNumber(String^ CardNUmber);
	void SetDay(int day);
	void SetMonth(int month);
	void SetYear(int year);
	void SetCVC(int CVC);

};




