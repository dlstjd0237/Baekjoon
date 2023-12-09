using System;
using System.Linq;
namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();

            var Result = input.Select(c => char.IsUpper(c) ? char.ToLower(c) : char.ToUpper(c));
            string invertedResult = new String(Result.ToArray());

            Console.WriteLine(invertedResult);
            
        }

    }
}
