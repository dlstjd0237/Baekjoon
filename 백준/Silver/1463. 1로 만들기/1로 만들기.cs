using System;
using System.Text;

namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int[] s = new int[a + 1];
            s[0] = s[1] = 0;

            for (int i = 2; i <= a; i++)
            {
                s[i] = s[i - 1] + 1;

                if (i % 2 == 0)
                {
                    s[i] = Math.Min(s[i], s[i / 2] + 1);
                }
                if (i % 3 == 0)
                {
                    s[i] = Math.Min(s[i], s[i / 3] + 1);
                }
            }
            Console.WriteLine(s[a]);
        }
    }
}
