// 函数: sub_554d80
// 地址: 0x554d80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t esi = 0
void* eax = sub_573400()
void* edi = eax

if (*edi == 2)
    uint32_t esi_2 = zx.d((*(edi + 0x10)).w)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    eax = esi_2 * 0x64
    esi = *(eax + ebx_1 + 0x1a4c)

return sub_5911e0(eax, *(edi + 0xc), *(edi + 4), 0x1d, nullptr, 0, *(edi + 0x28), *(edi + 0x2c), 1, 
    0xffffffff, 0, esi)
