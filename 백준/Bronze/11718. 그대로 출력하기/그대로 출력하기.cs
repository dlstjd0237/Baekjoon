using System;
namespace Back
{
    class Program
    {
        static void Main(string[] args)
        {
            
            while (true)
            {
                string q = Console.ReadLine();
                if (string.IsNullOrEmpty(q) == true) break;
                Console.WriteLine(q);
            }
        }

    }
}
