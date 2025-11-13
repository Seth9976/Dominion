// 函数: sub_58fba0
// 地址: 0x58fba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* eax_2 = data_cce9bc
void* esi = arg1
uint32_t result = 0
void* var_114 = esi
uint32_t result_1 = 0

if (data_cce9b8 s> 0)
    void* edi_1 = esi + 0x28
    int32_t* ebx_1 = esi + 0x2c
    void* var_11c_1 = edi_1
    int32_t* var_118_1 = ebx_1
    
    while (true)
        int32_t edx_1 = *ebx_1
        
        if (edx_1 != 0x106)
            if (edx_1 != 0x923)
                int32_t eax_3 = 0
                
                while (true)
                    int32_t ecx = *(esi + (eax_3 << 2))
                    
                    if (ecx != 0)
                        if (ecx == edx_1)
                            break
                        
                        eax_3 += 1
                        
                        if (eax_3 s< 0xa)
                            continue
                    
                    if (*(esi + 0x170) == edx_1)
                        break
                    
                    char eax_4
                    
                    if (*(esi + 0x118) == edx_1)
                        eax_4 = sub_58fb40(eax_3, 0x707, esi, 1)
                    
                    if (*(esi + 0x118) != edx_1 || eax_4 == 0)
                        __builtin_memset(ebx_1, 0, 0x38)
                    
                    break
                
                result = result_1
            
            if (*ebx_1 == 0)
                int32_t eax_5 = *edi_1
                char const* const var_148
                int32_t var_144
                char const* const var_140_2
                int32_t eax_8
                
                if ((*(sub_571b30(eax_5, data_cce9b0) + 0x9c) & 0x100) == 0)
                    void* eax_19 = sub_571b30(eax_5, data_cce9b0)
                    int32_t ecx_20 = 0
                    void* edx_8 = eax_19 + 0xa8
                    
                    while (true)
                        int32_t esi_2 = *edx_8
                        
                        if (esi_2 != 0)
                            if (esi_2 == 0xe)
                                break
                            
                            ecx_20 += 1
                            edx_8 += 0xb4
                            
                            if (ecx_20 s< 8)
                                continue
                        
                        ebx_1 = var_118_1
                        esi = var_114
                        goto label_58ff4f_2
                    
                    int32_t ebx_3 = *(ecx_20 * 0xb4 + eax_19 + 0xc8)
                    int32_t var_10c[0x20]
                    eax_8 = sub_593ef0(var_114, &var_10c)
                    int32_t edi_7 = eax_8
                    int32_t esi_3 = 0
                    bool cond:1_1 = edi_7 != 0
                    
                    if (edi_7 s> 0)
                        do
                            eax_8 = ebx_3(var_10c[esi_3])
                            
                            if (eax_8.b == 0)
                                eax_8 = (&result_1)[edi_7]
                                edi_7 -= 1
                                var_10c[esi_3] = eax_8
                                esi_3 -= 1
                            
                            esi_3 += 1
                        while (esi_3 s< edi_7)
                        
                        cond:1_1 = edi_7 != 0
                    
                    if (cond:1_1)
                        if (edi_7 s<= 0)
                            var_140_2 = "RandomSupplyPile"
                            var_144 = 0x4749
                            var_148 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                            goto label_58ffb5
                        
                        ebx_1 = var_118_1
                        int32_t eax_22 = var_10c[sub_63ed10(eax_2, edi_7)]
                        *ebx_1 = eax_22
                        
                        if (eax_22 == 0)
                            goto label_58fed8
                        
                        esi = var_114
                    label_58ff49:
                        edi_1 = var_11c_1
                    label_58ff4f:
                        result = result_1
                    else
                        ebx_1 = var_118_1
                        *ebx_1 = 0
                    label_58fed8:
                        ebx_1 -= 0x3c
                        esi = var_114
                        int32_t ecx_24 = data_cce9b8 - 1
                        data_cce9b8 = ecx_24
                        int32_t eax_25 = ecx_24 * 0xf
                        result_1 -= 1
                        *var_11c_1 = *(esi + (eax_25 << 2) + 0x28)
                        *(var_11c_1 + 0x10) = *(esi + (eax_25 << 2) + 0x38)
                        *(var_11c_1 + 0x20) = *(esi + (eax_25 << 2) + 0x48)
                        *(var_11c_1 + 0x30) = *(esi + (eax_25 << 2) + 0x58)
                        *(var_11c_1 + 0x38) = *(esi + (eax_25 << 2) + 0x60)
                        edi_1 = var_11c_1 - 0x3c
                        *(esi + data_cce9b8 * 0x3c + 0x28) = 0
                    label_58ff4f_1:
                        result = result_1
                else
                    int32_t var_8c[0x21]
                    eax_8 = sub_593ef0(esi, &var_8c)
                    int32_t ecx_6 = eax_8
                    int32_t edi_2 = 0
                    int32_t var_120_1 = ecx_6
                    int32_t var_124_1 = 0
                    bool cond:0_1 = ecx_6 != 0
                    
                    if (ecx_6 s> 0)
                        while (true)
                            int32_t i = var_8c[edi_2]
                            void* esi_1 = nullptr
                            int32_t edi_5
                            
                            while (true)
                                int32_t ecx_7 = *(esi_1 + data_cce9c4 + 0x28)
                                
                                if (ecx_7 == 0)
                                label_58fd16:
                                    eax_8 = sub_547560(eax_5, i)
                                    
                                    if (eax_8.b != 0)
                                        edi_5 = var_124_1
                                        ecx_6 = var_120_1
                                        break
                                else
                                    if ((*(sub_571b30(ecx_7, data_cce9b0) + 0x9c) & 0x100) == 0)
                                    label_58fd03:
                                        esi_1 += 0x3c
                                        
                                        if (esi_1 s< 0xf0)
                                            continue
                                        
                                        goto label_58fd16
                                    
                                    int32_t* eax_12 = esi_1 + 0x2c
                                    int32_t ecx_10 = 0
                                    
                                    while (*(eax_12 + data_cce9c4) != i)
                                        ecx_10 += 1
                                        eax_12 = &eax_12[1]
                                        
                                        if (ecx_10 s>= 0xe)
                                            goto label_58fd03
                                
                                ecx_6 = var_120_1 - 1
                                var_120_1 = ecx_6
                                eax_8 = var_8c[ecx_6]
                                var_8c[var_124_1] = eax_8
                                edi_5 = var_124_1 - 1
                                break
                            
                            edi_2 = edi_5 + 1
                            var_124_1 = edi_2
                            
                            if (edi_2 s>= ecx_6)
                                break
                        
                        ebx_1 = var_118_1
                        cond:0_1 = ecx_6 != 0
                        esi = var_114
                    
                    if (cond:0_1)
                        if (ecx_6 s> 0)
                            int32_t eax_14 = var_8c[sub_63ed10(eax_2, ecx_6)]
                            *ebx_1 = eax_14
                            
                            if (eax_14 != 0)
                                goto label_58ff49
                            
                            goto label_58fda2
                        
                        var_140_2 = "RandomTraitPile"
                        var_144 = 0x86
                        var_148 = "C:\x\ax2017\Jams\Dominion\code\DomCards_Plunder.cpp"
                    label_58ffb5:
                        sub_63b870(eax_8, &data_801800, "numPiles > 0", var_148, var_144, var_140_2)
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    *ebx_1 = 0
                label_58fda2:
                    ebx_1 -= 0x3c
                    int32_t ecx_15 = data_cce9b8 - 1
                    data_cce9b8 = ecx_15
                    int32_t eax_17 = ecx_15 * 0xf
                    result_1 -= 1
                    *var_11c_1 = *(esi + (eax_17 << 2) + 0x28)
                    *(var_11c_1 + 0x10) = *(esi + (eax_17 << 2) + 0x38)
                    *(var_11c_1 + 0x20) = *(esi + (eax_17 << 2) + 0x48)
                    *(var_11c_1 + 0x30) = *(esi + (eax_17 << 2) + 0x58)
                    *(var_11c_1 + 0x38) = *(esi + (eax_17 << 2) + 0x60)
                    edi_1 = var_11c_1 - 0x3c
                    *(esi + data_cce9b8 * 0x3c + 0x28) = 0
                label_58ff4f_2:
                    result = result_1
        
        result += 1
        ebx_1 = &ebx_1[0xf]
        edi_1 += 0x3c
        result_1 = result
        var_118_1 = ebx_1
        var_11c_1 = edi_1
        
        if (result s>= data_cce9b8)
            break

CookieCheckFunction(result)
return result
