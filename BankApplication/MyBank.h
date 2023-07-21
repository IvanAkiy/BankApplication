#pragma once
#pragma once
#include <iostream>
#include <cstring>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class CMyBank
{
public:
    fstream FILE;
    vector<string> PasswordList;
    CMyBank();
    int MainMenu();
    int OptionsMenu();
    bool CheckPassword(string Password);
    ~CMyBank();

};

int getNumbers();
