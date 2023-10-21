using System;
using System.Collections.Generic;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int input = int.Parse(Console.ReadLine());

            List<string> Eat = new List<string>();
            for (int i = 0; i < input; i++)
            {
                string [] qwer = Console.ReadLine().Split();
                int a = int.Parse(qwer[0]);
                int b = int.Parse(qwer[1]);
                string answer = a >= b ? "MMM BRAINS" : "NO BRAINS";
                Eat.Add(answer);
               
            }
            for (int i = 0; i < input; i++)
            {

                Console.WriteLine(Eat[i]);
            }
        }
    }
}
