using System;
using System.Text;

namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {

            long a = long.Parse(Console.ReadLine());
           
            string[] asdf = Console.ReadLine().Split();
            long[] z = new long[a];
            for (int i = 0; i < a; i++)
            {
                z[i] = long.Parse(asdf[i]);
            }
            long min =z[z.Length - 1];
            long max = z[z.Length-1];
            for (int i = 0; i < z.Length   ; i++)
            {
                long h = z[z.Length - (i + 1)];
                if (z[i] >= max){
                    max = z[i];
                }
                if (z[i] <= min)
                {
                    min = z[i];
                }
            }
            Console.Write($"{min} {max}");
        }
    }
}
