using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int maxValue = 0;
            int maxline = 0;
            int[,] point = new int[5, 4];
            for (int i = 0; i < 5; i++)
            {
                string[] qwer = Console.ReadLine().Split();
                var sum = 0;
                for (int j = 0; j < 4; j++)
                {
                    point[i, j] = int.Parse(qwer[j]);
                    sum += point[i, j];
                }
                if (maxValue < sum)
                {
                    maxValue = sum;
                    maxline = i;
                }
            }


            Console.WriteLine(maxline + 1);
            Console.WriteLine(maxValue);
        }

    }
}
