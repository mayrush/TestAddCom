// MixedMode.h


#pragma once

#include <windows.h>
#include <iostream>

using namespace System;
using namespace System::Runtime::InteropServices;

// data structure for the callback function
struct EventData
{
	int I;
	TCHAR* Message;
};

// callback function prototype
typedef void (*NativeToManaged)(EventData data);


#define INTEROPBRIDGE_API __declspec(dllexport)
 
INTEROPBRIDGE_API void fnInteropBridge(EventData data)
{
    Managed::ManagedClass^ c = gcnew Managed::ManagedClass();
    IntPtr p = Marshal::GetFunctionPointerForDelegate(c->GetDelegate());
 
    NativeToManaged funcPointer = (NativeToManaged) p.ToPointer();
 
    // invoke the delegate
    funcPointer(data);
}