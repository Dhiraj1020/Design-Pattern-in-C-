#include <iostream>
#include "Setting.h"

//consider this function in differnet differnt file/classes
void TestFunction1();
void TestFunction2();

int main(void)
{
	TestFunction1();
	TestFunction2();
	return 1;
}


void TestFunction1()
{
	CSetting::GetSettingIntance()->SetXYZSetting(true);
}

void TestFunction2()
{
	if(true == CSetting::GetSettingIntance()->GetXYZSetting())
	{
		std::cout << "XYZ setting is true" << std::endl;
	}
	else
	{
		std::cout << "XYZ setting is false" << std::endl;
	}
}