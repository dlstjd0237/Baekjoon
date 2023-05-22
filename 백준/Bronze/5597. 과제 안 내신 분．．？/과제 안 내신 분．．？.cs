using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            List<int> q = Enumerable.Range(1, 30).ToList();
            for (int i = 0; i < 28; i++)
            {
                int a = int.Parse(Console.ReadLine());
                q.Remove(a);
            }
            q.Sort();
            Console.WriteLine(q[0]);
            Console.WriteLine(q[1]);


        }
    }
}
