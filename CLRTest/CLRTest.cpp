// CLRTest.cpp: 主项目文件。

#include "stdafx.h"

using namespace System;
using namespace  TestAddCom;


int main(array<System::String ^> ^args)
{
	Console::WriteLine(L"Hello World");

	ComTest^ test=gcnew ComTest();

	int result =  test->Plus(1,2);

	Console::WriteLine(L"result:"+result);

	return 0;
}
