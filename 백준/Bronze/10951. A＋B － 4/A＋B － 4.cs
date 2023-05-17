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
                string qq =Console.ReadLine();           
                if (qq == null)
                {
                    break;
                }
                string[] aa =qq.Split();
                int a = int.Parse(aa[0]);
                int b = int.Parse(aa[1]);
                asdf.AppendLine((a + b).ToString());
            }
            Console.WriteLine(asdf);
        }
    }
}
