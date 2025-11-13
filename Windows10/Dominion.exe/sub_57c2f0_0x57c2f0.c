// 函数: sub_57c2f0
// 地址: 0x57c2f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t eax_3 = arg4 & 0x30
int32_t eax_5
int32_t edx

if (eax_3 != 0)
    void* eax_6
    eax_6, edx = sub_5769e0(eax_3, arg2, arg3, arg4)
    eax_5 = *(eax_6 + 0xb0)
else
    void* eax_4
    eax_4, edx = sub_576940(eax_3, arg2, arg3, arg4)
    eax_5 = *(eax_4 + 0x84)

if (eax_5 != 0x38 && eax_5 != 0x44)
    uint32_t eax_8 = arg5 & 0x30
    int32_t eax_10
    int32_t edx_1
    
    if (eax_8 != 0)
        void* eax_11
        eax_11, edx_1 = sub_5769e0(eax_8, edx, arg3, arg5)
        eax_10 = *(eax_11 + 0xb0)
    else
        void* eax_9
        eax_9, edx_1 = sub_576940(eax_8, edx, arg3, arg5)
        eax_10 = *(eax_9 + 0x84)
    
    if (eax_10 != 0x38 && eax_10 != 0x44)
        uint32_t eax_12
        int32_t edx_2
        eax_12, edx_2 = sub_5915b0(eax_10, edx_1, arg3, arg4)
        uint32_t eax_13
        int32_t edx_3
        eax_13, edx_3 = sub_5915b0(eax_12, edx_2, arg3, arg5)
        
        if (eax_12 != eax_13)
            uint32_t eax_15
            int32_t edx_4
            
            if (eax_3 != 0)
                void* eax_16
                eax_16, edx_4 = sub_5769e0(eax_13, edx_3, arg3, arg4)
                eax_15 = *(eax_16 + 0xb0)
            else
                void* eax_14
                eax_14, edx_4 = sub_576940(eax_13, edx_3, arg3, arg4)
                eax_15 = *(eax_14 + 0x84)
            
            if (eax_8 != 0)
                edx_3 = *(sub_5769e0(eax_15, edx_4, arg3, arg5) + 0xb0)
            else
                edx_3 = *(sub_576940(eax_15, edx_4, arg3, arg5) + 0x84)
            
            if (eax_12 == 0xc13)
                if (eax_13 != 0xc39 || edx_3 != 0x1a)
                    goto label_57c44c
                
                goto label_57c543
            
            if (eax_13 != 0xc13 || eax_12 != 0xc39
                    || (eax_15 != 0x1a && (eax_13 != 0xc39 || edx_3 != 0x1a)))
                goto label_57c44c
            
        label_57c543:
            CookieCheckFunction(0)
            return 0
        
    label_57c44c:
        int32_t eax_19
        int32_t edx_5
        eax_19, edx_5 = sub_57c1b0(eax_13, edx_3, arg3, arg4, arg5)
        
        if (eax_19 != 1)
            int32_t eax_20 = sub_57c1b0(eax_19, edx_5, arg3, arg4, arg5)
            
            if (eax_20 != 2)
                uint32_t result = 1
                int32_t var_74[0x1b]
                int32_t eax_21 = sub_57b720(eax_20, &var_74, arg3, arg4)
                int32_t var_dc[0x1a]
                int32_t eax_22 = sub_57b720(eax_21, &var_dc, arg3, arg5)
                int32_t var_e8_2 = eax_22
                
                if (eax_21 != 0 && eax_22 != 0)
                    int32_t edi_2 = 0
                    
                    if (eax_21 s> 0)
                        int32_t ecx_10 = eax_21
                        
                        while (true)
                            int32_t esi_2 = 0
                            
                            if (eax_22 s> 0)
                                int32_t eax_23 = var_74[edi_2]
                                
                                while (true)
                                    int32_t var_100_10 = var_dc[esi_2]
                                    uint32_t result_1 = sub_57b970(eax_23, eax_23, arg3)
                                    
                                    if (result_1 u> 3)
                                        sub_63b870(result_1, &data_801800, "Halt", 
                                            "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x1d1f, 
                                            "AbilitiesCommute")
                                        
                                        if (sub_63bc30() != 0)
                                            breakpoint
                                        
                                        sub_63bb00()
                                        noreturn
                                    
                                    switch (result_1)
                                        case 0
                                            goto label_57c543
                                        case 1
                                        label_57c504:
                                            eax_23 = var_74[edi_2]
                                            esi_2 += 1
                                            
                                            if (esi_2 s< var_e8_2)
                                                continue
                                            
                                            eax_22 = var_e8_2
                                            ecx_10 = eax_21
                                            break
                                        case 2, 3
                                            if (result == 1 || result == result_1)
                                                result = result_1
                                            
                                            goto label_57c504
                            
                            edi_2 += 1
                            
                            if (edi_2 s>= ecx_10)
                                break
                    
                    CookieCheckFunction(result)
                    return result
            
            goto label_57c543

CookieCheckFunction(1)
return 1
