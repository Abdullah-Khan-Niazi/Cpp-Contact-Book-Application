#pragma once
#include<string>
#include <msclr/marshal_cppstd.h>
#include<fstream>
#include"MyForm1.h"
#include"MyForm2.h"
#include"MyForm3.h"
#include"Address.h"
#include"Contact.h"
#include"ContactsBook.h"

namespace ContactBookApplication  {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ComponentFactory::Krypton::Toolkit;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm1 : public KryptonForm
	{
		Contact* obj;
		bool flag,  change_made;
	public:
		MyForm1(void)
		{
			change_made = false;
			flag = false;
			obj = nullptr;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm1(Contact temp, bool var)
		{
			change_made = false;
			flag = var;
			obj = new Contact(temp);
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			delete obj;
			if (components)
			{
				delete components;
			}
		}
	private: ComponentFactory::Krypton::Toolkit::KryptonPalette^ kryptonPalette1;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ kryptonLabel1;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ kryptonLabel2;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ kryptonLabel3;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ kryptonLabel4;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ kryptonLabel5;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ kryptonLabel6;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ kryptonLabel7;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ kryptonLabel8;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ fNametextBox;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ lNameBox;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ pNumberTextBox;



	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ EmailAddresstextBox;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ HousetextBox;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ StreettextBox;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ CitytextBox;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ CountrytextBox;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton2;


	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->kryptonPalette1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonPalette(this->components));
			this->kryptonLabel1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->kryptonLabel2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->kryptonLabel3 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->kryptonLabel4 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->kryptonLabel5 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->kryptonLabel6 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->kryptonLabel7 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->kryptonLabel8 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->fNametextBox = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->lNameBox = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->pNumberTextBox = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->EmailAddresstextBox = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->HousetextBox = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->StreettextBox = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->CitytextBox = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->CountrytextBox = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->kryptonButton1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->SuspendLayout();
			// 
			// kryptonPalette1
			// 
			this->kryptonPalette1->BasePaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Global;
			this->kryptonPalette1->FormStyles->FormCommon->StateActive->Back->Color1 = System::Drawing::Color::Black;
			this->kryptonPalette1->FormStyles->FormCommon->StateActive->Back->Color2 = System::Drawing::Color::Black;
			this->kryptonPalette1->FormStyles->FormCommon->StateActive->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonPalette1->FormStyles->FormCommon->StateActive->Border->Color1 = System::Drawing::Color::Black;
			this->kryptonPalette1->FormStyles->FormCommon->StateActive->Border->Color2 = System::Drawing::Color::Black;
			this->kryptonPalette1->FormStyles->FormCommon->StateActive->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonPalette1->FormStyles->FormCommon->StateActive->Border->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonPalette1->HeaderStyles->HeaderCommon->StateCommon->Back->Color1 = System::Drawing::Color::Black;
			this->kryptonPalette1->HeaderStyles->HeaderCommon->StateCommon->Back->Color2 = System::Drawing::Color::Black;
			this->kryptonPalette1->HeaderStyles->HeaderCommon->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonPalette1->HeaderStyles->HeaderCommon->StateCommon->Border->Color1 = System::Drawing::Color::Black;
			this->kryptonPalette1->HeaderStyles->HeaderCommon->StateCommon->Border->Color2 = System::Drawing::Color::Black;
			this->kryptonPalette1->HeaderStyles->HeaderCommon->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonPalette1->HeaderStyles->HeaderCommon->StateCommon->Border->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			// 
			// kryptonLabel1
			// 
			this->kryptonLabel1->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitleControl;
			this->kryptonLabel1->Location = System::Drawing::Point(33, 28);
			this->kryptonLabel1->Name = L"kryptonLabel1";
			this->kryptonLabel1->Size = System::Drawing::Size(117, 29);
			this->kryptonLabel1->StateCommon->ShortText->Color1 = System::Drawing::Color::Black;
			this->kryptonLabel1->StateCommon->ShortText->Color2 = System::Drawing::Color::Black;
			this->kryptonLabel1->StateCommon->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonLabel1->StateCommon->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonLabel1->TabIndex = 0;
			this->kryptonLabel1->Values->Text = L"First Name :";
			// 
			// kryptonLabel2
			// 
			this->kryptonLabel2->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitlePanel;
			this->kryptonLabel2->Location = System::Drawing::Point(33, 63);
			this->kryptonLabel2->Name = L"kryptonLabel2";
			this->kryptonLabel2->Size = System::Drawing::Size(114, 29);
			this->kryptonLabel2->StateCommon->ShortText->Color1 = System::Drawing::Color::Black;
			this->kryptonLabel2->StateCommon->ShortText->Color2 = System::Drawing::Color::Black;
			this->kryptonLabel2->StateCommon->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonLabel2->StateCommon->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonLabel2->TabIndex = 1;
			this->kryptonLabel2->Values->Text = L"Last Name :";
			// 
			// kryptonLabel3
			// 
			this->kryptonLabel3->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitleControl;
			this->kryptonLabel3->Location = System::Drawing::Point(33, 98);
			this->kryptonLabel3->Name = L"kryptonLabel3";
			this->kryptonLabel3->Size = System::Drawing::Size(155, 29);
			this->kryptonLabel3->StateCommon->ShortText->Color1 = System::Drawing::Color::Black;
			this->kryptonLabel3->StateCommon->ShortText->Color2 = System::Drawing::Color::Black;
			this->kryptonLabel3->StateCommon->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonLabel3->StateCommon->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonLabel3->TabIndex = 2;
			this->kryptonLabel3->Values->Text = L"Phone Number :";
			// 
			// kryptonLabel4
			// 
			this->kryptonLabel4->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitlePanel;
			this->kryptonLabel4->Location = System::Drawing::Point(33, 133);
			this->kryptonLabel4->Name = L"kryptonLabel4";
			this->kryptonLabel4->Size = System::Drawing::Size(145, 29);
			this->kryptonLabel4->StateCommon->ShortText->Color1 = System::Drawing::Color::Black;
			this->kryptonLabel4->StateCommon->ShortText->Color2 = System::Drawing::Color::Black;
			this->kryptonLabel4->StateCommon->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonLabel4->StateCommon->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonLabel4->TabIndex = 3;
			this->kryptonLabel4->Values->Text = L"Email Address :";
			// 
			// kryptonLabel5
			// 
			this->kryptonLabel5->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitleControl;
			this->kryptonLabel5->Location = System::Drawing::Point(33, 168);
			this->kryptonLabel5->Name = L"kryptonLabel5";
			this->kryptonLabel5->Size = System::Drawing::Size(78, 29);
			this->kryptonLabel5->StateCommon->ShortText->Color1 = System::Drawing::Color::Black;
			this->kryptonLabel5->StateCommon->ShortText->Color2 = System::Drawing::Color::Black;
			this->kryptonLabel5->StateCommon->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonLabel5->StateCommon->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonLabel5->TabIndex = 4;
			this->kryptonLabel5->Values->Text = L"House : ";
			// 
			// kryptonLabel6
			// 
			this->kryptonLabel6->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitleControl;
			this->kryptonLabel6->Location = System::Drawing::Point(33, 203);
			this->kryptonLabel6->Name = L"kryptonLabel6";
			this->kryptonLabel6->Size = System::Drawing::Size(75, 29);
			this->kryptonLabel6->StateCommon->ShortText->Color1 = System::Drawing::Color::Black;
			this->kryptonLabel6->StateCommon->ShortText->Color2 = System::Drawing::Color::Black;
			this->kryptonLabel6->StateCommon->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonLabel6->StateCommon->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonLabel6->TabIndex = 5;
			this->kryptonLabel6->Values->Text = L"Street :";
			// 
			// kryptonLabel7
			// 
			this->kryptonLabel7->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitleControl;
			this->kryptonLabel7->Location = System::Drawing::Point(33, 238);
			this->kryptonLabel7->Name = L"kryptonLabel7";
			this->kryptonLabel7->Size = System::Drawing::Size(57, 29);
			this->kryptonLabel7->StateCommon->ShortText->Color1 = System::Drawing::Color::Black;
			this->kryptonLabel7->StateCommon->ShortText->Color2 = System::Drawing::Color::Black;
			this->kryptonLabel7->StateCommon->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonLabel7->StateCommon->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonLabel7->TabIndex = 6;
			this->kryptonLabel7->Values->Text = L"City :";
			// 
			// kryptonLabel8
			// 
			this->kryptonLabel8->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitleControl;
			this->kryptonLabel8->Location = System::Drawing::Point(33, 273);
			this->kryptonLabel8->Name = L"kryptonLabel8";
			this->kryptonLabel8->Size = System::Drawing::Size(93, 29);
			this->kryptonLabel8->StateCommon->ShortText->Color1 = System::Drawing::Color::Black;
			this->kryptonLabel8->StateCommon->ShortText->Color2 = System::Drawing::Color::Black;
			this->kryptonLabel8->StateCommon->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonLabel8->StateCommon->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonLabel8->TabIndex = 7;
			this->kryptonLabel8->Values->Text = L"Country :";
			// 
			// fNametextBox
			// 
			this->fNametextBox->Location = System::Drawing::Point(193, 34);
			this->fNametextBox->Name = L"fNametextBox";
			this->fNametextBox->Size = System::Drawing::Size(265, 23);
			this->fNametextBox->TabIndex = 8;
			// 
			// lNameBox
			// 
			this->lNameBox->Location = System::Drawing::Point(193, 69);
			this->lNameBox->Name = L"lNameBox";
			this->lNameBox->Size = System::Drawing::Size(265, 23);
			this->lNameBox->TabIndex = 9;
			// 
			// pNumberTextBox
			// 
			this->pNumberTextBox->Location = System::Drawing::Point(193, 104);
			this->pNumberTextBox->Name = L"pNumberTextBox";
			this->pNumberTextBox->Size = System::Drawing::Size(265, 23);
			this->pNumberTextBox->TabIndex = 10;
			// 
			// EmailAddresstextBox
			// 
			this->EmailAddresstextBox->Location = System::Drawing::Point(193, 139);
			this->EmailAddresstextBox->Name = L"EmailAddresstextBox";
			this->EmailAddresstextBox->Size = System::Drawing::Size(265, 23);
			this->EmailAddresstextBox->TabIndex = 11;
			// 
			// HousetextBox
			// 
			this->HousetextBox->Location = System::Drawing::Point(193, 174);
			this->HousetextBox->Name = L"HousetextBox";
			this->HousetextBox->Size = System::Drawing::Size(265, 23);
			this->HousetextBox->TabIndex = 12;
			// 
			// StreettextBox
			// 
			this->StreettextBox->Location = System::Drawing::Point(193, 209);
			this->StreettextBox->Name = L"StreettextBox";
			this->StreettextBox->Size = System::Drawing::Size(265, 23);
			this->StreettextBox->TabIndex = 13;
			// 
			// CitytextBox
			// 
			this->CitytextBox->Location = System::Drawing::Point(193, 244);
			this->CitytextBox->Name = L"CitytextBox";
			this->CitytextBox->Size = System::Drawing::Size(265, 23);
			this->CitytextBox->TabIndex = 14;
			// 
			// CountrytextBox
			// 
			this->CountrytextBox->Location = System::Drawing::Point(193, 279);
			this->CountrytextBox->Name = L"CountrytextBox";
			this->CountrytextBox->Size = System::Drawing::Size(265, 23);
			this->CountrytextBox->TabIndex = 15;
			// 
			// kryptonButton1
			// 
			this->kryptonButton1->Location = System::Drawing::Point(318, 342);
			this->kryptonButton1->Name = L"kryptonButton1";
			this->kryptonButton1->Size = System::Drawing::Size(140, 38);
			this->kryptonButton1->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton1->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton1->StateCommon->Border->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton1->StateCommon->Border->Rounding = 18;
			this->kryptonButton1->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton1->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton1->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Content->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton1->StateCommon->Content->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonButton1->TabIndex = 16;
			this->kryptonButton1->Values->Text = L"Add";
			this->kryptonButton1->Click += gcnew System::EventHandler(this, &MyForm1::kryptonButton1_Click);
			// 
			// kryptonButton2
			// 
			this->kryptonButton2->Location = System::Drawing::Point(193, 342);
			this->kryptonButton2->Name = L"kryptonButton2";
			this->kryptonButton2->Size = System::Drawing::Size(86, 38);
			this->kryptonButton2->StateCommon->Back->Color1 = System::Drawing::Color::Red;
			this->kryptonButton2->StateCommon->Back->Color2 = System::Drawing::Color::Red;
			this->kryptonButton2->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton2->StateCommon->Border->Color1 = System::Drawing::Color::Red;
			this->kryptonButton2->StateCommon->Border->Color2 = System::Drawing::Color::Red;
			this->kryptonButton2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton2->StateCommon->Border->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton2->StateCommon->Border->Rounding = 18;
			this->kryptonButton2->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton2->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton2->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton2->StateCommon->Content->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton2->StateCommon->Content->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonButton2->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton2->StateDisabled->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton2->StateDisabled->Content->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton2->StateDisabled->Content->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonButton2->TabIndex = 17;
			this->kryptonButton2->Values->Text = L"Cancel";
			this->kryptonButton2->Click += gcnew System::EventHandler(this, &MyForm1::kryptonButton2_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(510, 410);
			this->Controls->Add(this->kryptonButton2);
			this->Controls->Add(this->kryptonButton1);
			this->Controls->Add(this->CountrytextBox);
			this->Controls->Add(this->CitytextBox);
			this->Controls->Add(this->StreettextBox);
			this->Controls->Add(this->HousetextBox);
			this->Controls->Add(this->EmailAddresstextBox);
			this->Controls->Add(this->pNumberTextBox);
			this->Controls->Add(this->lNameBox);
			this->Controls->Add(this->fNametextBox);
			this->Controls->Add(this->kryptonLabel8);
			this->Controls->Add(this->kryptonLabel7);
			this->Controls->Add(this->kryptonLabel6);
			this->Controls->Add(this->kryptonLabel5);
			this->Controls->Add(this->kryptonLabel4);
			this->Controls->Add(this->kryptonLabel3);
			this->Controls->Add(this->kryptonLabel2);
			this->Controls->Add(this->kryptonLabel1);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"MyForm1";
			this->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::SparkleBlue;
			this->StateActive->Back->Color1 = System::Drawing::Color::Black;
			this->StateActive->Back->Color2 = System::Drawing::Color::Black;
			this->StateActive->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->StateCommon->Back->Color1 = System::Drawing::Color::Black;
			this->StateCommon->Back->Color2 = System::Drawing::Color::Black;
			this->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->StateCommon->Border->Color1 = System::Drawing::Color::Black;
			this->StateCommon->Border->Color2 = System::Drawing::Color::Black;
			this->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->StateCommon->Border->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->StateCommon->Header->Back->Color1 = System::Drawing::Color::Black;
			this->StateCommon->Header->Back->Color2 = System::Drawing::Color::Black;
			this->StateCommon->Header->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->Text = L"Add Contact";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
		   public:
			   string getFirstName() {
				   return msclr::interop::marshal_as<string>(fNametextBox->Text);
			   }
			   string getLastName() {
				   return msclr::interop::marshal_as<string>(lNameBox->Text);
			   }
			   string getNumber() {
				   return msclr::interop::marshal_as<string>(pNumberTextBox->Text);
			   }
			   string getEmail() {
				   return msclr::interop::marshal_as<string>(EmailAddresstextBox->Text);
			   }
			   string  getHouse() {
				   return msclr::interop::marshal_as<string>(HousetextBox->Text);
			   }
			   string  getStreet() {
				   return msclr::interop::marshal_as<string>(StreettextBox->Text);
			   }
			   string getCity() {
				   return msclr::interop::marshal_as<string>(CitytextBox->Text);
			   }
			   string getCountry() {

				   return msclr::interop::marshal_as<string>(CountrytextBox->Text);
			   }
			   bool getChangeMade() {
				   return change_made;
			   }
			   void store_data() {
				   String^ house = HousetextBox->Text;
				   String^ street = StreettextBox->Text;
				   String^ city = CitytextBox->Text;
				   String^ country = CountrytextBox->Text;
				   String^ first_name = fNametextBox->Text;
				   String^ last_name = lNameBox->Text;
				   String^ mobile_number = pNumberTextBox->Text;
				   String^ email_address = EmailAddresstextBox->Text;
				   if (!String::IsNullOrEmpty(first_name) && !String::IsNullOrEmpty(last_name) && !String::IsNullOrEmpty(mobile_number) && !String::IsNullOrEmpty(email_address) && !String::IsNullOrEmpty(street) && !String::IsNullOrEmpty(house) && !String::IsNullOrEmpty(city) && !String::IsNullOrEmpty(country)) {
					   ofstream write;
					   write.open("store.txt",ios::trunc);
					   write << 1 << endl;
					   write << getFirstName() << " " << getLastName() << " " << getNumber() << " " << getEmail() << endl;
					   write << getHouse() << " " << getStreet() << " " << getCity() << " " << getCountry() << endl;
					   write.close();
				   }
				   else {
					   MessageBox::Show("Please Complete The Missing Fields", "Fields Missing", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				   }
			   }
			   private: System::Void kryptonButton1_Click(System::Object^ sender, System::EventArgs^ e) {
				  if (flag == false) {
					  store_data();
					  change_made = false;
					  MessageBox::Show("Contact Added Successfully", "Contact Added", MessageBoxButtons::OK, MessageBoxIcon::Information);
					  this->Close();
				   }
			  else {
					  store_data();
					  change_made = true;
					  MessageBox::Show("Changes Have Been Saved", "Changes Saved", MessageBoxButtons::OK, MessageBoxIcon::Information);
					  //this->Close();
					  this->Hide();
				  }
			   }
					 void contact_detail() {
						 
						 string str = obj->getFirstName();
						 String^ Str = gcnew String(msclr::interop::marshal_as<String^>(str));
						 fNametextBox->Text = Str;
						 str = obj->getLastName();
						 Str = msclr::interop::marshal_as<String^>(str);
						 lNameBox->Text = Str;
						 str = obj->getNumber();
						 Str = msclr::interop::marshal_as<String^>(str);
						 pNumberTextBox->Text = Str;
						 str = obj->getEmail();
						 Str = msclr::interop::marshal_as<String^>(str);
						 EmailAddresstextBox->Text = Str;
						 str = obj->getAddress()->getHouse();
						 Str = msclr::interop::marshal_as<String^>(str);
						 HousetextBox->Text = Str;
						 str = obj->getAddress()->getStreet();
						 Str = msclr::interop::marshal_as<String^>(str);
						 StreettextBox->Text = Str;
						 str = obj->getAddress()->getCity();
						 Str = msclr::interop::marshal_as<String^>(str);
						 CitytextBox->Text = Str;
						 str = obj->getAddress()->getCountry();
						 Str = msclr::interop::marshal_as<String^>(str);
						 CountrytextBox->Text = Str;				
						 delete Str;
					  }
	private: System::Void kryptonButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (flag == true) {
			flag = false;
			change_made = false;
			this->Close();
		}
		else if (MessageBox::Show("Are You Sure", "Discard", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			change_made = false;
			this->Close();
		}
	}
		   private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {

			   if (flag == true) {
				   this->Text = L"Contact Details";
				   kryptonButton1->Text = "Save Changes";
				   kryptonButton2->Text = "Back";
				   contact_detail();
				   
			   }

		   }
};
}
