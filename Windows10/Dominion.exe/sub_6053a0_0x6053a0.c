// 函数: sub_6053a0
// 地址: 0x6053a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax_1 = data_b7fcf4

if (eax_1 != 0)
    uint32_t ecx_1 = zx.d(eax_1.w)
    
    if (ecx_1 u< data_b809e4)
        void* ecx_3 = ecx_1 * 0x1c30 + data_b809e0
        
        if (*(ecx_3 + 0x1c28) == eax_1 && ecx_3 != 0)
            void* eax = sub_5d4360(ecx_3)
            
            if (eax != 6 && eax != 5 && eax != 0xb)
                eax.b = eax == 0xa
                return eax
            
            eax.b = 1
            return eax

eax_1.b = 0
return eax_1
