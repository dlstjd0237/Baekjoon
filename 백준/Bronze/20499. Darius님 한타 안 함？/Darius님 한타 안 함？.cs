using System;
namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] qwer = Console.ReadLine().Split("/");
            int k, d,a;
            k = int.Parse(qwer[0]);
            d = int.Parse(qwer[1]);
            a = int.Parse(qwer[2]);

            if (d == 0 || (k + a) < d) Console.Write("hasu");
            else Console.Write("gosu");
        }
    }
}
