using System;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            string num = Console.ReadLine();
            Console.WriteLine(Int32.Parse(num, System.Globalization.NumberStyles.HexNumber));
        }

    }
}
