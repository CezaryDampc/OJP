#pragma once
#include "stdafx.h"
#include "Form2.h"
namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			ComboBox();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  Label_Imie;
	private: System::Windows::Forms::Label^  Label_Nazwisko;
	private: System::Windows::Forms::Label^  Label_NRTEL;
	private: System::Windows::Forms::Label^  Label_ADRES;
	private: System::Windows::Forms::Label^  Label_Ulica;
	private: System::Windows::Forms::Label^  Label_Miasto;
	private: System::Windows::Forms::Label^  Label_NUMERDOM;
	private: System::Windows::Forms::Label^  Label_Plec;
	private: System::Windows::Forms::Label^  Label_DataURO;



	private: System::Windows::Forms::TextBox^  text_Imie;
	private: System::Windows::Forms::TextBox^  text_nazwisko;
	private: System::Windows::Forms::TextBox^  text_NRTEL;
	private: System::Windows::Forms::TextBox^  text_Miasto;
	private: System::Windows::Forms::TextBox^  text_Ulica;
	private: System::Windows::Forms::TextBox^  text_NRDOMU;





	private: System::Windows::Forms::Button^  Zapisz;
	private: System::Windows::Forms::Button^  Lista_klientow;
	private: System::Windows::Forms::Button^  Zamknij;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  NR_Klienta;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;



	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox1;


	private:
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Label_Imie = (gcnew System::Windows::Forms::Label());
			this->Label_Nazwisko = (gcnew System::Windows::Forms::Label());
			this->Label_NRTEL = (gcnew System::Windows::Forms::Label());
			this->Label_ADRES = (gcnew System::Windows::Forms::Label());
			this->Label_Ulica = (gcnew System::Windows::Forms::Label());
			this->Label_Miasto = (gcnew System::Windows::Forms::Label());
			this->Label_NUMERDOM = (gcnew System::Windows::Forms::Label());
			this->Label_Plec = (gcnew System::Windows::Forms::Label());
			this->Label_DataURO = (gcnew System::Windows::Forms::Label());
			this->text_Imie = (gcnew System::Windows::Forms::TextBox());
			this->text_nazwisko = (gcnew System::Windows::Forms::TextBox());
			this->text_NRTEL = (gcnew System::Windows::Forms::TextBox());
			this->text_Miasto = (gcnew System::Windows::Forms::TextBox());
			this->text_Ulica = (gcnew System::Windows::Forms::TextBox());
			this->text_NRDOMU = (gcnew System::Windows::Forms::TextBox());
			this->Zapisz = (gcnew System::Windows::Forms::Button());
			this->Lista_klientow = (gcnew System::Windows::Forms::Button());
			this->Zamknij = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->NR_Klienta = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(21, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DANE KLIENTA :";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// Label_Imie
			// 
			this->Label_Imie->AutoSize = true;
			this->Label_Imie->Location = System::Drawing::Point(30, 70);
			this->Label_Imie->Name = L"Label_Imie";
			this->Label_Imie->Size = System::Drawing::Size(32, 13);
			this->Label_Imie->TabIndex = 1;
			this->Label_Imie->Text = L"Imie :";
			// 
			// Label_Nazwisko
			// 
			this->Label_Nazwisko->AutoSize = true;
			this->Label_Nazwisko->Location = System::Drawing::Point(30, 107);
			this->Label_Nazwisko->Name = L"Label_Nazwisko";
			this->Label_Nazwisko->Size = System::Drawing::Size(56, 13);
			this->Label_Nazwisko->TabIndex = 2;
			this->Label_Nazwisko->Text = L"Nazwisko:";
			// 
			// Label_NRTEL
			// 
			this->Label_NRTEL->AutoSize = true;
			this->Label_NRTEL->Location = System::Drawing::Point(30, 145);
			this->Label_NRTEL->Name = L"Label_NRTEL";
			this->Label_NRTEL->Size = System::Drawing::Size(86, 13);
			this->Label_NRTEL->TabIndex = 3;
			this->Label_NRTEL->Text = L"Numer Telefonu:";
			// 
			// Label_ADRES
			// 
			this->Label_ADRES->AutoSize = true;
			this->Label_ADRES->Location = System::Drawing::Point(30, 191);
			this->Label_ADRES->Name = L"Label_ADRES";
			this->Label_ADRES->Size = System::Drawing::Size(40, 13);
			this->Label_ADRES->TabIndex = 4;
			this->Label_ADRES->Text = L"Adres :";
			// 
			// Label_Ulica
			// 
			this->Label_Ulica->AutoSize = true;
			this->Label_Ulica->Location = System::Drawing::Point(86, 257);
			this->Label_Ulica->Name = L"Label_Ulica";
			this->Label_Ulica->Size = System::Drawing::Size(34, 13);
			this->Label_Ulica->TabIndex = 5;
			this->Label_Ulica->Text = L"Ulica:";
			// 
			// Label_Miasto
			// 
			this->Label_Miasto->AutoSize = true;
			this->Label_Miasto->Location = System::Drawing::Point(86, 226);
			this->Label_Miasto->Name = L"Label_Miasto";
			this->Label_Miasto->Size = System::Drawing::Size(41, 13);
			this->Label_Miasto->TabIndex = 6;
			this->Label_Miasto->Text = L"Miasto:";
			// 
			// Label_NUMERDOM
			// 
			this->Label_NUMERDOM->AutoSize = true;
			this->Label_NUMERDOM->Location = System::Drawing::Point(86, 289);
			this->Label_NUMERDOM->Name = L"Label_NUMERDOM";
			this->Label_NUMERDOM->Size = System::Drawing::Size(127, 13);
			this->Label_NUMERDOM->TabIndex = 7;
			this->Label_NUMERDOM->Text = L"Numer domu/mieszkania:";
			// 
			// Label_Plec
			// 
			this->Label_Plec->AutoSize = true;
			this->Label_Plec->Location = System::Drawing::Point(30, 336);
			this->Label_Plec->Name = L"Label_Plec";
			this->Label_Plec->Size = System::Drawing::Size(30, 13);
			this->Label_Plec->TabIndex = 8;
			this->Label_Plec->Text = L"P³eæ";
			// 
			// Label_DataURO
			// 
			this->Label_DataURO->AutoSize = true;
			this->Label_DataURO->Location = System::Drawing::Point(30, 377);
			this->Label_DataURO->Name = L"Label_DataURO";
			this->Label_DataURO->Size = System::Drawing::Size(82, 13);
			this->Label_DataURO->TabIndex = 9;
			this->Label_DataURO->Text = L"Data urodzenia:";
			// 
			// text_Imie
			// 
			this->text_Imie->Location = System::Drawing::Point(142, 67);
			this->text_Imie->Name = L"text_Imie";
			this->text_Imie->Size = System::Drawing::Size(100, 20);
			this->text_Imie->TabIndex = 13;
			// 
			// text_nazwisko
			// 
			this->text_nazwisko->Location = System::Drawing::Point(142, 104);
			this->text_nazwisko->Name = L"text_nazwisko";
			this->text_nazwisko->Size = System::Drawing::Size(100, 20);
			this->text_nazwisko->TabIndex = 14;
			// 
			// text_NRTEL
			// 
			this->text_NRTEL->Location = System::Drawing::Point(142, 138);
			this->text_NRTEL->Name = L"text_NRTEL";
			this->text_NRTEL->Size = System::Drawing::Size(100, 20);
			this->text_NRTEL->TabIndex = 15;
			// 
			// text_Miasto
			// 
			this->text_Miasto->Location = System::Drawing::Point(233, 219);
			this->text_Miasto->Name = L"text_Miasto";
			this->text_Miasto->Size = System::Drawing::Size(100, 20);
			this->text_Miasto->TabIndex = 16;
			// 
			// text_Ulica
			// 
			this->text_Ulica->Location = System::Drawing::Point(233, 250);
			this->text_Ulica->Name = L"text_Ulica";
			this->text_Ulica->Size = System::Drawing::Size(100, 20);
			this->text_Ulica->TabIndex = 17;
			// 
			// text_NRDOMU
			// 
			this->text_NRDOMU->Location = System::Drawing::Point(233, 282);
			this->text_NRDOMU->Name = L"text_NRDOMU";
			this->text_NRDOMU->Size = System::Drawing::Size(100, 20);
			this->text_NRDOMU->TabIndex = 18;
			// 
			// Zapisz
			// 
			this->Zapisz->Location = System::Drawing::Point(447, 97);
			this->Zapisz->Name = L"Zapisz";
			this->Zapisz->Size = System::Drawing::Size(106, 23);
			this->Zapisz->TabIndex = 24;
			this->Zapisz->Text = L"Zapisz";
			this->Zapisz->UseVisualStyleBackColor = true;
			this->Zapisz->Click += gcnew System::EventHandler(this, &Form1::Zapisz_Click);
			// 
			// Lista_klientow
			// 
			this->Lista_klientow->Location = System::Drawing::Point(447, 216);
			this->Lista_klientow->Name = L"Lista_klientow";
			this->Lista_klientow->Size = System::Drawing::Size(106, 23);
			this->Lista_klientow->TabIndex = 25;
			this->Lista_klientow->Text = L"Lista klientów";
			this->Lista_klientow->UseVisualStyleBackColor = true;
			this->Lista_klientow->Click += gcnew System::EventHandler(this, &Form1::Lista_klientow_Click);
			// 
			// Zamknij
			// 
			this->Zamknij->Location = System::Drawing::Point(447, 257);
			this->Zamknij->Name = L"Zamknij";
			this->Zamknij->Size = System::Drawing::Size(106, 23);
			this->Zamknij->TabIndex = 26;
			this->Zamknij->Text = L"Zamknij";
			this->Zamknij->UseVisualStyleBackColor = true;
			this->Zamknij->Click += gcnew System::EventHandler(this, &Form1::Zamknij_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(142, 374);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 28;
			// 
			// NR_Klienta
			// 
			this->NR_Klienta->Location = System::Drawing::Point(142, 28);
			this->NR_Klienta->Name = L"NR_Klienta";
			this->NR_Klienta->Size = System::Drawing::Size(100, 20);
			this->NR_Klienta->TabIndex = 29;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 30;
			this->label2->Text = L"Numer Klienta";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(242, 336);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 32;
			this->label3->Text = L"M lub K";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(113, 333);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 33;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(447, 172);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 23);
			this->button1->TabIndex = 34;
			this->button1->Text = L"Usuñ z listy";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(447, 136);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 23);
			this->button2->TabIndex = 35;
			this->button2->Text = L"Aktualizuj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(281, 67);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(131, 21);
			this->comboBox1->TabIndex = 36;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(594, 442);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->NR_Klienta);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Zamknij);
			this->Controls->Add(this->Lista_klientow);
			this->Controls->Add(this->Zapisz);
			this->Controls->Add(this->text_NRDOMU);
			this->Controls->Add(this->text_Ulica);
			this->Controls->Add(this->text_Miasto);
			this->Controls->Add(this->text_NRTEL);
			this->Controls->Add(this->text_nazwisko);
			this->Controls->Add(this->text_Imie);
			this->Controls->Add(this->Label_DataURO);
			this->Controls->Add(this->Label_Plec);
			this->Controls->Add(this->Label_NUMERDOM);
			this->Controls->Add(this->Label_Miasto);
			this->Controls->Add(this->Label_Ulica);
			this->Controls->Add(this->Label_ADRES);
			this->Controls->Add(this->Label_NRTEL);
			this->Controls->Add(this->Label_Nazwisko);
			this->Controls->Add(this->Label_Imie);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Form1";
			this->Text = L"ClientChecker";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Zamknij_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
	}
private: System::Void Zapisz_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ constring = L"datasource=localhost;port=3306;username=root;password=root";
			 MySqlConnection ^ conDatabase = gcnew MySqlConnection(constring);
			 MySqlCommand ^ cmdDatabase = gcnew MySqlCommand("insert into database.Tabelaa(Numer,Imiê,Nazwisko,Numer_Telefonu,Miasto,Ulica,Numer_Domu_Mieszkania,Data_Urodzenia,P³eæ) values('" + this->NR_Klienta->Text + "','" + this->text_Imie->Text + "','" + this->text_nazwisko->Text + "','" + this->text_NRTEL->Text + "','" + this->text_Miasto->Text + "','" + this->text_Ulica->Text + "','" + this->text_NRDOMU->Text + "', '" + this->textBox1->Text + "','"+this->textBox2->Text+"');", conDatabase);
			 MySqlDataReader ^ myReader;
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
				 MessageBox::Show("Zapisano!");
			 }
			 catch (Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Lista_klientow_Click(System::Object^  sender, System::EventArgs^  e) {
			 WindowsFormAPP::Form2 ^okno1 = gcnew WindowsFormAPP::Form2();
			 okno1->Show();
			 okno1->Show();
			 okno1->Width = 950;
			 okno1->Height = 700;
			 DataGridView ^ tabela = gcnew DataGridView;
			 
			 tabela->Width = 1050;
			 tabela->Height = 600;
			 okno1->Controls->Add(tabela);
			 String ^ constring = L"datasource=localhost;port=3306;username=root;password=root";
			 MySqlConnection ^ conDatabase = gcnew MySqlConnection(constring);
			 MySqlCommand ^ cmdDatabase = gcnew MySqlCommand("select Numer,Imiê,Nazwisko,Numer_Telefonu,Miasto,Ulica,Numer_Domu_Mieszkania,P³eæ,Data_Urodzenia from database.tabelaa;", conDatabase);
			 MySqlDataReader ^ myReader;
			 try{
				 MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
				 sda->SelectCommand = cmdDatabase;
				 DataTable ^ dbdataset = gcnew DataTable();
				 sda->Fill(dbdataset);
				 BindingSource ^ bSource = gcnew BindingSource();

				 bSource->DataSource = dbdataset;
				 tabela->DataSource = bSource;
				 sda->Update(dbdataset);
			 }
			 catch(Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ constring = L"datasource=localhost;port=3306;username=root;password=root";
			 MySqlConnection ^ conDatabase = gcnew MySqlConnection(constring);
			 MySqlCommand ^ cmdDatabase = gcnew MySqlCommand("Delete from database.Tabelaa where Numer='" + this->NR_Klienta->Text + "';", conDatabase);
			 MySqlDataReader ^ myReader;
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
				 MessageBox::Show("Usuniêto!");
			 }
			 catch (Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ constring = L"datasource=localhost;port=3306;username=root;password=root";
			 MySqlConnection ^ conDatabase = gcnew MySqlConnection(constring);
			 MySqlCommand ^ cmdDatabase = gcnew MySqlCommand("Update database.Tabelaa set Numer='" + this->NR_Klienta->Text + "',Imiê='" + this->text_Imie->Text + "',Nazwisko='" + this->text_nazwisko->Text + "',Numer_Telefonu='" + this->text_NRTEL->Text + "',Miasto='" + this->text_Miasto->Text + "',Ulica='" + this->text_Ulica->Text + "',Numer_Domu_Mieszkania='" + this->text_NRDOMU->Text + "',Data_Urodzenia= '" + this->textBox1->Text + "',P³eæ='" + this->textBox2->Text + "' where Numer='" + this->NR_Klienta->Text + "';", conDatabase);
			 MySqlDataReader ^ myReader;
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
				 MessageBox::Show("Zaktualizowano!");
			 }
			 catch (Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }
}
private: void ComboBox(void){
			 String ^ constring = L"datasource=localhost;port=3306;username=root;password=root";
			 MySqlConnection ^ conDatabase = gcnew MySqlConnection(constring);
			 MySqlCommand ^ cmdDatabase = gcnew MySqlCommand("select * from database.Tabelaa", conDatabase);
			 MySqlDataReader ^ myReader;
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
				 while(myReader->Read()){
					 String ^imie;
					 imie = myReader->GetString("Imiê");
					 comboBox1->Items->Add(imie);
				 }
			 }
			 catch (Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 String ^ combo = comboBox1->Text;
			 String ^ constring = L"datasource=localhost;port=3306;username=root;password=root";
			 MySqlConnection ^ conDatabase = gcnew MySqlConnection(constring);
			 MySqlCommand ^ cmdDatabase = gcnew MySqlCommand("select * from database.Tabelaa where Imiê = '"+combo+"'", conDatabase);
			 MySqlDataReader ^ myReader;
			 try{
				 conDatabase->Open();
				 myReader = cmdDatabase->ExecuteReader();
				 while (myReader->Read()){
					 String ^ NumerValue= myReader->GetInt32("Numer").ToString();
					 NR_Klienta->Text = NumerValue;
					 String ^ ImieValue = myReader->GetString("Imiê");
					 text_Imie->Text = ImieValue;
					 String ^ NazwiskoValue = myReader->GetString("Nazwisko");
					 text_nazwisko->Text = NazwiskoValue;
					 String ^ NRTELValue = myReader->GetInt32("Numer_Telefonu").ToString();
					 text_NRTEL->Text = NRTELValue;
					 String ^ MiastoValue = myReader->GetString("Miasto");
					 text_Miasto->Text = MiastoValue;
					 String ^ UlicaValue = myReader->GetString("Ulica");
					 text_Ulica->Text = UlicaValue;
					 String ^ NRDOMUValue = myReader->GetString("Numer_Domu_Mieszkania");
					 text_NRDOMU->Text = NRDOMUValue;
					 String ^ P³eæValue = myReader->GetString("P³eæ");
					 textBox2->Text = P³eæValue;
					 String ^ Data_URValue = myReader->GetString("Data_Urodzenia");
					 textBox1->Text = Data_URValue;

				 }
			 }
			 catch (Exception ^ex){
				 MessageBox::Show(ex->Message);
			 }
}
};
}

