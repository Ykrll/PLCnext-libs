// PHOENIX CONTACT Software eCLR Native Library Builder version 3.0.1043.0
// Do not modify this automatically generated file!

#include "eclr.h"
#include "EventUtils.h"

#if ECLRMETA_COMPATID != 10
  #error incompatible metadata, rebuild EventUtils.cs !
#endif

#ifndef PLATFORM_DATAMODEL_P64_DEFINED

typedef uint32 t_meta;

// declare the meta table
struct EventUtils_Metatable
{
    t_meta meta[97];
};

// declare all class method member
struct EventUtils_Classmember
{
    void (EventUtils::EVENT_TRIGGER::* p38)();
    void (EventUtils::EVENT_TRIGGER::* p42)();
    void (EventUtils::EVENT_TRIGGER::* p47)();
};

// declare the whole meta file structure
struct EventUtils_Meta
{
    EventUtils_Metatable   metatable;
    t_meta classmemberBegin;
    EventUtils_Classmember classmember;
    t_meta metatableEnd;
};

// calculates the distance to associated C++ member function
#define MEMBERFUNC_DIST(method, index) \
    (PLATFORM_OFFSETOF(EventUtils_Classmember, method) + PLATFORM_OFFSETOF(CppMemberfuncLayout, m_pEntry) + sizeof(EventUtils_Metatable) + sizeof(t_meta) - index*sizeof(t_meta) )

// declare all static method member

#if (PLATFORM_TARGET_ENDIANESS == TARGET_BIG_ENDIAN)
#define META_0000 0x00000110
#define META_0001 0x00000A04
#define META_0002 0x00000A11
#define META_0003 0x10610001
#define META_0004 0x00000000
#define META_0005 0x00000001
#define META_0006 0x001A4576
#define META_0007 0x656E7455
#define META_0008 0x74696C73
#define META_0009 0x00006C69
#define META_0010 0x62457665
#define META_0011 0x6E745574
#define META_0012 0x696C7300
#define META_0013 0x00000212
#define META_0014 0x53797374
#define META_0015 0x656D0000
#define META_0016 0x0000031A
#define META_0017 0xFFFFFFFD
#define META_0018 0x4F626A65
#define META_0019 0x63740000
#define META_0020 0x00000312
#define META_0021 0x4576656E
#define META_0022 0x74557469
#define META_0023 0x6C730000
#define META_0024 0x00000114
#define META_0025 0x00000000
#define META_0026 0x00001813
#define META_0027 0x00000000
#define META_0028 0x00000000
#define META_0029 0x02108720
#define META_0030 0x00170003
#define META_0031 0x00000008
#define META_0032 0xFFF4FFF8
#define META_0033 0x000A0011
#define META_0034 0x001A4556
#define META_0035 0x454E545F
#define META_0036 0x54524947
#define META_0037 0x47455200
#define META_0038 0x00000000
#define META_0039 0xA0010000
#define META_0040 0x5F5F496E
#define META_0041 0x69740000
#define META_0042 0x00000000
#define META_0043 0xA0010000
#define META_0044 0x5F5F5072
#define META_0045 0x6F636573
#define META_0046 0x73000000
#define META_0047 0x00000000
#define META_0048 0xA8050000
#define META_0049 0x2E63746F
#define META_0050 0x72000000
#define META_0051 0x00002815
#define META_0052 0x00000002
#define META_0053 0x24000004
#define META_0054 0x00280005
#define META_0055 0x24000005
#define META_0056 0x00260007
#define META_0057 0x45786563
#define META_0058 0x75746500
#define META_0059 0x06610007
#define META_0060 0x446F6E65
#define META_0061 0x00000661
#define META_0062 0x001F0702
#define META_0063 0x49656336
#define META_0064 0x31313331
#define META_0065 0x2E456E67
#define META_0066 0x696E6565
#define META_0067 0x72696E67
#define META_0068 0x2E50726F
#define META_0069 0x746F7479
#define META_0070 0x7065732E
#define META_0071 0x56617269
#define META_0072 0x61626C65
#define META_0073 0x732E496E
#define META_0074 0x70757441
#define META_0075 0x74747269
#define META_0076 0x62757465
#define META_0077 0x00004965
#define META_0078 0x63363131
#define META_0079 0x33312E45
#define META_0080 0x6E67696E
#define META_0081 0x65657269
#define META_0082 0x6E672E50
#define META_0083 0x726F746F
#define META_0084 0x74797065
#define META_0085 0x732E5661
#define META_0086 0x72696162
#define META_0087 0x6C65732E
#define META_0088 0x4F757470
#define META_0089 0x75744174
#define META_0090 0x74726962
#define META_0091 0x75746500
#define META_0092 0x0000031A
#define META_0093 0xFFFFFFB1
#define META_0094 0x426F6F6C
#define META_0095 0x65616E00
#define META_0096 0x00000001

// class sizeof(type) assignment
#undef META_0031
#define META_0031 (t_meta)sizeof(EventUtils::EVENT_TRIGGER)
// class method member assignment
#undef META_0038
#define META_0038 (t_meta)MEMBERFUNC_DIST(p38, 38) // EventUtils::EVENT_TRIGGER::__Init (non-static)
#undef META_0042
#define META_0042 (t_meta)MEMBERFUNC_DIST(p42, 42) // EventUtils::EVENT_TRIGGER::__Process (non-static)
#undef META_0047
#define META_0047 (t_meta)MEMBERFUNC_DIST(p47, 47) // EventUtils::EVENT_TRIGGER::.ctor (non-static)

// 000000 00 00 01 10 00 00 0A 04 00 00 0A 11 10 61 00 01    .............a.. 
// 000016 00 00 00 00 00 00 00 01 00 1A 45 76 65 6E 74 55    ..........EventU 
// 000032 74 69 6C 73 00 00 6C 69 62 45 76 65 6E 74 55 74    tils..libEventUt 
// 000048 69 6C 73 00 00 00 02 12 53 79 73 74 65 6D 00 00    ils.....System.. 
// 000064 00 00 03 1A FF FF FF FD 4F 62 6A 65 63 74 00 00    ........Object.. 
// 000080 00 00 03 12 45 76 65 6E 74 55 74 69 6C 73 00 00    ....EventUtils.. 
// 000096 00 00 01 14 00 00 00 00 00 00 18 13 00 00 00 00    ................ 
// 000112 00 00 00 00 02 10 87 20 00 17 00 03 00 00 00 08    ....... ........ 
// 000128 FF F4 FF F8 00 0A 00 11 00 1A 45 56 45 4E 54 5F    ..........EVENT_ 
// 000144 54 52 49 47 47 45 52 00 00 00 00 00 A0 01 00 00    TRIGGER......... 
// 000160 5F 5F 49 6E 69 74 00 00 00 00 00 00 A0 01 00 00    __Init.......... 
// 000176 5F 5F 50 72 6F 63 65 73 73 00 00 00 00 00 00 00    __Process....... 
// 000192 A8 05 00 00 2E 63 74 6F 72 00 00 00 00 00 28 15    .....ctor.....(. 
// 000208 00 00 00 02 24 00 00 04 00 28 00 05 24 00 00 05    ....$....(..$... 
// 000224 00 26 00 07 45 78 65 63 75 74 65 00 06 61 00 07    .&..Execute..a.. 
// 000240 44 6F 6E 65 00 00 06 61 00 1F 07 02 49 65 63 36    Done...a....Iec6 
// 000256 31 31 33 31 2E 45 6E 67 69 6E 65 65 72 69 6E 67    1131.Engineering 
// 000272 2E 50 72 6F 74 6F 74 79 70 65 73 2E 56 61 72 69    .Prototypes.Vari 
// 000288 61 62 6C 65 73 2E 49 6E 70 75 74 41 74 74 72 69    ables.InputAttri 
// 000304 62 75 74 65 00 00 49 65 63 36 31 31 33 31 2E 45    bute..Iec61131.E 
// 000320 6E 67 69 6E 65 65 72 69 6E 67 2E 50 72 6F 74 6F    ngineering.Proto 
// 000336 74 79 70 65 73 2E 56 61 72 69 61 62 6C 65 73 2E    types.Variables. 
// 000352 4F 75 74 70 75 74 41 74 74 72 69 62 75 74 65 00    OutputAttribute. 
// 000368 00 00 03 1A FF FF FF B1 42 6F 6F 6C 65 61 6E 00    ........Boolean. 
// 000384 00 00 00 01    .... 


#elif (PLATFORM_TARGET_ENDIANESS == TARGET_LITTLE_ENDIAN)
#define META_0000 0x00000110
#define META_0001 0x0A040000
#define META_0002 0x00000A11
#define META_0003 0x00011061
#define META_0004 0x00000000
#define META_0005 0x00010000
#define META_0006 0x7645001A
#define META_0007 0x55746E65
#define META_0008 0x736C6974
#define META_0009 0x696C0000
#define META_0010 0x65764562
#define META_0011 0x7455746E
#define META_0012 0x00736C69
#define META_0013 0x00000212
#define META_0014 0x74737953
#define META_0015 0x00006D65
#define META_0016 0x0000031A
#define META_0017 0xFFFDFFFF
#define META_0018 0x656A624F
#define META_0019 0x00007463
#define META_0020 0x00000312
#define META_0021 0x6E657645
#define META_0022 0x69745574
#define META_0023 0x0000736C
#define META_0024 0x00000114
#define META_0025 0x00000000
#define META_0026 0x00001813
#define META_0027 0x00000000
#define META_0028 0x00000000
#define META_0029 0x87200210
#define META_0030 0x00030017
#define META_0031 0x00000008
#define META_0032 0xFFF8FFF4
#define META_0033 0x0011000A
#define META_0034 0x5645001A
#define META_0035 0x5F544E45
#define META_0036 0x47495254
#define META_0037 0x00524547
#define META_0038 0x00000000
#define META_0039 0x0000A001
#define META_0040 0x6E495F5F
#define META_0041 0x00007469
#define META_0042 0x00000000
#define META_0043 0x0000A001
#define META_0044 0x72505F5F
#define META_0045 0x7365636F
#define META_0046 0x00000073
#define META_0047 0x00000000
#define META_0048 0x0000A805
#define META_0049 0x6F74632E
#define META_0050 0x00000072
#define META_0051 0x00002815
#define META_0052 0x00020000
#define META_0053 0x00042400
#define META_0054 0x00050028
#define META_0055 0x00052400
#define META_0056 0x00070026
#define META_0057 0x63657845
#define META_0058 0x00657475
#define META_0059 0x00076106
#define META_0060 0x656E6F44
#define META_0061 0x61060000
#define META_0062 0x0207001F
#define META_0063 0x36636549
#define META_0064 0x31333131
#define META_0065 0x676E452E
#define META_0066 0x65656E69
#define META_0067 0x676E6972
#define META_0068 0x6F72502E
#define META_0069 0x79746F74
#define META_0070 0x2E736570
#define META_0071 0x69726156
#define META_0072 0x656C6261
#define META_0073 0x6E492E73
#define META_0074 0x41747570
#define META_0075 0x69727474
#define META_0076 0x65747562
#define META_0077 0x65490000
#define META_0078 0x31313663
#define META_0079 0x452E3133
#define META_0080 0x6E69676E
#define META_0081 0x69726565
#define META_0082 0x502E676E
#define META_0083 0x6F746F72
#define META_0084 0x65707974
#define META_0085 0x61562E73
#define META_0086 0x62616972
#define META_0087 0x2E73656C
#define META_0088 0x7074754F
#define META_0089 0x74417475
#define META_0090 0x62697274
#define META_0091 0x00657475
#define META_0092 0x0000031A
#define META_0093 0xFFB1FFFF
#define META_0094 0x6C6F6F42
#define META_0095 0x006E6165
#define META_0096 0x00000001

// class sizeof(type) assignment
#undef META_0031
#define META_0031 (t_meta)sizeof(EventUtils::EVENT_TRIGGER)
// class method member assignment
#undef META_0038
#define META_0038 (t_meta)MEMBERFUNC_DIST(p38, 38) // EventUtils::EVENT_TRIGGER::__Init (non-static)
#undef META_0042
#define META_0042 (t_meta)MEMBERFUNC_DIST(p42, 42) // EventUtils::EVENT_TRIGGER::__Process (non-static)
#undef META_0047
#define META_0047 (t_meta)MEMBERFUNC_DIST(p47, 47) // EventUtils::EVENT_TRIGGER::.ctor (non-static)

// 000000 10 01 00 00 00 00 04 0A 11 0A 00 00 61 10 01 00    ............a... 
// 000016 00 00 00 00 00 00 01 00 1A 00 45 76 65 6E 74 55    ..........EventU 
// 000032 74 69 6C 73 00 00 6C 69 62 45 76 65 6E 74 55 74    tils..libEventUt 
// 000048 69 6C 73 00 12 02 00 00 53 79 73 74 65 6D 00 00    ils.....System.. 
// 000064 1A 03 00 00 FF FF FD FF 4F 62 6A 65 63 74 00 00    ........Object.. 
// 000080 12 03 00 00 45 76 65 6E 74 55 74 69 6C 73 00 00    ....EventUtils.. 
// 000096 14 01 00 00 00 00 00 00 13 18 00 00 00 00 00 00    ................ 
// 000112 00 00 00 00 10 02 20 87 17 00 03 00 08 00 00 00    ...... ......... 
// 000128 F4 FF F8 FF 0A 00 11 00 1A 00 45 56 45 4E 54 5F    ..........EVENT_ 
// 000144 54 52 49 47 47 45 52 00 00 00 00 00 01 A0 00 00    TRIGGER......... 
// 000160 5F 5F 49 6E 69 74 00 00 00 00 00 00 01 A0 00 00    __Init.......... 
// 000176 5F 5F 50 72 6F 63 65 73 73 00 00 00 00 00 00 00    __Process....... 
// 000192 05 A8 00 00 2E 63 74 6F 72 00 00 00 15 28 00 00    .....ctor....(.. 
// 000208 00 00 02 00 00 24 04 00 28 00 05 00 00 24 05 00    .....$..(....$.. 
// 000224 26 00 07 00 45 78 65 63 75 74 65 00 06 61 07 00    &...Execute..a.. 
// 000240 44 6F 6E 65 00 00 06 61 1F 00 07 02 49 65 63 36    Done...a....Iec6 
// 000256 31 31 33 31 2E 45 6E 67 69 6E 65 65 72 69 6E 67    1131.Engineering 
// 000272 2E 50 72 6F 74 6F 74 79 70 65 73 2E 56 61 72 69    .Prototypes.Vari 
// 000288 61 62 6C 65 73 2E 49 6E 70 75 74 41 74 74 72 69    ables.InputAttri 
// 000304 62 75 74 65 00 00 49 65 63 36 31 31 33 31 2E 45    bute..Iec61131.E 
// 000320 6E 67 69 6E 65 65 72 69 6E 67 2E 50 72 6F 74 6F    ngineering.Proto 
// 000336 74 79 70 65 73 2E 56 61 72 69 61 62 6C 65 73 2E    types.Variables. 
// 000352 4F 75 74 70 75 74 41 74 74 72 69 62 75 74 65 00    OutputAttribute. 
// 000368 1A 03 00 00 FF FF B1 FF 42 6F 6F 6C 65 61 6E 00    ........Boolean. 
// 000384 01 00 00 00    .... 


#else
#error target endianess not defined
#endif


EventUtils_Meta const EventUtils_meta = {
    {{
    META_0000,META_0001,META_0002,META_0003,META_0004,META_0005,META_0006,META_0007,
    META_0008,META_0009,META_0010,META_0011,META_0012,META_0013,META_0014,META_0015,
    META_0016,META_0017,META_0018,META_0019,META_0020,META_0021,META_0022,META_0023,
    META_0024,META_0025,META_0026,META_0027,META_0028,META_0029,META_0030,META_0031,
    META_0032,META_0033,META_0034,META_0035,META_0036,META_0037,META_0038,META_0039,
    META_0040,META_0041,META_0042,META_0043,META_0044,META_0045,META_0046,META_0047,
    META_0048,META_0049,META_0050,META_0051,META_0052,META_0053,META_0054,META_0055,
    META_0056,META_0057,META_0058,META_0059,META_0060,META_0061,META_0062,META_0063,
    META_0064,META_0065,META_0066,META_0067,META_0068,META_0069,META_0070,META_0071,
    META_0072,META_0073,META_0074,META_0075,META_0076,META_0077,META_0078,META_0079,
    META_0080,META_0081,META_0082,META_0083,META_0084,META_0085,META_0086,META_0087,
    META_0088,META_0089,META_0090,META_0091,META_0092,META_0093,META_0094,META_0095,
    META_0096
    },},
    // classmember table start
    (sizeof(EventUtils_Classmember)/sizeof(t_meta)) << 8,
    // classmember table
    {
    &EventUtils::EVENT_TRIGGER::__Init,
    &EventUtils::EVENT_TRIGGER::__Process,
    &EventUtils::EVENT_TRIGGER::ctor
    },
    // meta end
    0x00000001
};


unsigned EventUtils::s_modulHndl;

#ifdef PLATFORM_CLASSLAYOUT_CHECK
// Note: please modify the EventUtils.h header if this function is not yet declared (see *-template.h)
bool EventUtils::checkLayout()
{
    // check layout for class EventUtils.EVENT_TRIGGER
    if (PLATFORM_OFFSETOF(EVENT_TRIGGER, Execute) != 4) { return false; }
    if (PLATFORM_OFFSETOF(EVENT_TRIGGER, Done) != 5) { return false; }
    return true;
}
#endif //#ifdef PLATFORM_CLASSLAYOUT_CHECK

#ifdef PLATFORM_NATIVEDLL_LOADER

#include "NativeDllLoader.code"

static bool LoadLibrary()
{
#ifdef PLATFORM_CLASSLAYOUT_CHECK
    if (!EventUtils::checkLayout()) { return false; }
#endif
    if (!EventUtils::init()) { return false; }
    LoadLibraryInfo(&EventUtils_meta, sizeof(EventUtils_meta), EventUtils::isCompatible, EventUtils::load, EventUtils::unload);
    return true;
}

#else

bool EventUtils::loadLibrary()
{
#ifdef PLATFORM_CLASSLAYOUT_CHECK
    if (!checkLayout()) { return false; }
#endif
    s_modulHndl = CNativeLibraryManager::AddNativeLibrary(&EventUtils_meta, sizeof(EventUtils_meta), isCompatible, load, unload);
    return true;

}

#endif //#ifdef PLATFORM_NATIVEDLL_LOADER

#endif //#ifdef PLATFORM_DATAMODEL_P64_DEFINED

