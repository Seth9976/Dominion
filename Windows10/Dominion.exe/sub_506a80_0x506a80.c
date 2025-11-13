// 函数: sub_506a80
// 地址: 0x506a80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int16_t esi = (*arg1).w
void* eax_1 = sub_573400()
uint32_t esi_1 = zx.d(esi)
void* edi = *(eax_1 + 4)

if (esi_1 u>= 0x320)
    eax_1 = sub_591930()

int32_t ebx = esi_1 * 0x64

if (sub_5754f0(eax_1, *(ebx + edi + 0x1a4c), edi, 4, 0) == 0)
    void* eax_2 = sub_573400()
    void* edi_1 = *(eax_2 + 4)
    
    if (esi_1 u>= 0x320)
        eax_2 = sub_591930()
    
    char result = sub_5754f0(eax_2, *(ebx + edi_1 + 0x1a4c), edi_1, 2, 0)
    
    if (result == 0)
        return result

return 1
