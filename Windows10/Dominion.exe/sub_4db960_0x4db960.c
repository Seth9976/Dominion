// 函数: sub_4db960
// 地址: 0x4db960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
int32_t var_14 = __security_cookie ^ &__saved_ebp
int32_t* result_2 = nullptr
int32_t* result_1 = nullptr
int32_t esi = 0
int32_t* result = &arg3[8]

while (result[-8] != 0)
    if (result[-4] == 0)
        result_2 += 1
    else if (*result == 0)
        result_2 += 2
    else if (result[4] == 0)
        result_2 += 3
    else
        esi += 4
        result_2 = &result_2[1]
        result = &result[0x10]
        result_1 = result_2
        
        if (esi s>= 0x20)
            break
        
        continue
    
    result_1 = result_2
    break

int32_t var_4c = 0

if (result_2 s> 0)
    int128_t xmm0_1 = data_891400
    result = result_1
    int128_t xmm1_1 = data_891510
    int32_t* edx = &arg3[1]
    int32_t* ecx_2 = &arg3[result_2 * 4]
    void* var_3c_1 = nullptr
    int32_t* esi_1 = arg3
    int32_t* var_40_1 = ecx_2
    int32_t* var_44_1 = esi_1
    int32_t* var_48_1 = edx
    
    do
        int32_t edi_1 = *esi_1
        int32_t* esi_3
        void* edi_3
        
        if (edi_1 != 0x13)
            int32_t esi_4 = 0
            
            if (arg4 s<= 0)
            label_4dbaf3:
                int128_t* esi_5 = var_3c_1
                ecx_2 -= 0x10
                result -= 1
                var_4c -= 1
                result_1 = result
                var_40_1 = ecx_2
                *(esi_5 + arg3) = *ecx_2
                *ecx_2 = 0
                var_3c_1 = esi_5 - 0x10
                esi_3 = var_44_1 - 0x10
                edx -= 0x10
            else
                while (true)
                    if (sub_4db700(*(arg2 + (esi_4 << 2)), edi_1) != 0)
                        if (sub_4dc4a0(0x17, edi_1) != 0)
                            void* var_70
                            void* var_68
                            uint32_t eax_11 = sub_4daf40(&var_68, &var_70)
                            int32_t esi_8 = 0
                            
                            if (eax_11 s> 0)
                                do
                                    if (sub_4db650(*(var_68 + (esi_8 << 2)), edi_1) != 0)
                                        goto label_4dbb42
                                    
                                    esi_8 += 1
                                while (esi_8 s< eax_11)
                            
                            *(var_3c_1 + arg3 + 4) = 1
                        else
                            *(var_3c_1 + arg3 + 4) = 0
                        
                    label_4dbb42:
                        xmm1_1 = data_891510
                        esi_3 = var_44_1
                        ecx_2 = var_40_1
                        result = result_1
                        edx = var_48_1
                        break
                    
                    esi_4 += 1
                    
                    if (esi_4 s>= arg4)
                        edx = var_48_1
                        result = result_1
                        ecx_2 = var_40_1
                        goto label_4dbaf3
            
            edi_3 = var_3c_1
        else
            int128_t var_34
            int128_t* i = &var_34
            var_34 = xmm0_1
            int128_t* i_1 = &var_34
            int128_t var_24_1 = xmm1_1
            
            do
                int32_t ecx_3 = *i
                int32_t ecx_4 = *(i + 4)
                
                if ((*edx & ecx_4) != 0)
                    void* var_6c
                    void* var_60
                    uint32_t eax_2 = sub_4daf40(&var_60, &var_6c)
                    int32_t esi_2 = 0
                    
                    if (eax_2 s<= 0)
                    label_4dba69:
                        edx = var_48_1
                        *edx &= not.d(ecx_4)
                    else
                        while (true)
                            if (sub_4db7a0(*(var_60 + (esi_2 << 2)), ecx_3) != 0)
                                edx = var_48_1
                                break
                            
                            esi_2 += 1
                            
                            if (esi_2 s>= eax_2)
                                goto label_4dba69
                    
                    i = i_1
                
                i += 8
                i_1 = i
            while (i != &var_14)
            
            result = result_1
            ecx_2 = var_40_1
            esi_3 = var_44_1
            edi_3 = var_3c_1
            xmm1_1 = data_891510
            
            if (*edx == 0)
                int128_t xmm0_2 = *(ecx_2 - 0x10)
                var_4c -= 1
                ecx_2 -= 0x10
                result -= 1
                var_40_1 = ecx_2
                *esi_3 = xmm0_2
                edi_3 -= 0x10
                result_1 = result
                esi_3 -= 0x10
                *ecx_2 = 0
                edx -= 0x10
        
        var_4c += 1
        xmm0_1 = data_891400
        esi_1 = &esi_3[4]
        var_3c_1 = edi_3 + 0x10
        edx = &edx[4]
        var_44_1 = esi_1
        var_48_1 = edx
    while (var_4c s< result)

CookieCheckFunction(result)
return result
