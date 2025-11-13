// 函数: sub_546920
// 地址: 0x546920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int16_t ebx = (*arg2).w
int32_t* eax_1 = *(arg1 + 4)
int32_t eax_2 = eax_1[1]
uint32_t var_10 = *eax_1
uint32_t ebx_1 = zx.d(ebx)
void* esi = *(sub_573400() + 4)

if (ebx_1 u>= 0x320)
    sub_591930()

int32_t eax_4 = ebx_1 * 0x64

if (sub_5754f0(eax_4, *(eax_4 + esi + 0x1a4c), esi, var_10, eax_2) != 0)
    int16_t esi_1 = (**(arg1 + 8)).w
    void* eax_7 = sub_573400()
    uint32_t esi_2 = zx.d(esi_1)
    int32_t ebx_2 = *(eax_7 + 0xc)
    void* edi_1 = *(eax_7 + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t eax_8 = esi_2 * 0x64
    uint32_t eax_9
    int32_t edx_2
    eax_9, edx_2 = sub_576e90(eax_8, edi_1, &var_10, ebx_2, *(eax_8 + edi_1 + 0x1a4c), 0)
    
    if (sub_568380(eax_9, edx_2, ebx, var_10) != 0)
        return 1

return 0
