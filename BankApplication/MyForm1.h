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
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm1(String^ money, String^ money2, String^ money3, int ID)
		{
			InitializeComponent();
			moneyforRestart = money;
			moneyforRestart2 = money2;
			moneyforRestart3 = money3;
			this->ID = ID;
		}
		void RestartForm(MyForm1^ acnt)
		{
			acnt->Close();
			acnt->~MyForm1();
			BankApplication::MyForm1^ newConver = gcnew BankApplication::MyForm1(moneyforRestart, moneyforRestart2, moneyforRestart3, this->ID);
			newConver->Show();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ Convert;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	protected:

	private:
		String^ moneyforRestart;
		String^ moneyforRestart2;
		String^ moneyforRestart3;
		int ID;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
		   /// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

#pragma region Windows Form Designer generated code
	/*public: Currency^ cur = gcnew Currency("https://api.privatbank.ua/p24api/pubinfo?exchange&coursid=5");*/
		  
		  
	
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Convert = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(287, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Currency Conversion";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::other_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel9->Controls->Add(this->textBox5);
			this->panel9->Location = System::Drawing::Point(19, 213);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(292, 51);
			this->panel9->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(12, 12);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(268, 23);
			this->textBox5->TabIndex = 0;
			this->textBox5->Text = L"Your Sum";
			this->textBox5->Click += gcnew System::EventHandler(this, &MyForm1::textBox5_Click);
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
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"UAN", L"USD", L"EUR" });
			this->comboBox1->Location = System::Drawing::Point(363, 146);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(246, 28);
			this->comboBox1->TabIndex = 28;
			// 
			// Convert
			// 
			this->Convert->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->Convert->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Convert->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Convert->FlatAppearance->BorderSize = 0;
			this->Convert->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Convert->ForeColor = System::Drawing::Color::White;
			this->Convert->Location = System::Drawing::Point(19, 392);
			this->Convert->Name = L"Convert";
			this->Convert->Size = System::Drawing::Size(233, 41);
			this->Convert->TabIndex = 29;
			this->Convert->Text = L"Convert";
			this->Convert->UseVisualStyleBackColor = false;
			this->Convert->Visible = false;
			this->Convert->Click += gcnew System::EventHandler(this, &MyForm1::Convert_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(19, 300);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(233, 40);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Continue";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(287, 306);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 28);
			this->label2->TabIndex = 31;
			this->label2->Text = L"Result:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::other_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(382, 306);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 28);
			this->label3->TabIndex = 32;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(659, 463);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 44);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(274, 400);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(23, 25);
			this->pictureBox4->TabIndex = 35;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(274, 400);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(23, 25);
			this->pictureBox3->TabIndex = 34;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(744, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(37, 32);
			this->pictureBox2->TabIndex = 36;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox2_Click);
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
			this->comboBox2->Location = System::Drawing::Point(19, 146);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(246, 28);
			this->comboBox2->TabIndex = 37;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(298, 143);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(38, 33);
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm1::other_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(793, 519);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Convert);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Convert_Click(System::Object^ sender, System::EventArgs^ e) {
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
			if (comboBox2->Text == "UAN")
			{
				sqlConn.Open();
				int sumForCon = System::Convert::ToInt32(textBox5->Text);
				int currentMoney = System::Convert::ToInt32(moneyforRestart);
				if (currentMoney < sumForCon)
				{
					MessageBox::Show("Not enough money for this operation", "IVM CAPITAL", MessageBoxButtons::OK);
				}
				else
				{
					if (comboBox1->Text == "USD")
					{
						String^ sqlQuery = "UPDATE clients SET moneyUSD = @money WHERE ID = @ID;";
						int result = sumForCon/37;
						int moneyRestart = System::Convert::ToInt32(this->moneyforRestart2) + result;
						this->moneyforRestart2 = moneyRestart.ToString();
						SqlCommand command(sqlQuery, % sqlConn);
						command.Parameters->AddWithValue("@money", this->moneyforRestart2);
						command.Parameters->AddWithValue("@ID", this->ID);
						command.ExecuteNonQuery();
						sqlConn.Close();
					}
					else if (comboBox1->Text == "EUR")
					{
						String^ sqlQuery = "UPDATE clients SET moneyEUR = @money WHERE ID = @ID;";
						int result = sumForCon * 40;
						int moneyRestart = System::Convert::ToInt32(this->moneyforRestart3) + result;
						this->moneyforRestart3 = moneyRestart.ToString();
						SqlCommand command(sqlQuery, % sqlConn);
						command.Parameters->AddWithValue("@money", this->moneyforRestart3);
						command.Parameters->AddWithValue("@ID", this->ID);
						command.ExecuteNonQuery();
						sqlConn.Close();
					}
					sqlConn.Open();
					String^ sqlQuery = "UPDATE clients SET moneyUAN = @money WHERE ID = @ID;";
					int NewMoneyUAN = currentMoney - sumForCon;
					this->moneyforRestart = NewMoneyUAN.ToString();
					SqlCommand command(sqlQuery, % sqlConn);
					command.Parameters->AddWithValue("@money", this->moneyforRestart);
					command.Parameters->AddWithValue("@ID", this->ID);
					command.ExecuteNonQuery();
					sqlConn.Close();
					pictureBox3->Visible = true;
				}
			}
			else if (comboBox2->Text == "USD")
			{
				sqlConn.Open();
				int sumForCon = System::Convert::ToInt32(textBox5->Text);
				int currentMoney = System::Convert::ToInt32(moneyforRestart2);
				if (currentMoney < sumForCon)
				{
					MessageBox::Show("Not enough money for this operation", "IVM CAPITAL", MessageBoxButtons::OK);
				}
				else
				{
					if (comboBox1->Text == "UAN")
					{
						String^ sqlQuery = "UPDATE clients SET moneyUAN = @money WHERE ID = @ID;";
						int result = sumForCon * 37;
						int moneyRestart = System::Convert::ToInt32(this->moneyforRestart) + result;
						this->moneyforRestart = moneyRestart.ToString();
						SqlCommand command(sqlQuery, % sqlConn);
						command.Parameters->AddWithValue("@money", this->moneyforRestart);
						command.Parameters->AddWithValue("@ID", this->ID);
						command.ExecuteNonQuery();
						sqlConn.Close();
					}
					else if (comboBox1->Text == "EUR")
					{
						String^ sqlQuery = "UPDATE clients SET moneyEUR = @money WHERE ID = @ID;";
						int result = sumForCon * 0.93;
						int moneyRestart = System::Convert::ToInt32(this->moneyforRestart3) + result;
						this->moneyforRestart3 = moneyRestart.ToString();
						SqlCommand command(sqlQuery, % sqlConn);
						command.Parameters->AddWithValue("@money", this->moneyforRestart3);
						command.Parameters->AddWithValue("@ID", this->ID);
						command.ExecuteNonQuery();
						sqlConn.Close();
					}
					sqlConn.Open();
					String^ sqlQuery = "UPDATE clients SET moneyUSD = @money WHERE ID = @ID;";
					int NewMoneyUAN = currentMoney - sumForCon;
					this->moneyforRestart2 = NewMoneyUAN.ToString();
					SqlCommand command(sqlQuery, % sqlConn);
					command.Parameters->AddWithValue("@money", this->moneyforRestart2);
					command.Parameters->AddWithValue("@ID", this->ID);
					command.ExecuteNonQuery();
					sqlConn.Close();
					pictureBox3->Visible = true;
				}
			}
			else if (comboBox2->Text == "EUR")
			{
				sqlConn.Open();
				int sumForCon = System::Convert::ToInt32(textBox5->Text);
				int currentMoney = System::Convert::ToInt32(moneyforRestart3);
				if (currentMoney < sumForCon)
				{
					MessageBox::Show("Not enough money for this operation", "IVM CAPITAL", MessageBoxButtons::OK);
				}
				else
				{
					if (comboBox1->Text == "UAN")
					{
						String^ sqlQuery = "UPDATE clients SET moneyUAN = @money WHERE ID = @ID;";
						int result = sumForCon * 40;
						int moneyRestart = System::Convert::ToInt32(this->moneyforRestart) + result;
						this->moneyforRestart = moneyRestart.ToString();
						SqlCommand command(sqlQuery, % sqlConn);
						command.Parameters->AddWithValue("@money", this->moneyforRestart);
						command.Parameters->AddWithValue("@ID", this->ID);
						command.ExecuteNonQuery();
						sqlConn.Close();
					}
					else if (comboBox1->Text == "USD")
					{
						String^ sqlQuery = "UPDATE clients SET moneyUSD = @money WHERE ID = @ID;";
						int result = sumForCon * 1.08;
						int moneyRestart = System::Convert::ToInt32(this->moneyforRestart2) + result;
						this->moneyforRestart2 = moneyRestart.ToString();
						SqlCommand command(sqlQuery, % sqlConn);
						command.Parameters->AddWithValue("@money", this->moneyforRestart2);
						command.Parameters->AddWithValue("@ID", this->ID);
						command.ExecuteNonQuery();
						sqlConn.Close();
					}
					sqlConn.Open();
					String^ sqlQuery = "UPDATE clients SET moneyEUR = @money WHERE ID = @ID;";
					int NewMoneyUAN = currentMoney - sumForCon;
					this->moneyforRestart3 = NewMoneyUAN.ToString();
					SqlCommand command(sqlQuery, % sqlConn);
					command.Parameters->AddWithValue("@money", this->moneyforRestart3);
					command.Parameters->AddWithValue("@ID", this->ID);
					command.ExecuteNonQuery();
					sqlConn.Close();
					pictureBox3->Visible = true;
				}
			}
			

		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message, "DATABASE Error", MessageBoxButtons::OK);
			pictureBox4->Visible = true;
		}


	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Sum = textBox5->Text;
	int sumForCon = System::Convert::ToInt32(Sum);
	int result;
	if (comboBox2->Text == "UAN")
	{

		if (comboBox1->Text == "USD")
		{
			result = sumForCon/37;
			label3->Text = result.ToString();
		}
		else if (comboBox1->Text == "EUR")
		{
			result = sumForCon/40;
			label3->Text = result.ToString();
		}
		else if (comboBox1->Text == "UAN")
		{
			MessageBox::Show("You cannot convert the same currencies", "IVM CAPITAL", MessageBoxButtons::OK);
		}

	}
	else if (comboBox2->Text == "USD")
	{
		if (comboBox1->Text == "UAN")
		{
			result = sumForCon * 37;
			label3->Text = result.ToString();
		}
		else if (comboBox1->Text == "EUR")
		{
			result = sumForCon * 0.93;
			label3->Text = result.ToString();
		}
		else if (comboBox1->Text == "USD")
		{
			MessageBox::Show("You cannot convert the same currencies", "IVM CAPITAL", MessageBoxButtons::OK);
		}
	}
	else if (comboBox2->Text == "EUR")
	{
		if (comboBox1->Text == "USD")
		{
			result = sumForCon * 1.08;
			label3->Text = result.ToString();
		}
		else if (comboBox1->Text == "UAN")
		{
			result = sumForCon * 40;
			label3->Text = result.ToString();
		}
		else if (comboBox1->Text == "EUR")
		{
			MessageBox::Show("You cannot convert the same currencies", "IVM CAPITAL", MessageBoxButtons::OK);
		}
	}
	
	Convert->Visible = true;
	
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	RestartForm(this);
}
private: System::Void textBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5->Text == "Your Sum")
	{
		textBox5->Text = "";
	}
}
private: System::Void other_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5->Text == "")
	{
		textBox5->Text = "Your Sum";
	}
}
};
}
