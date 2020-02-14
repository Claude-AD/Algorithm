using System;

namespace Csharp_book
{
    class Program
    {
        static void Main(string[] args)
        {
            int value = 5;
            string result;
            if (value % 2 == 0)
            {
                result = "Even";
            }
            else // 조건이 2개 이상이면 if - else if - else 구문 사용
            {
                result = "Odd";
            }

            Console.WriteLine(result); // Output : Odd
            Console.Write('\n');

            /*---------- if 문 ----------*/

            string result2 = (value % 2 == 0) ? "Even" : "Odd";
            
            Console.WriteLine(result2); // Output : Odd
            Console.Write('\n');

            /*---------- ternary operator ----------*/
        }
    }
}