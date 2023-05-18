using System;
using System.Text;

namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] qwer = Console.ReadLine().Split();
            int a = int.Parse(qwer[0]);
            int s = int.Parse(qwer[1]);
            string[] asdf = Console.ReadLine().Split();
            int[] z = new int[a];
            for (int i = 0; i < a; i++)
            {
                z[i] = int.Parse(asdf[i]);
            }   
            for (int i = 0; i < a   ; i++)
            {
                if (z[i]<s)
                {
                    Console.Write($"{z[i]} ");  
                }
            }
        }
    }
}
