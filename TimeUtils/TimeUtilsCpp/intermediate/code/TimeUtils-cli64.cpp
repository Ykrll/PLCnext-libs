// PHOENIX CONTACT Software eCLR Native Library Builder version 3.0.1043.0
// Do not modify this automatically generated file!

#include "eclr.h"
#include "TimeUtils.h"

#if ECLRMETA_COMPATID != 10
  #error incompatible metadata, rebuild TimeUtils.cs !
#endif

#ifdef PLATFORM_DATAMODEL_P64_DEFINED

typedef uint64 t_meta;

// declare the meta table
struct TimeUtils_Metatable
{
    t_meta meta[33];
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
UInt64 (* const p208)() = &TimeUtils::GetUnixTimeULINT::__Process;


#if (PLATFORM_TARGET_ENDIANESS == TARGET_BIG_ENDIAN)
#define META_0000 0x0000000000000110
#define META_0001 0x00000A0800000000
#define META_0002 0x0000000000000511
#define META_0003 0x1061000100000000
#define META_0004 0x0000000100245469
#define META_0005 0x6D655574696C7300
#define META_0006 0x006C696254696D65
#define META_0007 0x5574696C73000000
#define META_0008 0x0000000000000112
#define META_0009 0x53797374656D0000
#define META_0010 0x000000000000021A
#define META_0011 0xFFFFFFFC4F626A65
#define META_0012 0x6374000000000000
#define META_0013 0x0000000000000212
#define META_0014 0x54696D655574696C
#define META_0015 0x7300000000000000
#define META_0016 0x0000000000000114
#define META_0017 0x0000000000000000
#define META_0018 0x0000000000000A13
#define META_0019 0x0000000000000000
#define META_0020 0x0000000000000000
#define META_0021 0x02108F2000000001
#define META_0022 0x00000008FFECFFF2
#define META_0023 0x000C476574556E69
#define META_0024 0x7854696D65554C49
#define META_0025 0x4E54000000000000
#define META_0026 0x0000000000000000
#define META_0027 0x8013000100085F5F
#define META_0028 0x50726F6365737300
#define META_0029 0x000000000000021A
#define META_0030 0xFFFFFFD655496E74
#define META_0031 0x3634000000000000
#define META_0032 0x0000000000000001

// class sizeof(type) assignment
#undef META_0022
#define META_0022 (t_meta)(0x00000000FFECFFF2 | ((uint64)sizeof(TimeUtils::GetUnixTimeULINT) << 32) ) 
// class method member assignment
#undef META_0026
#define META_0026 (t_meta)META_GetUnixTimeULINT___Process_0  // TimeUtils::GetUnixTimeULINT::__Process (static)

// 000000 00 00 00 00 00 00 01 10 00 00 0A 08 00 00 00 00    ................ 
// 000016 00 00 00 00 00 00 05 11 10 61 00 01 00 00 00 00    .........a...... 
// 000032 00 00 00 01 00 24 54 69 6D 65 55 74 69 6C 73 00    .....$TimeUtils. 
// 000048 00 6C 69 62 54 69 6D 65 55 74 69 6C 73 00 00 00    .libTimeUtils... 
// 000064 00 00 00 00 00 00 01 12 53 79 73 74 65 6D 00 00    ........System.. 
// 000080 00 00 00 00 00 00 02 1A FF FF FF FC 4F 62 6A 65    ............Obje 
// 000096 63 74 00 00 00 00 00 00 00 00 00 00 00 00 02 12    ct.............. 
// 000112 54 69 6D 65 55 74 69 6C 73 00 00 00 00 00 00 00    TimeUtils....... 
// 000128 00 00 00 00 00 00 01 14 00 00 00 00 00 00 00 00    ................ 
// 000144 00 00 00 00 00 00 0A 13 00 00 00 00 00 00 00 00    ................ 
// 000160 00 00 00 00 00 00 00 00 02 10 8F 20 00 00 00 01    ........... .... 
// 000176 00 00 00 00 FF EC FF F2 00 0C 47 65 74 55 6E 69    ..........GetUni 
// 000192 78 54 69 6D 65 55 4C 49 4E 54 00 00 00 00 00 00    xTimeULINT...... 
// 000208 00 00 00 00 00 00 00 00 80 13 00 01 00 08 5F 5F    ..............__ 
// 000224 50 72 6F 63 65 73 73 00 00 00 00 00 00 00 02 1A    Process......... 
// 000240 FF FF FF D6 55 49 6E 74 36 34 00 00 00 00 00 00    ....UInt64...... 
// 000256 00 00 00 00 00 00 00 01    ........ 


#elif (PLATFORM_TARGET_ENDIANESS == TARGET_LITTLE_ENDIAN)
#define META_0000 0x0000000000000110
#define META_0001 0x000000000A080000
#define META_0002 0x0000000000000511
#define META_0003 0x0000000000011061
#define META_0004 0x6954002400010000
#define META_0005 0x00736C697455656D
#define META_0006 0x656D695462696C00
#define META_0007 0x000000736C697455
#define META_0008 0x0000000000000112
#define META_0009 0x00006D6574737953
#define META_0010 0x000000000000021A
#define META_0011 0x656A624FFFFCFFFF
#define META_0012 0x0000000000007463
#define META_0013 0x0000000000000212
#define META_0014 0x6C697455656D6954
#define META_0015 0x0000000000000073
#define META_0016 0x0000000000000114
#define META_0017 0x0000000000000000
#define META_0018 0x0000000000000A13
#define META_0019 0x0000000000000000
#define META_0020 0x0000000000000000
#define META_0021 0x000100008F200210
#define META_0022 0xFFF2FFEC00000008
#define META_0023 0x696E55746547000C
#define META_0024 0x494C55656D695478
#define META_0025 0x000000000000544E
#define META_0026 0x0000000000000000
#define META_0027 0x5F5F000800018013
#define META_0028 0x00737365636F7250
#define META_0029 0x000000000000021A
#define META_0030 0x746E4955FFD6FFFF
#define META_0031 0x0000000000003436
#define META_0032 0x0000000000000001

// class sizeof(type) assignment
#undef META_0022
#define META_0022 (t_meta)(0xFFF2FFEC00000000 | (uint32)sizeof(TimeUtils::GetUnixTimeULINT) ) 
// class method member assignment
#undef META_0026
#define META_0026 (t_meta)META_GetUnixTimeULINT___Process_0  // TimeUtils::GetUnixTimeULINT::__Process (static)

// 000000 10 01 00 00 00 00 00 00 00 00 08 0A 00 00 00 00    ................ 
// 000016 11 05 00 00 00 00 00 00 61 10 01 00 00 00 00 00    ........a....... 
// 000032 00 00 01 00 24 00 54 69 6D 65 55 74 69 6C 73 00    ....$.TimeUtils. 
// 000048 00 6C 69 62 54 69 6D 65 55 74 69 6C 73 00 00 00    .libTimeUtils... 
// 000064 12 01 00 00 00 00 00 00 53 79 73 74 65 6D 00 00    ........System.. 
// 000080 1A 02 00 00 00 00 00 00 FF FF FC FF 4F 62 6A 65    ............Obje 
// 000096 63 74 00 00 00 00 00 00 12 02 00 00 00 00 00 00    ct.............. 
// 000112 54 69 6D 65 55 74 69 6C 73 00 00 00 00 00 00 00    TimeUtils....... 
// 000128 14 01 00 00 00 00 00 00 00 00 00 00 00 00 00 00    ................ 
// 000144 13 0A 00 00 00 00 00 00 00 00 00 00 00 00 00 00    ................ 
// 000160 00 00 00 00 00 00 00 00 10 02 20 8F 00 00 01 00    .......... ..... 
// 000176 00 00 00 00 EC FF F2 FF 0C 00 47 65 74 55 6E 69    ..........GetUni 
// 000192 78 54 69 6D 65 55 4C 49 4E 54 00 00 00 00 00 00    xTimeULINT...... 
// 000208 00 00 00 00 00 00 00 00 13 80 01 00 08 00 5F 5F    ..............__ 
// 000224 50 72 6F 63 65 73 73 00 1A 02 00 00 00 00 00 00    Process......... 
// 000240 FF FF D6 FF 55 49 6E 74 36 34 00 00 00 00 00 00    ....UInt64...... 
// 000256 01 00 00 00 00 00 00 00    ........ 


#else
#error target endianess not defined
#endif


TimeUtils_Meta const TimeUtils_meta = {
    {{
    META_0000,META_0001,META_0002,META_0003,META_0004,META_0005,META_0006,META_0007,
    META_0008,META_0009,META_0010,META_0011,META_0012,META_0013,META_0014,META_0015,
    META_0016,META_0017,META_0018,META_0019,META_0020,META_0021,META_0022,META_0023,
    META_0024,META_0025,META_0026,META_0027,META_0028,META_0029,META_0030,META_0031,
    META_0032
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

