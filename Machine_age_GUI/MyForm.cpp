#include "MyForm.h"
#include"calc_age.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(){
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Machine_age_GUI::MyForm);
	
}

