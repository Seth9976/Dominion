// 函数: sub_578710
// 地址: 0x578710
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* var_420 = arg4
int32_t edi = 0
int32_t* ecx = arg3 + 0x174c
int32_t var_40c[0x101]

for (int32_t i = 0x22; i s< 0x26; )
    int32_t edx = *ecx
    
    if (edx != 0)
        var_40c[edi] = edx
        edi += 1
    
    i += 1
    ecx = &ecx[4]

uint32_t result = 0
uint32_t result_3 = 0
uint32_t result_1 = 0

if (edi s> 0)
    uint32_t result_2
    
    do
        int32_t edi_1 = var_40c[result]
        uint32_t eax_4 = sub_5757f0(result, edi_1.w, arg3, 0x10000000, 0)
        
        if (eax_4.b != 0)
            result_2 = result_3
        else
            uint32_t eax_5 = sub_5757f0(eax_4, edi_1.w, arg3, 0x20000000, 0)
            
            if (eax_5.b != 0)
                result_2 = result_3
            else
                uint32_t eax_6 = sub_5757f0(eax_5, edi_1.w, arg3, 0, 0x40)
                
                if (eax_6.b != 0)
                    result_2 = result_3
                else
                    uint32_t eax_7 = sub_5757f0(eax_6, edi_1.w, arg3, 0, 0x100)
                    
                    if (eax_7.b != 0)
                        result_2 = result_3
                    else
                        uint32_t eax_8 = sub_5757f0(eax_7, edi_1.w, arg3, 0, 0x800)
                        
                        if (eax_8.b != 0)
                            result_2 = result_3
                        else if (sub_5757f0(eax_8, edi_1.w, arg3, 0x8000000, 0) == 0)
                        label_5788d9:
                            uint32_t eax_16 = zx.d(edi_1.w)
                            
                            if (eax_16 u>= 0x320)
                                sub_591930()
                            
                            int32_t eax_17 = eax_16 * 0x64
                            
                            if (sub_576b30(eax_17, arg2, arg3, 8, *(eax_17 + arg3 + 0x1a4c), 0, 0)
                                    s> 0)
                                result_2 = result_3
                            else
                                char var_411
                                char eax_27 = sub_5782d0(&var_411, arg2, arg3, edi_1, &var_411, 
                                    *arg5, arg5[1], arg5[2], arg5[3].b, *(arg5 + 0xd), &arg5[4], 
                                    arg5[0x324], arg5[0x325], &arg5[0x328], &arg5[0x342], 
                                    arg5[0x35c], &arg5[0x35d], arg5[0x377], &arg5[0x378], 
                                    arg5[0x392], arg5[0x326], arg5[0x327])
                                result_2 = result_3
                                
                                if (eax_27 != 0)
                                    int32_t* eax_28 = var_420
                                    result_2 += 1
                                    result_3 = result_2
                                    bool cond:0_1 = var_411 == 0
                                    var_420 = &eax_28[2]
                                    *eax_28 = edi_1
                                    eax_28[1] = 0
                                    
                                    if (not(cond:0_1))
                                        eax_28[1] = 1
                        else
                            uint32_t eax_10 = zx.d(edi_1.w)
                            uint32_t var_418 = eax_10
                            
                            if (eax_10 u>= 0x320)
                                sub_591930()
                                eax_10 = var_418
                            
                            var_418 = 0
                            int32_t eax_12 = *(eax_10 * 0x64 + arg3 + 0x1a4c)
                            void* eax_13 = sub_574a80(eax_12, arg2, arg3, eax_12, &var_418)
                            uint32_t eax_14
                            
                            if (eax_13.b != 0)
                                eax_14 = sub_576b30(eax_13, arg2, arg3, 0x30, eax_12, 0, 0)
                            
                            if (eax_13.b != 0 && eax_14 s<= 0)
                                result_2 = result_3
                            else
                                int32_t i_2 = *(arg3 + 0x19a4)
                                int32_t edx_9 = 0
                                
                                if (i_2 s<= 0)
                                    result_2 = result_3
                                else
                                    void* eax_15 = arg3 + 0x152c8
                                    int32_t i_1
                                    
                                    do
                                        if (*(eax_15 + 4) == arg2 && *eax_15 == 0xe01
                                                && *(eax_15 + 8) == 0x3f1)
                                            edx_9 += *(eax_15 + 0x14)
                                        
                                        eax_15 += 0x20
                                        i_1 = i_2
                                        i_2 -= 1
                                    while (i_1 != 1)
                                    
                                    if (edx_9 != 0)
                                        goto label_5788d9
                                    
                                    result_2 = result_3
        
        result = result_1 + 1
        result_1 = result
    while (result s< edi)
    
    result = result_2

CookieCheckFunction(result)
return result
