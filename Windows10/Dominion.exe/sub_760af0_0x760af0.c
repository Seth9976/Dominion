// 函数: sub_760af0
// 地址: 0x760af0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char outputString[0xc8]

if (arg2 u>= 0x400)
    char const* const var_dc = "aVoice < VOICE_COUNT"
    int32_t var_e0 = 0x33
    char const* const var_e4 = "D:\soloud\src\core\soloud_core_voiceops.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

if (*(arg1 + 8) == 0)
    char const* const var_dc_2 = "mInsideAudioThreadMutex"
    int32_t var_e0_1 = 0x34
    char const* const var_e4_1 = "D:\soloud\src\core\soloud_core_voiceops.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

*(arg1 + 0x1cdc0) = 1
uint32_t result = *(arg1 + (arg2 << 2) + 0x50)

if (result != 0)
    *(result + 0x124) = 0
    result = *(arg1 + (arg2 << 2) + 0x50)
    
    if (arg3 != 0)
        *(result + 0x10) |= 4
        CookieCheckFunction(result)
        return result
    
    *(result + 0x10) &= 0xfffffffb

CookieCheckFunction(result)
return result
