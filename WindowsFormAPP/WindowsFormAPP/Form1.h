#pragma once

namespace WindowsFormApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
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
	private: System::Windows::Forms::Label^  Label_Rok;
	private: System::Windows::Forms::Label^  Label_Miesiac;
	private: System::Windows::Forms::Label^  Label_Dzien;
	private: System::Windows::Forms::TextBox^  text_Imie;
	private: System::Windows::Forms::TextBox^  text_nazwisko;
	private: System::Windows::Forms::TextBox^  text_NRTEL;
	private: System::Windows::Forms::TextBox^  text_Miasto;
	private: System::Windows::Forms::TextBox^  text_Ulica;
	private: System::Windows::Forms::TextBox^  text_NRDOMU;
	private: System::Windows::Forms::CheckBox^  check_M;
	private: System::Windows::Forms::CheckBox^  check_K;
	private: System::Windows::Forms::TextBox^  text_ROK;
	private: System::Windows::Forms::TextBox^  text_Miesiac;
	private: System::Windows::Forms::TextBox^  text_Dzien;
	private: System::Windows::Forms::Button^  Zapisz;
	private: System::Windows::Forms::Button^  Lista_klientow;
	private: System::Windows::Forms::Button^  Zamknij;

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
			this->Label_Rok = (gcnew System::Windows::Forms::Label());
			this->Label_Miesiac = (gcnew System::Windows::Forms::Label());
			this->Label_Dzien = (gcnew System::Windows::Forms::Label());
			this->text_Imie = (gcnew System::Windows::Forms::TextBox());
			this->text_nazwisko = (gcnew System::Windows::Forms::TextBox());
			this->text_NRTEL = (gcnew System::Windows::Forms::TextBox());
			this->text_Miasto = (gcnew System::Windows::Forms::TextBox());
			this->text_Ulica = (gcnew System::Windows::Forms::TextBox());
			this->text_NRDOMU = (gcnew System::Windows::Forms::TextBox());
			this->check_M = (gcnew System::Windows::Forms::CheckBox());
			this->check_K = (gcnew System::Windows::Forms::CheckBox());
			this->text_ROK = (gcnew System::Windows::Forms::TextBox());
			this->text_Miesiac = (gcnew System::Windows::Forms::TextBox());
			this->text_Dzien = (gcnew System::Windows::Forms::TextBox());
			this->Zapisz = (gcnew System::Windows::Forms::Button());
			this->Lista_klientow = (gcnew System::Windows::Forms::Button());
			this->Zamknij = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"DANE KLIENTA :";
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
			// Label_Rok
			// 
			this->Label_Rok->AutoSize = true;
			this->Label_Rok->Location = System::Drawing::Point(86, 418);
			this->Label_Rok->Name = L"Label_Rok";
			this->Label_Rok->Size = System::Drawing::Size(30, 13);
			this->Label_Rok->TabIndex = 10;
			this->Label_Rok->Text = L"Rok:";
			// 
			// Label_Miesiac
			// 
			this->Label_Miesiac->AutoSize = true;
			this->Label_Miesiac->Location = System::Drawing::Point(86, 449);
			this->Label_Miesiac->Name = L"Label_Miesiac";
			this->Label_Miesiac->Size = System::Drawing::Size(46, 13);
			this->Label_Miesiac->TabIndex = 11;
			this->Label_Miesiac->Text = L"Miesi¹c:";
			// 
			// Label_Dzien
			// 
			this->Label_Dzien->AutoSize = true;
			this->Label_Dzien->Location = System::Drawing::Point(86, 485);
			this->Label_Dzien->Name = L"Label_Dzien";
			this->Label_Dzien->Size = System::Drawing::Size(37, 13);
			this->Label_Dzien->TabIndex = 12;
			this->Label_Dzien->Text = L"Dzieñ:";
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
			// check_M
			// 
			this->check_M->AutoSize = true;
			this->check_M->Location = System::Drawing::Point(86, 332);
			this->check_M->Name = L"check_M";
			this->check_M->Size = System::Drawing::Size(35, 17);
			this->check_M->TabIndex = 19;
			this->check_M->Text = L"M";
			this->check_M->UseVisualStyleBackColor = true;
			// 
			// check_K
			// 
			this->check_K->AutoSize = true;
			this->check_K->Location = System::Drawing::Point(172, 332);
			this->check_K->Name = L"check_K";
			this->check_K->Size = System::Drawing::Size(33, 17);
			this->check_K->TabIndex = 20;
			this->check_K->Text = L"K";
			this->check_K->UseVisualStyleBackColor = true;
			// 
			// text_ROK
			// 
			this->text_ROK->Location = System::Drawing::Point(151, 411);
			this->text_ROK->Name = L"text_ROK";
			this->text_ROK->Size = System::Drawing::Size(100, 20);
			this->text_ROK->TabIndex = 21;
			// 
			// text_Miesiac
			// 
			this->text_Miesiac->Location = System::Drawing::Point(151, 442);
			this->text_Miesiac->Name = L"text_Miesiac";
			this->text_Miesiac->Size = System::Drawing::Size(100, 20);
			this->text_Miesiac->TabIndex = 22;
			// 
			// text_Dzien
			// 
			this->text_Dzien->Location = System::Drawing::Point(151, 478);
			this->text_Dzien->Name = L"text_Dzien";
			this->text_Dzien->Size = System::Drawing::Size(100, 20);
			this->text_Dzien->TabIndex = 23;
			// 
			// Zapisz
			// 
			this->Zapisz->Location = System::Drawing::Point(514, 191);
			this->Zapisz->Name = L"Zapisz";
			this->Zapisz->Size = System::Drawing::Size(106, 23);
			this->Zapisz->TabIndex = 24;
			this->Zapisz->Text = L"Zapisz";
			this->Zapisz->UseVisualStyleBackColor = true;
			// 
			// Lista_klientow
			// 
			this->Lista_klientow->Location = System::Drawing::Point(514, 252);
			this->Lista_klientow->Name = L"Lista_klientow";
			this->Lista_klientow->Size = System::Drawing::Size(106, 23);
			this->Lista_klientow->TabIndex = 25;
			this->Lista_klientow->Text = L"Lista klientów";
			this->Lista_klientow->UseVisualStyleBackColor = true;
			// 
			// Zamknij
			// 
			this->Zamknij->Location = System::Drawing::Point(514, 311);
			this->Zamknij->Name = L"Zamknij";
			this->Zamknij->Size = System::Drawing::Size(106, 23);
			this->Zamknij->TabIndex = 26;
			this->Zamknij->Text = L"Zamknij";
			this->Zamknij->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(765, 577);
			this->Controls->Add(this->Zamknij);
			this->Controls->Add(this->Lista_klientow);
			this->Controls->Add(this->Zapisz);
			this->Controls->Add(this->text_Dzien);
			this->Controls->Add(this->text_Miesiac);
			this->Controls->Add(this->text_ROK);
			this->Controls->Add(this->check_K);
			this->Controls->Add(this->check_M);
			this->Controls->Add(this->text_NRDOMU);
			this->Controls->Add(this->text_Ulica);
			this->Controls->Add(this->text_Miasto);
			this->Controls->Add(this->text_NRTEL);
			this->Controls->Add(this->text_nazwisko);
			this->Controls->Add(this->text_Imie);
			this->Controls->Add(this->Label_Dzien);
			this->Controls->Add(this->Label_Miesiac);
			this->Controls->Add(this->Label_Rok);
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
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

