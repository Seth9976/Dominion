// 函数: sub_56d1f0
// 地址: 0x56d1f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
uint32_t esi_1 = zx.d(sub_56b800())
int32_t edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t ebx = 0
int32_t* eax_3 = *(esi_1 * 0x64 + edi + 0x1a4c)
void* eax_4 = sub_573400()
void* edi_1 = eax_4

if (*edi_1 == 2)
    uint32_t esi_3 = zx.d((*(edi_1 + 0x10)).w)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_3 u>= 0x320)
        sub_591930()
    
    eax_4 = esi_3 * 0x64
    ebx = *(eax_4 + ebx_1 + 0x1a4c)

return sub_5911e0(eax_4, *(edi_1 + 0xc), *(edi_1 + 4), 8, eax_3, 1, *(edi_1 + 0x28), 
    *(edi_1 + 0x2c), 0, 0xffffffff, 0, ebx)
