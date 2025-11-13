// 函数: sub_528f60
// 地址: 0x528f60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int16_t esi = (*arg2).w
uint32_t edi = zx.d(esi)
void* eax_2 = *(sub_573400() + 4)

if (edi u>= 0x320)
    sub_591930()

int32_t ecx = edi * 0x64

if (sub_5754f0(eax_2, *(ecx + eax_2 + 0x1a4c), eax_2, 4, 0) != 0)
    uint32_t var_30[0x8]
    uint32_t* eax_5
    int32_t edx_1
    eax_5, edx_1 = sub_576c00(&var_30, *(arg1 + 4))
    int32_t xmm0_1 = (*eax_5).d
    int32_t eax_7
    
    if (xmm0_1 s>= 1)
        eax_7 = *(arg1 + 4) - 1
    else
        eax_7 = xmm0_1 | 0xffffffff
    
    if (sub_568470(eax_7, edx_1, esi, eax_7) != 0)
        void* eax_10 = sub_573400()
        void* esi_1 = *(eax_10 + 4)
        
        if (edi u>= 0x320)
            eax_10 = sub_591930()
        
        if (sub_5754f0(eax_10, *(ecx + esi_1 + 0x1a4c), esi_1, 0, 0x4000) == 0)
            return 1

return 0
