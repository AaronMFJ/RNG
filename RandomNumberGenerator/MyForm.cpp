#include "MyForm.h"

using namespace System;     //System provides functions for UI controls
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	//not exactly sure what is going on here
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	RandomNumberGenerator::MyForm form;
	Application::Run(%form);
}
