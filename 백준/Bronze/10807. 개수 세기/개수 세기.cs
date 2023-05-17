using System;
using System.Text;

namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int[] z = new int[a];
            int Count =0;
            string[] dkdlt = Console.ReadLine().Split();
            for (int i = 0; i < a; i++)
            {
                z[i] = int.Parse(dkdlt[i]);
            }   
            int w = int.Parse(Console.ReadLine());
            for (int i = 0; i < a   ; i++)
            {
                if (z[i] == w)
                {
                    Count++;
                }
            }
            Console.WriteLine(Count);
        }
    }
}
