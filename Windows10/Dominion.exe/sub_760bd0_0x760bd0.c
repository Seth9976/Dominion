// 函数: sub_760bd0
// 地址: 0x760bd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char outputString[0xc8]

if (arg2 u>= 0x400)
    char const* const var_e0 = "aVoice < VOICE_COUNT"
    int32_t var_e4 = 0x21
    char const* const var_e8 = "D:\soloud\src\core\soloud_core_voiceops.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

if (*(arg1 + 8) == 0)
    char const* const var_e0_2 = "mInsideAudioThreadMutex"
    int32_t var_e4_1 = 0x22
    char const* const var_e8_1 = "D:\soloud\src\core\soloud_core_voiceops.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

if (not(0 f< arg3))
    CookieCheckFunction(1)
    return 1

void* eax_2 = *(arg1 + (arg2 << 2) + 0x50)

if (eax_2 != 0)
    *(eax_2 + 0x4c) = arg3
    
    if (arg2 u>= 0x400)
        char const* const var_e0_4 = "aVoice < VOICE_COUNT"
        int32_t var_e4_2 = 0x8e
        char const* const var_e8_2 = "D:\soloud\src\core\soloud_core_voiceops.cpp"
        sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
        OutputDebugStringA(&outputString)
        breakpoint
    
    if (*(arg1 + 8) == 0)
        char const* const var_e0_6 = "mInsideAudioThreadMutex"
        int32_t var_e4_3 = 0x8f
        char const* const var_e8_3 = "D:\soloud\src\core\soloud_core_voiceops.cpp"
        sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
        OutputDebugStringA(&outputString)
        breakpoint
    
    void* ecx_2 = *(arg1 + (arg2 << 2) + 0x50)
    *(ecx_2 + 0x50) = *(arg2 * 0x68 + arg1 + 0x1dec) f* *(ecx_2 + 0x4c)
    void* eax_4 = *(arg1 + (arg2 << 2) + 0x50)
    *(eax_4 + 0x44) = *(eax_4 + 0x50) f* *(eax_4 + 0x40)

CookieCheckFunction(0)
return 0
