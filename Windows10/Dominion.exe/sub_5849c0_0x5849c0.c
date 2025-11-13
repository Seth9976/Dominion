// 函数: sub_5849c0
// 地址: 0x5849c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t esi = zx.d(arg4)

if (esi u>= 0x320)
    sub_591930()

uint32_t result = esi * 0x64
int32_t ecx = *(result + arg3 + 0x1a4c)

if (ecx == 0xc27)
    result = sub_590c70(result, arg2, arg3, 0x3eb)
    
    if (result == 0 && sub_590c70(result, arg2, arg3, 0x3ec) == 0)
        result.b = 1
        CookieCheckFunction(result)
        return result
else if (ecx == 0xf1a)
    void* eax_2
    int32_t ecx_1
    eax_2, ecx_1 = sub_571b30(ecx, *(arg3 + 0xd48))
    int32_t var_4c_1 = ecx_1
    uint32_t var_38[0x7]
    sub_576c00(&var_38, *(eax_2 + 0x90))
    char var_d = 0
    result = sub_576ce0(eax_2)
    
    if (result != 0)
        int64_t var_1c = 0
        sub_573050(&var_1c, arg2, arg3, &var_1c)
        int32_t var_14
        result(&var_14, &var_d)
        sub_576c00(&var_38, var_14)
        TEB* fsbase
        void* ecx_4 = *fsbase->ThreadLocalStoragePointer
        int32_t eax_5 = *(ecx_4 + 0xf010)
        
        if (eax_5 s<= 0)
            sub_63b870(eax_5, &data_801800, "cs.numContexts > 0", 
                "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x792, "DomPopContext")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        *(ecx_4 + 0xf010) = eax_5 - 1

result.b = 0
CookieCheckFunction(result)
return result
