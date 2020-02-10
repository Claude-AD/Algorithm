using System;

namespace Csharp_book
{
    class Program
    {
        static void Main(string[] args)
        {
            float f = 5.2f; // float 형식의 값은 숫자 값 다음에 f를 붙여야 하고
            double d = 10.5;
            decimal money = 200.099m; // decimal의 경우에는 소수점을 포함하는 경우 m을 붙여야 한다.

            Console.WriteLine(f);
            Console.WriteLine(d);
            Console.WriteLine(money);
        }
    }
}
