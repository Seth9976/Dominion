// 函数: sub_51fc50
// 地址: 0x51fc50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t eax
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 != 0xffffffff)
    int32_t eax_3 = *(eax_2 + 4)
    int32_t ecx_3 = ecx_2 * 0x5a30
    *(ecx_3 + eax_3 + 0x17558) |= 2
    
    if (sub_563430() == 0)
        goto label_51fcef
    
    void* eax_5 = sub_573400()
    sub_590760(eax_5, *(eax_5 + 0xc), *(eax_5 + 4), 1, 1, 0, 0)
    eax_2 = sub_573400()
    int32_t ecx_6 = *(eax_2 + 0xc)
    
    if (ecx_6 != 0xffffffff)
        int32_t eax_6 = *(eax_2 + 4)
        int32_t ecx_7 = ecx_6 * 0x5a30
        *(ecx_7 + eax_6 + 0x17558) |= 2
    label_51fcef:
        uint32_t result = sub_563430()
        
        if (result == 0)
            return result
        
        void* eax_7 = sub_573400()
        sub_590760(eax_7, *(eax_7 + 0xc), *(eax_7 + 4), 2, 1, 0, 0)
        eax_2 = sub_573400()
        int32_t ecx_10 = *(eax_2 + 0xc)
        
        if (ecx_10 != 0xffffffff)
            result = *(eax_2 + 4)
            int32_t ecx_11 = ecx_10 * 0x5a30
            *(ecx_11 + result + 0x17558) |= 8
            return result

sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")

if (sub_63bc30() == 0)
    noreturn sub_63bb00() __tailcall

breakpoint
