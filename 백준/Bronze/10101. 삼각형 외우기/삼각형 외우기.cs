using System;

namespace Baekjoon
{
    class Program
    {
        static void Main(string[] args)
        {
            int x = int.Parse(Console.ReadLine());
            int y = int.Parse(Console.ReadLine()); ;
            int z = int.Parse(Console.ReadLine()); ;

            Console.WriteLine(Tr(x, y, z));
        }
        static string Tr(int x, int y, int z)
        {
            if ((x == 60 && y == 60) && z == 60)
                return "Equilateral";
            if (x + y + z == 180)
            {
                if ((x == y || x == z) || z == y)
                    return "Isosceles";
                else
                    return "Scalene";
            }
            else
                return "Error";
        }
    }
}
