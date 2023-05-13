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
            int c = int.Parse(Console.ReadLine());
            b += c;
            if (b / 60 >= 1)
            {
                int d = b;
                for (int i = 0; i < d/60; i++)
                {
                    b -= 60;
                    a++;
                }
                if (a >= 24)
                {
                    a %= 24;
                   
                }
                Console.WriteLine($"{a} {b}");
            }
            else
            {
                Console.WriteLine($"{a} {b}");
            }
            
        }
    }
}
