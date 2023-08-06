using System;
namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            int i = 0;
            int sum = 0;
            while (true)
            {
                i = int.Parse(Console.ReadLine());
                if (i == -1) break;
                else sum += i;
            }
            Console.WriteLine(sum);


        }
    }
}
