using System;
using System.Text;

namespace Baek
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            StringBuilder q = new StringBuilder();
            for (int i = 1; i <= a; i++)
            {
                q.AppendLine(i.ToString());
            }
            Console.WriteLine(q);
        }

    }
}
