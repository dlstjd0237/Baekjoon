using System;
namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] qwer = Console.ReadLine().Split();
            int[] q = new int[3];
            int w = 0;
            string e;
            for (int i = 0; i < 3; i++)
            {
                q[i] = int.Parse(qwer[i]);
                w += q[i];

            }
            if (w >= 100)
            {
                Console.WriteLine("OK");
            }
            else
            {
                int min = Math.Min(q[0], Math.Min(q[1], q[2]));
                if (min == q[0]) Console.WriteLine("Soongsil");
                else if (min == q[1]) Console.WriteLine("Korea");
                else Console.WriteLine("Hanyang");
            }


        }

    }
}
