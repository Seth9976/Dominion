// 函数: sub_73ec10
// 地址: 0x73ec10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
int32_t* ecx = data_147df90
float var_b8

if (ecx[1] != 0x20)
    sub_63b870(__security_cookie ^ &var_b8, &data_801800, "ptr->assetType == ASSET_TYPE_FAB", 
        "C:\x\ax2017\Engine\FabDef.cpp", 0xeb, "FabDefGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ecx_1 = sub_5af880(ecx)
uint32_t i = 0
int32_t var_64 = ecx_1
uint32_t i_1 = 0

if (data_147ef94 s> 0)
    float xmm0_1 = arg1[2]
    void* edi_1 = &data_15093f8
    float xmm7_1 = *arg1
    float xmm1_1 = arg1[1]
    float xmm6_1 = arg1[3]
    float xmm3_2 = xmm0_1 * xmm0_1
    float xmm0_3 = xmm7_1 * xmm1_1
    float xmm4_2 = xmm1_1 * xmm1_1
    float xmm1_3 = xmm6_1 * xmm0_1
    float xmm5_2 = xmm6_1 * xmm6_1
    float xmm2_2 = xmm7_1 * xmm7_1
    float xmm5_3 = xmm5_2 - xmm2_2
    float xmm6_3 = xmm7_1 * xmm0_1
    float xmm1_9 = xmm6_1 * xmm1_1
    float xmm6_8 = xmm6_1 * xmm7_1
    float xmm0_8 = xmm1_1 * xmm0_1
    
    do
        float xmm5_7 = *(edi_1 - 8) f- data_1512404.d
        float xmm6_11 = *(edi_1 - 4) f- data_1512404:4
        float xmm4_4 = *edi_1 f- data_151240c
        void* esi_2 = (&data_147df94)[i] * 0xe0 + *ecx_1
        float xmm3_8 = (xmm5_7 + xmm5_7) * (xmm1_3 + xmm0_3) + xmm6_11 * (xmm4_2 + xmm5_3 - xmm3_2)
            + (xmm4_4 + xmm4_4) * (xmm0_8 - xmm6_8) f+ data_1512404:4
        float xmm1_15 = (xmm6_11 + xmm6_11) * (xmm6_8 + xmm0_8)
            + (xmm5_7 + xmm5_7) * (xmm6_3 - xmm1_9)
            + xmm4_4 * (xmm5_3 - xmm4_2 + xmm3_2) f+ data_151240c
        *(esi_2 + 0x10) = (xmm6_11 + xmm6_11) * (xmm0_3 - xmm1_3)
            + (xmm2_2 + xmm5_2 - xmm4_2 - xmm3_2) * xmm5_7
            + (xmm4_4 + xmm4_4) * (xmm6_3 + xmm1_9) f+ data_1512404.d
        *(esi_2 + 0x14) = xmm3_8
        *(esi_2 + 0x18) = xmm1_15
        int64_t xmm0_21 = *(edi_1 + 4)
        float eax_3 = *(edi_1 + 0xc)
        float xmm0_26 = (eax_3 + eax_3) * 3.14159274f * 0.00277777785f * 0.5f
        var_b8 = xmm0_26
        float xmm0_27 = sub_4ae0f0(ebp, xmm0_26)
        float xmm0_29 = sub_4ae0d0(ebp, var_b8)
        float xmm0_30 = xmm0_21.d
        float xmm0_34 = (xmm0_30 + xmm0_30) * 3.14159274f * 0.00277777785f * 0.5f
        var_b8 = xmm0_34
        float xmm0_35 = sub_4ae0f0(ebp, xmm0_34)
        float xmm0_37 = sub_4ae0d0(ebp, var_b8)
        float xmm0_38 = xmm0_21:4.d
        float xmm0_42 = (xmm0_38 + xmm0_38) * 3.14159274f * 0.00277777785f * 0.5f
        var_b8 = xmm0_42
        float xmm0_43 = sub_4ae0f0(ebp, xmm0_42)
        float xmm0_45 = sub_4ae0d0(ebp, var_b8)
        float xmm2_8 = xmm0_35 * xmm0_27
        float xmm1_17 = xmm0_37 * xmm0_29
        float xmm7_5 = xmm0_35 * xmm0_29
        float xmm5_9 = xmm0_37 * xmm0_27
        var_b8 = xmm0_45 * xmm1_17
        var_b8 = var_b8 + xmm0_43 * xmm2_8
        float xmm6_21 = xmm0_45 * xmm7_5 - xmm0_43 * xmm5_9
        float xmm1_19 = xmm0_45 * xmm5_9
        float xmm5_10 = var_b8
        float xmm4_9 = xmm0_43 * xmm1_17 + xmm0_45 * xmm2_8
        float xmm7_7 = xmm1_19 - xmm0_43 * xmm7_5
        float var_ac_2 = xmm1_19
        float xmm3_15 = xmm5_10 * xmm6_1 - xmm6_21 * xmm7_1 - xmm4_9 * xmm1_1 - xmm7_7 * xmm0_1
        float xmm1_24 = xmm6_21 * xmm6_1 + xmm5_10 * xmm7_1 + xmm7_7 * xmm1_1 - xmm4_9 * xmm0_1
        float xmm2_13 = xmm4_9 * xmm6_1 + xmm5_10 * xmm1_1 + xmm6_21 * xmm0_1 - xmm7_7 * xmm7_1
        float xmm7_11 = xmm7_7 * xmm6_1 + xmm5_10 * xmm0_1 + xmm4_9 * xmm7_1 - xmm6_21 * xmm1_1
        int32_t edx_1
        float xmm0_76
        edx_1, xmm0_76 = sub_4ac580(ebp, 
            xmm1_24 * xmm1_24 + xmm3_15 * xmm3_15 + xmm2_13 * xmm2_13 + xmm7_11 * xmm7_11)
        float var_54_1 = xmm3_15 / xmm0_76
        float var_5c_1 = xmm2_13 / xmm0_76
        float var_58_1 = xmm7_11 / xmm0_76
        int128_t var_30 = (xmm1_24 / xmm0_76).o
        float var_50[0x5]
        int64_t* eax_5 = sub_4eb460(&var_50, edx_1, &var_30, esi_2, edi_1, &var_50)
        int16_t top = top - 2
        unimplemented  {call 0x4eb460}
        ecx_1 = var_64
        edi_1 += 0x24
        int32_t eax_6 = eax_5[1].d
        *(esi_2 + 0x1c) = *eax_5
        *(esi_2 + 0x24) = eax_6
        i = i_1 + 1
        i_1 = i
    while (i s< data_147ef94)

CookieCheckFunction(i)
return i
