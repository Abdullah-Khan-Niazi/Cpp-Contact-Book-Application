#pragma once
#include"ContactsBook.h"
#include"group.h"
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
	public ref class MyForm2 : public KryptonForm
	{
		bool edit;
		Group* group;
		ContactsBook *obj;
	public:
		MyForm2(void)
		{
			obj = new ContactsBook;
			group = new Group;
			edit = false;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm2(bool flag,ContactsBook *temp)
		{
			obj = new ContactsBook(*temp);
			//group = new Group(temp);
			edit = flag;
				InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ComponentFactory::Krypton::Toolkit::KryptonPalette^ kryptonPalette1;

	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton1;
	private: ComponentFactory::Krypton::Toolkit::KryptonButton^ kryptonButton2;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ kryptonLabel1;
	private: ComponentFactory::Krypton::Toolkit::KryptonLabel^ kryptonLabel2;
	private: ComponentFactory::Krypton::Toolkit::KryptonTextBox^ kryptonTextBox1;
	private: ComponentFactory::Krypton::Toolkit::KryptonCheckedListBox^ kryptonCheckedListBox1;

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
			this->kryptonButton1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonButton2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonButton());
			this->kryptonLabel1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->kryptonLabel2 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonLabel());
			this->kryptonTextBox1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonTextBox());
			this->kryptonCheckedListBox1 = (gcnew ComponentFactory::Krypton::Toolkit::KryptonCheckedListBox());
			this->SuspendLayout();
			// 
			// kryptonPalette1
			// 
			this->kryptonPalette1->BasePaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::Global;
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
			// kryptonButton1
			// 
			this->kryptonButton1->Location = System::Drawing::Point(334, 342);
			this->kryptonButton1->Name = L"kryptonButton1";
			this->kryptonButton1->Size = System::Drawing::Size(136, 38);
			this->kryptonButton1->StateCommon->Back->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Back->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Border->Color1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Border->Color2 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->kryptonButton1->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton1->StateCommon->Border->Rounding = 18;
			this->kryptonButton1->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton1->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton1->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton1->TabIndex = 16;
			this->kryptonButton1->Values->Text = L"Create";
			// 
			// kryptonButton2
			// 
			this->kryptonButton2->Location = System::Drawing::Point(238, 342);
			this->kryptonButton2->Name = L"kryptonButton2";
			this->kryptonButton2->Size = System::Drawing::Size(90, 38);
			this->kryptonButton2->StateCommon->Back->Color1 = System::Drawing::Color::Red;
			this->kryptonButton2->StateCommon->Back->Color2 = System::Drawing::Color::Red;
			this->kryptonButton2->StateCommon->Border->Color1 = System::Drawing::Color::Red;
			this->kryptonButton2->StateCommon->Border->Color2 = System::Drawing::Color::Red;
			this->kryptonButton2->StateCommon->Border->DrawBorders = static_cast<ComponentFactory::Krypton::Toolkit::PaletteDrawBorders>((((ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Top | ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Bottom)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Left)
				| ComponentFactory::Krypton::Toolkit::PaletteDrawBorders::Right));
			this->kryptonButton2->StateCommon->Border->Rounding = 18;
			this->kryptonButton2->StateCommon->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton2->StateCommon->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton2->StateCommon->Content->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonButton2->StateDisabled->Content->ShortText->Color1 = System::Drawing::Color::White;
			this->kryptonButton2->StateDisabled->Content->ShortText->Color2 = System::Drawing::Color::White;
			this->kryptonButton2->TabIndex = 17;
			this->kryptonButton2->Values->Text = L"Cancel";
			this->kryptonButton2->Click += gcnew System::EventHandler(this, &MyForm2::kryptonButton2_Click);
			// 
			// kryptonLabel1
			// 
			this->kryptonLabel1->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitlePanel;
			this->kryptonLabel1->Location = System::Drawing::Point(36, 18);
			this->kryptonLabel1->Name = L"kryptonLabel1";
			this->kryptonLabel1->Size = System::Drawing::Size(132, 23);
			this->kryptonLabel1->StateCommon->ShortText->Color1 = System::Drawing::Color::Black;
			this->kryptonLabel1->StateCommon->ShortText->Color2 = System::Drawing::Color::Black;
			this->kryptonLabel1->StateCommon->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonLabel1->TabIndex = 18;
			this->kryptonLabel1->Values->Text = L"Select Contacts";
			// 
			// kryptonLabel2
			// 
			this->kryptonLabel2->LabelStyle = ComponentFactory::Krypton::Toolkit::LabelStyle::TitleControl;
			this->kryptonLabel2->Location = System::Drawing::Point(36, 300);
			this->kryptonLabel2->Name = L"kryptonLabel2";
			this->kryptonLabel2->Size = System::Drawing::Size(154, 21);
			this->kryptonLabel2->StateCommon->ShortText->Color1 = System::Drawing::Color::Black;
			this->kryptonLabel2->StateCommon->ShortText->Color2 = System::Drawing::Color::Black;
			this->kryptonLabel2->StateCommon->ShortText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->kryptonLabel2->TabIndex = 19;
			this->kryptonLabel2->Values->Text = L"Enter Group Name :";
			// 
			// kryptonTextBox1
			// 
			this->kryptonTextBox1->Location = System::Drawing::Point(227, 300);
			this->kryptonTextBox1->Name = L"kryptonTextBox1";
			this->kryptonTextBox1->Size = System::Drawing::Size(243, 23);
			this->kryptonTextBox1->TabIndex = 20;
			// 
			// kryptonCheckedListBox1
			// 
			this->kryptonCheckedListBox1->Location = System::Drawing::Point(36, 47);
			this->kryptonCheckedListBox1->Name = L"kryptonCheckedListBox1";
			this->kryptonCheckedListBox1->Size = System::Drawing::Size(434, 229);
			this->kryptonCheckedListBox1->TabIndex = 21;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(510, 410);
			this->Controls->Add(this->kryptonCheckedListBox1);
			this->Controls->Add(this->kryptonTextBox1);
			this->Controls->Add(this->kryptonLabel2);
			this->Controls->Add(this->kryptonLabel1);
			this->Controls->Add(this->kryptonButton2);
			this->Controls->Add(this->kryptonButton1);
			this->ForeColor = System::Drawing::Color::White;
			this->Name = L"MyForm2";
			this->PaletteMode = ComponentFactory::Krypton::Toolkit::PaletteMode::SparkleBlue;
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
			this->Text = L"Create Groups";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
		if (edit == true) {
			this->Text = L"Edit Group";
			kryptonButton1->Text = "Save Changes";
			kryptonLabel2->Text = "Enter New Group Name :";
			kryptonLabel1->Text = "Group Members";
			//kryptonCheckedListBox1->Items->Add("It Worked !!!");
			int prev_count = obj->total_contacts();
			for (int i = 0; i < prev_count; i++) {
				string str = obj->getContact()[i].getFirstName() + " " + obj->getContact()[i].getLastName();
				String^ name = msclr::interop::marshal_as<String^>(str);
				kryptonCheckedListBox1->Items->Add(name);
				kryptonCheckedListBox1->SetItemChecked(i, true);
		    }
			obj->load_from_file("contacts.txt");
			obj->merge_duplicates();
			for (int i = prev_count; i < obj->total_contacts(); i++) {
				string str = obj->getContact()[i].getFirstName() + " " + obj->getContact()[i].getLastName();
				String^ name = msclr::interop::marshal_as<String^>(str);
				kryptonCheckedListBox1->Items->Add(name);
			}
			kryptonCheckedListBox1->Refresh();
	}
}
private: System::Void kryptonButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
