// 函数: sub_54cf50
// 地址: 0x54cf50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx

if (*(*(sub_573400() + 4) + 0xd48) s>= 0x12)
    int32_t esi_4 = 0
    void* eax_8 = sub_573400()
    void* edi_2 = eax_8
    
    if (*edi_2 == 2)
        uint32_t esi_6 = zx.d((*(edi_2 + 0x10)).w)
        int32_t ebx_2 = *(sub_573400() + 4)
        
        if (esi_6 u>= 0x320)
            sub_591930()
        
        eax_8 = esi_6 * 0x64
        esi_4 = *(eax_8 + ebx_2 + 0x1a4c)
    
    sub_5911e0(eax_8, *(edi_2 + 0xc), *(edi_2 + 4), 0x1f, nullptr, 1, *(edi_2 + 0x28), 
        *(edi_2 + 0x2c), 0, 0xffffffff, 0, esi_4)
    return sub_56b700(4)

sub_56d1f0()
int32_t esi = *(*(sub_573400() + 4) + 0x19c4)
void* result = *(sub_573400() + 4)

if (esi == *(result + 0x19cc))
    return result

int32_t esi_1 = 0
void* eax_5 = sub_573400()
void* edi_1 = eax_5

if (*edi_1 == 2)
    uint32_t esi_3 = zx.d((*(edi_1 + 0x10)).w)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_3 u>= 0x320)
        sub_591930()
    
    eax_5 = esi_3 * 0x64
    esi_1 = *(eax_5 + ebx_1 + 0x1a4c)

sub_5911e0(eax_5, *(edi_1 + 0xc), *(edi_1 + 4), 0x1f, nullptr, 1, *(edi_1 + 0x28), *(edi_1 + 0x2c), 
    0, 0xffffffff, 0, esi_1)
return sub_56b700(0)
