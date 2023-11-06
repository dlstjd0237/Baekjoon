using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] qwer = Console.ReadLine().Split();
            int a = int.Parse(qwer[0]);
            int b = int.Parse(qwer[1]);
            int c = int.Parse(qwer[2]);
            int d = int.Parse(qwer[3]);
            int e = int.Parse(qwer[4]);
            int f = int.Parse(qwer[5]);
            int g = int.Parse(qwer[6]);
            int h = int.Parse(qwer[7]);
            string ekq = a == 1 ? b == 2 ? c == 3 ? d == 4 ? e == 5 ? f == 6 ? g == 7 ? h == 8 ? "ascending" : "mixed" : "mixed" : "mixed" : "mixed" : "mixed" : "mixed" : "mixed" : a == 8 ? b == 7 ? c == 6 ? d == 5 ? e == 4 ? f == 3 ? g == 2 ? h == 1 ? "descending" : "mixed" : "mixed" : "mixed" : "mixed" : "mixed" : "mixed" : "mixed" : "mixed";
            Console.WriteLine(ekq);

        }

    }
}
