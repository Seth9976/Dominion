// 函数: sub_6d0cb0
// 地址: 0x6d0cb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
uint32_t eax_3 = sub_6d1370(arg1)
int32_t* ecx = *eax_3

if (ecx[1] != 0x20)
    sub_63b870(eax_3, &data_801800, "ptr->assetType == ASSET_TYPE_FAB", 
        "C:\x\ax2017\Engine\FabDef.cpp", 0xeb, "FabDefGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* eax_4 = sub_5af880(ecx)
uint32_t result = 0xffffffff
uint32_t i = 0
int32_t* var_74 = eax_4
uint32_t result_1 = 0xffffffff
int32_t var_5c = 0x461c4000

if (eax_4[2] s> 0)
    int32_t edi_1 = 0
    
    do
        if (*(edi_1 + *eax_4 + 0x39) == 0)
            void var_c8
            int128_t* eax_7 = sub_6d0bc0(&var_c8, i, arg1, &var_c8)
            float xmm5_1[0x4] = *eax_7
            float xmm7_1[0x4] = eax_7[1]
            int64_t xmm0_1 = eax_7[2].q
            float xmm1_1 = arg2[1]
            float xmm2_1 = xmm7_1[0]
            float xmm6_1 = xmm7_1[0]
            float xmm0_3 = *arg2 f- xmm5_1
            float xmm4_2 = _mm_shuffle_ps(xmm7_1, xmm7_1, 0x55)
            float xmm2_2 = xmm2_1 f* xmm7_1
            float var_3c[0x4] = xmm5_1
            float xmm1_2 = xmm1_1 - _mm_shuffle_ps(xmm5_1, xmm5_1, 0x55)
            float xmm0_7 = _mm_shuffle_ps(xmm5_1, xmm5_1, 0xaa)
            float xmm5_2 = _mm_shuffle_ps(xmm5_1, xmm5_1, 0xff)
            float xmm2_4 = xmm4_2 * xmm4_2
            float xmm1_4 = arg2[2] - xmm0_7
            float xmm6_2 = xmm6_1 * xmm5_2
            float xmm0_9 = _mm_shuffle_ps(xmm7_1, xmm7_1, 0xaa)
            float xmm3_2 = xmm0_9 * xmm0_9
            float xmm4_3 = xmm4_2 f* eax_7[1].d
            float xmm1_6 = xmm5_2 * xmm5_2
            float xmm2_6 = xmm4_2 * xmm0_9
            float xmm6_4 = xmm4_2 * xmm5_2
            float xmm4_5 = xmm5_2 * xmm0_9
            float xmm5_4 = xmm7_1[0] * xmm0_9
            float var_2c_1[0x4] = xmm7_1
            float xmm7_3 = xmm3_2 - xmm1_6
            float xmm4_6 = 1f f/ data_bf21e8.d
            float xmm6_6 = (xmm6_2 + xmm2_6) * (xmm1_2 + xmm1_2)
            float var_44_2 = xmm6_6
            float xmm0_20 = (xmm6_6 + (xmm1_6 + xmm3_2 - xmm2_2 - xmm2_4) * xmm0_3
                + (xmm6_4 - xmm5_4) * (xmm1_4 + xmm1_4)) * xmm4_6
            float xmm0_33 = ((xmm6_2 - xmm2_6) * (xmm0_3 + xmm0_3)
                + (xmm7_3 + xmm2_2 - xmm2_4) * xmm1_2 + (xmm1_4 + xmm1_4) * (xmm4_5 + xmm4_3)) * xmm4_6
            float xmm1_25 = ((xmm0_3 + xmm0_3) * (xmm5_4 + xmm6_4)
                + (xmm1_2 + xmm1_2) * (xmm4_3 - xmm4_5) + (xmm7_3 - xmm2_2 + xmm2_4) * xmm1_4) * xmm4_6
            int32_t var_70
            
            if (xmm0_20 < 0f || xmm0_33 f< 0 || xmm1_25 f< 0 || *(eax_7 + 0x1c) * 0.5f < xmm0_20
                    || xmm0_1.d * 0.5f < xmm0_33 || not(xmm0_1:4.d * 0.5f >= xmm1_25))
                if (sub_6e8f30(&var_70, &var_3c, arg2, &var_70) == 0)
                    result = result_1
                else
                    int32_t xmm0_38 = var_70
                    
                    if (var_5c f<= xmm0_38)
                        result = result_1
                    else
                        result = i
                        var_5c = xmm0_38
                        result_1 = result
            else
                result = result_1
        
        eax_4 = var_74
        i += 1
        edi_1 += 0xe0
    while (i s< eax_4[2])

CookieCheckFunction(result)
return result
