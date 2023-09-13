using System;
using System.Collections.Generic;
namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            string [] qwer = Console.ReadLine().Split();
            int a = int.Parse(qwer[0]);
            int b = int.Parse(qwer[1]);
            Dictionary<string, int> ehrka1 = new Dictionary<string, int>();
            Dictionary<int, string> ehrka2 = new Dictionary<int, string>();
            List<string> gh = new List<string>();
            for (int i = 1; i < a+1; i++)
            {
                string h = Console.ReadLine();
                ehrka1.Add(h, i);
                ehrka2.Add(i, h);
            }

        
            for (int i = 0; i < b; i++)
            {
                string z = Console.ReadLine();
                if (zxcv(z))
                {
                    gh.Add(ehrka2[int.Parse(z)]);
                }
                else
                {
                    gh.Add(ehrka1[z].ToString());
                }
             
                
            }

            bool zxcv(string s)
            {
                int t;
                bool g = int.TryParse(s, out t);
                if (g)
                {
                    return true;
                }
                else
                    return false;
            }
            for (int i = 0; i < gh.Count; i++)
            {
                Console.WriteLine(gh[i]);
            }
       
        }
    }
}
