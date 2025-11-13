// 函数: sub_579560
// 地址: 0x579560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result
int32_t edx = arg2[0x320]

if (edx != 0)
    uint32_t edi_2 = zx.d((*arg2).w)
    
    if (edi_2 u>= 0x320)
        sub_591930()
        edx = arg2[0x320]
    
    int32_t edi_3 = arg3[edi_2 * 0x19 + 0x69c]
    int32_t eax_2 = arg10
    
    if (eax_2 == 0)
        eax_2.b = arg4 == 0x3ea
        eax_2 += 1
    
    int32_t ecx = arg3[0x541]
    
    if (ecx != 3 && ecx != 5 && ecx != 4 && ecx != 6 && arg3[0x540].b == 0)
        int32_t ecx_1 = edi_3
        
        if (edi_3 == arg3[0x673])
            ecx_1 = arg3[0x674]
        
        sub_59f9b0(eax_2, edi_3, arg3, ecx_1, 0x2d, 0, arg2, edx, eax_2, 0, 0, 0)
    
    void var_ce8
    memset(&var_ce8, 0, 0x48)
    uint32_t var_c94 = 0xb
    result = sub_580700(arg3, &var_c94, 1, &var_ce8, 0, arg2, arg2[0x320], nullptr)
    int32_t ebx_1 = arg2[0x320]
    int32_t ebx_2 = ebx_1 - 1
    
    if (ebx_1 - 1 s>= 0)
        int32_t temp1_1
        
        do
            uint32_t edi_4 = zx.d(arg2[ebx_2].w)
            
            if (edi_4 u>= 0x320)
                sub_591930()
            
            if (arg3[edi_4 * 0x19 + 0x69c] != edi_3)
                sub_591930()
            
            void* eax_5 = *arg9
            var_c94 = arg9[1]
            int32_t edi_5 = arg2[ebx_2]
            result = sub_582de0(arg2, edi_5, arg3, arg4)
            
            if (result.b == 0)
                uint32_t var_c90
                uint32_t eax_9 = sub_590990(&var_c90, 0xffffffff, arg3, 5, &var_c90)
                
                if (eax_9 != 0)
                    if (eax_9 != 1)
                        sub_591930()
                    
                    eax_9 = var_c90
                
                if (edi_5 == eax_9)
                    eax_9 = sub_591930()
                
                result = sub_5822e0(eax_9, edi_3, arg3, edi_5, 0xd, arg8, nullptr, arg5, arg6, 
                    arg7, 0, 0, nullptr, 0, eax_5, var_c94)
            
            temp1_1 = ebx_2
            ebx_2 -= 1
        while (temp1_1 - 1 s>= 0)

CookieCheckFunction(result)
return result
