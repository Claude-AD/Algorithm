using System;

namespace Csharp_book
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[] { 1, 2, 3, 4, 5 };

            foreach(int elem in arr)
            {
                Console.WriteLine(elem);
            }
        }
    }
}