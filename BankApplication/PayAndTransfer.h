#pragma once
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
	/// Summary for PayAndTransfer
	/// </summary>
	public ref class PayAndTransfer : public System::Windows::Forms::Form
	{
	public:
		PayAndTransfer(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		PayAndTransfer(int ID, String^ PhoneNumber,String^ money1,String^ money2, String^ money3)
		{
			InitializeComponent();
			this->ID = ID;
			this->phoneNumber = PhoneNumber;
			this->moneyTransfer = money1;
			moneyTransfer2 = money2;
			moneyTransfer3 = money3;
			//TODO: Add the constructor code here
			//
		}
		int ID;
		String^ phoneNumber;
		String^ moneyTransfer;
		String^ moneyTransfer2;
		String^ moneyTransfer3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	public:
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	public:
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PayAndTransfer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private:
		void RestartForm(PayAndTransfer^ payAndTrans)
		{
			
			payAndTrans->Close();
			payAndTrans->~PayAndTransfer();
			BankApplication::PayAndTransfer^ newPayAndTrans = gcnew BankApplication::PayAndTransfer(this->ID, this->phoneNumber,this->moneyTransfer,this->moneyTransfer2,this->moneyTransfer3);
			newPayAndTrans->Show();
		}
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PayAndTransfer::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(659, 458);
			this->panel1->TabIndex = 0;
			this->panel1->Click += gcnew System::EventHandler(this, &PayAndTransfer::otherClick);
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->comboBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox2->ForeColor = System::Drawing::Color::White;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"UAN", L"USD", L"EUR" });
			this->comboBox2->Location = System::Drawing::Point(573, 114);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(63, 28);
			this->comboBox2->TabIndex = 44;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(5, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(398, 38);
			this->label1->TabIndex = 43;
			this->label1->Text = L"PAYMENTS AND TRANSFERS\r\n";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Location = System::Drawing::Point(219, 212);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(297, 38);
			this->panel4->TabIndex = 42;
			this->panel4->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(6, 9);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(233, 20);
			this->textBox2->TabIndex = 29;
			this->textBox2->Text = L"Receiver Card Number";
			this->textBox2->Visible = false;
			this->textBox2->Click += gcnew System::EventHandler(this, &PayAndTransfer::textBox2_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox5->Location = System::Drawing::Point(615, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(37, 32);
			this->pictureBox5->TabIndex = 41;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &PayAndTransfer::pictureBox5_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(159, 292);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(23, 25);
			this->pictureBox2->TabIndex = 40;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(159, 292);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(23, 25);
			this->pictureBox1->TabIndex = 39;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(12, 287);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(132, 34);
			this->button4->TabIndex = 38;
			this->button4->Text = L"Pay now";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &PayAndTransfer::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(12, 214);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(132, 34);
			this->button3->TabIndex = 36;
			this->button3->Text = L"Continue";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &PayAndTransfer::button3_Click_1);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(159, 219);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(23, 25);
			this->pictureBox3->TabIndex = 35;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(159, 219);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(23, 25);
			this->pictureBox4->TabIndex = 34;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(12, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 34);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Pay now";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &PayAndTransfer::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(523, 419);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 34);
			this->button1->TabIndex = 32;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PayAndTransfer::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->comboBox1->ForeColor = System::Drawing::Color::White;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"Transfer to cards", L"Internet or TV", L"Mobile phone payment",
					L"Donations", L"Transport", L"Other services"
			});
			this->comboBox1->Location = System::Drawing::Point(3, 114);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(240, 28);
			this->comboBox1->TabIndex = 27;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &PayAndTransfer::comboBox1_SelectedIndexChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(288, 109);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(240, 38);
			this->panel2->TabIndex = 28;
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
			this->textBox1->Size = System::Drawing::Size(233, 20);
			this->textBox1->TabIndex = 29;
			this->textBox1->Text = L"Sum of Operation";
			this->textBox1->Click += gcnew System::EventHandler(this, &PayAndTransfer::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &PayAndTransfer::textBox1_TextChanged);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(3, 433);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(212, 16);
			this->label6->TabIndex = 26;
			this->label6->Text = L"IVM CAPITAL";
			this->label6->Click += gcnew System::EventHandler(this, &PayAndTransfer::otherClick);
			// 
			// PayAndTransfer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 458);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PayAndTransfer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PayAndTransfer";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	this->~PayAndTransfer();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboBox1->Text == "Transfer to cards" || comboBox1->Text == "Internet of TV" || comboBox1->Text == "Donations")
	{
		button3->Visible = true;
		panel4->Visible = true;
		textBox2->Visible = true;
		button2->Visible = false;
	}

	if (comboBox1->Text == "Transport" || comboBox1->Text == "Other services" || comboBox1->Text == "Mobile phone payment")
	{
		button3->Visible = false;
		panel4->Visible = false;
		textBox2->Visible = false;
		button2->Visible = true;
	}



}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "Receiver Card Number")
	{
		textBox2->Text = "";
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
    	button4->Visible = true;

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Enter the proper card number of try again later", "IVM CAPITAL", MessageBoxButtons::OK);
	}
	

}
private: System::Void otherClick(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "")
	{
		textBox2->Text == "Receiver Card Number";
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		DateTime now = DateTime::Now;
		String^ typeOfOperation = comboBox1->Text;
		String^ sumOfOperation = textBox1->Text;
		String^ currencyOfOperation = comboBox2->Text;
		int sumTransfer = System::Convert::ToInt32(sumOfOperation);
		int moneyDefault;
		if (comboBox2->Text =="UAN")
		{
			 moneyDefault = System::Convert::ToInt32(this->moneyTransfer);
		}
		else if (comboBox2->Text == "USD")
		{
			 moneyDefault = System::Convert::ToInt32(this->moneyTransfer2);
		}
		else if (comboBox2->Text == "EUR") 
		{
			 moneyDefault = System::Convert::ToInt32(this->moneyTransfer3);
		}
		else
		{
			MessageBox::Show("Choose the currency of your operation", "IVM CAPITAL", MessageBoxButtons::OK);

		}
		
		if (moneyDefault < sumTransfer)
		{
			MessageBox::Show("Not enough money for this operation, top up your account", "IVM CAPITAL", MessageBoxButtons::OK);
		}
		else 
		{
			String^ receiverCardNumber;
			if (typeOfOperation == "Transfer to cards")
			{
				receiverCardNumber = textBox2->Text;
			}
			if (typeOfOperation == "Internet or TV")
			{
				receiverCardNumber = textBox2->Text;
			}
			if (typeOfOperation == "Donations")
			{
				receiverCardNumber = textBox2->Text;
			}

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
				String^ sqlQuery = "INSERT INTO transactionHistory(date, type_of_operation, sum_of_operation,currency_of_operation, receiver_card_number, sender_ID, status) VALUES" + "(@date, @type_of_operation, @sum_of_operation,@currency_of_operation, @receiver_card_number, @sender_ID, @status);";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@date", now);
				command.Parameters->AddWithValue("@type_of_operation", typeOfOperation);
				command.Parameters->AddWithValue("@sum_of_operation", sumOfOperation);
				command.Parameters->AddWithValue("@currency_of_operation", currencyOfOperation);
				command.Parameters->AddWithValue("@receiver_card_number", receiverCardNumber);
				command.Parameters->AddWithValue("@sender_ID", this->ID);
				command.Parameters->AddWithValue("@status", 1);

				command.ExecuteNonQuery();
				pictureBox2->Visible = false;
				pictureBox1->Visible = true;

				try
				{
					String^ sumOfOperation = textBox1->Text;

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
					int newMoney = moneyDefault - sumTransfer;
					String^ NewMoney = newMoney.ToString();
					if (comboBox2->Text == "UAN")
					{
						this->moneyTransfer = NewMoney;
						sqlConn.Open();
						String^ sqlQuery = "UPDATE clients SET moneyUAN = @money WHERE ID = @ID;";
						SqlCommand command(sqlQuery, % sqlConn);
						command.Parameters->AddWithValue("@money", this->moneyTransfer);
						command.Parameters->AddWithValue("@ID", this->ID);
						command.ExecuteNonQuery();
					}
					else if (comboBox2->Text == "USD")
					{
						this->moneyTransfer2 = NewMoney;
						sqlConn.Open();
						String^ sqlQuery = "UPDATE clients SET moneyUSD = @money WHERE ID = @ID;";
						SqlCommand command(sqlQuery, % sqlConn);
						command.Parameters->AddWithValue("@money", this->moneyTransfer2);
						command.Parameters->AddWithValue("@ID", this->ID);
						command.ExecuteNonQuery();
					}
					else if (comboBox2->Text == "EUR") 
					{
						this->moneyTransfer3 = NewMoney;
						sqlConn.Open();
						String^ sqlQuery = "UPDATE clients SET moneyEUR = @money WHERE ID = @ID;";
						SqlCommand command(sqlQuery, % sqlConn);
						command.Parameters->AddWithValue("@money", this->moneyTransfer3);
						command.Parameters->AddWithValue("@ID", this->ID);
						command.ExecuteNonQuery();
					}
					

					
				}
				catch (Exception^ ex)
				{
					MessageBox::Show("Error while transfering money,try again later", "IVM CAPITAL", MessageBoxButtons::OK);
				}

			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error,try again later", "IVM CAPITAL", MessageBoxButtons::OK);
				pictureBox1->Visible = false;
				pictureBox2->Visible = true;
			}
			pictureBox1->Visible = true;
		}
		}
		
	catch (Exception^ ex)
	{
		MessageBox::Show("Error,try again later", "IVM CAPITAL", MessageBoxButtons::OK);
		pictureBox2->Visible = true;
	}
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	DateTime now = DateTime::Now;
	String^ typeOfOperation = comboBox1->Text;
	String^ sumOfOperation = textBox1->Text;
	String^ currencyOfOperation = comboBox2->Text;
	int sumTransfer = System::Convert::ToInt32(sumOfOperation);
	int moneyDefault;
	if (comboBox2->Text == "UAN")
	{
		moneyDefault = System::Convert::ToInt32(this->moneyTransfer);
	}
	else if (comboBox2->Text == "USD")
	{
		moneyDefault = System::Convert::ToInt32(this->moneyTransfer2);
	}
	else if (comboBox2->Text == "EUR")
	{
		moneyDefault = System::Convert::ToInt32(this->moneyTransfer3);
	}
	else
	{
		MessageBox::Show("Choose the currency of your operation", "IVM CAPITAL", MessageBoxButtons::OK);

	}

	if (moneyDefault < sumTransfer)
	{
		MessageBox::Show("Not enough money for this operation, top up your account", "IVM CAPITAL", MessageBoxButtons::OK);
	}
	else
	{
		String^ receiverCardNumber;
		if (typeOfOperation == "Mobile phone payment")
		{
			receiverCardNumber = this->phoneNumber;
		}
		if (typeOfOperation == "Other services")
		{
			receiverCardNumber = "Unknown";
		}
		if (typeOfOperation == "Transport")
		{
			receiverCardNumber = "Unknown";
		}
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
			String^ sqlQuery = "INSERT INTO transactionHistory(date, type_of_operation, sum_of_operation,currency_of_operation, receiver_card_number, sender_ID, status) VALUES" + "(@date, @type_of_operation, @sum_of_operation,@currency_of_operation, @receiver_card_number, @sender_ID, @status);";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@date", now);
			command.Parameters->AddWithValue("@type_of_operation", typeOfOperation);
			command.Parameters->AddWithValue("@sum_of_operation", sumOfOperation);
			command.Parameters->AddWithValue("@currency_of_operation", currencyOfOperation);
			command.Parameters->AddWithValue("@receiver_card_number", receiverCardNumber);
			command.Parameters->AddWithValue("@sender_ID", this->ID);
			command.Parameters->AddWithValue("@status", 1);

			command.ExecuteNonQuery();
			pictureBox4->Visible = false;
			pictureBox3->Visible = true;

			try
			{
				String^ sumOfOperation = textBox1->Text;

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
				int newMoney = moneyDefault - sumTransfer;
				String^ NewMoney = newMoney.ToString();
				if (comboBox2->Text == "UAN")
				{
					this->moneyTransfer = NewMoney;
					sqlConn.Open();
					String^ sqlQuery = "UPDATE clients SET moneyUAN = @money WHERE ID = @ID;";
					SqlCommand command(sqlQuery, % sqlConn);
					command.Parameters->AddWithValue("@money", this->moneyTransfer);
					command.Parameters->AddWithValue("@ID", this->ID);
					command.ExecuteNonQuery();
				}
				else if (comboBox2->Text == "USD")
				{
					this->moneyTransfer2 = NewMoney;
					sqlConn.Open();
					String^ sqlQuery = "UPDATE clients SET moneyUSD = @money WHERE ID = @ID;";
					SqlCommand command(sqlQuery, % sqlConn);
					command.Parameters->AddWithValue("@money", this->moneyTransfer2);
					command.Parameters->AddWithValue("@ID", this->ID);
					command.ExecuteNonQuery();
				}
				else if (comboBox2->Text == "EUR")
				{
					this->moneyTransfer3 = NewMoney;
					sqlConn.Open();
					String^ sqlQuery = "UPDATE clients SET moneyEUR = @money WHERE ID = @ID;";
					SqlCommand command(sqlQuery, % sqlConn);
					command.Parameters->AddWithValue("@money", this->moneyTransfer3);
					command.Parameters->AddWithValue("@ID", this->ID);
					command.ExecuteNonQuery();
				}



			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error while transfering money,try again later", "IVM CAPITAL", MessageBoxButtons::OK);
			}

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error,try again later", "IVM CAPITAL", MessageBoxButtons::OK);
			pictureBox3->Visible = false;
			pictureBox4->Visible = true;
		}
	}
	

}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "Sum of Operation")
	{
		textBox1->Text = "";
	}
}

private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "" || textBox2->Text == "Receiver Card Number")
	{
		MessageBox::Show("Please, enter the receiver data", "IVM CAPITAL", MessageBoxButtons::OK);
	}
	else
	{
		button4->Visible = true;
	}
	
	

}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	RestartForm(this);
}
};
}
