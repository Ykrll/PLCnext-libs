// PHOENIX CONTACT Software eCLR Native Library Builder version 3.0.1043.0
// Do not modify this automatically generated file!

#include "eclr.h"
#include "TimeUtils.h"

#if ECLRMETA_COMPATID != 10
  #error incompatible metadata, rebuild TimeUtils.cs !
#endif

#ifndef PLATFORM_DATAMODEL_P64_DEFINED

typedef uint32 t_meta;

// declare the meta table
struct TimeUtils_Metatable
{
    t_meta meta[48];
};

// declare all class method member
struct TimeUtils_Classmember
{
};

// declare the whole meta file structure
struct TimeUtils_Meta
{
    TimeUtils_Metatable   metatable;
    t_meta classmemberBegin;
    TimeUtils_Classmember classmember;
    t_meta metatableEnd;
};

// calculates the distance to associated C++ member function
#define MEMBERFUNC_DIST(method, index) \
    (PLATFORM_OFFSETOF(TimeUtils_Classmember, method) + PLATFORM_OFFSETOF(CppMemberfuncLayout, m_pEntry) + sizeof(TimeUtils_Metatable) + sizeof(t_meta) - index*sizeof(t_meta) )

// declare all static method member
#ifndef META_GetUnixTimeULINT___Process_0
#define META_GetUnixTimeULINT___Process_0 ((UInt64 (*)())&TimeUtils::GetUnixTimeULINT::__Process)
#endif
UInt64 (* const p152)() = &TimeUtils::GetUnixTimeULINT::__Process;


#if (PLATFORM_TARGET_ENDIANESS == TARGET_BIG_ENDIAN)
#define META_0000 0x00000110
#define META_0001 0x00000A04
#define META_0002 0x00000A11
#define META_0003 0x10610001
#define META_0004 0x00000000
#define META_0005 0x00000001
#define META_0006 0x001A5469
#define META_0007 0x6D655574
#define META_0008 0x696C7300
#define META_0009 0x006C6962
#define META_0010 0x54696D65
#define META_0011 0x5574696C
#define META_0012 0x73000000
#define META_0013 0x00000212
#define META_0014 0x53797374
#define META_0015 0x656D0000
#define META_0016 0x0000031A
#define META_0017 0xFFFFFFFD
#define META_0018 0x4F626A65
#define META_0019 0x63740000
#define META_0020 0x00000312
#define META_0021 0x54696D65
#define META_0022 0x5574696C
#define META_0023 0x73000000
#define META_0024 0x00000114
#define META_0025 0x00000000
#define META_0026 0x00001013
#define META_0027 0x00000000
#define META_0028 0x00000000
#define META_0029 0x02108720
#define META_0030 0x00000001
#define META_0031 0x00000004
#define META_0032 0xFFF4FFF8
#define META_0033 0x000A4765
#define META_0034 0x74556E69
#define META_0035 0x7854696D
#define META_0036 0x65554C49
#define META_0037 0x4E540000
#define META_0038 0x00000000
#define META_0039 0x80130001
#define META_0040 0x00065F5F
#define META_0041 0x50726F63
#define META_0042 0x65737300
#define META_0043 0x0000031A
#define META_0044 0xFFFFFFE2
#define META_0045 0x55496E74
#define META_0046 0x36340000
#define META_0047 0x00000001

// class sizeof(type) assignment
#undef META_0031
#define META_0031 (t_meta)sizeof(TimeUtils::GetUnixTimeULINT)
// class method member assignment
#undef META_0038
#define META_0038 (t_meta)META_GetUnixTimeULINT___Process_0  // TimeUtils::GetUnixTimeULINT::__Process (static)

// 000000 00 00 01 10 00 00 0A 04 00 00 0A 11 10 61 00 01    .............a.. 
// 000016 00 00 00 00 00 00 00 01 00 1A 54 69 6D 65 55 74    ..........TimeUt 
// 000032 69 6C 73 00 00 6C 69 62 54 69 6D 65 55 74 69 6C    ils..libTimeUtil 
// 000048 73 00 00 00 00 00 02 12 53 79 73 74 65 6D 00 00    s.......System.. 
// 000064 00 00 03 1A FF FF FF FD 4F 62 6A 65 63 74 00 00    ........Object.. 
// 000080 00 00 03 12 54 69 6D 65 55 74 69 6C 73 00 00 00    ....TimeUtils... 
// 000096 00 00 01 14 00 00 00 00 00 00 10 13 00 00 00 00    ................ 
// 000112 00 00 00 00 02 10 87 20 00 00 00 01 00 00 00 04    ....... ........ 
// 000128 FF F4 FF F8 00 0A 47 65 74 55 6E 69 78 54 69 6D    ......GetUnixTim 
// 000144 65 55 4C 49 4E 54 00 00 00 00 00 00 80 13 00 01    eULINT.......... 
// 000160 00 06 5F 5F 50 72 6F 63 65 73 73 00 00 00 03 1A    ..__Process..... 
// 000176 FF FF FF E2 55 49 6E 74 36 34 00 00 00 00 00 01    ....UInt64...... 


#elif (PLATFORM_TARGET_ENDIANESS == TARGET_LITTLE_ENDIAN)
#define META_0000 0x00000110
#define META_0001 0x0A040000
#define META_0002 0x00000A11
#define META_0003 0x00011061
#define META_0004 0x00000000
#define META_0005 0x00010000
#define META_0006 0x6954001A
#define META_0007 0x7455656D
#define META_0008 0x00736C69
#define META_0009 0x62696C00
#define META_0010 0x656D6954
#define META_0011 0x6C697455
#define META_0012 0x00000073
#define META_0013 0x00000212
#define META_0014 0x74737953
#define META_0015 0x00006D65
#define META_0016 0x0000031A
#define META_0017 0xFFFDFFFF
#define META_0018 0x656A624F
#define META_0019 0x00007463
#define META_0020 0x00000312
#define META_0021 0x656D6954
#define META_0022 0x6C697455
#define META_0023 0x00000073
#define META_0024 0x00000114
#define META_0025 0x00000000
#define META_0026 0x00001013
#define META_0027 0x00000000
#define META_0028 0x00000000
#define META_0029 0x87200210
#define META_0030 0x00010000
#define META_0031 0x00000004
#define META_0032 0xFFF8FFF4
#define META_0033 0x6547000A
#define META_0034 0x696E5574
#define META_0035 0x6D695478
#define META_0036 0x494C5565
#define META_0037 0x0000544E
#define META_0038 0x00000000
#define META_0039 0x00018013
#define META_0040 0x5F5F0006
#define META_0041 0x636F7250
#define META_0042 0x00737365
#define META_0043 0x0000031A
#define META_0044 0xFFE2FFFF
#define META_0045 0x746E4955
#define META_0046 0x00003436
#define META_0047 0x00000001

// class sizeof(type) assignment
#undef META_0031
#define META_0031 (t_meta)sizeof(TimeUtils::GetUnixTimeULINT)
// class method member assignment
#undef META_0038
#define META_0038 (t_meta)META_GetUnixTimeULINT___Process_0  // TimeUtils::GetUnixTimeULINT::__Process (static)

// 000000 10 01 00 00 00 00 04 0A 11 0A 00 00 61 10 01 00    ............a... 
// 000016 00 00 00 00 00 00 01 00 1A 00 54 69 6D 65 55 74    ..........TimeUt 
// 000032 69 6C 73 00 00 6C 69 62 54 69 6D 65 55 74 69 6C    ils..libTimeUtil 
// 000048 73 00 00 00 12 02 00 00 53 79 73 74 65 6D 00 00    s.......System.. 
// 000064 1A 03 00 00 FF FF FD FF 4F 62 6A 65 63 74 00 00    ........Object.. 
// 000080 12 03 00 00 54 69 6D 65 55 74 69 6C 73 00 00 00    ....TimeUtils... 
// 000096 14 01 00 00 00 00 00 00 13 10 00 00 00 00 00 00    ................ 
// 000112 00 00 00 00 10 02 20 87 00 00 01 00 04 00 00 00    ...... ......... 
// 000128 F4 FF F8 FF 0A 00 47 65 74 55 6E 69 78 54 69 6D    ......GetUnixTim 
// 000144 65 55 4C 49 4E 54 00 00 00 00 00 00 13 80 01 00    eULINT.......... 
// 000160 06 00 5F 5F 50 72 6F 63 65 73 73 00 1A 03 00 00    ..__Process..... 
// 000176 FF FF E2 FF 55 49 6E 74 36 34 00 00 01 00 00 00    ....UInt64...... 


#else
#error target endianess not defined
#endif


TimeUtils_Meta const TimeUtils_meta = {
    {{
    META_0000,META_0001,META_0002,META_0003,META_0004,META_0005,META_0006,META_0007,
    META_0008,META_0009,META_0010,META_0011,META_0012,META_0013,META_0014,META_0015,
    META_0016,META_0017,META_0018,META_0019,META_0020,META_0021,META_0022,META_0023,
    META_0024,META_0025,META_0026,META_0027,META_0028,META_0029,META_0030,META_0031,
    META_0032,META_0033,META_0034,META_0035,META_0036,META_0037,META_0038,META_0039,
    META_0040,META_0041,META_0042,META_0043,META_0044,META_0045,META_0046,META_0047
    },},
    // classmember table start
    (sizeof(TimeUtils_Classmember)/sizeof(t_meta)) << 8,
    // classmember table
    {
    },
    // meta end
    0x00000001
};


unsigned TimeUtils::s_modulHndl;

#ifdef PLATFORM_CLASSLAYOUT_CHECK
// Note: please modify the TimeUtils.h header if this function is not yet declared (see *-template.h)
bool TimeUtils::checkLayout()
{
    return true;
}
#endif //#ifdef PLATFORM_CLASSLAYOUT_CHECK

#ifdef PLATFORM_NATIVEDLL_LOADER

#include "NativeDllLoader.code"

static bool LoadLibrary()
{
#ifdef PLATFORM_CLASSLAYOUT_CHECK
    if (!TimeUtils::checkLayout()) { return false; }
#endif
    if (!TimeUtils::init()) { return false; }
    LoadLibraryInfo(&TimeUtils_meta, sizeof(TimeUtils_meta), TimeUtils::isCompatible, TimeUtils::load, TimeUtils::unload);
    return true;
}

#else

bool TimeUtils::loadLibrary()
{
#ifdef PLATFORM_CLASSLAYOUT_CHECK
    if (!checkLayout()) { return false; }
#endif
    s_modulHndl = CNativeLibraryManager::AddNativeLibrary(&TimeUtils_meta, sizeof(TimeUtils_meta), isCompatible, load, unload);
    return true;

}

#endif //#ifdef PLATFORM_NATIVEDLL_LOADER

#endif //#ifdef PLATFORM_DATAMODEL_P64_DEFINED

