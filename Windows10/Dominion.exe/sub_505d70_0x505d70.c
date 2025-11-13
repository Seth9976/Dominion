// 函数: sub_505d70
// 地址: 0x505d70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
int16_t esi = (*(arg1 + 4)).w
int16_t ebx = (*arg2).w
void* eax_1 = sub_573400()
uint32_t esi_1 = zx.d(esi)
void* ecx = *(eax_1 + 0xc)
void* edi = *(eax_1 + 4)
var_c = ecx

if (esi_1 u>= 0x320)
    sub_591930()
    ecx = var_c

int32_t eax_2 = esi_1 * 0x64
uint32_t eax_3
int32_t edx_1
eax_3, edx_1 = sub_576e90(eax_2, edi, &var_c, ecx, *(eax_2 + edi + 0x1a4c), 0)

if (sub_568380(eax_3, edx_1, ebx, var_c) != 0)
    uint32_t esi_2 = zx.d(ebx)
    void* edi_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t eax_6 = esi_2 * 0x64
    
    if (sub_5754f0(eax_6, *(eax_6 + edi_1 + 0x1a4c), edi_1, 8, 0) == 0)
        return 1

return 0
