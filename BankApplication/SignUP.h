#pragma once
#include "CClient.h"
#include "Account.h"
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
	/// Summary for SignUP
	/// </summary>
	public ref class SignUP : public System::Windows::Forms::Form
	{
	public:
		SignUP(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		SignUP(int id)
		{
			InitializeComponent();
			NewID = id;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignUP()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel5;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ last_name;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ first_name;

	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ month;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ day;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ card;


	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ phone;


	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ birthData;

	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::TextBox^ cvc;

	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::TextBox^ year;

	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::TextBox^ confirmPassword;

	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::TextBox^ password;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		int NewID;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignUP::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->confirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->cvc = (gcnew System::Windows::Forms::TextBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->year = (gcnew System::Windows::Forms::TextBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->month = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->day = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->card = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->phone = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->birthData = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->last_name = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->first_name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel11->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel13);
			this->panel1->Controls->Add(this->panel12);
			this->panel1->Controls->Add(this->panel11);
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Default;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel1->Location = System::Drawing::Point(388, 0);
			this->panel1->Name = L"panel1";
			this->panel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->panel1->Size = System::Drawing::Size(798, 673);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &SignUP::otherClick2);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(419, 526);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(26, 18);
			this->pictureBox2->TabIndex = 26;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &SignUP::pictureBox2_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox4->Location = System::Drawing::Point(418, 468);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(26, 18);
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &SignUP::pictureBox4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(483, 575);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 47);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SignUP::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(31, 575);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(422, 47);
			this->button1->TabIndex = 23;
			this->button1->Text = L" Sign up";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SignUP::button1_Click);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->panel13->Controls->Add(this->pictureBox3);
			this->panel13->Controls->Add(this->confirmPassword);
			this->panel13->Location = System::Drawing::Point(31, 515);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(422, 42);
			this->panel13->TabIndex = 22;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Location = System::Drawing::Point(387, 11);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(26, 18);
			this->pictureBox3->TabIndex = 27;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &SignUP::pictureBox3_Click);
			// 
			// confirmPassword
			// 
			this->confirmPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->confirmPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->confirmPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->confirmPassword->ForeColor = System::Drawing::Color::White;
			this->confirmPassword->Location = System::Drawing::Point(12, 9);
			this->confirmPassword->Name = L"confirmPassword";
			this->confirmPassword->Size = System::Drawing::Size(360, 23);
			this->confirmPassword->TabIndex = 0;
			this->confirmPassword->Text = L"Password";
			this->confirmPassword->UseSystemPasswordChar = true;
			this->confirmPassword->Click += gcnew System::EventHandler(this, &SignUP::confirmPassword_Click);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->panel12->Controls->Add(this->password);
			this->panel12->Controls->Add(this->pictureBox5);
			this->panel12->Location = System::Drawing::Point(31, 456);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(422, 42);
			this->panel12->TabIndex = 21;
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->password->ForeColor = System::Drawing::Color::White;
			this->password->Location = System::Drawing::Point(12, 7);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(360, 23);
			this->password->TabIndex = 0;
			this->password->Text = L"Password";
			this->password->UseSystemPasswordChar = true;
			this->password->Click += gcnew System::EventHandler(this, &SignUP::password_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Location = System::Drawing::Point(387, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(26, 18);
			this->pictureBox5->TabIndex = 26;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &SignUP::pictureBox5_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->panel11->Controls->Add(this->cvc);
			this->panel11->Location = System::Drawing::Point(373, 396);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(65, 42);
			this->panel11->TabIndex = 20;
			// 
			// cvc
			// 
			this->cvc->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->cvc->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->cvc->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->cvc->ForeColor = System::Drawing::Color::White;
			this->cvc->Location = System::Drawing::Point(12, 9);
			this->cvc->Name = L"cvc";
			this->cvc->Size = System::Drawing::Size(50, 23);
			this->cvc->TabIndex = 0;
			this->cvc->Text = L"CVC";
			this->cvc->Click += gcnew System::EventHandler(this, &SignUP::cvc_Click);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->panel10->Controls->Add(this->year);
			this->panel10->Location = System::Drawing::Point(253, 396);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(98, 42);
			this->panel10->TabIndex = 19;
			// 
			// year
			// 
			this->year->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->year->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->year->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->year->ForeColor = System::Drawing::Color::White;
			this->year->Location = System::Drawing::Point(12, 9);
			this->year->Name = L"year";
			this->year->Size = System::Drawing::Size(83, 23);
			this->year->TabIndex = 0;
			this->year->Text = L"Year";
			this->year->Click += gcnew System::EventHandler(this, &SignUP::year_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->panel9->Controls->Add(this->month);
			this->panel9->Location = System::Drawing::Point(126, 396);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(98, 42);
			this->panel9->TabIndex = 18;
			this->panel9->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SignUP::panel9_Paint);
			// 
			// month
			// 
			this->month->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->month->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->month->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->month->ForeColor = System::Drawing::Color::White;
			this->month->Location = System::Drawing::Point(12, 9);
			this->month->Name = L"month";
			this->month->Size = System::Drawing::Size(83, 23);
			this->month->TabIndex = 0;
			this->month->Text = L"Month";
			this->month->Click += gcnew System::EventHandler(this, &SignUP::month_Click);
			this->month->TextChanged += gcnew System::EventHandler(this, &SignUP::textBox7_TextChanged);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->panel8->Controls->Add(this->day);
			this->panel8->Location = System::Drawing::Point(31, 396);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(65, 42);
			this->panel8->TabIndex = 17;
			// 
			// day
			// 
			this->day->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->day->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->day->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->day->ForeColor = System::Drawing::Color::White;
			this->day->Location = System::Drawing::Point(12, 9);
			this->day->Name = L"day";
			this->day->Size = System::Drawing::Size(50, 23);
			this->day->TabIndex = 0;
			this->day->Text = L"Day";
			this->day->Click += gcnew System::EventHandler(this, &SignUP::day_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->panel7->Controls->Add(this->card);
			this->panel7->Location = System::Drawing::Point(31, 331);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(422, 42);
			this->panel7->TabIndex = 16;
			// 
			// card
			// 
			this->card->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->card->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->card->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->card->ForeColor = System::Drawing::Color::White;
			this->card->Location = System::Drawing::Point(12, 9);
			this->card->Name = L"card";
			this->card->Size = System::Drawing::Size(395, 23);
			this->card->TabIndex = 0;
			this->card->Text = L"CardNumber";
			this->card->Click += gcnew System::EventHandler(this, &SignUP::card_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->panel6->Controls->Add(this->phone);
			this->panel6->Location = System::Drawing::Point(31, 273);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(422, 42);
			this->panel6->TabIndex = 15;
			// 
			// phone
			// 
			this->phone->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->phone->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->phone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->phone->ForeColor = System::Drawing::Color::White;
			this->phone->Location = System::Drawing::Point(12, 9);
			this->phone->Name = L"phone";
			this->phone->Size = System::Drawing::Size(395, 23);
			this->phone->TabIndex = 0;
			this->phone->Text = L"PhoneNumber";
			this->phone->Click += gcnew System::EventHandler(this, &SignUP::phone_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::Transparent;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::Transparent;
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::Color::Transparent;
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::Color::Transparent;
			this->dateTimePicker1->CalendarTrailingForeColor = System::Drawing::Color::Transparent;
			this->dateTimePicker1->Location = System::Drawing::Point(459, 223);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(19, 25);
			this->dateTimePicker1->TabIndex = 14;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &SignUP::dateTimePicker1_ValueChanged);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->panel5->Controls->Add(this->birthData);
			this->panel5->Location = System::Drawing::Point(31, 216);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(422, 42);
			this->panel5->TabIndex = 13;
			// 
			// birthData
			// 
			this->birthData->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->birthData->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->birthData->Enabled = false;
			this->birthData->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->birthData->ForeColor = System::Drawing::Color::White;
			this->birthData->Location = System::Drawing::Point(12, 9);
			this->birthData->Name = L"birthData";
			this->birthData->Size = System::Drawing::Size(395, 23);
			this->birthData->TabIndex = 0;
			this->birthData->Text = L"DD/MM/YY";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->panel4->Controls->Add(this->last_name);
			this->panel4->Location = System::Drawing::Point(31, 159);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(422, 42);
			this->panel4->TabIndex = 12;
			// 
			// last_name
			// 
			this->last_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->last_name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->last_name->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->last_name->ForeColor = System::Drawing::Color::White;
			this->last_name->Location = System::Drawing::Point(12, 9);
			this->last_name->Name = L"last_name";
			this->last_name->Size = System::Drawing::Size(395, 23);
			this->last_name->TabIndex = 0;
			this->last_name->Text = L"LastName";
			this->last_name->Click += gcnew System::EventHandler(this, &SignUP::last_name_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->panel3->Controls->Add(this->first_name);
			this->panel3->Location = System::Drawing::Point(31, 102);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(422, 42);
			this->panel3->TabIndex = 11;
			// 
			// first_name
			// 
			this->first_name->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2)), static_cast<System::Int32>(static_cast<System::Byte>(106)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->first_name->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->first_name->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->first_name->ForeColor = System::Drawing::Color::White;
			this->first_name->Location = System::Drawing::Point(12, 9);
			this->first_name->Name = L"first_name";
			this->first_name->Size = System::Drawing::Size(395, 23);
			this->first_name->TabIndex = 0;
			this->first_name->Text = L"FirstName";
			this->first_name->Click += gcnew System::EventHandler(this, &SignUP::first_name_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(36, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 67);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign up";
			this->label1->Click += gcnew System::EventHandler(this, &SignUP::otherClick);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(390, 673);
			this->panel2->TabIndex = 1;
			this->panel2->Click += gcnew System::EventHandler(this, &SignUP::otherClick);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(12, 533);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(356, 124);
			this->label4->TabIndex = 8;
			this->label4->Text = resources->GetString(L"label4.Text");
			this->label4->Click += gcnew System::EventHandler(this, &SignUP::otherClick);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 500);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 31);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Useful information:";
			this->label3->Click += gcnew System::EventHandler(this, &SignUP::otherClick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(76, 241);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 32);
			this->label2->TabIndex = 6;
			this->label2->Text = L"IVM CAPITAL";
			this->label2->Click += gcnew System::EventHandler(this, &SignUP::otherClick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(62, 64);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(229, 174);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &SignUP::otherClick);
			// 
			// SignUP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1186, 673);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SignUP";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Signing up";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel9_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close(); // Кнопка Cancel в Sign up формі
}
	   public: CClient^ client;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ firstName = first_name->Text;
	String^ lastName = last_name->Text;
	birthData->Text = dateTimePicker1->Value.ToString();
	String^ phoneNumber = phone->Text;
	String^ cardNumber = card->Text;
	String^ Day = day->Text;
	String^ Month = month->Text;
	String^ Year = year->Text;
	String^ CVC = cvc->Text;
	String^ Password = password->Text;
	String^ Password2 = confirmPassword->Text;
	int dayDatePicker = dateTimePicker1->Value.Day;
	int monthDatePicker = dateTimePicker1->Value.Month;
	int yearDatePicker = dateTimePicker1->Value.Year;
	int ageDatePicker = 2023 - yearDatePicker;
	int money2 = 0;

	if (firstName->Length == 0 || lastName->Length == 0 || birthData->Text->Length == 0 || phoneNumber->Length == 0
		|| cardNumber->Length == 0 || Day->Length == 0 || Month->Length == 0 || Year->Length == 0 || Password->Length == 0 || Password2->Length == 0 || CVC->Length == 0)
	{
		MessageBox::Show("Please, enter the necessary information!", "Some fields are empty", MessageBoxButtons::OK);
		return;
	}

	if (String::Compare(Password, Password2) != 0)
	{
		MessageBox::Show("The Passwords doesn't match up", "Password Error", MessageBoxButtons::OK);
		return;
	}
	else
	{
		std::ofstream file("Config.txt");
		std::string content;
		std::string con;
		content.append("Data Source=");
		if (file) {
			file << con;
			content.append(con);
			file.close();
		}
		content.append(";Initial Catalog=BankData;Integrated Security=True");
		String^ connString = "Data Source=DESKTOP-OE7LBBP;Initial Catalog=BankData;Integrated Security=True";
		
		SqlConnection sqlConn(connString);
		try
		{
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO clients" + "(first_name, last_name, age,phoneNumber, DayOfBirth, monthOfBirth, yearOfBirth, cardNumber, cardExpirationDay, cardExpirationMonth, cardExpirationYear, CVC, password,moneyUAN,moneyUSD,moneyEUR) VALUES" +
				"(@first_name, @last_name, @age,@phoneNumber, @DayOfBirth, @monthOfBirth, @yearOfBirth, @cardNumber, @cardExpirationDay, @cardExpirationMonth, @cardExpirationYear, @CVC, @password, @moneyUAN,@moneyUSD,@moneyEUR);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@first_name", firstName);
			command.Parameters->AddWithValue("@last_name", lastName);
			command.Parameters->AddWithValue("@age", ageDatePicker);
			command.Parameters->AddWithValue("@phoneNumber", phoneNumber);
			command.Parameters->AddWithValue("@DayOfBirth", dayDatePicker);
			command.Parameters->AddWithValue("@monthOfBirth", monthDatePicker);
			command.Parameters->AddWithValue("@yearOfBirth", yearDatePicker);
			command.Parameters->AddWithValue("@cardNumber", cardNumber);
			command.Parameters->AddWithValue("@cardExpirationDay", Day);
			command.Parameters->AddWithValue("@cardExpirationMonth", Month);
			command.Parameters->AddWithValue("@cardExpirationYear", Year);
			command.Parameters->AddWithValue("@CVC", CVC);;
			command.Parameters->AddWithValue("@password", Password);
			command.Parameters->AddWithValue("@moneyUAN", money2);
			command.Parameters->AddWithValue("@moneyUSD", money2);
			command.Parameters->AddWithValue("@moneyEUR", money2);


			command.ExecuteNonQuery();

			client = gcnew CClient();
			client->FirstName = firstName;
			client->LastName = lastName;
			client->age = ageDatePicker;
			client->PhoneNumber = phoneNumber;
			client->day = dayDatePicker;
			client->month = monthDatePicker.ToString();
			client->year = yearDatePicker;
			client->password = Password;
			client->cd->cardNumber = cardNumber;
			client->cd->day = System::Convert::ToInt32(Day);
			client->cd->month = System::Convert::ToInt32(Month);
			client->cd->year = System::Convert::ToInt32(Year);
			client->cd->CVC = System::Convert::ToInt32(CVC);
			client->moneyUAN = money2;
			client->moneyUSD = money2;
			client->moneyEUR = money2;

			//Під'єднання до бази даних та створення персональної таблиці для історії операцій
		/*	try
			{
				String^ connString = "Data Source=DESKTOP-OE7LBBP;Initial Catalog=BankData;Integrated Security=True";
				SqlConnection sqlConn2(connString);
				sqlConn2.Open();

				String^ sqlQurery2 = "CREATE TABLE transactionHistory" + NewID + "(date DATE NOT NULL, type_of_operation VARCHAR(50), sum_of_operation INT NOT NULL, receiver_card_number VARCHAR(19) NOT NULL ,status BIT NOT NULL DEFAULT 0);";

				SqlCommand^ command2 = gcnew SqlCommand(sqlQurery2, % sqlConn2);

				command2->ExecuteNonQuery();
				this->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error while creating TABLE", "DATABASE", MessageBoxButtons::OK);
				this->Close();
			}*/

			MessageBox::Show("Your account has been successfully created, try to sign in", "IVM CAPITAL", MessageBoxButtons::OK);

			this->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Happened an error while creating account, try again later", "IVM CAPITAL", MessageBoxButtons::OK);
		}

	}


	

	
	





}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	birthData->Text = dateTimePicker1->Value.ToString("dd-MM-yyyy");
}
private: System::Void first_name_Click(System::Object^ sender, System::EventArgs^ e) {
	if (first_name->Text == "FirstName")
	{
		first_name->Text = "";
	}
}
private: System::Void last_name_Click(System::Object^ sender, System::EventArgs^ e) {
	if (last_name->Text == "LastName")
	{
		last_name->Text = "";
	}
}
private: System::Void phone_Click(System::Object^ sender, System::EventArgs^ e) {
	if (phone->Text == "PhoneNumber")
	{
		phone->Text = "";
	}
}
private: System::Void card_Click(System::Object^ sender, System::EventArgs^ e) {
	if (card->Text == "CardNumber")
	{
		card->Text = "";
	}
}
private: System::Void day_Click(System::Object^ sender, System::EventArgs^ e) {
	if (day->Text == "Day")
	{
		day->Text = "";
	}
}
private: System::Void month_Click(System::Object^ sender, System::EventArgs^ e) {
	if (month->Text == "Month")
	{
		month->Text = "";
	}
}
private: System::Void year_Click(System::Object^ sender, System::EventArgs^ e) {
	if (year->Text == "Year")
	{
		year->Text = "";
	}
}
private: System::Void cvc_Click(System::Object^ sender, System::EventArgs^ e) {
	if (cvc->Text == "CVC")
	{
		cvc->Text = "";
	}
}
private: System::Void password_Click(System::Object^ sender, System::EventArgs^ e) {
	if (password->Text == "Password")
	{
		password->Text = "";
	}
}
private: System::Void confirmPassword_Click(System::Object^ sender, System::EventArgs^ e) {
	if (confirmPassword->Text == "Password")
	{
		confirmPassword->Text = "";
	}
}
private: System::Void otherClick(System::Object^ sender, System::EventArgs^ e) {
	if (first_name->Text == "")
	{
		first_name->Text = "FirstName";
	}
	if (last_name->Text == "")
	{
		last_name->Text = "LastName";
	}
	if (phone->Text == "")
	{
		phone->Text = "PhoneNumber";
	}
	if (card->Text == "")
	{
		card->Text = "CardNumber";
	}
	if (day->Text == "")
	{
		day->Text = "Day";
	}
	if (month->Text == "")
	{
		month->Text = "Month";
	}
	if (year->Text == "")
	{
		year->Text = "Year";
	}
	if (cvc->Text == "")
	{
		cvc->Text = "CVC";
	}
	if (password->Text == "")
	{
		password->Text = "Password";
	}
	if (confirmPassword->Text == "")
	{
		confirmPassword->Text = "Password";
	}
}
private: System::Void otherClick2(System::Object^ sender, System::EventArgs^ e) {
	if (first_name->Text == "")
	{
		first_name->Text = "FirstName";
	}
	if (last_name->Text == "")
	{
		last_name->Text = "LastName";
	}
	if (phone->Text == "")
	{
		phone->Text = "PhoneNumber";
	}
	if (card->Text == "")
	{
		card->Text = "CardNumber";
	}
	if (day->Text == "")
	{
		day->Text = "Day";
	}
	if (month->Text == "")
	{
		month->Text = "Month";
	}
	if (year->Text == "")
	{
		year->Text = "Year";
	}
	if (cvc->Text == "")
	{
		cvc->Text = "CVC";
	}
	if (password->Text == "")
	{
		password->Text = "Password";
	}
	if (confirmPassword->Text == "")
	{
		confirmPassword->Text = "Password";
	}
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (password->UseSystemPasswordChar == true)
	{
		password->UseSystemPasswordChar = false;
		pictureBox5->Visible = true;
		pictureBox4->Visible = false;

	}
	

}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (password->UseSystemPasswordChar == false)
	{
		password->UseSystemPasswordChar = true;
		pictureBox5->Visible = false;
		pictureBox4->Visible = true;

	}
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (confirmPassword->UseSystemPasswordChar == true)
	{
		confirmPassword->UseSystemPasswordChar = false;
		pictureBox3->Visible = true;
		pictureBox2->Visible = false;

	}
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (confirmPassword->UseSystemPasswordChar == false)
	{
		confirmPassword->UseSystemPasswordChar = true;
		pictureBox3->Visible = false;
		pictureBox2->Visible = true;

	}
}
};
}
