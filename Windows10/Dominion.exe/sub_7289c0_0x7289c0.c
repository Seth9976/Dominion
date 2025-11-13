// 函数: sub_7289c0
// 地址: 0x7289c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* edx = arg1[0x2a]
void* ecx = arg1[0x2b]
void* var_10 = &arg1[8]
char var_5_1
void* edx_1

if (edx u< ecx)
    int32_t ebx
    ebx.b = *edx
    edx_1 = &edx[1]
    var_5_1 = ebx.b
label_728a4a:
    arg1[0x2a] = edx_1
    
    if (var_5_1 == 0x42)
        void* eax_7
        void* edx_3
        
        if (edx_1 u< ecx)
            eax_7.b = *edx_1
            edx_3 = edx_1 + 1
        label_728aac:
            arg1[0x2a] = edx_3
            
            if (eax_7.b == 0x4d)
                sub_7203e0(arg1)
                sub_7203e0(arg1)
                sub_7203e0(arg1)
                sub_7203e0(arg1)
                uint32_t eax_13 = sub_7203e0(arg1)
                arg2[1] = (sub_7203e0(arg1) << 0x10) + eax_13
                uint32_t eax_17 = sub_7203e0(arg1)
                uint32_t ebx_5 = (sub_7203e0(arg1) << 0x10) + eax_17
                int32_t* edi_3 = arg2
                edi_3[2] = ebx_5
                edi_3[6] = 0
                edi_3[5] = 0
                edi_3[4] = 0
                edi_3[3] = 0
                uint32_t eax_26
                
                if (ebx_5 == 0xc)
                label_728d23:
                    *arg1 = sub_7203e0(arg1)
                    eax_26 = sub_7203e0(arg1)
                label_728b81:
                    arg1[1] = eax_26
                    
                    if (sub_7203e0(arg1) == 1)
                        *edi_3 = sub_7203e0(arg1)
                        
                        if (ebx_5 == 0xc)
                            return 1
                        
                        uint32_t eax_29 = sub_7203e0(arg1)
                        uint32_t eax_32 = (sub_7203e0(arg1) << 0x10) + eax_29
                        
                        if (eax_32 != 1 && eax_32 != 2)
                            sub_7203e0(arg1)
                            sub_7203e0(arg1)
                            sub_7203e0(arg1)
                            sub_7203e0(arg1)
                            sub_7203e0(arg1)
                            sub_7203e0(arg1)
                            sub_7203e0(arg1)
                            sub_7203e0(arg1)
                            sub_7203e0(arg1)
                            sub_7203e0(arg1)
                            
                            if (ebx_5 == 0x28)
                                goto label_728d6a
                            
                            if (ebx_5 == 0x38)
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                            label_728d6a:
                                int32_t ecx_64 = *arg2
                                
                                if (ecx_64 != 0x10 && ecx_64 != 0x20)
                                    return 1
                                
                                if (eax_32 == 0)
                                    if (ecx_64 != 0x20)
                                        arg2[3] = 0x7c00
                                        arg2[4] = 0x3e0
                                        arg2[5] = 0x1f
                                        return 1
                                    
                                    arg2[7] = eax_32
                                    arg2[6] = 0xff000000
                                    arg2[3] = 0xff0000
                                    arg2[4] = 0xff00
                                    arg2[5] = 0xff
                                    return 1
                                
                                if (eax_32 == 3)
                                    uint32_t eax_54 = sub_7203e0(arg1)
                                    arg2[3] = (sub_7203e0(arg1) << 0x10) + eax_54
                                    uint32_t eax_58 = sub_7203e0(arg1)
                                    arg2[4] = (sub_7203e0(arg1) << 0x10) + eax_58
                                    uint32_t eax_62 = sub_7203e0(arg1)
                                    uint32_t eax_63 = sub_7203e0(arg1)
                                    int32_t ecx_71 = arg2[4]
                                    uint32_t eax_65 = (eax_63 << 0x10) + eax_62
                                    arg2[5] = eax_65
                                    
                                    if (arg2[3] != ecx_71 || ecx_71 != eax_65)
                                        return 1
                            else if (ebx_5 == 0x6c || ebx_5 == 0x7c)
                                uint32_t eax_33 = sub_7203e0(arg1)
                                arg2[3] = (sub_7203e0(arg1) << 0x10) + eax_33
                                uint32_t eax_37 = sub_7203e0(arg1)
                                arg2[4] = (sub_7203e0(arg1) << 0x10) + eax_37
                                uint32_t eax_41 = sub_7203e0(arg1)
                                arg2[5] = (sub_7203e0(arg1) << 0x10) + eax_41
                                uint32_t eax_45 = sub_7203e0(arg1)
                                arg2[6] = (sub_7203e0(arg1) << 0x10) + eax_45
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                                int32_t i_1 = 0xc
                                int32_t i
                                
                                do
                                    sub_7203e0(arg1)
                                    sub_7203e0(arg1)
                                    i = i_1
                                    i_1 -= 1
                                while (i != 1)
                                
                                if (ebx_5 != 0x7c)
                                    return 1
                                
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                                sub_7203e0(arg1)
                                return i_1 + 1
                else
                    if (ebx_5 == 0x28 || ebx_5 == 0x38 || ebx_5 == 0x6c)
                        if (ebx_5 == 0xc)
                            goto label_728d23
                        
                    label_728b52:
                        uint32_t eax_19 = sub_7203e0(arg1)
                        *arg1 = (sub_7203e0(arg1) << 0x10) + eax_19
                        uint32_t eax_23 = sub_7203e0(arg1)
                        eax_26 = (sub_7203e0(arg1) << 0x10) + eax_23
                        edi_3 = arg2
                        goto label_728b81
                    
                    if (ebx_5 == 0x7c)
                        goto label_728b52
        else if (*var_10 != 0)
            void* eax_10 = arg1[4](arg1[7], &arg1[0xa], arg1[9])
            arg1[0x2a] = &arg1[0xa]
            
            if (eax_10 != 0)
                arg1[0x2b] = eax_10 + 0x28 + arg1
            else
                *var_10 = 0
                arg1[0x2b] = arg1 + 0x29
                arg1[0xa].b = 0
            
            eax_7.b = arg1[0xa].b
            edx_3 = arg1 + 0x29
            goto label_728aac
else if (arg1[8] != 0)
    void* eax_3 = arg1[4](arg1[7], &arg1[0xa], arg1[9])
    arg1[0x2a] = &arg1[0xa]
    
    if (eax_3 != 0)
        ecx = eax_3 + 0x28 + arg1
        arg1[0x2b] = ecx
    else
        arg1[8] = eax_3
        ecx = arg1 + 0x29
        arg1[0x2b] = ecx
        arg1[0xa].b = 0
    
    var_5_1 = arg1[0xa].b
    edx_1 = arg1 + 0x29
    var_10 = &arg1[8]
    goto label_728a4a
return 0
