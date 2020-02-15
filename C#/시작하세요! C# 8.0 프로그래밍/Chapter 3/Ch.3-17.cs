// 1000보다 작은 자연수 중 3 또는 5의 배수의 합을 구하라.

using System;

namespace Csharp_book
{
    class Program
    {
        static void Main(string[] args)
        {
            int sum = 0;

            for (int i = 1; i < 1000; i++)
            {
               if (i % 3 == 0 || i % 5 == 0)
                {
                    sum += i;
                }
            }
            Console.WriteLine(sum);
        }
    }
}