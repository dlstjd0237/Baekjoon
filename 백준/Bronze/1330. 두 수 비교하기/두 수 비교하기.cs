using System;

namespace _1000_백준
{
    class Program
    {
        static void Main(string[] args)
        {


            string tlqkf = Console.ReadLine();
            string[] qudtls = tlqkf.Split();
            int a = int.Parse(qudtls[0]);
            int b = int.Parse(qudtls[1]);
            if (a > b)
            {
                Console.Write(">");
            }
            else if (a < b)
            {
                Console.Write("<");
            }
            else
            {
                Console.Write("==");
            }




        }
    }
}
