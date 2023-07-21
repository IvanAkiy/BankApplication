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
	/// Summary for Administrator
	/// </summary>
	public ref class Administrator : public System::Windows::Forms::Form
	{
	public:
		SqlConnection^ sqlConn = gcnew SqlConnection();
		SqlCommand^ command = gcnew SqlCommand();
		SqlDataAdapter^ sqlAdapter = gcnew SqlDataAdapter();
		DataTable^ table = gcnew DataTable();
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::TextBox^ textSearch;
	public:
		SqlDataReader^ reader;
		Administrator(void)
		{
			InitializeComponent();
			ClientsDB();
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Administrator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
	private:System::Void ClientsDB()
	{
		sqlConn->ConnectionString = "Data Source=DESKTOP-OE7LBBP;Initial Catalog=BankData;Integrated Security=True";
		sqlConn->Open();
		command->Connection = sqlConn;
		command->CommandText = "SELECT * FROM clients;";	
		reader = command->ExecuteReader();
		table->Load(reader);
		reader->Close();
		sqlConn->Close();
		dataGridView1->DataSource = table;
	}
	private:System::Void RefreshDB()
	{
		try
		{
			sqlConn->ConnectionString = "Data Source=DESKTOP-OE7LBBP;Initial Catalog=BankData;Integrated Security=True";
			command->Connection = sqlConn;
			SqlDataAdapter^ sqlAdapter = gcnew SqlDataAdapter("SELECT * FROM clients;", sqlConn);
			DataTable^ table = gcnew DataTable();
			sqlAdapter->Fill(table);
			dataGridView1->DataSource = table;

		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Error while connection to database", "DATABASE Error", MessageBoxButtons::OK);
		}
	}
    
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Administrator::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->textSearch = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel10);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel11);
			this->panel1->Controls->Add(this->panel12);
			this->panel1->Controls->Add(this->panel13);
			this->panel1->Controls->Add(this->panel14);
			this->panel1->Controls->Add(this->panel15);
			this->panel1->Controls->Add(this->panel16);
			this->panel1->Controls->Add(this->panel17);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1439, 336);
			this->panel1->TabIndex = 0;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel10->Controls->Add(this->textSearch);
			this->panel10->Location = System::Drawing::Point(1088, 222);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(328, 56);
			this->panel10->TabIndex = 28;
			// 
			// textSearch
			// 
			this->textSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textSearch->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textSearch->ForeColor = System::Drawing::Color::White;
			this->textSearch->Location = System::Drawing::Point(12, 14);
			this->textSearch->Name = L"textSearch";
			this->textSearch->Size = System::Drawing::Size(301, 25);
			this->textSearch->TabIndex = 0;
			this->textSearch->Text = L"Search";
			this->textSearch->Click += gcnew System::EventHandler(this, &Administrator::textSearch_Click);
			this->textSearch->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Administrator::textSearch_KeyPress);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(841, 285);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(193, 43);
			this->button6->TabIndex = 27;
			this->button6->Text = L"Refresh";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Administrator::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(633, 285);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(193, 43);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Reset";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Administrator::button5_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(425, 285);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(193, 43);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Administrator::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(216, 285);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(193, 43);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Update";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Administrator::button4_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(219)), static_cast<System::Int32>(static_cast<System::Byte>(185)),
				static_cast<System::Int32>(static_cast<System::Byte>(13)));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1088, 285);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(328, 43);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Search";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Administrator::button2_Click);
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
			this->button1->Location = System::Drawing::Point(12, 285);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 43);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Add New";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Administrator::button1_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel11->Controls->Add(this->textBox10);
			this->panel11->Location = System::Drawing::Point(1088, 146);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(328, 56);
			this->panel11->TabIndex = 21;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox10->ForeColor = System::Drawing::Color::White;
			this->textBox10->Location = System::Drawing::Point(12, 14);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(301, 25);
			this->textBox10->TabIndex = 0;
			this->textBox10->Text = L"Money";
			this->textBox10->Click += gcnew System::EventHandler(this, &Administrator::textBox10_Click);
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel12->Controls->Add(this->textBox11);
			this->panel12->Location = System::Drawing::Point(1088, 84);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(328, 56);
			this->panel12->TabIndex = 20;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox11->ForeColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(12, 14);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(301, 25);
			this->textBox11->TabIndex = 0;
			this->textBox11->Text = L"Password";
			this->textBox11->Click += gcnew System::EventHandler(this, &Administrator::textBox11_Click);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel13->Controls->Add(this->textBox12);
			this->panel13->Location = System::Drawing::Point(1088, 22);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(328, 56);
			this->panel13->TabIndex = 19;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox12->ForeColor = System::Drawing::Color::White;
			this->textBox12->Location = System::Drawing::Point(12, 14);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(301, 25);
			this->textBox12->TabIndex = 0;
			this->textBox12->Text = L"CVC";
			this->textBox12->Click += gcnew System::EventHandler(this, &Administrator::textBox12_Click);
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel14->Controls->Add(this->textBox13);
			this->panel14->Location = System::Drawing::Point(734, 208);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(328, 56);
			this->panel14->TabIndex = 18;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox13->ForeColor = System::Drawing::Color::White;
			this->textBox13->Location = System::Drawing::Point(12, 14);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(301, 25);
			this->textBox13->TabIndex = 0;
			this->textBox13->Text = L"Expiration Year";
			this->textBox13->Click += gcnew System::EventHandler(this, &Administrator::textBox13_Click);
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel15->Controls->Add(this->textBox14);
			this->panel15->Location = System::Drawing::Point(734, 146);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(328, 56);
			this->panel15->TabIndex = 17;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox14->ForeColor = System::Drawing::Color::White;
			this->textBox14->Location = System::Drawing::Point(12, 14);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(301, 25);
			this->textBox14->TabIndex = 0;
			this->textBox14->Text = L"Expiration Month";
			this->textBox14->Click += gcnew System::EventHandler(this, &Administrator::textBox14_Click);
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel16->Controls->Add(this->textBox15);
			this->panel16->Location = System::Drawing::Point(734, 84);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(328, 56);
			this->panel16->TabIndex = 16;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox15->ForeColor = System::Drawing::Color::White;
			this->textBox15->Location = System::Drawing::Point(12, 14);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(301, 25);
			this->textBox15->TabIndex = 0;
			this->textBox15->Text = L"Expiration Day";
			this->textBox15->Click += gcnew System::EventHandler(this, &Administrator::textBox15_Click);
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel17->Controls->Add(this->textBox16);
			this->panel17->Location = System::Drawing::Point(734, 22);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(328, 56);
			this->panel17->TabIndex = 15;
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox16->ForeColor = System::Drawing::Color::White;
			this->textBox16->Location = System::Drawing::Point(12, 14);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(301, 25);
			this->textBox16->TabIndex = 0;
			this->textBox16->Text = L"Card Number";
			this->textBox16->Click += gcnew System::EventHandler(this, &Administrator::textBox16_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel6->Controls->Add(this->textBox5);
			this->panel6->Location = System::Drawing::Point(366, 208);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(328, 56);
			this->panel6->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(12, 14);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(301, 25);
			this->textBox5->TabIndex = 0;
			this->textBox5->Text = L"Year of Birth";
			this->textBox5->Click += gcnew System::EventHandler(this, &Administrator::textBox5_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel7->Controls->Add(this->textBox6);
			this->panel7->Location = System::Drawing::Point(366, 146);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(328, 56);
			this->panel7->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(12, 14);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(301, 25);
			this->textBox6->TabIndex = 0;
			this->textBox6->Text = L"Month of Birth";
			this->textBox6->Click += gcnew System::EventHandler(this, &Administrator::textBox6_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel8->Controls->Add(this->textBox7);
			this->panel8->Location = System::Drawing::Point(366, 84);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(328, 56);
			this->panel8->TabIndex = 12;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(12, 14);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(301, 25);
			this->textBox7->TabIndex = 0;
			this->textBox7->Text = L"Day of Birth";
			this->textBox7->Click += gcnew System::EventHandler(this, &Administrator::textBox7_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel9->Controls->Add(this->textBox8);
			this->panel9->Location = System::Drawing::Point(366, 22);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(328, 56);
			this->panel9->TabIndex = 11;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(12, 14);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(301, 25);
			this->textBox8->TabIndex = 0;
			this->textBox8->Text = L"PhoneNumber";
			this->textBox8->Click += gcnew System::EventHandler(this, &Administrator::textBox8_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Location = System::Drawing::Point(12, 208);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(328, 56);
			this->panel4->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(12, 14);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(301, 25);
			this->textBox3->TabIndex = 0;
			this->textBox3->Text = L"Age";
			this->textBox3->Click += gcnew System::EventHandler(this, &Administrator::textBox3_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel5->Controls->Add(this->textBox4);
			this->panel5->Location = System::Drawing::Point(12, 146);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(328, 56);
			this->panel5->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(12, 14);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(301, 25);
			this->textBox4->TabIndex = 0;
			this->textBox4->Text = L"LastName";
			this->textBox4->Click += gcnew System::EventHandler(this, &Administrator::textBox4_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(12, 84);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(328, 56);
			this->panel2->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(12, 14);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(301, 25);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"FirstName";
			this->textBox2->Click += gcnew System::EventHandler(this, &Administrator::textBox2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Location = System::Drawing::Point(12, 22);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(328, 56);
			this->panel3->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(12, 14);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(301, 25);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"ID";
			this->textBox1->Click += gcnew System::EventHandler(this, &Administrator::textBox1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 334);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1439, 358);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Administrator::dataGridView1_CellClick);
			// 
			// Administrator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1439, 687);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Administrator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Administrator";
			this->panel1->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "ID")
		{
			textBox1->Text = "";
		}
	}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "FirstName")
	{
		textBox2->Text = "";
	}
}
private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text == "LastName")
	{
		textBox4->Text = "";
	}
}
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text == "Age")
	{
		textBox3->Text = "";
	}
}
private: System::Void textBox8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox8->Text == "PhoneNumber")
	{
		textBox8->Text = "";
	}
}
private: System::Void textBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7->Text == "Day of Birth")
	{
		textBox7->Text = "";
	}
}
private: System::Void textBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6->Text == "Month of Birth")
	{
		textBox6->Text = "";
	}
}
private: System::Void textBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5->Text == "Year of Birth")
	{
		textBox5->Text = "";
	}
}
private: System::Void textBox16_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox16->Text == "Card Number")
	{
		textBox16->Text = "";
	}
	
}
private: System::Void textBox15_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox15->Text == "Expiration Day")
	{
		textBox15->Text = "";
	}
}
private: System::Void textBox14_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox14->Text == "Expiration Month")
	{
		textBox14->Text = "";
	}
}
private: System::Void textBox13_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox13->Text == "Expiration Year")
	{
		textBox13->Text = "";
	}
}
private: System::Void textBox12_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox12->Text == "CVC")
	{
		textBox12->Text = "";
	}
}
private: System::Void textBox11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox11->Text == "Password")
	{
		textBox11->Text = "";
	}
}
private: System::Void textBox10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox10->Text == "Money")
	{
		textBox10->Text = "";
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "ID";
	textBox2->Text = "FirstName";
	textBox3->Text = "Age";
	textBox4->Text = "LastName";
	textBox8->Text = "PhoneNumber";
	textBox7->Text = "Day of Birth";
	textBox6->Text = "Month of Birth";
	textBox5->Text = "Year of Birth";
	textBox16->Text = "Card Number";
	textBox15->Text = "Expiration Day";
	textBox14->Text = "Expiration Month";
	textBox13->Text = "Expiration Year";
	textBox12->Text = "CVC";
	textBox11->Text = "Password";
	textBox10->Text = "Money";
	textSearch->Text = "Search";
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try
	{
		textBox1->Text = dataGridView1->SelectedRows[0]->Cells[14]->Value->ToString();
		textBox2->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		textBox4->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		textBox3->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		textBox8->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		textBox7->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		textBox6->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		textBox5->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
		textBox16->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
		textBox15->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
		textBox14->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();
		textBox13->Text = dataGridView1->SelectedRows[0]->Cells[10]->Value->ToString();
		textBox12->Text = dataGridView1->SelectedRows[0]->Cells[11]->Value->ToString();
		textBox11->Text = dataGridView1->SelectedRows[0]->Cells[12]->Value->ToString();
		textBox10->Text = dataGridView1->SelectedRows[0]->Cells[13]->Value->ToString();
	}
	catch (Exception^ ex)
	{
	       MessageBox::Show(ex->Message, "DATABASE Error", MessageBoxButtons::OK);
	}
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		sqlConn->ConnectionString = "Data Source=DESKTOP-OE7LBBP;Initial Catalog=BankData;Integrated Security=True";
		command->Connection = sqlConn;
		SqlCommand^ command = gcnew SqlCommand("DELETE FROM clients WHERE ID = " + Convert::ToInt32(textBox1->Text) + "", sqlConn);
		sqlConn->Open();

		reader = command->ExecuteReader();
		MessageBox::Show("The client was sucessfully deleted", "DATABASE", MessageBoxButtons::OK);
		sqlConn->Close();
		ClientsDB();
		RefreshDB();
		
		 

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "DATABASE Error", MessageBoxButtons::OK);
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshDB();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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
	int age = Convert::ToInt32(textBox3->Text);
	int dayofbirth = Convert::ToInt32(textBox7->Text);
	int monthofbirth = Convert::ToInt32(textBox6->Text);
	int yearofbirth = Convert::ToInt32(textBox5->Text);
	try
	{
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO clients" + "(first_name, last_name, age,phoneNumber, DayOfBirth, monthOfBirth, yearOfBirth, cardNumber, cardExpirationDay, cardExpirationMonth, cardExpirationYear, CVC, password,money) VALUES" +
			"(@first_name, @last_name, @age,@phoneNumber, @DayOfBirth, @monthOfBirth, @yearOfBirth, @cardNumber, @cardExpirationDay, @cardExpirationMonth, @cardExpirationYear, @CVC, @password, @money);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@first_name", textBox2->Text);
		command.Parameters->AddWithValue("@last_name", textBox4->Text);
		command.Parameters->AddWithValue("@age", age);
		command.Parameters->AddWithValue("@phoneNumber", textBox8->Text);
		command.Parameters->AddWithValue("@DayOfBirth", dayofbirth);
		command.Parameters->AddWithValue("@monthOfBirth", monthofbirth);
		command.Parameters->AddWithValue("@yearOfBirth", yearofbirth);
		command.Parameters->AddWithValue("@cardNumber", textBox16->Text);
		command.Parameters->AddWithValue("@cardExpirationDay", textBox15->Text);
		command.Parameters->AddWithValue("@cardExpirationMonth", textBox14->Text);
		command.Parameters->AddWithValue("@cardExpirationYear", textBox13->Text);
		command.Parameters->AddWithValue("@CVC", textBox12->Text);;
		command.Parameters->AddWithValue("@password", textBox11->Text);
		command.Parameters->AddWithValue("@money", textBox10->Text);

		command.ExecuteNonQuery();		
		MessageBox::Show("The client was sucessfully added", "DATABASE", MessageBoxButtons::OK);
		RefreshDB();
		
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "DATABASE Error", MessageBoxButtons::OK);
	}
	
}
private: System::Void textSearch_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	try
	{
		if (e->KeyChar == (Char)13)
		{
			int searchQuery;
			bool isNumeric = Int32::TryParse(textSearch->Text, searchQuery);
			if (isNumeric)
			{
				DataView^ dv = table->DefaultView;
				dv->RowFilter = String::Format("age = {1} OR DayOfBirth = {1} OR monthOfBirth = {1} OR yearOfBirth = {1}" +
					"OR cardExpirationDay = {1} OR cardExpirationMonth = {1} OR cardExpirationYear = {1} OR CVC = {1} OR ID = {1} OR money = {1}", textSearch->Text, searchQuery);
				dataGridView1->DataSource = dv->ToTable();
			}
			else
			{
				DataView^ dv = table->DefaultView;
				dv->RowFilter = String::Format("first_name like '%{0}%' OR last_name like '%{0}%'" +
				"OR phoneNumber like '%{0}%' OR cardNumber like '%{0}%'", textSearch->Text);
				dataGridView1->DataSource = dv->ToTable();
			}
			
			
			
		}
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "DATABASE Error", MessageBoxButtons::OK);
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		int searchQuery;
		bool isNumeric = Int32::TryParse(textSearch->Text, searchQuery);
		if (isNumeric)
		{
			DataView^ dv = table->DefaultView;
			dv->RowFilter = String::Format("age = {1} OR DayOfBirth = {1} OR monthOfBirth = {1} OR yearOfBirth = {1}" +
				"OR cardExpirationDay = {1} OR cardExpirationMonth = {1} OR cardExpirationYear = {1} OR CVC = {1} OR ID = {1} OR money = {1}", textSearch->Text, searchQuery);
			dataGridView1->DataSource = dv->ToTable();
		}
		else
		{
			DataView^ dv = table->DefaultView;
			dv->RowFilter = String::Format("first_name like '%{0}%' OR last_name like '%{0}%'" +
				"OR phoneNumber like '%{0}%' OR cardNumber like '%{0}%'", textSearch->Text);
			dataGridView1->DataSource = dv->ToTable();
		}
			
		
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "DATABASE Error", MessageBoxButtons::OK);
	}
}
private: System::Void textSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textSearch->Text == "Search")
	{
		textSearch->Text = "";
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		/*textBox1->Text = "ID";
		textBox2->Text = "FirstName";
		textBox3->Text = "Age";
		textBox4->Text = "LastName";
		textBox8->Text = "PhoneNumber";
		textBox7->Text = "Day of Birth";
		textBox6->Text = "Month of Birth";
		textBox5->Text = "Year of Birth";
		textBox16->Text = "Card Number";
		textBox15->Text = "Expiration Day";
		textBox14->Text = "Expiration Month";
		textBox13->Text = "Expiration Year";
		textBox12->Text = "CVC";
		textBox11->Text = "Password";
		textBox10->Text = "Money";
		textSearch->Text = "Search";*/
		sqlConn->ConnectionString = "Data Source=DESKTOP-OE7LBBP;Initial Catalog=BankData;Integrated Security=True";
		command->Connection = sqlConn;
		String^ first_name = textBox2->Text;
		String^ last_name = textBox4->Text;
		String^ age = textBox3->Text;
		String^ phoneNumber = textBox8->Text;
		String^ DayOfBirth = textBox7->Text;
		String^ yearOfBirth = textBox5->Text;
		String^ monthOfBirth = textBox6->Text;
		String^ cardNumber = textBox16->Text;
		String^ ExpirationDay = textBox15->Text;
		String^ ExpirationMonth = textBox14->Text;
		String^ ExpirationYear = textBox13->Text;
		String^ CVC = textBox12->Text;
		String^ password = textBox11->Text;
		String^ money = textBox10->Text;


		command->CommandText = "UPDATE clients SET first_name = '" + first_name + "',last_name = '" + last_name + "',age = " + Convert::ToInt32(age) + ",phoneNumber = '" + phoneNumber +
			"',DayOfBirth = " + Convert::ToInt32(DayOfBirth) + ",yearOfBirth = " + Convert::ToInt32(yearOfBirth) + ",monthOfBirth = " + Convert::ToInt32(monthOfBirth) + ",cardNumber = '" + cardNumber + "',cardExpirationDay = " + Convert::ToInt32(ExpirationDay) + ",cardExpirationMonth = " + Convert::ToInt32(ExpirationMonth) +
			",cardExpirationYear = " + Convert::ToInt32(ExpirationYear) + ",CVC = " + Convert::ToInt32(CVC) +  ",money = " + Convert::ToInt32(money) + " WHERE ID = " + Convert::ToInt32(textBox1->Text) + "", sqlConn;
		sqlConn->Open();
		reader = command->ExecuteReader();
		sqlConn->Close();
		ClientsDB();
		RefreshDB();

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message, "DATABASE Error", MessageBoxButtons::OK);
	}
}
};
}
