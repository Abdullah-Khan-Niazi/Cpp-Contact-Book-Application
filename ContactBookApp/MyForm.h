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

namespace ContactBookApplication {

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
	public ref class MyForm : public KryptonForm
	{
	private:
		ContactsBook* obj;
		bool search_flag;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;


		   int* arr;
	public:
		MyForm(void)
		{
			search_flag = false;
			arr = new int;
			obj = new ContactsBook;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ComponentFactory::Krypton::Toolkit::KryptonPalette^ kryptonPalette1;
	private: ComponentFactory::Krypton::Toolkit::KryptonSeparator^ kryptonSeparator1;

	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton2;

	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton4;
	private: ComponentFactory::Krypton::Toolkit::KryptonListBox^ kryptonListBox1;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton1;

	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton6;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton3;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton5;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton7;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton8;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton9;




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
			this->kryptonSeparator1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonSeparator());
			this->kryptonButton2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton4 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonListBox1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonListBox());
			this->kryptonTextBox1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->kryptonButton1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton6 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton3 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton5 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton7 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton8 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton9 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonSeparator1))->BeginInit();
			this->SuspendLayout();
			// 
			// kryptonPalette1
			// 
			this->kryptonPalette1->BasePaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Global;
			this->kryptonPalette1->ButtonSpecs->FormClose->ColorMap = System::Drawing::Color::Red;
			this->kryptonPalette1->ButtonSpecs->FormMax->ColorMap = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonPalette1->ButtonSpecs->FormMin->ColorMap = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonPalette1->FormStyles->FormCommon->StateActive->Back->Color1 = System::Drawing::Color::Black;
			this->kryptonPalette1->FormStyles->FormCommon->StateActive->Back->Color2 = System::Drawing::Color::Black;
			this->kryptonPalette1->FormStyles->FormCommon->StateActive->Border->Color1 = System::Drawing::Color::Black;
			this->kryptonPalette1->FormStyles->FormCommon->StateActive->Border->Color2 = System::Drawing::Color::Black;
			this->kryptonPalette1->FormStyles->FormCommon->StateActive->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonPalette1->HeaderStyles->HeaderCommon->StateCommon->Back->Color1 = System::Drawing::Color::Black;
			this->kryptonPalette1->HeaderStyles->HeaderCommon->StateCommon->Back->Color2 = System::Drawing::Color::Black;
			this->kryptonPalette1->HeaderStyles->HeaderCommon->StateCommon->Border->Color1 = System::Drawing::Color::Black;
			this->kryptonPalette1->HeaderStyles->HeaderCommon->StateCommon->Border->Color2 = System::Drawing::Color::Black;
			this->kryptonPalette1->HeaderStyles->HeaderCommon->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			// 
			// kryptonSeparator1
			// 
			this->kryptonSeparator1->Cursor = System::Windows::Forms::Cursors::Default;
			this->kryptonSeparator1->Location = System::Drawing::Point(-5, 0);
			this->kryptonSeparator1->Name = L"kryptonSeparator1";
			this->kryptonSeparator1->SeparatorStyle = ComponentFactory::Krypton::Toolkit::SeparatorStyle::Custom1;
			this->kryptonSeparator1->Size = System::Drawing::Size(122, 467);
			this->kryptonSeparator1->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateDisabled->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateDisabled->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateNormal->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateNormal->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->TabIndex = 0;
			// 
			// kryptonButton2
			// 
			this->kryptonButton2->Location = System::Drawing::Point(-5, 142);
			this->kryptonButton2->Name = L"kryptonButton2";
			this->kryptonButton2->Size = System::Drawing::Size(122, 25);
			this->kryptonButton2->StateCommon->Back->Color1 = System::Drawing::Color::Gray;
			this->kryptonButton2->StateCommon->Back->Color2 = System::Drawing::Color::Gray;
			this->kryptonButton2->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton2->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton2->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton2->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton2->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton2->TabIndex = 6;
			this->kryptonButton2->Values->Text = L"Groups";
			this->kryptonButton2->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton2_Click);
			// 
			// kryptonButton4
			// 
			this->kryptonButton4->Location = System::Drawing::Point(-5, 120);
			this->kryptonButton4->Name = L"kryptonButton4";
			this->kryptonButton4->Size = System::Drawing::Size(122, 25);
			this->kryptonButton4->StateCommon->Back->Color1 = System::Drawing::Color::Gray;
			this->kryptonButton4->StateCommon->Back->Color2 = System::Drawing::Color::Gray;
			this->kryptonButton4->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton4->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton4->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton4->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton4->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton4->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton4->TabIndex = 8;
			this->kryptonButton4->Values->Text = L"Add Contacts";
			this->kryptonButton4->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton4_Click);
			// 
			// kryptonListBox1
			// 
			this->kryptonListBox1->Location = System::Drawing::Point(142, 67);
			this->kryptonListBox1->Name = L"kryptonListBox1";
			this->kryptonListBox1->Palette = this->kryptonPalette1;
			this->kryptonListBox1->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
			this->kryptonListBox1->Size = System::Drawing::Size(547, 383);
			this->kryptonListBox1->StateActive->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->kryptonListBox1->StateActive->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->kryptonListBox1->StateActive->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->kryptonListBox1->StateActive->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->kryptonListBox1->StateActive->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonListBox1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonListBox1->StateCommon->Border->Rounding = 10;
			this->kryptonListBox1->TabIndex = 2;
			this->kryptonListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::kryptonListBox1_SelectedIndexChanged);
			// 
			// kryptonTextBox1
			// 
			this->kryptonTextBox1->InputControlStyle = ComponentFactory::Krypton::Toolkit::InputControlStyle::Ribbon;
			this->kryptonTextBox1->Location = System::Drawing::Point(142, 23);
			this->kryptonTextBox1->Name = L"kryptonTextBox1";
			this->kryptonTextBox1->Size = System::Drawing::Size(422, 24);
			this->kryptonTextBox1->StateCommon->Back->Color1 = System::Drawing::Color::White;
			this->kryptonTextBox1->StateCommon->Border->Color1 = System::Drawing::Color::White;
			this->kryptonTextBox1->StateCommon->Border->Color2 = System::Drawing::Color::White;
			this->kryptonTextBox1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonTextBox1->StateCommon->Border->Rounding = 4;
			this->kryptonTextBox1->StateCommon->Content->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Pixel, static_cast<System::Byte>(0)));
			this->kryptonTextBox1->TabIndex = 1;
			this->kryptonTextBox1->Text = L" ";
			// 
			// kryptonButton1
			// 
			this->kryptonButton1->Location = System::Drawing::Point(612, 23);
			this->kryptonButton1->Name = L"kryptonButton1";
			this->kryptonButton1->Palette = this->kryptonPalette1;
			this->kryptonButton1->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
			this->kryptonButton1->Size = System::Drawing::Size(77, 24);
			this->kryptonButton1->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton1->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton1->StateCommon->Back->ColorAngle = 45;
			this->kryptonButton1->StateCommon->Back->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton1->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton1->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton1->StateCommon->Border->ColorAngle = 45;
			this->kryptonButton1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton1->StateCommon->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton1->StateCommon->Border->Rounding = 11;
			this->kryptonButton1->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton1->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton1->StateCommon->Content->ShortText->ColorAngle = 45;
			this->kryptonButton1->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Content->ShortText->Hint = ComponentFactory::Krypton::Toolkit::PaletteTextHint::AntiAlias;
			this->kryptonButton1->StateNormal->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton1->StateNormal->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton1->StateNormal->Back->ColorAngle = 45;
			this->kryptonButton1->StateNormal->Back->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton1->StateNormal->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton1->StateNormal->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton1->StateNormal->Border->ColorAngle = 45;
			this->kryptonButton1->StateNormal->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton1->StateNormal->Border->GraphicsHint = ComponentFactory::Krypton::Toolkit::PaletteGraphicsHint::AntiAlias;
			this->kryptonButton1->TabIndex = 0;
			this->kryptonButton1->Values->Text = L"Search";
			this->kryptonButton1->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton1_Click);
			// 
			// kryptonButton6
			// 
			this->kryptonButton6->Location = System::Drawing::Point(-5, 210);
			this->kryptonButton6->Name = L"kryptonButton6";
			this->kryptonButton6->Size = System::Drawing::Size(122, 25);
			this->kryptonButton6->StateCommon->Back->Color1 = System::Drawing::Color::Gray;
			this->kryptonButton6->StateCommon->Back->Color2 = System::Drawing::Color::Gray;
			this->kryptonButton6->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton6->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton6->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton6->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton6->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton6->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton6->TabIndex = 10;
			this->kryptonButton6->Values->Text = L"Sort by Last Name";
			this->kryptonButton6->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton6_Click);
			// 
			// kryptonButton3
			// 
			this->kryptonButton3->Location = System::Drawing::Point(-5, 164);
			this->kryptonButton3->Name = L"kryptonButton3";
			this->kryptonButton3->Size = System::Drawing::Size(122, 25);
			this->kryptonButton3->StateCommon->Back->Color1 = System::Drawing::Color::Gray;
			this->kryptonButton3->StateCommon->Back->Color2 = System::Drawing::Color::Gray;
			this->kryptonButton3->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton3->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton3->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton3->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton3->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton3->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton3->TabIndex = 7;
			this->kryptonButton3->Values->Text = L"Merge Duplicates";
			this->kryptonButton3->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton3_Click);
			// 
			// kryptonButton5
			// 
			this->kryptonButton5->Location = System::Drawing::Point(-5, 188);
			this->kryptonButton5->Name = L"kryptonButton5";
			this->kryptonButton5->Size = System::Drawing::Size(122, 25);
			this->kryptonButton5->StateCommon->Back->Color1 = System::Drawing::Color::Gray;
			this->kryptonButton5->StateCommon->Back->Color2 = System::Drawing::Color::Gray;
			this->kryptonButton5->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton5->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton5->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton5->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton5->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton5->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton5->TabIndex = 9;
			this->kryptonButton5->Values->Text = L"Sort by First Name";
			this->kryptonButton5->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton5_Click);
			// 
			// kryptonButton7
			// 
			this->kryptonButton7->Location = System::Drawing::Point(-5, 232);
			this->kryptonButton7->Name = L"kryptonButton7";
			this->kryptonButton7->Size = System::Drawing::Size(122, 25);
			this->kryptonButton7->StateCommon->Back->Color1 = System::Drawing::Color::Gray;
			this->kryptonButton7->StateCommon->Back->Color2 = System::Drawing::Color::Gray;
			this->kryptonButton7->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton7->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton7->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton7->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton7->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton7->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton7->TabIndex = 11;
			this->kryptonButton7->Values->Text = L"Import From File";
			this->kryptonButton7->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton7_Click);
			// 
			// kryptonButton8
			// 
			this->kryptonButton8->Location = System::Drawing::Point(-5, 253);
			this->kryptonButton8->Name = L"kryptonButton8";
			this->kryptonButton8->Size = System::Drawing::Size(122, 25);
			this->kryptonButton8->StateCommon->Back->Color1 = System::Drawing::Color::Gray;
			this->kryptonButton8->StateCommon->Back->Color2 = System::Drawing::Color::Gray;
			this->kryptonButton8->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton8->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton8->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton8->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton8->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton8->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton8->TabIndex = 12;
			this->kryptonButton8->Values->Text = L"Export to File";
			this->kryptonButton8->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton8_Click);
			// 
			// kryptonButton9
			// 
			this->kryptonButton9->Location = System::Drawing::Point(570, 23);
			this->kryptonButton9->Name = L"kryptonButton9";
			this->kryptonButton9->Size = System::Drawing::Size(36, 24);
			this->kryptonButton9->StateCommon->Back->Color1 = System::Drawing::Color::Red;
			this->kryptonButton9->StateCommon->Back->Color2 = System::Drawing::Color::Red;
			this->kryptonButton9->StateCommon->Border->Color1 = System::Drawing::Color::Red;
			this->kryptonButton9->StateCommon->Border->Color2 = System::Drawing::Color::Red;
			this->kryptonButton9->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton9->StateCommon->Border->Rounding = 6;
			this->kryptonButton9->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton9->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton9->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton9->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton9->StateDisabled->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton9->TabIndex = 18;
			this->kryptonButton9->Values->Text = L"X";
			this->kryptonButton9->Visible = false;
			this->kryptonButton9->Click += gcnew System::EventHandler(this, &MyForm::kryptonButton9_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 376);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Developed By :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(29, 398);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 26);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Abdullah Niazi\r\n23F-0017";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(712, 462);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->kryptonButton9);
			this->Controls->Add(this->kryptonButton8);
			this->Controls->Add(this->kryptonButton7);
			this->Controls->Add(this->kryptonButton6);
			this->Controls->Add(this->kryptonButton5);
			this->Controls->Add(this->kryptonButton1);
			this->Controls->Add(this->kryptonButton3);
			this->Controls->Add(this->kryptonButton2);
			this->Controls->Add(this->kryptonListBox1);
			this->Controls->Add(this->kryptonTextBox1);
			this->Controls->Add(this->kryptonButton4);
			this->Controls->Add(this->kryptonSeparator1);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"MyForm";
			this->Palette = this->kryptonPalette1;
			this->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Custom;
			this->StateActive->Back->Color1 = System::Drawing::Color::Black;
			this->StateActive->Back->Color2 = System::Drawing::Color::Black;
			this->StateCommon->Back->Color1 = System::Drawing::Color::Black;
			this->StateCommon->Back->Color2 = System::Drawing::Color::Black;
			this->StateCommon->Border->Color1 = System::Drawing::Color::Black;
			this->StateCommon->Border->Color2 = System::Drawing::Color::Black;
			this->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->StateCommon->Header->Back->Color1 = System::Drawing::Color::Black;
			this->StateCommon->Header->Back->Color2 = System::Drawing::Color::Black;
			this->StateCommon->Header->Border->Color1 = System::Drawing::Color::Black;
			this->StateCommon->Header->Border->Color2 = System::Drawing::Color::Black;
			this->StateCommon->Header->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->StateCommon->Header->Content->Padding = System::Windows::Forms::Padding(10, -1, -1, -1);
			this->Text = L"Contact Book";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonSeparator1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		void RefreshContactList() {
			// Clear the items in listBox1
			kryptonListBox1->Items->Clear();
			// Repopulate listBox1 with the newly loaded contacts
			for (int i = 0; i < obj->total_contacts(); i++) {
				string str = obj->getContact()[i].getFirstName() + " " + obj->getContact()[i].getLastName();
				String^ name = gcnew String(msclr::interop::marshal_as<String^>(str));
				kryptonListBox1->Items->Add(name);
				delete name;
			}
			kryptonTextBox1->Clear();
			// Refresh listBox1
			kryptonListBox1->Refresh();
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		obj->load_from_file("contacts.txt");
		RefreshContactList();
	}

	private: System::Void kryptonListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		    int n = 0;
			bool flag = true;
			if (search_flag == false) {
			n = kryptonListBox1->SelectedIndex;
			}
			else {
				n = arr[kryptonListBox1->SelectedIndex];
			}
			MyForm1^ ContactDetails = gcnew MyForm1(obj->getContact(n), flag);
			this->Hide();
			ContactDetails->ShowDialog();
			if (ContactDetails->getChangeMade() == true) {
				obj->delete_contact(n);
				obj->load_from_file("store.txt");
				obj->save_to_file("contacts.txt");
			}
			this->Show();
			RefreshContactList();
			delete ContactDetails;
		
	}
private: System::Void kryptonButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ addContact = gcnew MyForm1();
	Form::Hide();
	addContact->ShowDialog();
	this->Show();
	//ifstream read;
	//string house;
	//string street;
	//string city;
	//string country;
	//string first_name;
	//string last_name;
	//string mobile_number;
	//string email_address;
	//read.open("store.txt");
	//read >> first_name;
	//read >> last_name;
	//read >> mobile_number;
	//read >> email_address;
	//read >> house;
	//read >> street;
	//read >> city;
	//read >> country;
	//Address temp_obj(house, street, city, country);
	//Contact tempContact(first_name, last_name, mobile_number, email_address, temp_obj);
	//obj->add_contact(tempContact);
	obj->load_from_file("store.txt");
	obj->save_to_file("contacts.txt");
	RefreshContactList();
	delete addContact;
}
private: System::Void kryptonButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm3^ Group = gcnew MyForm3();
	this->Hide();
	Group->ShowDialog();
	this->Show();
	delete Group;
}
private: System::Void kryptonButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	//merge
	obj->merge_duplicates();

	RefreshContactList();
	MessageBox::Show("Contacts Merged!", "Merge Contacts", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void kryptonButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	//sort f
	obj->print_contacts_sorted("F");

	RefreshContactList();
	MessageBox::Show("Contacts Sorted Successfully", "Contacts Sorted", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void kryptonButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	////sort l
	obj->print_contacts_sorted("L");

	RefreshContactList();
	MessageBox::Show("Contacts Sorted Successfully", "Contacts Sorted", MessageBoxButtons::OK, MessageBoxIcon::Information);

}
private: System::Void kryptonButton7_Click(System::Object^ sender, System::EventArgs^ e) {
	////import
	obj->load_from_file("contacts.txt");

	RefreshContactList();
	MessageBox::Show("Contacts Loaded From the File", "Contacts Loaded", MessageBoxButtons::OK, MessageBoxIcon::Information);

}

private: System::Void kryptonButton8_Click(System::Object^ sender, System::EventArgs^ e) {
	//export
	obj->save_to_file("contacts.txt");
	MessageBox::Show("Contacts Saved in the File", "Contacts Saved", MessageBoxButtons::OK, MessageBoxIcon::Information);
	RefreshContactList();

}
private: System::Void kryptonButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ search = kryptonTextBox1->Text;
	if (!String::IsNullOrEmpty(search)) {
		search_flag = true;
		kryptonButton9->Visible = true;
		kryptonListBox1->Items->Clear();
		
		string str = msclr::interop::marshal_as<string>(search);
		arr = obj->advanceSearch(str);
		int count = 0;
		for (int i = 0; i < obj->total_contacts(); i++) {
			if (arr[i] >= 0) {
				count++;
			}
		}
		string str1;
		for (int i = 0; i < count; i++) {
			str = obj->getContact()[arr[i]].getFirstName() + " ";
			string str1 = str + obj->getContact()[arr[i]].getLastName();
			String^ name = msclr::interop::marshal_as<String^>(str1);
			kryptonListBox1->Items->Add(name);
			//kryptonListBox1->Refresh();
		}
		kryptonListBox1->Refresh();
	}
}
private: System::Void kryptonButton9_Click(System::Object^ sender, System::EventArgs^ e) {

	kryptonButton9->Visible = false;
	kryptonListBox1->Items->Clear();
	RefreshContactList();
}

};
}
