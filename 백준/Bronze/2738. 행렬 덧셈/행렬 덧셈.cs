using System;
namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[,] n = new int[101, 101]; 
            int[,] m = new int[101, 101];

            string[] qwer = Console.ReadLine().Split();
            int x = int.Parse(qwer[0]); 
            int y = int.Parse(qwer[1]);

            for (int i = 0; i < x; ++i)
            {
                string[] s = Console.ReadLine().Split();
                for (int j = 0; j < y; ++j)
                {
                    n[i, j] = int.Parse(s[j]);
                }
            }

            for (int i = 0; i < x; ++i)
            {
                string[] s = Console.ReadLine().Split();
                for (int j = 0; j < y; ++j)
                {
                    m[i, j] = int.Parse(s[j]);
                }
            }

            for (int i = 0; i < x; ++i)
            {
                for (int j = 0; j < y; ++j)
                {
                    Console.Write($"{n[i, j] + m[i, j]} ");
                }
                Console.WriteLine();
            }
        }
    }
}
