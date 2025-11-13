// 函数: sub_5349c0
// 地址: 0x5349c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1918)
__security_cookie
int32_t var_14 = 0
void var_8
void arg_c80
__builtin_memcpy(&arg_c80, sub_5685f0(&var_8, 0, 0x3ea, &var_8, 2), 0xc84)
int32_t* result = sub_5671b0(&var_8, 1, &arg_c80, &var_8, 0x3ea, 0x66, 7, 0x3c)
int32_t ecx_1 = __builtin_memcpy(&arg_c80, result, 0xc84)

if (arg1 != 0)
    int32_t var_14_1 = ecx_1
    sub_561e00(result, 0, 3, 0)
    void* eax_5 = sub_573400()
    sub_590760(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 1, 1, 0, 0)
    void* eax_6 = sub_573400()
    int32_t ecx_3 = *(eax_6 + 0xc)
    
    if (ecx_3 == 0xffffffff)
        sub_63b870(eax_6, &data_801800, "c.activePlayer != PLAYER_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = *(eax_6 + 4)
    result[ecx_3 * 0x168c + 0x5d56] |= 2

CookieCheckFunction(result)
return result
