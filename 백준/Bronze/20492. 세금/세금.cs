using System;
namespace Baek
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            Console.WriteLine( $"{a * 0.78} {a * 0.8 + a* 0.2 * 0.78}");
        }

    }
}
