using System;
using System.Text;

namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder asdf = new StringBuilder();
            while (true)
            {

                string[] aa = Console.ReadLine().Split();
                int a = int.Parse(aa[0]);
                int b = int.Parse(aa[1]);
                if (a == 0 && b == 0)
                    break;


                asdf.AppendLine((a + b).ToString());
            }
            Console.WriteLine(asdf);
        }
    }
}
