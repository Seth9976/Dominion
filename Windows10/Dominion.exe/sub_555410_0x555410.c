// 函数: sub_555410
// 地址: 0x555410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t eax
sub_561af0(eax, 0, 1, 0)
int32_t esi = 0
void* eax_1 = sub_573400()
void* edi = eax_1

if (*edi == 2)
    uint32_t esi_2 = zx.d((*(edi + 0x10)).w)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    eax_1 = esi_2 * 0x64
    esi = *(eax_1 + ebx_1 + 0x1a4c)

return sub_5911e0(eax_1, *(edi + 0xc), *(edi + 4), 3, 2, 1, *(edi + 0x28), *(edi + 0x2c), 1, 
    0xffffffff, 0, esi)
