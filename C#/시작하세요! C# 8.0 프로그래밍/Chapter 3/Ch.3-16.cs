using System;

namespace Csharp_book
{
    class Program
    {
        static void Main(string[] args)
        {
            for (int x = 2; x < 10; x++)
            {
                for (int y = 2; y < 10; y++)
                {
                    Console.WriteLine(x + "*" + y + "=" + (x * y));

                    if (x == 5 && y == 8) goto LOOP_EXIT;
                }
            }
        LOOP_EXIT:;
        }
    }
}