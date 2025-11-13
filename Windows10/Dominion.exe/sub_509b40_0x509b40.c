// 函数: sub_509b40
// 地址: 0x509b40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 == 2)
    uint32_t esi_2 = zx.d((*arg1).w)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    if (*(esi_2 * 0x64 + ebx_1 + 0x1a4c) == 0x100)
        uint32_t esi_4 = zx.d((arg1[1]).w)
        int32_t edi_2 = *(sub_573400() + 4)
        
        if (esi_4 u>= 0x320)
            sub_591930()
        
        int32_t eax_3
        eax_3.b = *(esi_4 * 0x64 + edi_2 + 0x1a4c) == 0x100
        return eax_3

int32_t eax
eax.b = 0
return eax
