using System;
using System.Text;

namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            string a = Console.ReadLine();
            char[] k =  a.ToCharArray();
            int b = int.Parse(Console.ReadLine());
            Console.WriteLine(k[b-1]);
        }
    }
}
