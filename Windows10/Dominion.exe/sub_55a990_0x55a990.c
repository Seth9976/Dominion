// 函数: sub_55a990
// 地址: 0x55a990
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax
int32_t ecx
eax, ecx = sub_5594c0()
int32_t var_24 = ecx
sub_561e00(eax, 0, 1, 0)
void* eax_1 = sub_573400()
sub_590760(eax_1, *(eax_1 + 0xc), *(eax_1 + 4), 1, 1, 0, 0)
void* eax_2 = sub_573400()
int32_t ecx_2 = *(eax_2 + 0xc)

if (ecx_2 == 0xffffffff)
    sub_63b870(eax_2, &data_801800, "c.activePlayer != PLAYER_NONE", 
        "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0x52, "SetGainFlag")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_3 = *(eax_2 + 4)
int32_t ecx_3 = ecx_2 * 0x5a30
*(ecx_3 + eax_3 + 0x17558) |= 2
void* eax_4 = sub_573400()
void* result
int32_t ecx_5
int32_t edx_2
result, ecx_5, edx_2 = sub_5887c0(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0)
void* result_1 = result

if (result_1 != 0)
    int32_t var_24_1 = ecx_5
    int32_t ebx
    ebx.b = sub_568470(result, edx_2, result_1.w, 3)
    result = sub_566890(zx.d(ebx.b) ^ 1)
    
    if (ebx.b != 0)
        sub_56e9c0(1)
        void* eax_6 = sub_573400()
        uint32_t ebx_1 = zx.d(result_1.w)
        int32_t eax_7 = *(eax_6 + 4)
        
        if (ebx_1 u>= 0x320)
            sub_591930()
        
        return sub_582d10(eax_7, *(ebx_1 * 0x64 + eax_7 + 0x1a70), *(eax_6 + 4), result_1, 0x3eb, 
            0xb, 0x3ea, 3, *(eax_6 + 0x28), *(eax_6 + 0x2c), *(eax_6 + 0x30), 0, 0, nullptr, 0, 
            nullptr, nullptr)

return result
