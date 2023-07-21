#include <iostream>
#include <cstring>
#include <vector>
#include "MyBank.h"
#include <string>
#include <iomanip>
#include "CClient.h"

using namespace std;


int getNumbers()
{
	int number;
	while (true)
	{
		cin >> number;
		if (!cin)
		{
			cout << "Invalide input,please, enter only integer numbers" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		else
		{
			break;
		}
	}
	return number;
}



CMyBank::CMyBank()
{
	FILE.open("DataBase.txt", fstream::in || fstream::app);

}



int CMyBank::MainMenu()
{
	int choice;
	cout << setw(60) << "IVM Capital" << endl;
	cout << endl;
	cout << setw(50) << "MAIN MENU" << endl;
	cout << "  SIGN IN - Press 1" << endl;
	cout << "  SIGN UP - Press 2" << endl;
	cout << "  EXIT - Press 3" << endl;
	cout << "Your choice: ";
	choice = getNumbers();
	return choice;
}

int CMyBank::OptionsMenu()
{
	int OptionsChoice;
	cout << setw(60) << "IVM Capital" << endl;
	cout << endl;
	cout << setw(50) << "MENU OF OPTIONS" << endl;
	cout << "  History of operations - Press 1" << endl;
	cout << "  Account - Press 2" << endl;
	cout << "  Transitions and other operations - Press 3" << endl;
	cout << "  Credit - Press 4" << endl;
	cout << "  Back to Main Menu - Press 5" << endl;
	cout << "Your choice: ";
	OptionsChoice = getNumbers();

	return OptionsChoice;
}

bool CMyBank::CheckPassword(std::string Password)
{
	bool result;
	for (int i = 0; i < PasswordList.size(); i++)
	{
		if (Password != PasswordList[i])
		{
			result = false;
		}
		else
		{
			result = true;
			break;
		}
	}
	return result;
}

CMyBank::~CMyBank()
{
	FILE.close();
}
