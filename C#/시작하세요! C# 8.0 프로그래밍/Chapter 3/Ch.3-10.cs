using System;

namespace Csharp_book
{
    class Program
    {
        static void Main(string[] args)
        {
            string text = "C#";

            switch (text)
            {
                case "Java":
                    Console.WriteLine("JVM 언어");
                    break;  // C/C++과 달리 break가 없으면 컴파일 오류

                case "C#":  // but 실행할 구문이 없다면 break 생략가능, 단 그다음 case문과 합쳐져서 실행할 구문 공유 
                case "VB.NET":
                    Console.WriteLine(".NET 호환 언어");
                    break;

                default:    //default는 필요하지 않으면 생략가능
                    Console.WriteLine("알 수 없음");
                    break;
            }
        }
    }
}