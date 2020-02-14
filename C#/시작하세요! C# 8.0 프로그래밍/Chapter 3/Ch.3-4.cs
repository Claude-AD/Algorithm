using System;

namespace Csharp_book
{
    class Program
    {
        static void Main(string[] args)
        {
            string text = "Hello World";
            Console.WriteLine(text); 
            Console.Write('\n');

            /*---------- string ----------*/

            string text2 = "\tHello\nWorld";
            Console.WriteLine(text2);
            Console.Write('\n');

            /*---------- string escape sequence ----------*/

            string text3 = "\"Hello World\"";
            Console.WriteLine(text3);
            Console.Write('\n');

            /*---------- print " by \" ----------*/

            string text4 = @"\tHello\nWorld";
            Console.WriteLine(text4);
            Console.Write('\n');

            /*---------- make \ not escape sequence by using '@' ----------*/

            string text5 = "Hello";
            Console.WriteLine(text5 + " " + "World");
            Console.Write('\n');

            /*---------- String is capable of '+' operation ----------*/
        }
    }
} 