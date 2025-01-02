#pragma once
#include"Contact.h"
#include"Group.h"
#include"MyForm2.h";
#include <msclr/marshal_cppstd.h>
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
	public ref class MyForm3 : public KryptonForm
	{
	private:
	private: ComponentFactory::Krypton::Toolkit::KryptonSeparator^ kryptonSeparator1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton4;
	private: ComponentFactory::Krypton::Toolkit::KryptonListBox^ kryptonListBox1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton3;
		   int index;
		   Group* group;
	public:
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			index = 0;
			group = new Group(1);
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ComponentFactory::Krypton::Toolkit::KryptonPalette^ kryptonPalette1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton2;

	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ kryptonLabel1;
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
			this->kryptonButton2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonLabel1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->kryptonSeparator1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonSeparator());
			this->kryptonButton4 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonListBox1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonListBox());
			this->kryptonButton1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton3 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonSeparator1))->BeginInit();
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
			// kryptonButton2
			// 
			this->kryptonButton2->Location = System::Drawing::Point(475, 374);
			this->kryptonButton2->Name = L"kryptonButton2";
			this->kryptonButton2->Size = System::Drawing::Size(90, 38);
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
			this->kryptonButton2->Values->Text = L"Return";
			this->kryptonButton2->Click += gcnew System::EventHandler(this, &MyForm3::kryptonButton2_Click);
			// 
			// kryptonLabel1
			// 
			this->kryptonLabel1->Location = System::Drawing::Point(124, 12);
			this->kryptonLabel1->Name = L"kryptonLabel1";
			this->kryptonLabel1->Size = System::Drawing::Size(78, 26);
			this->kryptonLabel1->StateCommon->ShortText->Color1 = System::Drawing::Color::Black;
			this->kryptonLabel1->StateCommon->ShortText->Color2 = System::Drawing::Color::Black;
			this->kryptonLabel1->StateCommon->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonLabel1->StateCommon->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonLabel1->StateCommon->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonLabel1->TabIndex = 19;
			this->kryptonLabel1->Values->Text = L"Groups";
			// 
			// kryptonSeparator1
			// 
			this->kryptonSeparator1->Cursor = System::Windows::Forms::Cursors::Default;
			this->kryptonSeparator1->Location = System::Drawing::Point(-2, -1);
			this->kryptonSeparator1->Name = L"kryptonSeparator1";
			this->kryptonSeparator1->SeparatorStyle = ComponentFactory::Krypton::Toolkit::SeparatorStyle::Custom1;
			this->kryptonSeparator1->Size = System::Drawing::Size(111, 445);
			this->kryptonSeparator1->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonSeparator1->StateDisabled->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateDisabled->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateDisabled->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonSeparator1->StateNormal->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateNormal->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateNormal->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonSeparator1->StatePressed->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StatePressed->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StatePressed->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonSeparator1->StateTracking->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateTracking->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonSeparator1->StateTracking->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonSeparator1->TabIndex = 20;
			// 
			// kryptonButton4
			// 
			this->kryptonButton4->Location = System::Drawing::Point(0, 151);
			this->kryptonButton4->Name = L"kryptonButton4";
			this->kryptonButton4->Size = System::Drawing::Size(109, 25);
			this->kryptonButton4->StateCommon->Back->Color1 = System::Drawing::Color::Gray;
			this->kryptonButton4->StateCommon->Back->Color2 = System::Drawing::Color::Gray;
			this->kryptonButton4->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton4->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton4->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->kryptonButton4->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton4->StateCommon->Border->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton4->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton4->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton4->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton4->StateCommon->Content->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton4->StateCommon->Content->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonButton4->TabIndex = 21;
			this->kryptonButton4->Values->Text = L"Create a Group";
			this->kryptonButton4->Click += gcnew System::EventHandler(this, &MyForm3::kryptonButton4_Click);
			// 
			// kryptonListBox1
			// 
			this->kryptonListBox1->Location = System::Drawing::Point(124, 53);
			this->kryptonListBox1->Name = L"kryptonListBox1";
			this->kryptonListBox1->Size = System::Drawing::Size(441, 301);
			this->kryptonListBox1->TabIndex = 22;
			this->kryptonListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm3::kryptonListBox1_SelectedIndexChanged);
			// 
			// kryptonButton1
			// 
			this->kryptonButton1->Location = System::Drawing::Point(368, 374);
			this->kryptonButton1->Name = L"kryptonButton1";
			this->kryptonButton1->Size = System::Drawing::Size(90, 38);
			this->kryptonButton1->StateCommon->Back->Color1 = System::Drawing::Color::Red;
			this->kryptonButton1->StateCommon->Back->Color2 = System::Drawing::Color::Red;
			this->kryptonButton1->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton1->StateCommon->Border->Color1 = System::Drawing::Color::Red;
			this->kryptonButton1->StateCommon->Border->Color2 = System::Drawing::Color::Red;
			this->kryptonButton1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton1->StateCommon->Border->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton1->StateCommon->Border->Rounding = 18;
			this->kryptonButton1->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton1->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton1->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Content->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton1->StateCommon->Content->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonButton1->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton1->StateDisabled->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton1->StateDisabled->Content->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton1->StateDisabled->Content->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonButton1->TabIndex = 23;
			this->kryptonButton1->Values->Text = L"Edit";
			this->kryptonButton1->Visible = false;
			this->kryptonButton1->Click += gcnew System::EventHandler(this, &MyForm3::kryptonButton1_Click);
			// 
			// kryptonButton3
			// 
			this->kryptonButton3->Location = System::Drawing::Point(263, 374);
			this->kryptonButton3->Name = L"kryptonButton3";
			this->kryptonButton3->Size = System::Drawing::Size(90, 38);
			this->kryptonButton3->StateCommon->Back->Color1 = System::Drawing::Color::Red;
			this->kryptonButton3->StateCommon->Back->Color2 = System::Drawing::Color::Red;
			this->kryptonButton3->StateCommon->Back->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton3->StateCommon->Border->Color1 = System::Drawing::Color::Red;
			this->kryptonButton3->StateCommon->Border->Color2 = System::Drawing::Color::Red;
			this->kryptonButton3->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton3->StateCommon->Border->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton3->StateCommon->Border->Rounding = 18;
			this->kryptonButton3->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton3->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton3->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton3->StateCommon->Content->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton3->StateCommon->Content->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonButton3->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton3->StateDisabled->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton3->StateDisabled->Content->ShortText->ImageStyle = ComponentFactory::Krypton::Toolkit::PaletteImageStyle::Inherit;
			this->kryptonButton3->StateDisabled->Content->ShortText->Trim = ComponentFactory::Krypton::Toolkit::PaletteTextTrim::Inherit;
			this->kryptonButton3->TabIndex = 24;
			this->kryptonButton3->Values->Text = L"Delete";
			this->kryptonButton3->Visible = false;
			this->kryptonButton3->Click += gcnew System::EventHandler(this, &MyForm3::kryptonButton3_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(591, 441);
			this->Controls->Add(this->kryptonButton3);
			this->Controls->Add(this->kryptonButton1);
			this->Controls->Add(this->kryptonListBox1);
			this->Controls->Add(this->kryptonButton4);
			this->Controls->Add(this->kryptonSeparator1);
			this->Controls->Add(this->kryptonLabel1);
			this->Controls->Add(this->kryptonButton2);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"MyForm3";
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
			this->Text = L"Contact Book";
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->kryptonSeparator1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void loadGroups() {
			kryptonListBox1->Items->Clear();
			for (int i = 0; i < group->getGroupCount(); i++) {
				string name = group->getName(i);
				String^ Str = msclr::interop::marshal_as<String^>(name);
				kryptonListBox1->Items->Add(Str);
			}
			kryptonListBox1->Refresh();
		}
	public: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e) {
		/*if (showGroups == true) {*/
		group->load_group_from_file("group.txt", "group_member.txt");
		loadGroups();
	}

	private: System::Void kryptonButton4_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm2^ CreateGroup = gcnew MyForm2;
		this->Hide();
		CreateGroup->ShowDialog();
		this->Show();
		delete CreateGroup;
	}
	private: System::Void kryptonListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		kryptonButton1->Visible = true;
		kryptonButton3->Visible = true;
		index = kryptonListBox1->SelectedIndex;

	}
	private: System::Void kryptonButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		bool edit = true;
		MyForm2^ EditGroup = gcnew MyForm2(edit, group[index].getContactBook());
		this->Hide();
		EditGroup->ShowDialog();
		this->Show();
	}
	private: System::Void kryptonButton2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
	}
	private: System::Void kryptonButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		group->delete_group(index);
		kryptonListBox1->Items->RemoveAt(index);
		kryptonListBox1->Refresh();
		kryptonButton1->Visible = false;
		kryptonButton3->Visible = false;
		MessageBox::Show("Selected Group Has Been Deleted", "Group Deleted", MessageBoxButtons::OK, MessageBoxIcon::Information);
		//kryptonListBox1->Items->Clear();

	}
	};
}
