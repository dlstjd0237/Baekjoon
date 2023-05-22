using System;
using System.Text;

namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            int a;
            int min = 100;
            int sum = 0;
            for (int i = 0; i < 7; i++)
            {
                a = int.Parse(Console.ReadLine());
                if (a % 2 == 1)
                {
                    sum += a;
                    if (a < min)
                    {
                        min = a;
                    }
                }
            }
            if (sum == 0)
            {
                Console.WriteLine("-1");
            }
            else
            {
                Console.WriteLine(sum);
                Console.WriteLine(min);

            }


        }
    }
}
