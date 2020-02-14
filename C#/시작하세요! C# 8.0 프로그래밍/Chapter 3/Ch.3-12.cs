using System;

namespace Csharp_book
{
    class Program
    {
        static void Main(string[] args)
        {
            for (int n = 0; n < 9; n++)
            {
                Console.WriteLine(n + 1);
            }
            // 기본적인 for 문

            int m = 0;
            for (; m < 9; m++)
            {
                Console.WriteLine(m + 1);
            }
            // 초기화 구문 생략 for 문

            int l = 0;
            for (; ; l++)
            {
                if (l >= 9) break;
                Console.WriteLine(l + 1);
            }
            // 초기화 구문, 조건식 생략 for 문

            int f = 0;
            for (; ;)
            {
                if (f >= 9) break;
                Console.WriteLine(f + 1);
                f++;
            }
            // 초기화 구문, 조건식, 반복문 생략 for 문
        }
    }
}