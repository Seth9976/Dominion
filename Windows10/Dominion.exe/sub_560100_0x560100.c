// 函数: sub_560100
// 地址: 0x560100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx

if (*(*(sub_573400() + 4) + 0xd48) s>= 0x12)
    int32_t esi_4 = 0
    void* eax_7 = sub_573400()
    void* edi_2 = eax_7
    
    if (*edi_2 == 2)
        uint32_t esi_6 = zx.d((*(edi_2 + 0x10)).w)
        int32_t ebx_2 = *(sub_573400() + 4)
        
        if (esi_6 u>= 0x320)
            sub_591930()
        
        eax_7 = esi_6 * 0x64
        esi_4 = *(eax_7 + ebx_2 + 0x1a4c)
    
    sub_5911e0(eax_7, *(edi_2 + 0xc), *(edi_2 + 4), 0x1b, nullptr, 0, *(edi_2 + 0x28), 
        *(edi_2 + 0x2c), 0, 0xffffffff, 0, esi_4)
    return sub_56b700(4)

void* eax_2 = sub_573400()
void* result = sub_593a90(eax_2, *(eax_2 + 0xc), *(eax_2 + 4), 0x416)

if (result.b != 0)
    result = *(*(eax_2 + 4) + 0x19c4)
    
    if (result != *(eax_2 + 0xc))
        sub_56b700(0)
        int32_t esi_1 = 0
        void* eax_4 = sub_573400()
        void* edi_1 = eax_4
        
        if (*edi_1 == 2)
            uint32_t esi_3 = zx.d((*(edi_1 + 0x10)).w)
            int32_t ebx_1 = *(sub_573400() + 4)
            
            if (esi_3 u>= 0x320)
                sub_591930()
            
            eax_4 = esi_3 * 0x64
            esi_1 = *(eax_4 + ebx_1 + 0x1a4c)
        
        return sub_5911e0(eax_4, *(edi_1 + 0xc), *(edi_1 + 4), 0x1b, nullptr, 0, *(edi_1 + 0x28), 
            *(edi_1 + 0x2c), 0, 0xffffffff, 0, esi_1)

return result
