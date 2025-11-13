// 函数: sub_75ae50
// 地址: 0x75ae50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
CRITICAL_SECTION* result = *(arg1 + 4)

if (result != 0)
    result = sub_761d70(result)

if (*(arg1 + 8) == 0)
    *(arg1 + 8) = 1
    CookieCheckFunction(result)
    return result

char const* const var_d8_2 = "!mInsideAudioThreadMutex"
int32_t var_dc = 0x902
char const* const var_e0 = "D:\soloud\src\core\soloud.cpp"
char outputString[0xc8]
sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
OutputDebugStringA(&outputString)
breakpoint
