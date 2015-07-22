using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace LeagueStrapper
{
    public class Strapper
    {
        
        
        
        [DllImport("LeagueCore.dll")]
        public static extern bool IsDead();
    }
}
