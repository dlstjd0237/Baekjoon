using System;
using System.Collections.Generic;
namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int q = int.Parse(Console.ReadLine());
            List<string> asdf = new List<string>();
            for (int i = 0; i < q; i++)
            {
                asdf.Add( Console.ReadLine());
            }
            for (int i = 0; i < q; i++)
            {
                Console.WriteLine(asdf[i].ToLower());
            }
        }
    }
}
