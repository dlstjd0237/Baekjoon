using System;
using System.Numerics;
namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] qwer = Console.ReadLine().Split();

            BigInteger a = BigInteger.Parse(qwer[0]);
            BigInteger b = BigInteger.Parse(qwer[1]);
            BigInteger sum = a+b;
            Console.WriteLine(sum);
        }
    }
}
