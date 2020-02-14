using System;

namespace Csharp_book
{
    class Program
    {
        static void Main(string[] args)
        {
            char ch = 'A';
            Console.WriteLine(ch); // A 문자 출력

            Console.Write('\n'); 
            
            /* -------- char -------- */

            char ch1 = '\t'; // TAB 문자를 표현
            char ch2 = 'T';
            char ch3 = '\n'; // 개행(NEW LINE) 문자를 표현
            char ch4 = 'o';

            Console.Write(ch1);
            Console.Write(ch2);
            Console.Write(ch3);
            Console.WriteLine(ch4);

            Console.Write('\n');

            /* -------- escape sequence -------- */

            char ch5 = '\u2023';
            Console.WriteLine(ch5);

            Console.Write('\n');

            /* -------- unicode -------- */

            char ch6 = '\\';
            Console.WriteLine(ch6);

            Console.Write('\n');

            /* -------- \ 출력 -------- */

        }
    }
}