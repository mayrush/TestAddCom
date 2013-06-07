using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace Managed
{
    public class ManagedClass
    {
        [StructLayout(LayoutKind.Sequential, CharSet = CharSet.Unicode)]
        public struct EventData
        {
            public int I;
            public string Message;
        }


        [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
        public delegate void CallBackDelegate(EventData data);


        private CallBackDelegate _delegate;

        public ManagedClass()
        {
            _delegate = new CallBackDelegate(this.Foo);
        }

        public CallBackDelegate GetDelegate()
        {
            return _delegate;
        }

        public void Foo(EventData data)
        {
            Debug.WriteLine(data.I);
            Debug.WriteLine(data.Message);
        }

    }

   


}
