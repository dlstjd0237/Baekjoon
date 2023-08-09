using System;
using System.Numerics;
namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger num = BigInteger.Parse(Console.ReadLine());


            Console.WriteLine(FIbonacci(num));

            BigInteger FIbonacci(BigInteger n)
            {
                if (n == 1 || n == 0) return 1;

                else return n * FIbonacci(n - 1);

            }

        }
 

    }

}

