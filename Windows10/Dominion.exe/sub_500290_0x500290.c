// 函数: sub_500290
// 地址: 0x500290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()
int32_t ecx_1 = *(eax + 0xc) * 0x5a30
int32_t eax_1 = *(eax + 4)
int32_t var_14 = ecx_1
int32_t esi = *(ecx_1 + eax_1 + 0x17564)
sub_561e00(eax_1, 0, 3, 0)
void* eax_2 = sub_573400()
int32_t result = *(eax_2 + 4)

if (esi != *(*(eax_2 + 0xc) * 0x5a30 + result + 0x17564))
    sub_56e9c0(1)
    void* eax_3 = sub_573400()
    sub_590760(eax_3, *(eax_3 + 0xc), *(eax_3 + 4), 1, 1, 0, 0)
    void* eax_4 = sub_573400()
    int32_t ecx_4 = *(eax_4 + 0xc)
    int32_t ecx_7
    
    if (ecx_4 != 0xffffffff)
        int32_t eax_5 = *(eax_4 + 4)
        int32_t ecx_5 = ecx_4 * 0x5a30
        *(ecx_5 + eax_5 + 0x17558) |= 2
        void* eax_6 = sub_573400()
        int32_t var_14_1 = 0
        int32_t var_18_1 = 0xffffffff
        int32_t var_1c_1 = 0
        void var_24
        sub_571fa0(eax_6, *(eax_6 + 0xc), *(eax_6 + 4), 0x1000, 2, 0x476, nullptr, var_24)
        eax_4 = sub_573400()
        ecx_7 = *(eax_4 + 0xc)
    
    if (ecx_4 == 0xffffffff || ecx_7 == 0xffffffff)
        sub_63b870(eax_4, &data_801800, "c.activePlayer != PLAYER_NONE", 
            "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = *(eax_4 + 4)
    int32_t ecx_8 = ecx_7 * 0x5a30
    *(ecx_8 + result + 0x17558) |= 0x80

return result
