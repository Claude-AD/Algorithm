using System;

namespace Csharp_book
{
    class Program
    {
        static void Main (string[] args)
        {
            byte b = 250; // byte -> short
            short s = b;

            Console.WriteLine(s); // Output : 250
            Console.Write('\n');

            /*---------- Implicit conversion ----------*/

            ushort u = 65; // ushort -> char
            char c = (char)u;

            Console.WriteLine(c); // Output : A
            Console.Write('\n');

            int n = 40000; // int -> short
            short s2 = (short)n;
            
            Console.WriteLine(s2); // Output : -25536
            Console.Write('\n');
            
            /*---------- Explicit conversion ----------*/
        }
    }
}