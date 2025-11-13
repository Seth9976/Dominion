// 函数: sub_5754f0
// 地址: 0x5754f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_571b30(arg2, *(arg3 + 0xd48))
int32_t edx_3 = (arg4 & *(eax_2 + 0x98)) | (*(eax_2 + 0x9c) & arg5)
uint32_t eax_3

if (edx_3 == 0)
    int32_t var_14_1 = 0xffffffff
    int32_t esi_1 = 0
    int32_t ecx_6 = (arg4 & 0xce) | (arg5 & 0x1000)
    void var_414
    
    if (ecx_6 != 0)
        int32_t var_430_1 = ecx_6
        edx_3 = sub_576540(&var_414, *(arg3 + 0x19cc), arg3, &var_414)
    
    if (((arg4 & 0xca) | (arg5 & 0x1000)) != 0)
        int32_t eax_9 = sub_57da30(arg3, arg2)
        edx_3 = 7
        void* ecx_12 = arg3 + 0x1594
        
        while (true)
            esi_1 = *ecx_12
            
            if (esi_1 == arg2)
                break
            
            if (*(ecx_12 + 4) == arg2)
                break
            
            if (esi_1 == eax_9)
                break
            
            edx_3 += 1
            ecx_12 += 0x10
            
            if (edx_3 s>= 0x48)
                esi_1 = 0
                break
    
    if ((arg4 & 2) == 0)
    label_575661:
        
        if ((arg4 & 0x80) == 0)
        label_57568b:
            
            if ((arg4 & 8) == 0)
            label_5756b5:
                
                if ((arg4 & 0x40) == 0)
                label_5756e4:
                    
                    if ((arg5 & 0x1000) == 0)
                    label_57570a:
                        int32_t eax_36 = arg4 & 4
                        
                        if (eax_36 == 0)
                        label_57577b:
                            uint32_t eax_40 = arg5 & 0x4000
                            
                            if (eax_40 != 0 && *(arg3 + 0x19d8) != 0 && arg2 == 0x101)
                                uint32_t eax_41
                                eax_41.b = sub_590c70(eax_40, *(arg3 + 0x19cc), arg3, 0x454) != 0
                                CookieCheckFunction(eax_41)
                                return eax_41
                            
                            eax_40.b = 0
                            CookieCheckFunction(eax_40)
                            return eax_40
                        
                        if (*(arg3 + 0x19d8) != 0 && arg2 == 0x101)
                            eax_3, edx_3 = sub_590c70(eax_36, *(arg3 + 0x19cc), arg3, 0x454)
                        
                        if (*(arg3 + 0x19d8) == 0 || arg2 != 0x101 || eax_3 == 0)
                            if (sub_5846c0(&var_414, edx_3, arg3, &var_414, 0x35, 0) == 0)
                                goto label_57577b
                            
                            if (sub_5754f0(2, 0).b == 0)
                                goto label_57577b
                    else
                        eax_3, edx_3 = sub_5846c0(&var_414, edx_3, arg3, &var_414, 0x25, esi_1)
                        
                        if (eax_3.b == 0)
                            goto label_57570a
                else
                    eax_3, edx_3 = sub_5846c0(&var_414, edx_3, arg3, &var_414, 0x24, esi_1)
                    
                    if (eax_3.b == 0)
                        goto label_5756e4
            else
                eax_3, edx_3 = sub_5846c0(&var_414, edx_3, arg3, &var_414, 0x22, esi_1)
                
                if (eax_3.b == 0)
                    goto label_5756b5
        else
            eax_3, edx_3 = sub_5846c0(&var_414, edx_3, arg3, &var_414, 0x21, esi_1)
            
            if (eax_3.b == 0)
                goto label_57568b
    else if (*(arg3 + 0x19d8) == 0)
    label_575615:
        eax_3, edx_3 = sub_5846c0(&var_414, edx_3, arg3, &var_414, 0x23, esi_1)
        
        if (eax_3.b == 0)
            if ((*(eax_2 + 0x98) & 0x10) == 0)
                goto label_575661
            
            eax_3, edx_3 = sub_5846c0(&var_414, edx_3, arg3, &var_414, 0x1d, 0)
            
            if (eax_3.b == 0)
                goto label_575661
    else
        if (sub_574b70(arg2) == 0)
            goto label_575615
        
        int32_t var_418
        eax_3, edx_3 = sub_574a80(&var_418, *(arg3 + 0x19cc), arg3, 0xe28, &var_418)
        
        if (var_418 == 0)
            goto label_575615

eax_3.b = 1
CookieCheckFunction(eax_3)
return eax_3
