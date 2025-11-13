// 函数: sub_6d2320
// 地址: 0x6d2320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 s< *(arg1 + 0xc))
    int32_t eax_1 = *(arg1 + 0x34)
    
    if (eax_1 s< 2)
        int32_t edx = *(arg1 + 0x18)
        int32_t edi_1 = *(arg1 + 0x10) + *(arg1 + 4)
        
        if (eax_1 == 0)
            int32_t esi = edx
                + (((zx.d(*(edi_1 + (arg2 << 1))) << 8) + zx.d(*(edi_1 + (arg2 << 1) + 1))) << 1)
            
            if (esi == edx + (((zx.d(*(edi_1 + (arg2 << 1) + 2)) << 8)
                    + zx.d(*(edi_1 + (arg2 << 1) + 3))) << 1))
                return 0xffffffff
            
            return esi
        
        uint32_t ecx_11 = ((((zx.d(*(edi_1 + (arg2 << 2))) << 8) + zx.d(*(edi_1 + (arg2 << 2) + 1)))
            << 8) + zx.d(*(edi_1 + (arg2 << 2) + 2))) << 8
        int32_t esi_2 = zx.d(*(edi_1 + (arg2 << 2) + 3)) + ecx_11 + edx
        uint32_t ecx_17 = (((zx.d(*(edi_1 + (arg2 << 2) + 4)) << 8)
            + zx.d(*(edi_1 + (arg2 << 2) + 5))) << 8) + zx.d(*(edi_1 + (arg2 << 2) + 6))
        
        if (esi_2 == zx.d(*(edi_1 + (arg2 << 2) + 7)) + (ecx_17 << 8) + edx)
            return 0xffffffff
        
        return esi_2

return 0xffffffff
