using System;
namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] qwer = Console.ReadLine().Split();
            long a = long.Parse(qwer[0]);
            long b = long.Parse(qwer[1]);

            Console.WriteLine(Math.Abs(a-b) );
        }

    }
}
