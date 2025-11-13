// 函数: sub_75aba0
// 地址: 0x75aba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
CRITICAL_SECTION* eax_2 = *(arg1 + 4)

if (eax_2 != 0)
    sub_761d70(eax_2)

char outputString[0xc8]

if (*(arg1 + 8) != 0)
    char const* const var_d8_2 = "!mInsideAudioThreadMutex"
    int32_t var_dc = 0x902
    char const* const var_e0 = "D:\soloud\src\core\soloud.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

CRITICAL_SECTION* eax_3 = *(arg1 + 4)
*(arg1 + 8) = 0

if (eax_3 != 0)
    sub_761dd0(eax_3)

if (*(arg1 + 8) != 0)
    char const* const var_d8_5 = "!mInsideAudioThreadMutex"
    int32_t var_dc_1 = 0xc5
    char const* const var_e0_1 = "D:\soloud\src\core\soloud.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

sub_75f5e0(arg1)
int32_t eax_4 = *(arg1 + 0xc)

if (eax_4 != 0)
    eax_4(arg1)

CRITICAL_SECTION* result = *(arg1 + 4)
*(arg1 + 0xc) = 0

if (result != 0)
    result = sub_761d50(result)

*(arg1 + 4) = 0
CookieCheckFunction(result)
return result
