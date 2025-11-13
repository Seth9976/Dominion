// 函数: sub_56a100
// 地址: 0x56a100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* result_1 = arg3
void* result = sub_573400()
void* result_4 = result

if (arg3 == 0xffffffff)
    result = *(result_4 + 0xc)
    result_1 = result

void* result_8 = arg4
uint32_t var_ac
void* result_10

if ((arg8 & 0x200) != 0)
    result_10 = arg6
else
    int32_t edi = *(result_4 + 0x2c)
    var_ac = *(result_4 + 0x28)
    uint32_t eax_3 = sub_56b800()
    void* eax_4 = sub_573400()
    result = sub_576b30(eax_4, *(eax_4 + 0xc), *(eax_4 + 4), 0x1a, eax_3, var_ac, edi)
    result_8 = arg4
    
    if (result s<= 0 || (arg8.b & 0x80) != 0)
        result_10 = arg6
    else
        result_10 = arg6 + 1
        
        if (result_8 s< result_10)
            result_10 = result_8

if (result_10 != 0)
    void* result_7 = result_4
    int32_t ecx_1 = *(result_7 + 0x2c)
    int128_t var_a0 = *arg7
    int128_t var_90_1 = arg7[1]
    int128_t var_80_1 = arg7[2]
    var_80_1:4.d = ecx_1
    int32_t ecx_2 = 0
    var_80_1.d = *(result_7 + 0x28)
    int32_t var_44[0xc]
    
    if (result_8 s> 0)
        int32_t* edx_2 = arg2 + 0x28
        
        do
            int32_t eax_7 = *edx_2
            edx_2 = &edx_2[0xc]
            var_44[ecx_2] = eax_7
            ecx_2 += 1
        while (ecx_2 s< result_8)
        
        result_7 = result_4
    
    void* result_2
    void* result_5
    
    if (arg5 != result_8)
        int32_t* ecx_3 = *(result_7 + 4)
        var_ac = *result_7
        result = *(result_7 + 0x10)
        void* result_3 = result
        
        if (result_8 != 0)
            int32_t result_6 = result_1
            int32_t result_9
            
            if (result_6 != ecx_3[0x673])
                result_9 = result_6
            else
                result_9 = ecx_3[0x674]
            
            result = sub_623df0(result_1, &var_ac, ecx_3, result_1, result_9, &var_44, result_8, 
                result_10, arg5, &var_a0)
            result_5 = result
            result_2 = result_5
            
            if (result_5 != 0)
                goto label_56a25c
    else
        result_5 = result_8
        result_2 = result_5
    label_56a25c:
        var_ac = 0x17
        memset(&var_a0, 0, 0x48)
        *(result_4 + 0xc)
        *(result_4 + 4)
        result = sub_580700(result_5, &var_ac, 1, &var_a0, 0, &var_44, result_5, nullptr)
        int32_t ecx_6 = 0
        int32_t var_b0_1 = 0
        
        if (result_8 s> 0)
            result = result_2
            void* edi_2 = arg2 + 0x24
            
            do
                int32_t esi_3 = 0
                
                if (result s> 0)
                    do
                        int32_t eax_10 = var_44[esi_3]
                        
                        if (*(edi_2 + 4) == eax_10 || *(edi_2 + 8) == eax_10)
                            int32_t* ecx_7 = *edi_2
                            
                            if (ecx_7 == 0)
                                std::_Xbad_function_call()
                                noreturn
                            
                            (*(*ecx_7 + 8))()
                        
                        result = result_2
                        esi_3 += 1
                    while (esi_3 s< result)
                    
                    ecx_6 = var_b0_1
                
                ecx_6 += 1
                edi_2 += 0x30
                var_b0_1 = ecx_6
            while (ecx_6 s< arg4)

CookieCheckFunction(result)
return result
