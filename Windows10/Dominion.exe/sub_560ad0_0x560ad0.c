// 函数: sub_560ad0
// 地址: 0x560ad0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char eax = sub_563820(0x100, 0)

if (eax == 0)
    return eax

if (*(*(sub_573400() + 4) + 0x19cc) != *(sub_573400() + 0xc))
    void* eax_3
    eax_3.b = 0
    return eax_3

int32_t esi_1 = *(sub_573400() + 0x58)
void* eax_4

if (esi_1 != 0)
    uint32_t esi_2 = zx.d(esi_1.w)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t edi_1 = esi_2 * 0x64
    
    if (*(edi_1 + ebx_1 + 0x1a50) == 0x474)
        int32_t ebx_2 = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        int32_t edi_2 = *(edi_1 + ebx_2 + 0x1a4c)
        uint32_t esi_3 = zx.d(arg1)
        int32_t ebx_3 = *(sub_573400() + 4)
        
        if (esi_3 u>= 0x320)
            sub_591930()
        
        if (*(esi_3 * 0x64 + ebx_3 + 0x1a4c) == edi_2)
            eax_4.b = 1
            return eax_4

eax_4.b = 0
return eax_4
