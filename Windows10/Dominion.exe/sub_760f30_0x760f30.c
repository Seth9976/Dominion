// 函数: sub_760f30
// 地址: 0x760f30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint32_t result = __security_cookie ^ &__saved_ebp
uint32_t result_1 = result
char outputString[0xc8]

if (arg2 u>= 0x400)
    char const* const var_dc = "aVoice < VOICE_COUNT"
    int32_t var_e0 = 0x76
    char const* const var_e4 = "D:\soloud\src\core\soloud_core_voiceops.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

if (*(arg1 + 8) == 0)
    char const* const var_dc_2 = "mInsideAudioThreadMutex"
    int32_t var_e0_1 = 0x77
    char const* const var_e4_1 = "D:\soloud\src\core\soloud_core_voiceops.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

*(arg1 + 0x1cdc0) = 1
int32_t* ecx = *(arg1 + (arg2 << 2) + 0x50)

if (ecx != 0)
    int32_t i = 0
    *(arg1 + (arg2 << 2) + 0x50) = 0
    
    if (*(arg1 + 0x18) u> 0)
        do
            int32_t eax_1 = *(arg1 + 0x4c)
            
            if (*(eax_1 + (i << 2)) == ecx)
                *(eax_1 + (i << 2)) = 0
            
            i += 1
        while (i u< *(arg1 + 0x18))
    
    result = (**ecx)(1)

CookieCheckFunction(result)
return result
