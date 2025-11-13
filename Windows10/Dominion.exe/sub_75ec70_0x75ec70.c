// 函数: sub_75ec70
// 地址: 0x75ec70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie

if (*(arg1 + 8) == 0)
    char const* const var_d8 = "mInsideAudioThreadMutex"
    int32_t var_dc = 0x908
    char const* const var_e0 = "D:\soloud\src\core\soloud.cpp"
    char outputString[0xc8]
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

CRITICAL_SECTION* result = *(arg1 + 4)
*(arg1 + 8) = 0

if (result != 0)
    result = sub_761dd0(result)

CookieCheckFunction(result)
return result
