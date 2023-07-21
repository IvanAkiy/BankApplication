#include "MyForm.h"
#include "OptionsMenu.h"
#include "Account.h"
#include "CAdministrator.h"
#include "Administrator.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(cli::array<String^>^ args)
{
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    
    try
    {
        while (true)
        {
            BankApplication::MyForm form;   
            form.ShowDialog();

            CClient^ client2 = form.client;
            CAdministrator^ admin2 = form.admin;

            if (client2 != nullptr)
            {
                BankApplication::OptionsMenu optmenu(client2->moneyUAN.ToString(), client2->moneyUSD.ToString(), client2->moneyEUR.ToString(),form.IDforSIGNUP, client2->PhoneNumber);
                form.~MyForm();
                client2 = nullptr;
                optmenu.ShowDialog();
                
            }
            else if (admin2 != nullptr)
            {
                BankApplication::Administrator adminopt;
                form.~MyForm();
                admin2 = nullptr;
                adminopt.ShowDialog();
            }
            else
            {
                MessageBox::Show("Authentication canceled", "IVM CAPITAL", MessageBoxButtons::OK);
                break;

            }
        }
       
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Authentication canceled", "IVM CAPITAL", MessageBoxButtons::OK);
    }
    return 0;
}
