// 函数: sub_5587e0
// 地址: 0x5587e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax
int32_t ecx

if (sub_56e300(ecx).b == 0 && sub_56e820(4, 0).b != 0)
    eax = sub_573400()
    void* ecx_1 = *(eax + 4)
    
    if (*(ecx_1 + 0x19d8) != 0 && *(ecx_1 + 0x19cc) == *(eax + 0xc))
        uint32_t edi_1 = zx.d(arg1.w)
        int32_t esi_1 = edi_1 * 0x64
        int32_t eax_2 = *(sub_573400() + 4)
        void* var_10_1
        int32_t var_c_2
        
        if (edi_1 u< 0x320)
            var_10_1 = *(esi_1 + eax_2 + 0x1a58)
            var_c_2 = *(sub_573400() + 4)
        else
            sub_591930()
            var_10_1 = *(esi_1 + eax_2 + 0x1a58)
            var_c_2 = *(sub_573400() + 4)
            sub_591930()
        
        if (*(esi_1 + var_c_2 + 0x1a50) == var_10_1)
            int32_t eax_11 = *(sub_573400() + 4)
            
            if (edi_1 u>= 0x320)
                sub_591930()
            
            if (*(esi_1 + eax_11 + 0x1a50) == 0x3ea)
                return sub_567520() == 0
            
            eax_11.b = 1
            return eax_11

eax.b = 0
return eax
