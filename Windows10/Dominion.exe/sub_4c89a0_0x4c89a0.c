// 函数: sub_4c89a0
// 地址: 0x4c89a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = data_cc8dc0

if (eax_2 == 0)
    sub_63b870(eax_2, &data_801800, "gGameSettings.localSettings", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x5fb, "GetLocalSettings")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t result = *(eax_2 + 0x10)

if (result == 0)
    wchar16 var_bc[0x5a]
    
    if (LCIDToLocaleName(GetThreadLocale(), &var_bc, 0x55, 0) != 0)
        if (wcsncmp(&var_bc, u"fr", 2) == 0)
            CookieCheckFunction(3)
            return 3
        
        if (wcsncmp(&var_bc, u"de", 2) == 0)
            CookieCheckFunction(2)
            return 2
        
        int32_t eax_7 = wcsncmp(&var_bc, u"jp", 2)
        int32_t eax_8 = neg.d(eax_7)
        CookieCheckFunction((sbb.d(eax_8, eax_8, eax_7 != 0) & 0xfffffff1) + 0x10)
        return (sbb.d(eax_8, eax_8, eax_7 != 0) & 0xfffffff1) + 0x10
    
    result = 1

CookieCheckFunction(result)
return result
