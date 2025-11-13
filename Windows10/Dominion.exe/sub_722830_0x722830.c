// 函数: sub_722830
// 地址: 0x722830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
int32_t ecx = 0x7fffffff
arg1[0x11e3] = 0
arg1[0x11d1] = 0
arg1[0x11bf] = 0
arg1[0x11ad] = 0
int32_t eax_2 = arg1[0x1201]
arg1[0x11f0] = 0

if (eax_2 != 0)
    ecx = eax_2

arg1[0x11ef] = 0
bool cond:1 = arg1[0x11f3] != 0
int32_t eax_3 = arg1[0x11fc]
arg1[0x11f2] = 0
arg1[0x11f1].b = 0xff
arg1[0x1202] = ecx
arg1[0x11f8] = 0

if (cond:1)
    if (eax_3 != 1)
        uint32_t i = 0
        uint32_t i_5 = 0
        
        if (arg1[0x11a4] s> 0)
            do
                int32_t j = 0
                int32_t j_3 = 0
                
                if (arg1[0x11a3] s> 0)
                    do
                        int32_t k = 0
                        int32_t k_3 = 0
                        
                        if (arg1[0x11fc] s> 0)
                            i = &arg1[0x11fd]
                            uint32_t i_2 = i
                            
                            do
                                int32_t eax_67 = *i
                                int32_t ecx_28 = 0
                                int32_t var_a8_2 = 0
                                int32_t eax_68 = eax_67 * 9
                                void* edi_12 = &arg1[eax_68 * 2]
                                
                                if (arg1[eax_68 * 2 + 0x11a9] s> 0)
                                    do
                                        int32_t eax_69 = *(edi_12 + 0x46a0)
                                        int32_t edx_15 = 0
                                        int32_t var_ac_3 = 0
                                        
                                        if (eax_69 s> 0)
                                            do
                                                int32_t eax_70 = eax_69 * j_3
                                                int32_t eax_71 = sub_7211f0(eax_70, 
                                                    ((edx_15 + (*(edi_12 + 0x46a4) * i_5 + var_a8_2)
                                                        * *(edi_12 + 0x46dc) + eax_70) << 7)
                                                        + *(edi_12 + 0x46d8), 
                                                    arg1, *(edi_12 + 0x46ac) * 0x690 + 4 + arg1, 
                                                    eax_67)
                                                
                                                if (eax_71 == 0)
                                                    goto label_723120
                                                
                                                eax_69 = *(edi_12 + 0x46a0)
                                                edx_15 = var_ac_3 + 1
                                                var_ac_3 = edx_15
                                            while (edx_15 s< eax_69)
                                            
                                            ecx_28 = var_a8_2
                                        
                                        ecx_28 += 1
                                        var_a8_2 = ecx_28
                                    while (ecx_28 s< *(edi_12 + 0x46a4))
                                    
                                    k = k_3
                                
                                k += 1
                                i = i_2 + 4
                                k_3 = k
                                i_2 = i
                            while (k s< arg1[0x11fc])
                            
                            j = j_3
                        
                        arg1[0x1202] -= 1
                        
                        if (arg1[0x1202] s<= 0)
                            if (arg1[0x11f0] s< 0x18)
                                sub_720ca0(arg1)
                            
                            i.b = arg1[0x11f1].b
                            i.b += 0x30
                            
                            if (i.b u> 7)
                                goto label_722aac
                            
                            arg1[0x11e3] = 0
                            uint32_t i_7 = 0x7fffffff
                            arg1[0x11d1] = 0
                            arg1[0x11bf] = 0
                            arg1[0x11ad] = 0
                            i = arg1[0x1201]
                            arg1[0x11f0] = 0
                            
                            if (i != 0)
                                i_7 = i
                            
                            arg1[0x11ef] = 0
                            arg1[0x11f2] = 0
                            arg1[0x11f1].b = 0xff
                            arg1[0x1202] = i_7
                            arg1[0x11f8] = 0
                        
                        j += 1
                        j_3 = j
                    while (j s< arg1[0x11a3])
                    
                    i = i_5
                
                i += 1
                i_5 = i
            while (i s< arg1[0x11a4])
    else
        int32_t eax_53 = arg1[0x11fd]
        int32_t eax_54 = 0
        int32_t var_ac_2 = 0
        int32_t ecx_21 = (arg1[eax_53 * 0x12 + 0x11ae] + 7) s>> 3
        int32_t edx_9 = (arg1[eax_53 * 0x12 + 0x11af] + 7) s>> 3
        int32_t var_b4_2 = ecx_21
        int32_t var_b0_3 = edx_9
        
        if (edx_9 s> 0)
            do
                int32_t edi_11 = 0
                
                if (ecx_21 s> 0)
                    do
                        int16_t* edx_14 = ((arg1[eax_53 * 0x12 + 0x11b7] * eax_54 + edi_11) << 7)
                            + arg1[eax_53 * 0x12 + 0x11b6]
                        uint32_t eax_58
                        
                        if (arg1[0x11f4] != 0)
                            int32_t ecx_24 = arg1[eax_53 * 0x12 + 0x11ac]
                            void* eax_65 = ecx_24 * 0x690 + 0x1a44 + arg1
                            eax_58 = sub_7213e0(eax_65, edx_14, arg1, eax_65, 
                                (ecx_24 << 0xa) + 0x3684 + arg1)
                        else
                            void* eax_57 = arg1[eax_53 * 0x12 + 0x11ab] * 0x690 + 4 + arg1
                            eax_58 = sub_7211f0(eax_57, edx_14, arg1, eax_57, eax_53)
                        
                        if (eax_58 == 0)
                            goto label_723120
                        
                        arg1[0x1202] -= 1
                        
                        if (arg1[0x1202] s<= 0)
                            if (arg1[0x11f0] s< 0x18)
                                sub_720ca0(arg1)
                            
                            eax_58.b = arg1[0x11f1].b
                            eax_58.b += 0x30
                            
                            if (eax_58.b u> 7)
                                goto label_722aac
                            
                            arg1[0x11e3] = 0
                            int32_t ecx_27 = 0x7fffffff
                            arg1[0x11d1] = 0
                            arg1[0x11bf] = 0
                            arg1[0x11ad] = 0
                            int32_t eax_66 = arg1[0x1201]
                            arg1[0x11f0] = 0
                            
                            if (eax_66 != 0)
                                ecx_27 = eax_66
                            
                            arg1[0x11ef] = 0
                            arg1[0x11f2] = 0
                            arg1[0x11f1].b = 0xff
                            arg1[0x1202] = ecx_27
                            arg1[0x11f8] = 0
                        
                        ecx_21 = var_b4_2
                        edi_11 += 1
                        eax_54 = var_ac_2
                    while (edi_11 s< ecx_21)
                    
                    edx_9 = var_b0_3
                
                eax_54 += 1
                var_ac_2 = eax_54
            while (eax_54 s< edx_9)
else
    void var_a0
    
    if (eax_3 != 1)
        void* i_1 = nullptr
        void* i_4 = nullptr
        
        if (arg1[0x11a4] s> 0)
            do
                int32_t j_1 = 0
                int32_t j_2 = 0
                
                if (arg1[0x11a3] s> 0)
                    do
                        int32_t k_1 = 0
                        int32_t k_2 = 0
                        
                        if (arg1[0x11fc] s> 0)
                            i_1 = &arg1[0x11fd]
                            void* i_3 = i_1
                            
                            do
                                int32_t eax_28 = *i_1
                                int32_t edi_5 = 0
                                int32_t var_a4_2 = 0
                                void* edx_3 = &arg1[eax_28 * 0x12]
                                void* var_b0_2 = edx_3
                                
                                if (*(edx_3 + 0x46a4) s> 0)
                                    do
                                        int32_t eax_51 = *(edx_3 + 0x46a0)
                                        int32_t ecx_13 = 0
                                        int32_t var_c4_1 = 0
                                        
                                        if (eax_51 s> 0)
                                            do
                                                int32_t ecx_14 = *(edx_3 + 0x46b0)
                                                int32_t edi_8 = *(edx_3 + 0x46a4) * i_4 + var_a4_2
                                                void* eax_45 = *(edx_3 + 0x46ac) * 0x690 + 4 + arg1
                                                
                                                if (sub_720e90(eax_45, &var_a0, arg1, eax_45, 
                                                        ecx_14 * 0x690 + 0x1a44 + arg1, 
                                                        (ecx_14 << 0xa) + 0x3684 + arg1, eax_28, 
                                                        (*(edx_3 + 0x46a8) << 7) + 0x3484 + arg1) == 0)
                                                    goto label_723120
                                                
                                                int32_t eax_47 = *(var_b0_2 + 0x46c0)
                                                arg1[0x1203](
                                                    *(var_b0_2 + 0x46c8) + ((edi_8 * eax_47
                                                        + eax_51 * j_2 + ecx_13) << 3), 
                                                    eax_47, &var_a0)
                                                edx_3 = var_b0_2
                                                ecx_13 = var_c4_1 + 1
                                                var_c4_1 = ecx_13
                                                eax_51 = *(edx_3 + 0x46a0)
                                            while (ecx_13 s< eax_51)
                                            
                                            edi_5 = var_a4_2
                                        
                                        edi_5 += 1
                                        var_a4_2 = edi_5
                                    while (edi_5 s< *(edx_3 + 0x46a4))
                                    
                                    k_1 = k_2
                                
                                k_1 += 1
                                i_1 = i_3 + 4
                                k_2 = k_1
                                i_3 = i_1
                            while (k_1 s< arg1[0x11fc])
                            
                            j_1 = j_2
                        
                        arg1[0x1202] -= 1
                        
                        if (arg1[0x1202] s<= 0)
                            if (arg1[0x11f0] s< 0x18)
                                sub_720ca0(arg1)
                            
                            i_1.b = arg1[0x11f1].b
                            i_1.b += 0x30
                            
                            if (i_1.b u> 7)
                                goto label_722aac
                            
                            arg1[0x11e3] = 0
                            void* i_6 = 0x7fffffff
                            arg1[0x11d1] = 0
                            arg1[0x11bf] = 0
                            arg1[0x11ad] = 0
                            i_1 = arg1[0x1201]
                            arg1[0x11f0] = 0
                            
                            if (i_1 != 0)
                                i_6 = i_1
                            
                            arg1[0x11ef] = 0
                            arg1[0x11f2] = 0
                            arg1[0x11f1].b = 0xff
                            arg1[0x1202] = i_6
                            arg1[0x11f8] = 0
                        
                        j_1 += 1
                        j_2 = j_1
                    while (j_1 s< arg1[0x11a3])
                    
                    i_1 = i_4
                
                i_1 += 1
                i_4 = i_1
            while (i_1 s< arg1[0x11a4])
    else
        int32_t eax_4 = arg1[0x11fd]
        int32_t eax_5 = eax_4 * 9
        void* edx_1 = &arg1[eax_5 * 2]
        int32_t edi_3 = (arg1[eax_5 * 2 + 0x11af] + 7) s>> 3
        int32_t ecx_3 = (*(edx_1 + 0x46b8) + 7) s>> 3
        int32_t eax_6 = 0
        void* var_a8_1 = edx_1
        int32_t var_b4_1 = ecx_3
        int32_t var_a4_1 = 0
        
        if (edi_3 s> 0)
            do
                int32_t edi_4 = 0
                
                if (ecx_3 s> 0)
                    do
                        int32_t ecx_4 = *(edx_1 + 0x46b0)
                        void* eax_20 = *(edx_1 + 0x46ac) * 0x690 + 4 + arg1
                        
                        if (sub_720e90(eax_20, &var_a0, arg1, eax_20, 
                            ecx_4 * 0x690 + 0x1a44 + arg1, (ecx_4 << 0xa) + 0x3684 + arg1, eax_4, 
                            (*(edx_1 + 0x46a8) << 7) + 0x3484 + arg1) == 0)
                        label_723120:
                            CookieCheckFunction(0)
                            return 0
                        
                        int32_t ecx_6 = *(var_a8_1 + 0x46c0)
                        arg1[0x1203](*(var_a8_1 + 0x46c8) + ((ecx_6 * var_a4_1 + edi_4) << 3), 
                            ecx_6, &var_a0)
                        arg1[0x1202] -= 1
                        
                        if (arg1[0x1202] s<= 0)
                            if (arg1[0x11f0] s< 0x18)
                                sub_720ca0(arg1)
                            
                            if (arg1[0x11f1].b + 0x30 u> 7)
                                goto label_722aac
                            
                            arg1[0x11e3] = 0
                            int32_t ecx_10 = 0x7fffffff
                            arg1[0x11d1] = 0
                            arg1[0x11bf] = 0
                            arg1[0x11ad] = 0
                            int32_t eax_27 = arg1[0x1201]
                            arg1[0x11f0] = 0
                            
                            if (eax_27 != 0)
                                ecx_10 = eax_27
                            
                            arg1[0x11ef] = 0
                            arg1[0x11f2] = 0
                            arg1[0x11f1].b = 0xff
                            arg1[0x1202] = ecx_10
                            arg1[0x11f8] = 0
                        
                        ecx_3 = var_b4_1
                        edi_4 += 1
                        edx_1 = var_a8_1
                    while (edi_4 s< ecx_3)
                    
                    eax_6 = var_a4_1
                
                eax_6 += 1
                var_a4_1 = eax_6
            while (eax_6 s< edi_3)

label_722aac:
CookieCheckFunction(1)
return 1
