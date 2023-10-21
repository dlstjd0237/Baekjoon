using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            string [] qwer = Console.ReadLine().Split();
            int R1 = int.Parse(qwer[0]);
            int S = int.Parse(qwer[1]);
            Console.WriteLine((S * 2)-R1);
        }
    }
}
