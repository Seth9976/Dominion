// 函数: sub_6d1fd0
// 地址: 0x6d1fd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi = *(arg1 + 0x30)
void* edi = *(arg1 + 4)
void* edx = esi + edi
void* var_14 = edi
uint32_t eax_1 = zx.d(zx.w(*(esi + edi)) * 0x100 + zx.w(*(edx + 1)))

if (eax_1.w != 0)
    if (eax_1 == 6)
        uint32_t ecx_6 = (zx.d(*(edx + 6)) << 8) + zx.d(*(edx + 7))
        
        if (arg2 u>= ecx_6 && arg2 u< zx.d(*(edx + 9)) + (zx.d(*(edx + 8)) << 8) + ecx_6)
            void* ecx_10 = esi + ((arg2 - ecx_6) << 1)
            return zx.d(*(ecx_10 + edi + 0xb)) + (zx.d(*(ecx_10 + edi + 0xa)) << 8)
    else if (eax_1 != 2)
        if (eax_1 == 4)
            void* esi_1 = esi + 0xe
            void* var_18_1 = esi_1
            uint32_t var_c_1 = zx.d(zx.w(*(edx + 0xa)) * 0x100 + zx.w(*(edx + 0xb)))
            
            if (arg2 s<= 0xffff)
                void* edx_2 = esi_1 + ((zx.d(*(edx + 0xd)) + (zx.d(*(edx + 0xc)) << 8)) u>> 1 << 1)
                
                if (arg2 s>= (zx.d(*(edx_2 + edi)) << 8) + zx.d(*(edx_2 + edi + 1)))
                    esi_1 = edx_2
                
                void* esi_2 = esi_1 - 2
                
                if (var_c_1.w != 0)
                    uint32_t eax_19
                    eax_19.w = (zx.w(*(edx + 8)) * 0x100 + zx.w(*(edx + 9))) u>> 1
                    bool cond:0_1
                    
                    do
                        eax_19.w u>>= 1
                        int32_t var_8
                        var_8:2.w = eax_19.w
                        void* edx_3 = esi_2 + (zx.d(eax_19.w) << 1)
                        
                        if (arg2 s> (zx.d(*(edx_3 + edi)) << 8) + zx.d(*(edx_3 + edi + 1)))
                            esi_2 = edx_3
                        
                        eax_19 = var_c_1 + 0xffff
                        var_c_1 = eax_19
                        cond:0_1 = eax_19.w != 0
                        eax_19.w = var_8:2.w
                    while (cond:0_1)
                
                uint32_t eax_24 = zx.d((zx.w(*(edx + 6)) * 0x100 + zx.w(*(edx + 7))) u>> 1)
                uint32_t edx_4 = zx.d(((esi_2 - var_18_1 + 2) u>> 1).w)
                void* eax_26 = esi + ((eax_24 + edx_4) << 1)
                uint32_t eax_28 = zx.d(*(eax_26 + edi + 0x11)) + (zx.d(*(eax_26 + edi + 0x10)) << 8)
                
                if (arg2 s>= eax_28)
                    void* edx_5 = esi + ((eax_24 * 3 + edx_4) << 1)
                    uint32_t edx_6 =
                        zx.d(zx.w(*(edx_5 + edi + 0x10)) * 0x100 + zx.w(*(edx_5 + edi + 0x11)))
                    
                    if (edx_6.w != 0)
                        void* ecx_39 = esi + edx_6 + ((eax_24 * 3 - eax_28 + edx_4 + arg2) << 1)
                        return (zx.d(*(ecx_39 + edi + 0x10)) << 8) + zx.d(*(ecx_39 + edi + 0x11))
                    
                    void* edx_7 = esi + ((edx_4 + (eax_24 << 1) + 8) << 1)
                    return zx.d(zx.w(*(edx_7 + edi)) * 0x100 + zx.w(*(edx_7 + edi + 1)) + arg2.w)
        else if (eax_1 == 0xc || eax_1 == 0xd)
            int32_t ecx_41 = 0
            int32_t var_8_2 = 0
            uint32_t ebx_8 = (((((zx.d(*(edx + 0xc)) << 8) + zx.d(*(edx + 0xd))) << 8)
                + zx.d(*(edx + 0xe))) << 8) + zx.d(*(edx + 0xf))
            
            if (ebx_8 s> 0)
                int32_t edx_8 = arg2
                
                do
                    uint32_t esi_10 = ((ebx_8 - ecx_41) s>> 1) + ecx_41
                    void* eax_47 = esi + esi_10 * 0xc
                    void* edi_1 = edi + eax_47
                    uint32_t eax_54 = (((((zx.d(*(edi_1 + 0x10)) << 8)
                        + zx.d(*(edi + eax_47 + 0x11))) << 8) + zx.d(*(edi_1 + 0x12))) << 8)
                        + zx.d(*(edi_1 + 0x13))
                    
                    if (edx_8 u>= eax_54)
                        if (arg2 u<= ((((zx.d(*(edi_1 + 0x15)) + (zx.d(*(edi_1 + 0x14)) << 8)) << 8)
                                + zx.d(*(edi_1 + 0x16))) << 8) + zx.d(*(edi_1 + 0x17)))
                            void* edx_17 = esi + (esi_10 + 2) * 0xc + var_14
                            uint32_t result = ((((zx.d(*(edx_17 + 1)) + (zx.d(*edx_17) << 8)) << 8)
                                + zx.d(*(edx_17 + 2))) << 8) + zx.d(*(edx_17 + 3))
                            
                            if (eax_1.w != 0xc)
                                return result
                            
                            return arg2 + result - eax_54
                        
                        ecx_41 = esi_10 + 1
                        edx_8 = arg2
                        var_8_2 = ecx_41
                    else
                        ecx_41 = var_8_2
                        ebx_8 = esi_10
                    
                    edi = var_14
                while (ecx_41 s< ebx_8)
else if (arg2 s< zx.d(*(edx + 3)) - 6 + (zx.d(*(edx + 2)) << 8))
    return zx.d(*(edx + arg2 + 6))

return 0
