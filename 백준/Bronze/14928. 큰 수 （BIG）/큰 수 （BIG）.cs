using System;
using System.Numerics;
namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            BigInteger a = BigInteger.Parse(Console.ReadLine());
            BigInteger sum = a % 20000303;
            Console.Write(sum);
        }
    }
}
