#pragma unmanaged

#include "stdafx.h"

#include <iostream>

#include <tchar.h>
#include <windows.h>

#import "..\UseCsharpCom\TestAddCom.tlb" named_guids raw_interfaces_only

void _tmain(int argc, _TCHAR* argv[])

{

    CoInitialize(NULL);

   TestAddCom::IComTestPtr ptr;       //������־һ��ָ��ӿڵ�ָ��

   ptr.CreateInstance(TestAddCom::CLSID_ComTest);    //ʵ����һ����

   //����ط���һ��������Ҳ��ûŪ��.��C#�еĺ�����int Plus(int,int).�����������ﶼת��long��.����������ǲ���ֱ��

  //����long a = ptr->Plus(1,2);�����ò���a = 3,���������.���ﺯ��Plus�Ĳ������������long Plus(long,long,long *).�������һ��ָ���������ӵĽ��

   long a = 1;

   long * lPtr = &a;

    ptr->Plus(1,2,lPtr);

    std::cout<<a;

}
