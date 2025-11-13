// 函数: sub_5dad80
// 地址: 0x5dad80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t var_14 = eax_1
int32_t* ecx = data_be220c

if (ecx != 0)
    void* eax_3 = data_cf65b8
    uint128_t xmm1_1 = zx.o(*(eax_3 + 0x18))
    int32_t xmm2_2 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
    float var_60 = 0f
    int32_t var_5c_1 = 0
    int32_t xmm1_2 = _mm_cvtepi32_ps(xmm1_1)
    int32_t var_58_1 = xmm2_2
    int32_t var_54_1 = xmm1_2
    int128_t xmm0_1 = var_60.o
    var_60 = 0f
    int32_t var_5c_2 = 0
    int32_t var_58_2 = xmm2_2
    int32_t var_54_2 = xmm1_2
    int128_t var_30 = xmm0_1
    var_60.o = var_60.o
    sub_654ce0(&var_30, &data_be2250, "taptip", ecx, &var_30, &var_60, 0x2e7e, nullptr, 0)
    void var_70
    int128_t* eax_6 = sub_5d8d40(&var_70, &data_be2218, data_be220c, &var_70)
    int32_t ecx_4 = data_be2250
    int128_t var_40 = *eax_6
    var_30 = eax_6[1]
    sub_666060(ecx_4, &var_40)
    *(sub_64e7a0(data_be2250) + 0x18bc) = sub_5dab40
    int32_t esi_1 = data_be2248
    
    if (esi_1 != 0)
        uint32_t eax_8 = sub_64e7a0(data_be2250)
        sub_665db0(eax_8, esi_1, eax_8, 0x3f800000, 0xffffffff, 0)
    
    int32_t esi_2 = data_be224c
    
    if (esi_2 != 0)
        uint32_t eax_9 = sub_64e7a0(data_be2250)
        sub_665db0(eax_9, esi_2, eax_9, 0x3f800000, 0xffffffff, 0)
    
    sub_5d8950(data_be2250, data_be2210)
    int32_t eax_10 = data_b604e0
    
    if (eax_10 == 0xffffffff)
        eax_10 = 0
    
    if (data_be2210 != eax_10)
        uint32_t eax_11 = sub_64e7a0(data_be2250)
        sub_665db0(eax_11, &data_be3160, eax_11, 0x3f800000, 0xffffffff, 0)
    
    if (data_be2254 != 0)
        uint32_t eax_12 = sub_64e7a0(data_be2250)
        sub_665db0(eax_12, &data_be316c, eax_12, 0x3f800000, 0xffffffff, 0)
        
        if (data_b7d418 != 0)
            void* eax_13 = sub_61cdb0(0x16)
            int32_t* ecx_15 = data_be2250
            void* var_44 = eax_13
            sub_5e43d0(&var_44, 1, ecx_15, &var_44)
    
    sub_4d3b70(data_be2250)
    eax_1 = sub_65d6e0(data_be2250, data_8c4634)
else if (data_be2250 != ecx)
    int32_t* eax_2 = sub_64e810(&data_be2250)
    CookieCheckFunction(eax_2)
    return eax_2

CookieCheckFunction(eax_1)
return eax_1
