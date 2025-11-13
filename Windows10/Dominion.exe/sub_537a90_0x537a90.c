// 函数: sub_537a90
// 地址: 0x537a90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t var_10 = 0
int32_t eax
uint32_t result = sub_568960(sub_561e00(eax, 0, 2, 0), 0, 0x3ea, 0)

if (result s<= 5)
    sub_56e9c0(1)
    void* eax_2 = sub_573400()
    sub_590760(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 1, 2, 0, 0)
    void* eax_3 = sub_573400()
    int32_t ecx_2 = *(eax_3 + 0xc)
    
    if (ecx_2 == 0xffffffff)
        sub_63b870(eax_3, &data_801800, "c.activePlayer != PLAYER_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
        
        if (sub_63bc30() == 0)
            noreturn sub_63bb00() __tailcall
        
        breakpoint
    
    result = *(eax_3 + 4)
    int32_t ecx_3 = ecx_2 * 0x5a30
    *(ecx_3 + result + 0x17558) |= 2

return result
