// 函数: sub_67dc70
// 地址: 0x67dc70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_2 = sub_67eb10(arg2, arg3 + 0x84)

if (eax_2.b != 0)
    CookieCheckFunction(eax_2)
    return eax_2

float xmm1 = *(arg3 + 0x11c)
int128_t* esi_1

if (xmm1 f+ *(arg3 + 0x10c) f+ *(arg3 + 0x108) <= arg4)
    esi_1 = arg3 + 0x84
else
    if (sub_67eb10(arg2, arg3) != 0)
        int32_t eax_4 = *(arg3 + 0x110)
        
        if (eax_4 != 4 && eax_4 != 2 && eax_4 != 3 && eax_4 != 0 && eax_4 != 0x17 && eax_4 != 0x14
                && eax_4 != 0x19)
            sub_63b870(eax_4, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x944, 
                "PropDynamicSet")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    int128_t var_b0
    memset(&var_b0, 0, 0x78)
    int32_t var_30_1 = 0
    int32_t var_34_1 = 0xffffffff
    int32_t var_38_1 = 1
    esi_1 = &var_b0
    xmm1 = arg4
    void var_24
    var_b0 = *sub_67d460(arg3, arg4, &var_24)

__builtin_memcpy(arg3, esi_1, 0x84)
*(arg3 + 0x118) = xmm1
__builtin_memcpy(arg3 + 0x84, arg2, 0x84)
*(arg3 + 0x108) = *arg5
uint32_t eax_6 = arg5[1].d
*(arg3 + 0x110) = eax_6
*(arg3 + 0x114) = arg4
*(arg3 + 0x11c) = arg4
*(arg5 + 4)
*arg5
CookieCheckFunction(eax_6)
return eax_6
