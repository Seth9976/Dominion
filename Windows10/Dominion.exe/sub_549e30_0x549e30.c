// 函数: sub_549e30
// 地址: 0x549e30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()
uint32_t esi = zx.d(arg1)
void* edi = *(eax + 4)

if (esi u>= 0x320)
    eax = sub_591930()

int32_t ebx = esi * 0x64

if (sub_5754f0(eax, *(ebx + edi + 0x1a4c), edi, 0, 0x4000) == 0)
    void* eax_2 = sub_573400()
    void* edi_1 = *(eax_2 + 4)
    
    if (esi u>= 0x320)
        eax_2 = sub_591930()
    
    if (sub_5754f0(eax_2, *(ebx + edi_1 + 0x1a4c), edi_1, 4, 0) != 0)
        return 1

return 0
