using System;
using System.Text;

namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] q = Console.ReadLine().Split();
            int[] w = new int[3];
            int a = 0;
            
            int z  = int.Parse(q[0]);
            int x  = int.Parse(q[1]);
            int c  = int.Parse(q[2]);

            int k = (int)Math.Ceiling((double)(c - x) / (z -x));
            Console.WriteLine(k);
        }
    }
}
