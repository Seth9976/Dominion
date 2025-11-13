// 函数: sub_73e8e0
// 地址: 0x73e8e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint32_t result = __security_cookie ^ &__saved_ebp
uint32_t result_1 = result

if (data_147ef94 != 0)
    int32_t* ecx_1 = data_147df90
    
    if (ecx_1[1] != 0x20)
        sub_63b870(result, &data_801800, "ptr->assetType == ASSET_TYPE_FAB", 
            "C:\x\ax2017\Engine\FabDef.cpp", 0xeb, "FabDefGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t* eax_1
    int32_t edx_1
    eax_1, edx_1 = sub_5af880(ecx_1)
    void var_b8
    int64_t* eax_3
    int32_t edx_2
    eax_3, edx_2 = sub_73e4b0(&var_b8, edx_1, data_147df94 * 0xe0 + *eax_1, &var_b8)
    uint128_t xmm1_1 = *eax_3
    int128_t xmm0_1 = *(eax_3 + 0x10)
    int32_t var_30_1 = eax_3[4].d
    uint128_t var_50 = xmm1_1
    data_1512404 = xmm1_1
    int128_t var_40_1 = xmm0_1
    data_151240c = _mm_bsrli_si128(xmm1_1, 8)
    float var_60[0x4]
    float xmm3_1[0x4] = *sub_4eb2f0(&var_60, edx_2, &var_50:0xc, &var_60)
    float var_70_1 = xmm3_1[0]
    float xmm1_4[0x4] = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xff)
    float xmm2_2 = xmm3_1[0] f* xmm3_1
    float xmm0_3 = xmm1_4[0] f* xmm1_4
    var_60 = xmm1_4
    float xmm0_5 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0x55)
    float xmm0_7 = _mm_shuffle_ps(xmm3_1, xmm3_1, 0xaa)
    float xmm0_10 = sub_4ac580(&__saved_ebp, xmm0_7 * xmm0_7 + xmm2_2 + xmm0_3 + xmm0_5 * xmm0_5)
    int32_t edx_3 = 1
    int32_t esi_1 = data_147ef94
    data_15123f0 = 0x3f800000
    data_15123f4 = var_70_1 / xmm0_10
    float xmm2_5 = data_1512404:4
    float xmm3_2 = data_1512404.d
    data_15123f8 = xmm0_5 / xmm0_10
    data_15123fc = xmm0_7 / xmm0_10
    data_1512400 = var_60.d f/ xmm0_10
    float xmm1_16 = data_151240c
    
    if (esi_1 s> 1)
        do
            int32_t ecx_5 = (&data_147df94)[edx_3] * 0xe0
            edx_3 += 1
            int32_t eax_7 = *eax_1
            xmm3_2 = xmm3_2 f+ *(ecx_5 + eax_7 + 0x10)
            data_1512404.d = xmm3_2
            xmm2_5 = xmm2_5 f+ *(ecx_5 + eax_7 + 0x14)
            data_1512404:4 = xmm2_5
            xmm1_16 = xmm1_16 f+ *(ecx_5 + eax_7 + 0x18)
            data_151240c = xmm1_16
        while (edx_3 s< esi_1)
    
    result = data_1512424
    
    if (result == 2 || result == 3 || result == 4)
        data_15123f4.o = data_800248
    
    float xmm4_1 = 1f / _mm_cvtepi32_ps(zx.o(esi_1))
    data_1512404.d = xmm4_1 * xmm3_2
    data_1512404:4 = xmm4_1 * xmm2_5
    data_151240c = xmm4_1 * xmm1_16

CookieCheckFunction(result)
return result
