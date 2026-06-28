using System;
using System.Iec61131Lib;
using System.Runtime.InteropServices;
using Eclr;
using Iec61131.Engineering.Prototypes.Types;
using Iec61131.Engineering.Prototypes.Variables;
using Iec61131.Engineering.Prototypes.Common;
using Iec61131.Engineering.Prototypes.Methods;
using Iec61131.Engineering.Prototypes.Pragmas;

namespace TimeUtils
{
    [Native]
    [Function]
    public static class GetUnixTimeULINT
    {
        [Execution]
        public static ulong __Process()
        {
            // No implementation in C# part; implement in native method
            // Just return something to avoid errors from the C# compiler.
            return 0;
        }
    }
}
