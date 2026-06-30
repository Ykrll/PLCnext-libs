using System;
using System.Iec61131Lib;
using System.Runtime.InteropServices;
using Eclr;
using Iec61131.Engineering.Prototypes.Types;
using Iec61131.Engineering.Prototypes.Variables;
using Iec61131.Engineering.Prototypes.Methods;
using Iec61131.Engineering.Prototypes.Common;
using Iec61131.Engineering.Prototypes.Pragmas;

namespace EventUtils
{
    [Native]
    [FunctionBlock]
    public class EVENT_TRIGGER
    {

        // inputs
        [Input] // triger event (rising edge)
        public bool Execute;

        [Input] // event name to trigger
        public IecString80 EventName;

        // outputs
        [Output] // event completed
        public bool Done;

        [Output] // error occurred
        public bool Error;

        [Output, DataType("WORD")] // error code
        public ushort Status;


        [Initialization]
        public void __Init()
        {
            //  No implementation in C# part; implement in native method
        }

        [Execution]
        public void __Process()
        {
            // No implementation in C# part; implement in native method
        }
    }
}
