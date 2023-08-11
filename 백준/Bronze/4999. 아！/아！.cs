using System;
namespace Baek
{
    class Program
    {
        static void Main(string[] args)
        {
            string a = Console.ReadLine();
            string b = Console.ReadLine();
            string c = a.Length >= b.Length ? "go" : "no";
            Console.WriteLine(c);
        }

    }
}
