// 函数: sub_7610d0
// 地址: 0x7610d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char outputString[0xc8]

if (arg2 u>= 0x400)
    char const* const var_dc = "aVoice < VOICE_COUNT"
    int32_t var_e0 = 0x96
    char const* const var_e4 = "D:\soloud\src\core\soloud_core_voiceops.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

if (*(arg1 + 8) == 0)
    char const* const var_dc_2 = "mInsideAudioThreadMutex"
    int32_t var_e0_1 = 0x97
    char const* const var_e4_1 = "D:\soloud\src\core\soloud_core_voiceops.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

void* ecx = *(arg1 + (arg2 << 2) + 0x50)
*(ecx + 0x3c) = *(arg2 * 0x68 + arg1 + 0x1df0) f* *(ecx + 0x38)
uint32_t result = *(arg1 + (arg2 << 2) + 0x50)

if ((*(result + 0x10) & 4) != 0)
    *(result + 0x15c) = *(result + 0x3c) f* *(result + 0x18)
    void* eax_3 = *(arg1 + (arg2 << 2) + 0x50)
    *(eax_3 + 0x160) = *(eax_3 + 0x3c) f* *(eax_3 + 0x1c)
    void* eax_4 = *(arg1 + (arg2 << 2) + 0x50)
    *(eax_4 + 0x164) = *(eax_4 + 0x3c) f* *(eax_4 + 0x20)
    void* eax_5 = *(arg1 + (arg2 << 2) + 0x50)
    *(eax_5 + 0x168) = *(eax_5 + 0x3c) f* *(eax_5 + 0x24)
    void* eax_6 = *(arg1 + (arg2 << 2) + 0x50)
    *(eax_6 + 0x16c) = *(eax_6 + 0x3c) f* *(eax_6 + 0x28)
    void* eax_7 = *(arg1 + (arg2 << 2) + 0x50)
    *(eax_7 + 0x170) = *(eax_7 + 0x3c) f* *(eax_7 + 0x2c)
    void* eax_8 = *(arg1 + (arg2 << 2) + 0x50)
    *(eax_8 + 0x174) = *(eax_8 + 0x3c) f* *(eax_8 + 0x30)
    result = *(arg1 + (arg2 << 2) + 0x50)
    *(result + 0x178) = *(result + 0x3c) f* *(result + 0x34)

CookieCheckFunction(result)
return result
