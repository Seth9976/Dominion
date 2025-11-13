// 函数: sub_5708d0
// 地址: 0x5708d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
int16_t edi = (*arg2).w
int32_t* eax_1 = *(arg1 + 4)
int32_t edx

if (sub_568380(eax_1, edx, edi, *eax_1) != 0)
    int32_t* eax_3 = *(arg1 + 8)
    uint32_t ebx_1 = *eax_3
    int32_t eax_4 = eax_3[1]
    uint32_t edi_1 = zx.d(edi)
    void* esi_1 = *(sub_573400() + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
    
    int32_t eax_6 = edi_1 * 0x64
    
    if (sub_5754f0(eax_6, *(eax_6 + esi_1 + 0x1a4c), esi_1, ebx_1, eax_4) != 0)
        return 1

return 0
