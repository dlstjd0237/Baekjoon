using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int max=0;
            int min=0;
            int sum = 0;
            for (int i = 0; i < 3; i++)
            {
                int a = int.Parse(Console.ReadLine());
                sum += a;
                if(i ==0 )
                {
                    max = a;
                    min = a;
                }
                if (a > max)
                    max = a;
                else if (a < min)
                    min = a;
            }
            Console.WriteLine(sum - min - max);

        }
    }
}
