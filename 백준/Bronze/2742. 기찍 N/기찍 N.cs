using System;
using System.Text;

namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            int c = int.Parse(Console.ReadLine());
            StringBuilder q = new StringBuilder();

            for (int i = c; i > 0; i--)
            {
                q.Append(i + "\n");
            }
            Console.WriteLine(q);
         
        }
    }
}
