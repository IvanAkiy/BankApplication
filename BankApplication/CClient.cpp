#include <iostream>
#include "CClient.h"
#include "MyBank.h"
#include <string>
#include <fstream>
#include <cctype>
#include <iomanip>
#include <ctime>

using namespace std;

void CClient::SetCardNumber(String^ CardNUmber)
{
	this->cd->SetCardNumber(CardNUmber);
}

void CClient::SetDay(int day)
{
	this->cd->SetDay(day);
}

void CClient::SetMonth(int month)
{
	this->cd->SetMonth(month);
}

void CClient::SetYear(int year)
{
	this->cd->SetYear(year);
}

void CClient::SetCVC(int CVC)
{
	this->cd->SetCVC(CVC);
}
