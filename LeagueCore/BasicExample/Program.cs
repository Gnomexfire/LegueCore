using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using LeagueStrapper;
namespace BasicExample
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(PlayerIsDead());
        }

        static bool PlayerIsDead()
        {
            return LeagueStrapper.Strapper.IsDead();
        }
    }
}
