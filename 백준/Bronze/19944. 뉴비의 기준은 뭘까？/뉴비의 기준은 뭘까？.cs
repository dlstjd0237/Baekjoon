using System;
namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] qwer = Console.ReadLine().Split();
            int q, w;
            q = int.Parse(qwer[0]);
            w = int.Parse(qwer[1]);
            if (w == 1 || w == 2) Console.WriteLine("NEWBIE!");
            else if (w <= q) Console.WriteLine("OLDBIE!");
            else Console.WriteLine("TLE!");
        }
    }
}
