using System;
namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] qwer = Console.ReadLine().Split();
            int q, w,e,sum;
            q = int.Parse(qwer[0]);
            w = int.Parse(qwer[1]);
            e = int.Parse(qwer[2]);

            sum = (q * w) - e > 0 ? (q * w) - e : 0;
            Console.Write(sum);
        }
    }
}
