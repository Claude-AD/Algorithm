using System;

namespace Csharp_book
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = 50;
            Console.WriteLine(n++);     // postfix, Output : 50, n = 51

            n = 50;
            Console.WriteLine(++n);     // prefix, Output : 51, n = 51
        }
    }
}