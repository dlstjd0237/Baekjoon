using System;
namespace Baek
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = new int[5];
            int sum = 0;
            for (int i = 0; i < 5; i++)
            {
                a[i] = int.Parse(Console.ReadLine());
                sum += a[i] < 40 ? 40 : a[i];
            }
            Console.WriteLine($"{sum / 5}");
        }

    }
}
