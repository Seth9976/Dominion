// 函数: sub_547290
// 地址: 0x547290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
int16_t ebx = (*arg2).w
var_c = arg1
uint32_t edi = zx.d(ebx)
void* esi = *(sub_573400() + 4)

if (edi u>= 0x320)
    sub_591930()

int32_t eax_2 = edi * 0x64

if (sub_5754f0(eax_2, *(eax_2 + esi + 0x1a4c), esi, &__dos_header, 0) != 0)
    int16_t esi_1 = (**(var_c + 4)).w
    void* eax_6 = sub_573400()
    uint32_t esi_2 = zx.d(esi_1)
    void* ecx_1 = *(eax_6 + 0xc)
    void* edi_1 = *(eax_6 + 4)
    var_c = ecx_1
    
    if (esi_2 u>= 0x320)
        sub_591930()
        ecx_1 = var_c
    
    int32_t eax_7 = esi_2 * 0x64
    uint32_t eax_8
    int32_t edx_2
    eax_8, edx_2 = sub_576e90(eax_7, edi_1, &var_c, ecx_1, *(eax_7 + edi_1 + 0x1a4c), 0)
    
    if (sub_568380(eax_8, edx_2, ebx, var_c) != 0)
        return 1

return 0
