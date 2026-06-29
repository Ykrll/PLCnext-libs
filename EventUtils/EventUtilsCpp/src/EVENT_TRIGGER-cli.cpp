// EVENT_TRIGGER native assembly code template.
// PHOENIX CONTACT Software embedded CLR native assembly builder tool generated source file.
// use this file to implement your own native code

#include "eclr.h"
#include "EventUtils.h"
#include "Arp/Plc/Commons/Esm/RtEventManagerProxy.hpp"

// class EventUtils.EVENT_TRIGGER implementation
void __PInvoke__ EventUtils::EVENT_TRIGGER::__Init()
{
    // implement your code here !

    executeOld = false;
    rtEvent = nullptr;
    Done = false;
}

void __PInvoke__ EventUtils::EVENT_TRIGGER::__Process()
{
    // implement your code here !

    if (rtEvent == nullptr)
    {
        rtEvent = Arp::Plc::Commons::Esm::RtEventManagerProxy::GetInstance().GetEvent("Event1");
    }

    Done = (rtEvent != nullptr);

    if (Execute && !executeOld && rtEvent != nullptr)
    {
        rtEvent->Set();
    }

    executeOld = Execute;
}

EventUtils::EVENT_TRIGGER::EVENT_TRIGGER()
{
    // implement your constructor code here !
}

void __PInvoke__ EventUtils::EVENT_TRIGGER::ctor()
{
    // automatically generated auxiliary constructor : calls the constructor by displacement new operator !
    // @Begin automatically generated code, do not modify !
    new (this) EventUtils::EVENT_TRIGGER();
    // @End automatically generated code
}

