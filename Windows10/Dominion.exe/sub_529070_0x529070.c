// 函数: sub_529070
// 地址: 0x529070
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int16_t edi = (*arg2).w
uint32_t esi = zx.d(edi)
void* ecx = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t eax_2 = esi * 0x64

if (sub_5754f0(eax_2, *(eax_2 + ecx + 0x1a4c), ecx, 4, 0) != 0)
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
    
    if (sub_568470(eax_7, edx_1, edi, eax_7) != 0)
        void* eax_10 = sub_573400()
        void* edi_1 = *(eax_10 + 4)
        
        if (esi u>= 0x320)
            eax_10 = sub_591930()
        
        if (sub_5754f0(eax_10, *(eax_2 + edi_1 + 0x1a4c), edi_1, 0, 0x4000) == 0)
            void* edi_2 = *(sub_573400() + 4)
            
            if (esi u>= 0x320)
                sub_591930()
            
            if (sub_5754f0(eax_2, *(eax_2 + edi_2 + 0x1a4c), edi_2, 0x80, 0) == 0)
                return 1

return 0
