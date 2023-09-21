using System;
namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            string a = "";
            switch (Console.ReadLine())
            {
                case "NLCS":
                    a = "North London Collegiate School";
                    break;
                case "BHA":
                    a = "Branksome Hall Asia";
                    break;
                case "KIS":
                    a = "Korea International School";
                    break;
                case "SJA":
                    a = "St. Johnsbury Academy";
                    break;

            }
            Console.Write(a);
        }
    }
}
