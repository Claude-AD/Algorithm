using System;

namespace Csharp_book
{
    class Program
    {
        static void Main(string[] args)
        {
            int sum = 0;
            int n = 1;

            while (n <= 1000)
            {
                if (n % 2 == 0)
                {
                    sum += n;
                }
                n++;
            }                           
            Console.WriteLine(sum);     // Output : 250500
            Console.Write('\n');

            /* ---------- while 문 ---------- */

            int sum2 = 0;
            int n2 = 0;

            do
            {
                if (n2 % 2 == 0)
                {
                    sum2 += n2;
                }
            } while (++n2 <= 1000);    

            Console.WriteLine(sum2);    // Output : 250500

            /* ---------- do/while 문 ---------- */
        }
    }
}