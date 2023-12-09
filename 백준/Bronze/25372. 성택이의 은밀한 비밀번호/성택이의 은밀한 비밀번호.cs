using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {


            int count = int.Parse(Console.ReadLine());
            string[] inputArr = new string[count];
            for (int i = 0; i < count; i++)
            {
                inputArr[i] = Console.ReadLine();
                if (inputArr[i].Length > 9 || inputArr[i].Length < 6)
                {
                    inputArr[i] = "no";
                }
                else
                {
                    inputArr[i] = "yes";
                }
            }
            for (int i = 0; i < count; i++)
            {
                Console.WriteLine(inputArr[i]);
            }
        }

    }
}
