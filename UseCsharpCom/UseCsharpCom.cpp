#pragma unmanaged

#include "stdafx.h"

#include <iostream>

#include <tchar.h>
#include <windows.h>

#import "..\UseCsharpCom\TestAddCom.tlb" named_guids raw_interfaces_only

void _tmain(int argc, _TCHAR* argv[])

{

    CoInitialize(NULL);

   TestAddCom::IComTestPtr ptr;       //类似明志一个指向接口的指针

   ptr.CreateInstance(TestAddCom::CLSID_ComTest);    //实例化一个类

   //这个地方有一点点奇怪我也还没弄懂.在C#中的函数是int Plus(int,int).但类型在这里都转成long了.另外就是我们不能直接

  //来个long a = ptr->Plus(1,2);这样得不到a = 3,反正会出错.这里函数Plus的参数变成三个了long Plus(long,long,long *).其中最后一个指针得两数相加的结果

   long a = 1;

   long * lPtr = &a;

    ptr->Plus(1,2,lPtr);

    std::cout<<a;

}
