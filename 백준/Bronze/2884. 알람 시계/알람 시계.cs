using System;

namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            string dkdlt = Console.ReadLine();
            string[] tltvkf = dkdlt.Split();
            int a = int.Parse(tltvkf[0]);
            int b = int.Parse(tltvkf[1]);
            if (b - 45<0)
            {
                b = b + 60 - 45;
                a--;
                if (a<0)
                {
                    a = 23  ;
                }
            }
            else
            {
                b = b - 45;
            }
            Console.WriteLine($"{a} {b}");
        }
    }
}
