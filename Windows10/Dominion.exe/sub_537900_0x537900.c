// 函数: sub_537900
// 地址: 0x537900
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
sub_561af0(__security_cookie ^ &__saved_ebp, 0, 2, 0)
void* eax_2 = sub_573400()
uint32_t result = sub_585550(*(eax_2 + 4), *(eax_2 + 0xc))

if (result s>= 3)
    int32_t var_c_1 = 0
    void var_c8c
    sub_56f1a0(result, &var_c8c, 0x1c, 0)
    sub_56e9c0(1)
    void* eax_3 = sub_573400()
    sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 1, 1, 0, 0)
    void* eax_4 = sub_573400()
    int32_t ecx_2 = *(eax_4 + 0xc)
    
    if (ecx_2 == 0xffffffff)
        sub_63b870(eax_4, &data_801800, "c.activePlayer != PLAYER_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t eax_5 = *(eax_4 + 4)
    int32_t edx_3 = ecx_2 * 0x5a30
    int32_t var_c90_1 = ecx_2
    *(edx_3 + eax_5 + 0x17558) |= 2
    result = sub_561e00(eax_5, 0, 1, 0)

CookieCheckFunction(result)
return result
