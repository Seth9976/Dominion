// 函数: sub_4be8d0
// 地址: 0x4be8d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* result_1 = arg1
int32_t eax = sub_571bc0(3, &result_1)
int32_t edx_1 = 0
int32_t* result

if (eax s> 0)
    result = result_1
    
    while (*result != arg1)
        edx_1 += 1
        result = &result[0x11]
        
        if (edx_1 s>= eax)
            goto label_4be90b

if (eax s<= 0 || result == 0)
label_4be90b:
    int32_t eax_1 = sub_571bc0(0, &result_1)
    int32_t ecx_1 = 0
    
    if (eax_1 s> 0)
        result = result_1
        
        while (*result != arg1)
            ecx_1 += 1
            result = &result[0x11]
            
            if (ecx_1 s>= eax_1)
                goto label_4be93a
    
    if (eax_1 s<= 0 || result == 0)
    label_4be93a:
        int32_t eax_2 = sub_571bc0(2, &result_1)
        int32_t ecx_2 = 0
        
        if (eax_2 s> 0)
            result = result_1
            
            while (*result != arg1)
                ecx_2 += 1
                result = &result[0x11]
                
                if (ecx_2 s>= eax_2)
                    goto label_4be96a
        
        if (eax_2 s<= 0 || result == 0)
        label_4be96a:
            result = sub_571bc0(1, &result_1)
            int32_t* result_2 = result
            int32_t ecx_3 = 0
            
            if (result_2 s> 0)
                result = result_1
                
                while (*result != arg1)
                    ecx_3 += 1
                    result = &result[0x11]
                    
                    if (ecx_3 s>= result_2)
                        goto label_4be9b0
            
            if (result_2 s<= 0 || result == 0)
            label_4be9b0:
                sub_63b870(result, &data_801800, "Halt", 
                    "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 0xc44, "GetDlcDef")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn

return result
