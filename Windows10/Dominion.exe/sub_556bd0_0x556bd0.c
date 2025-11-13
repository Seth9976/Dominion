// 函数: sub_556bd0
// 地址: 0x556bd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t esi
int32_t var_14 = esi
int32_t var_1c = ecx
int32_t var_1c_1 = 4
sub_564ce0(esi)
int32_t esi_1 = 0
void* eax = sub_573400()
void* edi = eax

if (*edi == 2)
    uint32_t esi_3 = zx.d((*(edi + 0x10)).w)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_3 u>= 0x320)
        sub_591930()
    
    eax = esi_3 * 0x64
    esi_1 = *(eax + ebx_1 + 0x1a4c)

return sub_5911e0(eax, *(edi + 0xc), *(edi + 4), 2, 1, 1, *(edi + 0x28), *(edi + 0x2c), 1, 
    0xffffffff, 0, esi_1)
