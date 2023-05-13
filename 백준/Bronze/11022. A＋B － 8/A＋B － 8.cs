using System;
using System.Text;

namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int[] b = new int[a];
            int[] c = new int[a];
            
            for (int i = 0; i < a; i++)
            {
                string[] f = Console.ReadLine().Split();
                b[i] = int.Parse(f[0]);
                c[i] = int.Parse(f[1]);
            }
            for (int i = 0; i < a; i++)
            {
                
                Console.WriteLine($"Case #{i+1}: {b[i]} + {c[i]} = {b[i]+c[i]}");
            }

        }
    }
}
