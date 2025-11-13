// 函数: sub_544b50
// 地址: 0x544b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_8
uint32_t result
int32_t ecx_1
result, ecx_1 = sub_562bb0(4, 0, var_8, __return_addr)

if (result != 0)
    int32_t var_c_1 = ecx_1
    sub_561e00(result, 0, 3, 0)
    void* eax = sub_573400()
    sub_590760(eax, *(eax + 0xc), *(eax + 4), 1, 1, 0, 0)
    void* eax_1 = sub_573400()
    int32_t ecx_3 = *(eax_1 + 0xc)
    
    if (ecx_3 == 0xffffffff)
        sub_63b870(eax_1, &data_801800, "c.activePlayer != PLAYER_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
        
        if (sub_63bc30() == 0)
            noreturn sub_63bb00() __tailcall
        
        breakpoint
    
    result = *(eax_1 + 4)
    int32_t ecx_4 = ecx_3 * 0x5a30
    *(ecx_4 + result + 0x17558) |= 2

return result
