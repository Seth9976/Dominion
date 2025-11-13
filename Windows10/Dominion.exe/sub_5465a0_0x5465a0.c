// 函数: sub_5465a0
// 地址: 0x5465a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = sub_56b800()
sub_565ff0(eax, 0x3f1, eax, 0xffffffff, 6, nullptr, nullptr, 0xb, nullptr, nullptr)
int32_t esi = 0
void* eax_1 = sub_573400()
void* edi = eax_1

if (*edi == 2)
    uint32_t esi_2 = zx.d((*(edi + 0x10)).w)
    int32_t eax_3 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    eax_1 = esi_2 * 0x64
    esi = *(eax_1 + eax_3 + 0x1a4c)

return sub_5911e0(eax_1, *(edi + 0xc), *(edi + 4), 0xf, nullptr, 1, *(edi + 0x28), *(edi + 0x2c), 
    0, 0xffffffff, 8, esi)
