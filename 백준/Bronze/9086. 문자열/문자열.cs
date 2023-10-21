using System;
using System.Collections.Generic;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int input = int.Parse(Console.ReadLine());
            List<string> textList = new();
            for (int i = 0; i < input; i++)
            {
                textList.Add(Console.ReadLine());
            }
            for (int i = 0; i < input; i++)
            {
                Console.WriteLine($"{textList[i].Substring(0,1)}{textList[i].Substring(textList[i].Length - 1, 1)}");
            }

        }

    }
}
