// 函数: sub_57e8c0
// 地址: 0x57e8c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax_1 = arg8 - 3

if (eax_1 u<= 0x10)
    eax_1 = zx.d(lookup_table_57eb50[eax_1])
    
    switch (eax_1)
        case 0
            return sub_57d4c0(sub_57cbc0(eax_1, arg2, arg3, arg4, arg5, arg6, arg7, 0, 0, 0, 0), 
                arg2, arg3, arg4, 4, 0)
        case 1
            int32_t var_20_1 = 0
            int32_t var_24_1 = 0
            int32_t var_28_2 = 0
            return sub_57cbc0(eax_1, arg2, arg3, arg4, arg5, arg6, arg7, 2, 0, 0, 0)
        case 2
            if (arg11 != 1)
                return sub_591930()
        case 3
            if (arg11 != 1)
                eax_1 = sub_591930()
            
            sub_57ce80(sub_57d6f0(eax_1, arg2, arg3, arg4, 6, *arg10, 1, 0), arg2, arg3, arg4, 8, 
                *arg10, 0, 0)
            uint32_t esi_2 = arg4
            eax_1 = sub_57cbc0(sub_57d1e0(arg9, arg4, 4, *arg10, 0, arg9), arg2, arg3, esi_2, arg5, 
                arg6, arg7, 0xf, *arg10, 0, arg9)
            int32_t edx_6 = *arg10
            int32_t i = 0
            int32_t var_c_1 = edx_6
            arg8 = 0
            
            if (*(arg2 + 0x19b8) s> 0)
                void* eax_5 = arg2
                int32_t* edi_4 = arg2 + 0x3b5b8
                
                do
                    if (edi_4[-1] == 2 && *edi_4 == 0x11 && edi_4[-0xf] == esi_2)
                        int32_t eax_6 = edi_4[-0x14]
                        int32_t eax_9
                        
                        if (eax_6 != 3 && eax_6 != 4 && eax_6 != 5)
                        label_57ea41:
                            eax_9 = arg5
                        label_57ea44:
                            
                            if (eax_9 u> edi_4[6])
                                uint32_t eax_10 = sub_575d70(edi_4[-9], edx_6)
                                i = arg8
                                
                                if (sub_57c810(eax_10, arg4, arg2, eax_10, var_c_1, 0, arg12, 0)
                                        != 0)
                                    *(arg3 + (*(arg3 + 0x400) << 2)) = eax_10
                                    *(arg3 + 0x400) += 1
                                
                                esi_2 = arg4
                        else if (edi_4[-8].b != 1)
                            if (eax_6 != 5)
                                goto label_57ea41
                            
                            int32_t ecx_6 = edi_4[-0x12]
                            int32_t edx_7 = edi_4[-0x11]
                            eax_9 = arg5
                            
                            if ((ecx_6 | edx_7) == 0)
                                i = arg8
                                edx_6 = var_c_1
                                goto label_57ea44
                            
                            i = arg8
                            
                            if (ecx_6 == eax_9 && edx_7 == arg6)
                                edx_6 = var_c_1
                                goto label_57ea44
                        eax_5 = arg2
                    
                    edx_6 = var_c_1
                    i += 1
                    edi_4 = &edi_4[0x2a]
                    arg8 = i
                while (i s< *(eax_5 + 0x19b8))
                
                return eax_5
        case 4
            if (arg11 != 1)
                eax_1 = sub_591930()
            
            eax_1 = sub_5757f0(eax_1, (*arg10).w, arg2, 0x20, 0)
            
            if (eax_1.b != 0)
                return sub_57d6f0(eax_1, arg2, arg3, arg4, 5, *arg10, 1, 0)
        case 5
            return sub_57d1e0(arg2, arg4, 5, *arg10, 0, arg9)
        case 6
            int32_t var_20_5 = 0
            int32_t var_24_3 = 0
            int32_t var_28_8 = 0
            return sub_57cbc0(eax_1, arg2, arg3, arg4, arg5, arg6, arg7, 0x14, 0, 0, 0)

return eax_1
