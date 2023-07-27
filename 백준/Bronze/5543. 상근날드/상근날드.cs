using System;
namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] a = new int[5];
            int q = 0, w = 0;
            for (int i = 0; i < 5; i++)
            {
                a[i] = int.Parse(Console.ReadLine());
            }
            if (a[0] > a[1]) q = a[1];
            else q = a[0];
            if (q > a[2]) q = a[2];

            if (a[3] > a[4]) w = a[4];
            else w = a[3];

            Console.WriteLine($"{q + w - 50}");
        }

    }
}
