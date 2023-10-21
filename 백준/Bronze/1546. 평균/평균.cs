using System;
using System.Collections.Generic;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int input = int.Parse(Console.ReadLine());
            List<float> num = new List<float>();
            string[] qwer = Console.ReadLine().Split();
            float max = 0;
            List<float> sum = new List<float>();
            float Average=0;
            for (int i = 0; i < input; i++)
            {
                float a = int.Parse(qwer[i]);
                num.Add(a);
                if (num[i] > max)
                {
                    max = num[i];
                }
            }
            for (int i = 0; i < input; i++)
            {
                sum.Add(num[i] / max * 100);
            }
            for (int i = 0; i < sum.Count; i++)
            {
                Average += sum[i];
            }
            Console.WriteLine(Average/input);
        }
    }
}
