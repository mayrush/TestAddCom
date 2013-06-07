using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.Runtime.InteropServices;

namespace TestAddCom
{

    [Guid("466EF975-B689-46DA-86D1-42C01A49C8B4")]
    [ClassInterface(ClassInterfaceType.None)]
    public class ComTest : IComTest
    {

        public int Plus(int a, int b)
        {
            int result = a + b;
            System.Windows.Forms.MessageBox.Show("result= " + result);
            return a + b;

        }
    }
}
