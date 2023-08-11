using System;
namespace Baek
{
    class Program
    {
        static void Main(string[] args)
        {
            string [] qwer = Console.ReadLine().Split();
            int a = int.Parse(qwer[0]);
            int b = int.Parse(qwer[1]);
            
            Console.WriteLine($"{b-a} {b}");
        }

    }
}
