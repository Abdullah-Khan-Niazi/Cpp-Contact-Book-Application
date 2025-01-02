#include "MyForm.h"
#include "MyForm1.h"
#include <Windows.h>
#include <msclr/marshal_cppstd.h>
#include <array> // Ensure this header is not included if not needed

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main() {
    // array<String^>^ args;
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Instantiate and run your Windows Forms
    ContactBookApplication::MyForm form;
    ContactBookApplication::MyForm1 form1;
    Application::Run(% form);

    return 0;
}
