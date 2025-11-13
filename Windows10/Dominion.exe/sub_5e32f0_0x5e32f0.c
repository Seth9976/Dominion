// 函数: sub_5e32f0
// 地址: 0x5e32f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t ebx = arg3
uint32_t var_c = ebx
char* eax = *(ebx + 0x2c)
int32_t var_14_1
bool var_5_1

if (eax == 3)
    int32_t ecx = *(ebx + 0x70)
    
    if (ecx == 0)
        var_14_1 = 0
    else
        uint32_t eax_1 = zx.d(ecx.w)
        
        if (eax_1 u>= data_b809e4)
            var_14_1 = 0
        else
            void* eax_3 = eax_1 * 0x1c30 + data_b809e0
            
            if (*(eax_3 + 0x1c28) != ecx || eax_3 == 0)
                var_14_1 = 0
            else
                var_14_1 = *(eax_3 + 0x98)
    
    if (*(ebx + 0x5c) - 7 u<= 0x40)
        var_5_1 = true
    label_5e33f2:
        eax = sub_5cbb20(ebx)
        char* var_24_1 = eax
        
        if (eax != 0)
            eax = sub_571b30(eax, sub_5cf7e0())
            char* edi_2 = nullptr
            char* var_20_1 = eax
            char* var_1c_1 = nullptr
            void* esi_2 = &eax[0x670]
            void* var_10_1 = esi_2
            
            while (*(esi_2 - 8) != 0)
                char var_6
                
                if (sub_5e3790(ebx, &var_6).b == 0)
                    break
                
                int32_t ecx_9 = data_b604e0
                
                if (ecx_9 == 0xffffffff)
                    ecx_9 = 0
                
                int32_t eax_11 = *(esi_2 - 8)
                *arg4 = eax_11
                void* eax_12 = sub_5731d0(eax_11, ecx_9, 0xb80ad8, var_14_1)
                int32_t esi_3 = 1
                int32_t eax_16
                void* ebx_4
                char* esi_4
                int32_t* edi_3
                
                if (*arg4 == 1)
                    edi_3 = arg4
                    int32_t ebx_2
                    ebx_2.b = sub_576b30(eax_12, edi_2, 0xb80ad8, 0x2d, var_24_1, 0, 0) s> 0
                    esi_3 = ebx_2 + 1
                    
                    if (*edi_3 != 1 || *(var_10_1 - 4) != 0)
                        goto label_5e34bb
                    
                    esi_4 = var_20_1
                    eax_16 = (*(esi_4 + 0xa4))() * (ebx_2 + 1)
                    ebx_4 = var_10_1
                    goto label_5e34d4
                
                edi_3 = arg4
            label_5e34bb:
                ebx_4 = var_10_1
                int32_t eax_17 = *(ebx_4 - 4)
                char const* const var_54_2
                int32_t var_50
                char const* const var_4c_3
                char* ecx_24
                
                if (eax_17 == 0)
                    var_4c_3 = "ShowHintValue"
                    var_50 = 0x49ba
                    var_54_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                    ecx_24 = "info.fn"
                else
                    eax_16 = eax_17() * esi_3
                    esi_4 = var_20_1
                label_5e34d4:
                    *arg2 = eax_16
                    TEB* fsbase
                    void* ecx_11 = *fsbase->ThreadLocalStoragePointer
                    eax_17 = *(ecx_11 + 0xf010)
                    
                    if (eax_17 s<= 0)
                        var_4c_3 = "DomPopContext"
                        var_50 = 0x792
                        var_54_2 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                        ecx_24 = "cs.numContexts > 0"
                    else
                        *(ecx_11 + 0xf010) = eax_17 - 1
                        eax = *edi_3
                        
                        if (eax != 1)
                            if (*arg2 != 0)
                                goto label_5e350d
                            
                            ebx = var_c
                        else if (var_5_1 == 0 || *arg2 == 0)
                            ebx = var_c
                        else
                        label_5e350d:
                            char ecx_12 = (*ebx_4).b
                            
                            if ((ecx_12 & 0x16) != 0)
                                break
                            
                            void* ebx_5
                            void* esi_5
                            int32_t edi_4
                            
                            if ((ecx_12 & 8) != 0)
                                edi_4 = 6
                                esi_5 = 2
                                ebx_5 = 1
                            else if (eax == 1)
                                edi_4 = 1
                                esi_5 = 1
                                ebx_5 = esi_5
                            else
                                int32_t ecx_13 = *(esi_4 + 0x9c)
                                
                                if (eax != 6)
                                    esi_5 = 2
                                    
                                    if ((*(esi_4 + 0x98) & 0x400) != 0)
                                        edi_4 = 1
                                        ebx_5 = 1
                                    else if ((ecx_13 & 0x40) == 0)
                                        ebx_5 = 2
                                        edi_4 = 4
                                        void* var_18_1 = 2
                                        
                                        if (*(var_c + 0x2c) == 0)
                                            uint32_t eax_28
                                            int32_t edx_5
                                            eax_28, edx_5 = sub_5cbaa0(var_c, arg2, var_c, 4, 0)
                                            ebx_5.b = eax_28.b
                                            char eax_29 = sub_5cbaa0(eax_28, edx_5, var_c, 2, 0)
                                            
                                            if (ebx_5.b != 0)
                                                ebx_5 = var_18_1
                                                int32_t eax_30
                                                eax_30.b = eax_29 != 0
                                                void* var_2c_1 = (eax_30 << 3) + 4
                                                esi_5 = (eax_30 << 3) + 4
                                            else if (eax_29 == 0)
                                                ebx_5 = esi_5
                                            else
                                                ebx_5 = var_18_1
                                                esi_5 = 8
                                    else
                                        edi_4 = 1
                                        ebx_5 = 1
                                else if ((ecx_13 & 0x40) == 0)
                                    edi_4 = 4
                                    esi_5 = 1
                                    ebx_5 = 2
                                else
                                    edi_4 = 1
                                    ebx_5 = 1
                                    esi_5 = 2
                            
                            int32_t edx_7 = edi_4 | 1
                            int32_t ecx_20 = *var_10_1
                            
                            if ((ecx_20 & 0x8000) == 0)
                                edx_7 = edi_4
                            
                            char var_18_2 = edx_7.b
                            void* eax_34 = edx_7 | 2
                            
                            if ((ecx_20 & 0x1000) == 0)
                                eax_34 = esi_5
                            
                            int32_t ecx_21
                            ecx_21.b = 0
                            var_6 = 0
                            
                            if ((eax_34.b & 1) != 0)
                                ecx_21.b = 1
                            else if (data_b824a4 == ecx_9)
                                if ((eax_34.b & 2) == 0)
                                    int32_t edx_9 = data_b824c4
                                    
                                    if ((eax_34.b & 8) != 0 && edx_9 == 2)
                                        ecx_21.b = 1
                                    else if ((eax_34.b & 4) != 0 && edx_9 == 1)
                                        ecx_21.b = edx_9.b
                                    else if (ebx_5 == 2)
                                        int32_t var_34
                                        char eax_35
                                        eax_35, ecx_21 = sub_5efe00(eax_34, &var_34, var_c, 0)
                                        int32_t eax_36
                                        
                                        if (eax_35 != 0)
                                            eax_36 = var_34
                                        
                                        if (eax_35 != 0
                                                && (eax_36 == 1 || eax_36 == 2 || eax_36 == 3))
                                            ecx_21.b = 1
                                        else
                                            ecx_21.b = var_6
                                else
                                    ecx_21.b = 1
                            
                            void* eax_40 = var_c
                            int32_t edx_11 = 0
                            int32_t esi_6 = *(eax_40 + 0x2c)
                            
                            if (esi_6 == 0)
                                edx_11 = *(eax_40 + 0xa4)
                            
                            eax_40.b = 0
                            
                            if ((var_18_2 & 1) != 0)
                                eax_40.b = 1
                            else if ((var_18_2 & 2) != 0 && edx_11 == 0x3e9)
                                eax_40.b = 1
                            else if ((var_18_2 & 4) != 0)
                                eax_40 = nullptr
                                
                                if (edx_11 == 0x3ea)
                                    eax_40 = 1
                            
                            if (ecx_21.b != 0 && eax_40.b != 0)
                                eax_40.b = 1
                                return eax_40
                            
                            if (esi_6 != 0)
                                ebx = var_c
                            else
                                ebx = var_c
                                int32_t var_38
                                
                                if (ebx_5 == 2 && sub_5efe00(eax_40, &var_38, ebx, esi_6.b) != 0)
                                    int32_t eax_42 = var_38
                                    
                                    if (eax_42 == 1 || eax_42 == 2 || eax_42 == 3)
                                        eax_40.b = 1
                                        return eax_40
                        
                        eax = &var_1c_1[1]
                        esi_2 = var_10_1 + 0xc
                        var_1c_1 = eax
                        var_10_1 = esi_2
                        
                        if (eax s>= 4)
                            break
                        
                        edi_2 = eax
                        continue
                
                sub_63b870(eax_17, &data_801800, ecx_24, var_54_2, var_50, var_4c_3)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
else if (eax == 0)
    eax = data_b604e0
    
    if (eax == 0xffffffff)
        eax = nullptr
    
    int32_t ecx_1 = *(ebx + 0xa0)
    
    if (ecx_1 == eax || ecx_1 == 0xffffffff)
        char* ecx_2 = *(ebx + 0xa4)
        var_14_1 = *(ebx + 0x98)
        
        if (ecx_2 == 2 || &ecx_2[0xffffffff] u> 0x47)
        label_5e33ec:
            var_5_1 = &ecx_2[0xfffffff9] u> 0x40
            goto label_5e33f2
        
        void* eax_8
        
        if (ecx_2 != 6)
            eax_8 = sub_5cba00(*(ebx + 0x9c))
        else
            eax_8 = sub_5cc6c0(sub_5cbb20(ebx))
        
        if (*(eax_8 + 0x70) == *(ebx + 0x1c28))
            eax = *(ebx + 0xa4)
            ecx_2 = eax
            
            if (eax s< 0x22 || eax s> 0x26)
                goto label_5e33ec
eax.b = 0
return eax
