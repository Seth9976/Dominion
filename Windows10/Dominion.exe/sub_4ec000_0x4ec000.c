// 函数: sub_4ec000
// 地址: 0x4ec000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx
int32_t i
ecx, i = __chkstk(0x1c40)
int32_t __saved_ebp
int32_t* result = __security_cookie ^ &__saved_ebp
int32_t* result_1 = result
int32_t edi = 0
int32_t i_2 = i

if (i != 0)
    int32_t esi = 7
    result = ecx + 0x1594
    
    while (*result != i)
        if (result[1] == i)
            break
        
        esi += 1
        result = &result[4]
        
        if (esi s>= 0x48)
            CookieCheckFunction(result)
            return result
    
    if (esi != 0)
        int32_t* result_2 = (esi << 4) + 0x152c + ecx
        void* var_1c40_1
        int32_t var_fb0[0x320]
        char var_330[0x318]
        
        for (int32_t i_1 = *result_2; i_1 != 0; i_1 = *(var_1c40_1 + 0x5c))
            void* eax_8 = i_1 * 0x64 + 0x1a48 + ecx
            var_1c40_1 = eax_8
            i = i_2
            
            if ((*((arg2 << 2) + 0x3c + eax_8) & 4) == 0)
                if (edi u>= 0x320)
                    ___report_rangecheckfailure()
                    noreturn
                
                eax_8.b = 0
            else
                eax_8.b = 1
            
            var_330[edi] = eax_8.b
            var_fb0[edi] = i_1
            edi += 1
        
        if (i == 0x91c || i == 0x923)
            var_330[0] = 1
        
        int32_t var_1c30[0x320]
        sub_4ebf20(&var_1c30, &var_330, &var_fb0, &var_1c30, edi)
        int32_t ecx_5 = 0
        
        if (edi s> 0)
            do
                int32_t eax_10 = var_fb0[ecx_5] * 0x64
                ecx_5 += 1
                *(eax_10 + ecx + 0x1aa4) = 0
            while (ecx_5 s< edi)
        
        int32_t edi_1 = edi - 1
        result = result_2
        *result = 0
        
        if (edi - 1 s>= 0)
            int32_t temp1_1
            
            do
                int32_t edx_2 = var_1c30[edi_1]
                int32_t ecx_6 = edx_2 * 0x64
                temp1_1 = edi_1
                edi_1 -= 1
                *(ecx_6 + ecx + 0x1a50) = esi
                *(ecx_6 + ecx + 0x1a68) = 0
                *(ecx_6 + ecx + 0x1aa4) = *result_2
                result = result_2
                *result = edx_2
            while (temp1_1 - 1 s>= 0)

CookieCheckFunction(result)
return result
