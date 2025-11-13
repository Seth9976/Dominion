// 函数: sub_7213e0
// 地址: 0x7213e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* i = arg3[0x11f4]

if (i != 0)
    char ecx = (arg3[0x11f7]).b
    int32_t edi_1 = arg3[0x11f8]
    
    if (arg3[0x11f6] != 0)
        uint32_t edx_11 = zx.d(1 << ecx)
        uint32_t var_10_2 = edx_11
        
        if (edi_1 != 0)
            arg3[0x11f8] = edi_1 - 1
            
            if (i s> arg3[0x11f5])
                return 1
            
            int32_t ecx_24 = arg2
            
            do
                uint32_t eax_34 = zx.d(*(i + 0x801098))
                int16_t* edi_11 = ecx_24 + (eax_34 << 1)
                
                if (*(ecx_24 + (eax_34 << 1)) != 0)
                    if (arg3[0x11f0] s< 1)
                        sub_720ca0(arg3)
                        edx_11 = var_10_2
                    
                    int32_t ecx_26 = arg3[0x11ef]
                    arg3[0x11f0] -= 1
                    arg3[0x11ef] = ecx_26 * 2
                    
                    if (ecx_26 s< 0)
                        int16_t ecx_27 = *edi_11
                        
                        if ((ecx_27 & edx_11.w) == 0)
                            if (ecx_27 s<= 0)
                                *edi_11 = ecx_27 - edx_11.w
                            else
                                *edi_11 = ecx_27 + edx_11.w
                    
                    ecx_24 = arg2
                
                i += 1
            while (i s<= arg3[0x11f5])
            
            return 1
        
        while (true)
            if (arg3[0x11f0] s< 0x10)
                sub_720ca0(arg3)
            
            int32_t edx_12 = arg3[0x11ef]
            uint32_t eax_42 = zx.d(*((edx_12 u>> 0x17) + arg4))
            int32_t var_c_3
            uint32_t edi_13
            
            if (eax_42 u>= 0xff)
                void* eax_45 = arg4 + 0x62c
                int32_t edi_14 = 0xa
                
                while (edx_12 u>> 0x10 u>= *eax_45)
                    eax_45 += 4
                    edi_14 += 1
                
                int32_t eax_46 = arg3[0x11f0]
                
                if (edi_14 == 0x11)
                    arg3[0x11f0] = eax_46 - 0x10
                    return 0
                
                if (edi_14 s> eax_46)
                    return 0
                
                int32_t edx_15 = arg3[0x11ef]
                int32_t eax_50 = (edx_15 u>> (0x20 - edi_14.b) & *((edi_14 << 2) + &data_801050))
                    + *(arg4 + (edi_14 << 2) + 0x64c)
                int32_t ecx_35 = eax_46 - edi_14
                arg3[0x11f0] = ecx_35
                var_c_3 = ecx_35
                arg3[0x11ef] = edx_15 << edi_14.b
                edi_13 = zx.d(*(eax_50 + arg4 + 0x400))
            else
                void* edi_12 = eax_42 + arg4
                int32_t eax_43 = arg3[0x11f0]
                uint32_t ecx_31 = zx.d(*(edi_12 + 0x500))
                
                if (ecx_31 s> eax_43)
                    return 0
                
                int32_t eax_44 = eax_43 - ecx_31
                arg3[0x11ef] = edx_12 << ecx_31.b
                arg3[0x11f0] = eax_44
                edi_13 = zx.d(*(edi_12 + 0x400))
                var_c_3 = eax_44
            
            uint32_t edi_15 = edi_13 u>> 4
            int32_t eax_52 = edi_13 & 0xf
            int16_t var_14_2 = eax_52.w
            
            if (eax_52 != 0)
                if (eax_52 != 1)
                    return 0
                
                if (var_c_3 s< eax_52)
                    sub_720ca0(arg3)
                
                int32_t ecx_43 = arg3[0x11ef]
                arg3[0x11f0] -= 1
                arg3[0x11ef] = ecx_43 * 2
                int32_t eax_60 = sx.d(var_10_2.w)
                var_14_2 = eax_60.w
                
                if (ecx_43 s>= 0)
                    var_14_2 = (neg.d(eax_60)).w
            else if (edi_15 u< 0xf)
                arg3[0x11f8] = (1 << edi_15.b) - 1
                
                if (edi_15 != 0)
                    if (var_c_3 s< edi_15)
                        sub_720ca0(arg3)
                    
                    int32_t edx_17 = arg3[0x11ef]
                    arg3[0x11f0] -= edi_15
                    int32_t edx_18 = rol.d(edx_17, edi_15.b)
                    int32_t ecx_41 = *((edi_15 << 2) + &data_801050)
                    arg3[0x11f8] += edx_18 & ecx_41
                    arg3[0x11ef] = not.d(ecx_41) & edx_18
                
                edi_15 = 0x40
            
            if (i s> arg3[0x11f5])
                return 1
            
            int32_t ecx_44 = arg2
            
            do
                uint32_t eax_62 = zx.d(*(i + 0x801098))
                i += 1
                int16_t* edx_20 = ecx_44 + (eax_62 << 1)
                
                if (*(ecx_44 + (eax_62 << 1)) == 0)
                    if (edi_15 == 0)
                        *edx_20 = var_14_2
                        break
                    
                    edi_15 -= 1
                else
                    if (arg3[0x11f0] s< 1)
                        sub_720ca0(arg3)
                    
                    int32_t ecx_46 = arg3[0x11ef]
                    arg3[0x11f0] -= 1
                    arg3[0x11ef] = ecx_46 * 2
                    
                    if (ecx_46 s< 0)
                        int16_t ecx_47 = *edx_20
                        
                        if ((ecx_47 & var_10_2.w) == 0)
                            if (ecx_47 s<= 0)
                                *edx_20 = ecx_47 - var_10_2.w
                            else
                                *edx_20 = var_10_2.w + ecx_47
                    
                    ecx_44 = arg2
            while (i s<= arg3[0x11f5])
            
            if (i s> arg3[0x11f5])
                return 1
    else
        if (edi_1 != 0)
            arg3[0x11f8] = edi_1 - 1
            return 1
        
        while (true)
            if (arg3[0x11f0] s< 0x10)
                sub_720ca0(arg3)
            
            int32_t edi_2 = arg3[0x11f0]
            int32_t edx = sx.d(*(arg5 + (arg3[0x11ef] u>> 0x17 << 1)))
            
            if (edx == 0)
                if (edi_2 s< 0x10)
                    sub_720ca0(arg3)
                
                int32_t edx_2 = arg3[0x11ef]
                uint32_t eax_12 = zx.d(*((edx_2 u>> 0x17) + arg4))
                int32_t edx_3
                int32_t edi_6
                
                if (eax_12 u>= 0xff)
                    int32_t* eax_13 = arg4 + 0x62c
                    int32_t edx_4 = 0xa
                    
                    while (edx_2 u>> 0x10 u>= *eax_13)
                        eax_13 = &eax_13[1]
                        edx_4 += 1
                    
                    int32_t edi_7 = arg3[0x11f0]
                    
                    if (edx_4 == 0x11)
                        arg3[0x11f0] = edi_7 - 0x10
                        return 0
                    
                    if (edx_4 s> edi_7)
                        break
                    
                    edi_6 = edi_7 - edx_4
                    eax_12 = (arg3[0x11ef] u>> (0x20 - edx_4.b) & *((edx_4 << 2) + &data_801050))
                        + *(arg4 + (edx_4 << 2) + 0x64c)
                    edx_3 = arg3[0x11ef] << edx_4.b
                else
                    uint32_t ecx_8 = zx.d(*(eax_12 + arg4 + 0x500))
                    int32_t edi_5 = arg3[0x11f0]
                    
                    if (ecx_8 s> edi_5)
                        break
                    
                    edx_3 = edx_2 << ecx_8.b
                    edi_6 = edi_5 - ecx_8
                
                arg3[0x11f0] = edi_6
                arg3[0x11ef] = edx_3
                uint32_t ecx_15 = zx.d(*(eax_12 + arg4 + 0x400))
                uint32_t ecx_16 = ecx_15 u>> 4
                int32_t eax_18 = ecx_15 & 0xf
                int32_t var_14_1 = eax_18
                
                if (eax_18 != 0)
                    void* ebx_1 = i + ecx_16
                    uint32_t ecx_17 = zx.d(*(ebx_1 + 0x801098))
                    i = ebx_1 + 1
                    
                    if (edi_6 s< eax_18)
                        sub_720ca0(arg3)
                        eax_18 = var_14_1
                    
                    int32_t edi_8 = arg3[0x11ef]
                    int32_t edx_7 = rol.d(edi_8, eax_18.b)
                    int32_t ecx_20 = *((eax_18 << 2) + &data_801050)
                    arg3[0x11ef] = not.d(ecx_20) & edx_7
                    arg3[0x11f0] -= var_14_1
                    *(arg2 + (ecx_17 << 1)) = (((not.d(edi_8 s>> 0x1f)).w
                        & *((var_14_1 << 2) + &data_801010)) + (edx_7.w & ecx_20.w)) << ecx
                else
                    if (ecx_16 u< 0xf)
                        int32_t ebx_2 = 1 << ecx_16.b
                        arg3[0x11f8] = ebx_2
                        
                        if (ecx_16 != 0)
                            if (edi_6 s< ecx_16)
                                sub_720ca0(arg3)
                            
                            int32_t ebx_3 = *((ecx_16 << 2) + &data_801050)
                            int32_t edx_9 = arg3[0x11ef]
                            arg3[0x11f0] -= ecx_16
                            int32_t edx_10 = rol.d(edx_9, ecx_16.b)
                            ebx_2 = (ebx_3 & edx_10) + arg3[0x11f8]
                            arg3[0x11ef] = not.d(ebx_3) & edx_10
                        
                        arg3[0x11f8] = ebx_2 - 1
                        return 1
                    
                    i += 0x10
            else
                int32_t ecx_4 = edx & 0xf
                void* ebx = i + (edx s>> 4 & 0xf)
                arg3[0x11ef] <<= ecx_4.b
                uint32_t eax_9 = zx.d(*(ebx + 0x801098))
                i = ebx + 1
                arg3[0x11f0] = edi_2 - ecx_4
                *(arg2 + (eax_9 << 1)) = (edx s>> 8).w << ecx
            
            if (i s> arg3[0x11f5])
                return 1

return 0
