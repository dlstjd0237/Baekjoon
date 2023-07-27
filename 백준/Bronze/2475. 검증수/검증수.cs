using System;
namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] qwer = Console.ReadLine().Split();
            int[] a = new int[6];
            int q = 0;
            for (int i = 0; i < 5; i++)
            {
                a[i] = int.Parse(qwer[i]);

            }
            for (int i = 0; i < 5; i++)
            {
                a[i] *= a[i];
                q += a[i];
            }
            Console.WriteLine(q % 10);
        }

    }
}
