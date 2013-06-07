using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.Runtime.InteropServices; //记得加这个命名空间

namespace TestAddCom
{
    [Guid("7C97BAA1-FFCE-4946-A2B3-5E11E2AA4EF0")]// guid的产生可以通过vs自带的工具.点菜单栏上的Tools ->Create GUID,然后选第4个选项.Registry Format.

    //点按钮New GUID,再点Copy.这样你就可以把产生的guid复制下来,然后粘贴到这个地方来.当然那个大括号得去掉.后面需要用到guid的地方也用这方式产生

    [ComVisible(true)]

    public interface IComTest        //记得用修饰符public
    {

        [DispId(1)]       //如果还要添加其他函数就继续来个[DispId(2)],[DispId(3)]加在函数前面

        int Plus(int one, int two);

    }
}
