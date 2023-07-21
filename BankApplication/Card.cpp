#include <iostream>
#include <cstring>
#include "Card.h"

using namespace std;

void CCard::SetCardNumber(String^ CardNUmber)
{
    this->cardNumber = CardNUmber;
}

void CCard::SetDay(int day)
{
    this->day = day;
}

void CCard::SetMonth(int month)
{
    this->month = month;
}

void CCard::SetYear(int year)
{
    this->year = year;
}

void CCard::SetCVC(int CVC)
{
    this->CVC = CVC;
}

