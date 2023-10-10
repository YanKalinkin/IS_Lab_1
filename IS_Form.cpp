#include "IS_Form.h"
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;
using namespace ISForms11;
[STAThread]
int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew IS_Form());

	return 0;
}
