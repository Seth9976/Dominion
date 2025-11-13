// 函数: sub_4d9160
// 地址: 0x4d9160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ebx = arg1
int32_t i = 0
int32_t var_38 = ebx
*(ebx + 0x7450) = 0
data_cc8d68 = ebx + 0x4290
int32_t i_1 = 0

if (*(ebx + 0x56d8) s> 0)
    int32_t* esi_1 = ebx + 0x42d8
    int32_t* var_4c = ebx + 0x42f8
    
    do
        int32_t eax_4
        uint32_t edx_1
        eax_4, edx_1 = _Xtime_get_ticks()
        int32_t* ecx = &esi_1[6]
        int32_t ecx_1 = *ecx
        int32_t ecx_3 = ecx[1]
        uint32_t eax_5
        int32_t edx_2
        eax_5, edx_2 = __alldiv(eax_4, edx_1, 0x989680, 0)
        char eax_12
        
        if (ecx_3 u>= edx_2 && (ecx_3 u> edx_2 || ecx_1 u>= eax_5))
            int32_t var_30_1 = *(ebx + 0x4250)
            int32_t var_2c_1 = *esi_1
            int32_t var_28_1 = esi_1[1]
            int32_t var_24_1 = esi_1[2]
            int32_t var_20_1 = esi_1[4]
            int32_t var_1c_1 = esi_1[5]
            int32_t var_18_1 = ecx_1
            int32_t var_14_1 = ecx_3
            eax_12 = sub_6a7200(var_4c, 
                "MFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAEQj3MqmxxzVMQdAQf/S/Wmta0aqcKyHpoPNJL8X4YKkQVW4dAMQv1rvkwOvZd3ck4Yyrrzl//Xdruzu7o6dLnBA==")
        
        if (ecx_3 u< edx_2 || (ecx_3 u<= edx_2 && ecx_1 u< eax_5) || eax_12 == 0)
            *(ebx + 0x56d8) -= 1
            int32_t* edi = esi_1
            int32_t eax_13 = *(ebx + 0x56d8)
            esi_1 -= 0x28
            int32_t i_2 = i_1 - 1
            var_4c -= 0x28
            int32_t* edx_4 = ebx + ((eax_13 * 5 + 0x85b) << 3)
            *edi = *edx_4
            edi[1] = edx_4[1]
            edi[2] = edx_4[2]
            edi[3] = edx_4[3]
            int32_t ecx_5 = edx_4[5]
            edi[4] = edx_4[4]
            edi[5] = ecx_5
            int32_t ecx_6 = edx_4[7]
            *ecx = edx_4[6]
            ecx[1] = ecx_6
            sub_63d850(&edi[8], &edx_4[8])
            ebx = var_38
            i = i_2
        
        var_4c = &var_4c[0xa]
        i += 1
        esi_1 = &esi_1[0xa]
        i_1 = i
    while (i s< *(ebx + 0x56d8))

void* eax_24 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
char* result = *(eax_24 + 0x42c0)

if (result != 0)
    var_38 = 1
    char* result_1 = result
    result = sub_4da5d0(&var_38)
    
    if (result.b == 0)
        *(eax_24 + 0x42c0) = 0

CookieCheckFunction(result)
return result
