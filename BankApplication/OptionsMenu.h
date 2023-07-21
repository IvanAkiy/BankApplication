#pragma once
#include "Account.h"
#include "TransactionHistory.h"
#include "PayAndTransfer.h"
#include "Deposit.h"
#include "MyForm1.h"
#include <fstream>
namespace BankApplication {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for OptionsMenu
	/// </summary>
	public ref class OptionsMenu : public System::Windows::Forms::Form
	{
	public:
		OptionsMenu(void)
		{
			InitializeComponent();
			Closed = false;
		}
		OptionsMenu(String^ money, String^ money2, String^ money3,int ID, String^ phoneNumber)
		{
			InitializeComponent();
			this->moneyForAccount = money;
			this->moneyForAccount2 = money2;
			this->moneyForAccount3 = money3;
			this->IDForAccount = ID;
			this->phoneNumber = phoneNumber;
			Closed = false;

			

		}
		void SetMoney()
		{

			String^ connString = "Data Source=DESKTOP-OE7LBBP;Initial Catalog=BankData;Integrated Security=True";
			SqlConnection sqlConn(connString);
			try
			{
				sqlConn.Open();
				String^ sqlQuery = "SELECT moneyUAN FROM clients WHERE ID = @ID;";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@ID", this->IDForAccount);
				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					int moneyforTranfer = reader->GetInt32(0);
					this->moneyForAccount = moneyforTranfer.ToString();
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error while updating money data, try again later", "DATABASE Error", MessageBoxButtons::OK);
			}
			
		}
		void SetMoney2()
		{
			String^ connString = "Data Source=DESKTOP-OE7LBBP;Initial Catalog=BankData;Integrated Security=True";
			SqlConnection sqlConn(connString);
			try
			{
				sqlConn.Open();
				String^ sqlQuery = "SELECT moneyUSD FROM clients WHERE ID = @ID;";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@ID", this->IDForAccount);
				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					int moneyforTranfer = reader->GetInt32(0);
					this->moneyForAccount2 = moneyforTranfer.ToString();
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error while updating money data, try again later", "DATABASE Error", MessageBoxButtons::OK);
			}
		}
		void SetMoney3()
		{
			String^ connString = "Data Source=DESKTOP-OE7LBBP;Initial Catalog=BankData;Integrated Security=True";
			SqlConnection sqlConn(connString);
			try
			{
				sqlConn.Open();
				String^ sqlQuery = "SELECT moneyEUR FROM clients WHERE ID = @ID;";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@ID", this->IDForAccount);
				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					int moneyforTranfer = reader->GetInt32(0);
					this->moneyForAccount3 = moneyforTranfer.ToString();
				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error while updating money data, try again later", "DATABASE Error", MessageBoxButtons::OK);
			}
		}
		bool Closed;
	private: System::Windows::Forms::Panel^ panel7;
	public:

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
		   //CSettings^ settings = gcnew CSettings();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OptionsMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;
	protected:

	private:
		
		String^ moneyForAccount;
		String^ moneyForAccount2;
		String^ moneyForAccount3;
		int IDForAccount;
		String^ phoneNumber;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
		   /// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OptionsMenu::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1386, 773);
			this->panel1->TabIndex = 0;
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel7->Controls->Add(this->pictureBox10);
			this->panel7->Controls->Add(this->button7);
			this->panel7->Controls->Add(this->button6);
			this->panel7->Controls->Add(this->button5);
			this->panel7->Controls->Add(this->panel9);
			this->panel7->Controls->Add(this->panel8);
			this->panel7->Location = System::Drawing::Point(1049, 387);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(287, 338);
			this->panel7->TabIndex = 7;
			this->panel7->Visible = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox10->Location = System::Drawing::Point(227, 78);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(26, 18);
			this->pictureBox10->TabIndex = 45;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &OptionsMenu::pictureBox10_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(151, 299);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(132, 34);
			this->button7->TabIndex = 42;
			this->button7->Text = L"Hide";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &OptionsMenu::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(3, 185);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(132, 34);
			this->button6->TabIndex = 40;
			this->button6->Text = L"Sign out";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &OptionsMenu::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(3, 125);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(132, 34);
			this->button5->TabIndex = 39;
			this->button5->Text = L"Save changes";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &OptionsMenu::button5_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel9->Controls->Add(this->pictureBox9);
			this->panel9->Controls->Add(this->textBox2);
			this->panel9->Location = System::Drawing::Point(3, 68);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(255, 38);
			this->panel9->TabIndex = 32;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox9->Location = System::Drawing::Point(224, 9);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(26, 18);
			this->pictureBox9->TabIndex = 45;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &OptionsMenu::pictureBox9_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(5, 9);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(233, 20);
			this->textBox2->TabIndex = 29;
			this->textBox2->Text = L"Repeat Password";
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->Click += gcnew System::EventHandler(this, &OptionsMenu::textBox2_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel8->Controls->Add(this->pictureBox8);
			this->panel8->Controls->Add(this->textBox1);
			this->panel8->Controls->Add(this->pictureBox7);
			this->panel8->Location = System::Drawing::Point(3, 14);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(255, 38);
			this->panel8->TabIndex = 31;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox8->Location = System::Drawing::Point(224, 10);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(26, 18);
			this->pictureBox8->TabIndex = 44;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &OptionsMenu::pictureBox8_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(5, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(207, 20);
			this->textBox1->TabIndex = 29;
			this->textBox1->Text = L"New Password";
			this->textBox1->UseSystemPasswordChar = true;
			this->textBox1->Click += gcnew System::EventHandler(this, &OptionsMenu::textBox1_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox7->Location = System::Drawing::Point(224, 10);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(26, 18);
			this->pictureBox7->TabIndex = 43;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &OptionsMenu::pictureBox7_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(1)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->panel6->Controls->Add(this->pictureBox6);
			this->panel6->Controls->Add(this->label6);
			this->panel6->Controls->Add(this->pictureBox5);
			this->panel6->Controls->Add(this->label5);
			this->panel6->Controls->Add(this->pictureBox4);
			this->panel6->Controls->Add(this->pictureBox3);
			this->panel6->Controls->Add(this->pictureBox2);
			this->panel6->Controls->Add(this->label1);
			this->panel6->Controls->Add(this->label2);
			this->panel6->Controls->Add(this->pictureBox1);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Controls->Add(this->label4);
			this->panel6->Location = System::Drawing::Point(-1, 572);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1386, 200);
			this->panel6->TabIndex = 6;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &OptionsMenu::panel6_Paint);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox6->Location = System::Drawing::Point(1338, 155);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(44, 35);
			this->pictureBox6->TabIndex = 17;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &OptionsMenu::pictureBox6_Click);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(35, 172);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(202, 24);
			this->label6->TabIndex = 16;
			this->label6->Text = L"IVM CAPITAL, since 2023\r\n";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(5, 169);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(24, 21);
			this->pictureBox5->TabIndex = 15;
			this->pictureBox5->TabStop = false;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(4, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(263, 42);
			this->label5->TabIndex = 14;
			this->label5->Text = L"License No.148 05.10.2011 issued by the National Bank of Ukraine";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(711, 49);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(44, 36);
			this->pictureBox4->TabIndex = 13;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &OptionsMenu::pictureBox4_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Location = System::Drawing::Point(621, 49);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(43, 36);
			this->pictureBox3->TabIndex = 12;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &OptionsMenu::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(536, 49);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(43, 36);
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &OptionsMenu::pictureBox2_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(974, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 33);
			this->label1->TabIndex = 6;
			this->label1->Text = L"CALL CENTER";
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(974, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(184, 36);
			this->label2->TabIndex = 7;
			this->label2->Text = L"0 800 230 100";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(452, 49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(43, 36);
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &OptionsMenu::pictureBox1_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(974, 111);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(179, 69);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Free of charge from fixed-line and mobile phones \r\non the territory of Ukraine";
			this->label3->Click += gcnew System::EventHandler(this, &OptionsMenu::label3_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(447, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(353, 33);
			this->label4->TabIndex = 9;
			this->label4->Text = L"IVM CAPITAL IN SOCIAL MEDIA\r\n";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(997, 373);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(267, 57);
			this->button4->TabIndex = 4;
			this->button4->Text = L"DEPOSITS";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &OptionsMenu::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(700, 373);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(289, 57);
			this->button3->TabIndex = 3;
			this->button3->Text = L"PAYMENTS AND TRANSFERS\r\n";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &OptionsMenu::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(405, 373);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(289, 57);
			this->button2->TabIndex = 2;
			this->button2->Text = L"CARDS AND ACCOUNTS";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &OptionsMenu::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(110, 373);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(289, 57);
			this->button1->TabIndex = 1;
			this->button1->Text = L"TRANSACTION HISTORY\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &OptionsMenu::button1_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(-1, -1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1386, 218);
			this->panel2->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel5->Location = System::Drawing::Point(986, 21);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(200, 166);
			this->panel5->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Location = System::Drawing::Point(188, 21);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(200, 166);
			this->panel4->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(496, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(392, 218);
			this->panel3->TabIndex = 0;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(555, 465);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(289, 57);
			this->button8->TabIndex = 8;
			this->button8->Text = L"CURRENCY CONVERSION\r\n";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &OptionsMenu::button8_Click);
			// 
			// OptionsMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1386, 773);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"OptionsMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OptionsMenu";
			this->panel1->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("https://www.instagram.com/?next=%2F");
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("https://twitter.com/IMytsenko18084");
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("https://www.facebook.com/profile.php?id=100024319237177");
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->SetMoney();
	TransactionHistory^ transhistory = gcnew TransactionHistory(this->IDForAccount);
	transhistory->Show();

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	//String^ connString = "Data Source=DESKTOP-OE7LBBP;Initial Catalog=BankData;Integrated Security=True";
	//SqlConnection sqlConn(connString);

	//try
	//{
	//	sqlConn.Open();
	//	String^ sqlQuery = ""
	//}
	//catch (const std::exception&)
	//{

	//}
	this->SetMoney();
	this->SetMoney2();
	this->SetMoney3();
	Account^ acn = gcnew Account(this->moneyForAccount,this->moneyForAccount2,this->moneyForAccount3,this->IDForAccount);
	acn->Show();
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->SetMoney();
	PayAndTransfer^ payAndtrans = gcnew PayAndTransfer(this->IDForAccount,this->phoneNumber,this->moneyForAccount,this->moneyForAccount2,this->moneyForAccount3);
	payAndtrans->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->SetMoney();
	Deposit^ dep = gcnew Deposit(this->IDForAccount,this->moneyForAccount);
	dep->Show();
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	button1->Enabled = false;
	button2->Enabled = false;
	button3->Enabled = false;
	button4->Enabled = false;
	panel7->Visible = true;

}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "New Password")
	{
		textBox1->Text = "";
	}
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "Repeat Password")
	{
		textBox2->Text = "";
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	   
	if (MessageBox::Show("Are you sure you want to sign out?", "IVM CAPITAL", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
	{
		this->Closed = true;
		this->~OptionsMenu();

	}

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "")
	{
		textBox1->Text = "New Password";
	}
	if (textBox2->Text == "")
	{
		textBox2->Text = "Repeat Password";
	}
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Enabled = true;
	button4->Enabled = true;
	panel7->Visible = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length == 0 || textBox2->Text->Length == 0)
	{
		MessageBox::Show("Please, enter the necessary information!", "Some fields are empty", MessageBoxButtons::OK);
		return;
	}
	else if(textBox1->Text != textBox2->Text)
	{
		MessageBox::Show("The Passwords doesn't match up", "Password Error", MessageBoxButtons::OK);
		return;
	}
	else if (textBox1->Text == "New Password" || textBox2->Text == "Repeat Password")
	{
		MessageBox::Show("Please, enter the necessary information!", "Some fields are empty", MessageBoxButtons::OK);
		return;
	}
	else
	{
		String^ password = textBox1->Text;
		String^ connString = "Data Source=DESKTOP-OE7LBBP;Initial Catalog=BankData;Integrated Security=True";
		SqlConnection sqlConn(connString);
		try
		{
			sqlConn.Open();
			String^ sqlQuery = "UPDATE clients SET password = @password WHERE ID = @ID;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@password", password);
			command.Parameters->AddWithValue("@ID", this->IDForAccount);

			command.ExecuteNonQuery();
			MessageBox::Show("The password was sucessfully changed", "IVM CAPITAL", MessageBoxButtons::OK);
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error,try again later", "DATABASE", MessageBoxButtons::OK);
		}
	}
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->UseSystemPasswordChar == false)
	{
		textBox1->UseSystemPasswordChar = true;
		pictureBox7->Visible = false;
		pictureBox8->Visible = true;
		
	}
}
private: System::Void pictureBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->UseSystemPasswordChar == true)
	{
		textBox1->UseSystemPasswordChar = false;
		pictureBox8->Visible = false;
		pictureBox7->Visible = true;
	}
}
private: System::Void pictureBox9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->UseSystemPasswordChar == false)
	{
		textBox2->UseSystemPasswordChar = true;
		pictureBox9->Visible = false;
		pictureBox10->Visible = true;
		
	}

}
private: System::Void pictureBox10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->UseSystemPasswordChar == true)
	{
		textBox2->UseSystemPasswordChar = false;
		pictureBox10->Visible = false;
		pictureBox9->Visible = true;
	}

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->SetMoney();
	this->SetMoney2();
	this->SetMoney3();
	MyForm1^ conver = gcnew MyForm1(this->moneyForAccount, this->moneyForAccount2, this->moneyForAccount3, this->IDForAccount);
	conver->Show();
	
}
};
}
