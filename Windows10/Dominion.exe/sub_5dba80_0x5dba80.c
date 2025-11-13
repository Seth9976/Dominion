// 函数: sub_5dba80
// 地址: 0x5dba80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void var_5c
int32_t edx
int128_t* eax_3 = sub_5d77e0(&var_5c, edx, arg1, &var_5c)
int128_t var_28 = *eax_3
float eax_4 = arg1[0x93]
int128_t var_18 = eax_3[1]

if (eax_4 != 0)
    uint32_t ecx_5 = zx.d(eax_4.w)
    
    if (ecx_5 u< data_b809e4)
        int32_t* ecx_7 = ecx_5 * 0x1c30 + data_b809e0
        
        if (ecx_7[0x70a] == eax_4 && ecx_7 != 0)
            int32_t eax_10 = ecx_7[0xb] - 3
            uint32_t eax_12
            
            switch (eax_10)
                case 0
                    uint32_t eax_13 = sub_5e7820(ecx_7, &arg1[0x6e8])
                    CookieCheckFunction(eax_13)
                    return eax_13
                case 1, 3
                    *arg1 = 0x2ece
                    sub_5dbca0(&var_28, &arg1[0x6e8], ecx_7, &var_28, 0x2ece)
                    eax_12 = sub_64e7a0(arg1[0x6e8])
                    sub_665db0(eax_12, &data_be31cc, eax_12, 0x3f800000, 0xffffffff, 0)
                case 5
                    *arg1 = 0x2ece
                    sub_5db9a0(&var_28, &arg1[0x6e8], ecx_7, &var_28, 0x2ece)
                    eax_12 = sub_64e7a0(arg1[0x6e8])
                    sub_665db0(eax_12, &data_be31cc, eax_12, 0x3f800000, 0xffffffff, 0)
                default
                    sub_63b870(eax_10, &data_801800, "Halt", 
                        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x3730, 
                        "DomDeclareIconPlaceholder")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
            
            eax_4 = sub_65d6e0(arg1[0x6e8], data_8c4634)
else
    float var_3c = eax_4
    float var_38_1 = eax_4
    void* eax_5 = data_cf65b8
    uint128_t xmm1_1 = zx.o(*(eax_5 + 0x18))
    int32_t xmm2_2 = _mm_cvtepi32_ps(zx.o(*(eax_5 + 0x14)))
    *arg1 = 0x2ece
    int32_t* var_7c_1 = data_171e874
    int32_t xmm1_2 = _mm_cvtepi32_ps(xmm1_1)
    int32_t var_34_1 = xmm2_2
    int32_t var_30_1 = xmm1_2
    int128_t xmm0_2 = var_3c.o
    var_3c = 0f
    int32_t var_38_2 = 0
    int32_t var_34_2 = xmm2_2
    int32_t var_30_2 = xmm1_2
    int128_t var_4c = xmm0_2
    var_3c.o = var_3c.o
    sub_654ce0(&var_4c, &arg1[0x6e8], "hint", var_7c_1, &var_4c, &var_3c, 0x2ece, nullptr, 0)
    sub_666060(arg1[0x6e8], &var_28)
    uint32_t eax_7 = sub_64e7a0(arg1[0x6e8])
    *(eax_7 + 0x18bc) = sub_5db060
    sub_632820(eax_7, 0x24, arg1[0x6e8], 0, arg1[0x94])
    uint32_t eax_8 = sub_64e7a0(arg1[0x6e8])
    sub_665db0(eax_8, &data_be31cc, eax_8, 0x3f800000, 0xffffffff, 0)
    eax_4 = sub_65d6e0(arg1[0x6e8], data_8c4634)

CookieCheckFunction(eax_4)
return eax_4
