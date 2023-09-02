using System;

namespace _2023_08_28
{
    class Program
    {
        static void Main(string[] args)
        {
           
            string a = null;
            switch (Console.ReadLine())
            {
                case "A+":
                    a = "4.3"; break;
                case "A0":
                    a = "4.0"; break;
                case "A-":
                    a = "3.7"; break;
                case "B+":
                    a = "3.3"; break;
                case "B0":
                    a = "3.0"; break;
                case "B-":
                    a = "2.7"; break;
                case "C+":
                    a = "2.3"; break;
                case "C0":
                    a = "2.0"; break;
                case "C-":
                    a = "1.7"; break;
                case "D+":
                    a = "1.3"; break;
                case "D0":
                    a = "1.0"; break;
                case "D-":
                    a = "0.7"; break;
                case "F": a = "0.0"; break;
            }
            Console.WriteLine(a);
        }
    }
}
