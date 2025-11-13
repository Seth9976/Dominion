// 函数: sub_761000
// 地址: 0x761000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char outputString[0xc8]

if (arg2 u>= 0x400)
    char const* const var_dc = "aVoice < VOICE_COUNT"
    int32_t var_e0 = 0x8e
    char const* const var_e4 = "D:\soloud\src\core\soloud_core_voiceops.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

if (*(arg1 + 8) != 0)
    void* ecx = *(arg1 + (arg2 << 2) + 0x50)
    *(ecx + 0x50) = *(arg2 * 0x68 + arg1 + 0x1dec) f* *(ecx + 0x4c)
    uint32_t result = *(arg1 + (arg2 << 2) + 0x50)
    *(result + 0x44) = *(result + 0x50) f* *(result + 0x40)
    CookieCheckFunction(result)
    return result

char const* const var_dc_2 = "mInsideAudioThreadMutex"
int32_t var_e0_1 = 0x8f
char const* const var_e4_1 = "D:\soloud\src\core\soloud_core_voiceops.cpp"
sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
OutputDebugStringA(&outputString)
breakpoint
