// 函数: sub_56d130
// 地址: 0x56d130
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
uint32_t esi_1 = zx.d(sub_56b800())
int32_t ebx = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t ebx_1 = *(esi_1 * 0x64 + ebx + 0x1a4c)
uint32_t esi_3 = zx.d(sub_56b800())
int32_t edi = *(sub_573400() + 4)

if (esi_3 u>= 0x320)
    sub_591930()

int32_t* eax_6 = *(esi_3 * 0x64 + edi + 0x1a4c)
void* eax_7 = sub_573400()
void* edi_1 = eax_7

if (ebx_1 == 0 && *edi_1 == 2)
    uint32_t esi_5 = zx.d((*(edi_1 + 0x10)).w)
    int32_t ebx_2 = *(sub_573400() + 4)
    
    if (esi_5 u>= 0x320)
        sub_591930()
    
    eax_7 = esi_5 * 0x64
    ebx_1 = *(eax_7 + ebx_2 + 0x1a4c)

return sub_5911e0(eax_7, *(edi_1 + 0xc), *(edi_1 + 4), 8, eax_6, 0, *(edi_1 + 0x28), 
    *(edi_1 + 0x2c), 0, 0xffffffff, 6, ebx_1)
