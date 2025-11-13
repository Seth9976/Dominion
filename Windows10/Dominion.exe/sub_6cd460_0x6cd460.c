// 函数: sub_6cd460
// 地址: 0x6cd460
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int128_t var_140
int64_t var_130
float eax_3
int128_t xmm0_3

if (*(arg2 + 0x480) s<= *(arg2 + 0x5c))
    eax_3 = arg3[0xc]
    var_140 = *(arg3 + 0x10)
    var_130 = (*(arg3 + 0x20)).q
    int128_t var_100_1 = *(arg3 + 0x10)
    xmm0_3 = *(arg3 + 0x20)
else
    eax_3 = *(arg2 + 0x4a4)
    var_140 = *(arg2 + 0x484)
    var_130 = (*(arg2 + 0x494)).q
    int128_t var_100 = *(arg2 + 0x484)
    xmm0_3 = *(arg2 + 0x494)

float var_110
float* eax_5 = sub_6cd2a0(&var_110, arg2, arg3, &var_110)
float eax_6 = eax_5[2]
int64_t var_84 = *eax_5
float xmm0_9 = xmm0_3:8.d f* var_84.d
float var_14c = xmm0_3:0xc.d f* var_84:4.d
float xmm0_13 = eax_3 * eax_6
float xmm0_14 = var_130:4.d
float xmm0_18 = (xmm0_14 + xmm0_14) * 3.14159274f * 0.00277777785f * 0.5f
float xmm0_19 = sub_4ae0f0(ebp, xmm0_18)
float xmm0_21 = sub_4ae0d0(ebp, xmm0_18)
float xmm0_22 = var_140:0xc.d
float xmm0_26 = (xmm0_22 + xmm0_22) * 3.14159274f * 0.00277777785f * 0.5f
float xmm0_27 = sub_4ae0f0(ebp, xmm0_26)
float xmm0_29 = sub_4ae0d0(ebp, xmm0_26)
float xmm0_30 = var_130.d
float xmm0_34 = (xmm0_30 + xmm0_30) * 3.14159274f * 0.00277777785f * 0.5f
float xmm0_35 = sub_4ae0f0(ebp, xmm0_34)
float xmm0_37 = sub_4ae0d0(ebp, xmm0_34)
float xmm1_1 = xmm0_29 * xmm0_21
float xmm2_1 = xmm0_27 * xmm0_19
float xmm7_1 = xmm0_27 * xmm0_21
float xmm6_1 = xmm0_29 * xmm0_19
float xmm5_1 = xmm0_37 * xmm1_1 + xmm0_35 * xmm2_1
float var_104 = xmm5_1
float xmm5_4 = xmm0_37 * xmm7_1 - xmm0_35 * xmm6_1
var_110 = xmm5_4
int32_t eax_7 = *arg3
float xmm5_7 = xmm0_35 * xmm1_1 + xmm0_37 * xmm2_1
float xmm3_2 = xmm0_37 * xmm6_1 - xmm0_35 * xmm7_1
float var_10c = xmm5_7
float var_108 = xmm3_2
int128_t xmm1_2 = var_110.o
int32_t eax_10
char const* const ecx_1

if (eax_7 == 1 || eax_7 == 2)
    eax_10 = arg3[0x12]
    int32_t edx = data_cf65e0:0xc
    
    if (eax_10 u<= 3)
        int64_t var_1b4
        float var_60[0x4]
        void* eax_19
        int32_t* edx_3
        float* edi
        
        switch (eax_10)
            case 1
                float xmm6_10 = data_cf65e0.d
                int128_t xmm2_11 = data_cf65d0:4
                float xmm4_4 = data_cf65d0:8
                float xmm7_8 = data_cf65d0:0xc
                void var_44
                void* var_184_2 = &var_44
                float esi_1 = var_140:8.d
                float xmm5_12 = xmm7_8 * xmm4_4
                float xmm3_16 = xmm7_8 * xmm7_8
                float xmm0_85 = xmm2_11.d * xmm6_10
                var_60 = xmm2_11.d * xmm7_8 + xmm6_10 * xmm4_4
                float xmm1_18 = xmm5_12 - xmm0_85
                float xmm0_87 = xmm4_4 * xmm4_4
                var_110.o = xmm2_11
                int32_t xmm0_88 = var_60.d
                float xmm2_12 = xmm2_11 f* var_110
                float xmm1_20 = xmm6_10 * xmm6_10
                var_60 = xmm0_88 f+ xmm0_88
                float xmm4_6 = xmm0_85 + xmm5_12
                var_110.o = (var_110.o).d * xmm4_4
                float xmm6_12 = (var_110.o).d f- xmm7_8 * xmm6_10
                float xmm1_21[0x4] = var_60
                int64_t xmm6_14 =
                    _mm_unpacklo_ps(xmm6_12 + xmm6_12, xmm0_87 - xmm3_16 + xmm1_20 - xmm2_12)
                int64_t xmm1_22 = _mm_unpacklo_ps(xmm1_21, xmm1_18 + xmm1_18)
                int64_t xmm0_103 = data_cf65e0:4.q
                var_1b4 = var_140.q
                void var_50
                sub_649e10(&var_1b4, &var_50, 0, var_1b4, esi_1, xmm0_103, edx, xmm1_22, 
                    xmm3_16 - xmm0_87 - xmm2_12 + xmm1_20, xmm6_14, xmm4_6 + xmm4_6, var_184_2)
                edi = arg4
                edx_3 = &var_84
                int32_t var_7c_1 = 0xbf800000
                *edi = var_140.q
                void* var_184_3 = &var_44
                edi[2] = esi_1
                void* var_188_2 = &var_50
                void var_b8
                eax_19 = &var_b8
                var_84.d = 0x80000000
                var_84:4.d = 0x80000000
                void* var_18c_1 = &var_b8
            label_6cdb8a:
                *(edi + 0xc) = *sub_4ac840(eax_19, edx_3, 0x7fef20)
                *(edi + 0x1c) = xmm0_9.q
                edi[9] = xmm0_13
                CookieCheckFunction(edi)
                return edi
            case 2
                void var_20
                void* var_184_6 = &var_20
                float esi_3 = var_140:8.d
                int32_t var_188_5 = 0
                int64_t xmm0_118 = data_cf65e0:4.q
                int32_t var_194_2 = 0x3f800000
                var_1b4 = var_140.q
                sub_649e10(&var_1b4, &var_60, 1, var_1b4, esi_3, xmm0_118, edx, 0, var_194_2, 0, 
                    var_188_5, var_184_6)
                edi = arg4
                int32_t var_6c
                edx_3 = &var_6c
                int32_t var_64_2 = 0xbf800000
                *edi = var_140.q
                void* var_184_7 = &var_20
                edi[2] = esi_3
                int128_t* var_188_6 = &var_60
                void var_98
                eax_19 = &var_98
                var_6c = 0x80000000
                int32_t var_68_1 = 0x80000000
                void* var_18c_3 = &var_98
                goto label_6cdb8a
            case 3
                float xmm6_15 = data_cf65d0:4
                float xmm3_17 = data_cf65d0:0xc
                float xmm1_23 = data_cf65e0.d
                float xmm2_13 = data_cf65d0:8
                void var_38
                void* var_184_4 = &var_38
                float esi_2 = var_140:8.d
                float xmm5_15 = xmm3_17 * xmm1_23 + xmm6_15 * xmm2_13
                float xmm4_10 = xmm6_15 * xmm3_17 - xmm1_23 * xmm2_13
                int64_t xmm6_20 = _mm_unpacklo_ps(
                    xmm6_15 * xmm6_15 + xmm1_23 * xmm1_23 - xmm3_17 * xmm3_17 - xmm2_13 * xmm2_13, 
                    xmm5_15 + xmm5_15)
                int64_t xmm0_113 = data_cf65e0:4.q
                int32_t var_194_1 = 0x3f800000
                var_1b4 = var_140.q
                void var_2c
                sub_649e10(&var_1b4, &var_2c, 3, var_1b4, esi_2, xmm0_113, edx, 0, var_194_1, 
                    xmm6_20, xmm4_10 + xmm4_10, var_184_4)
                edi = arg4
                int32_t var_78
                edx_3 = &var_78
                int32_t var_70_2 = 0xbf800000
                *edi = var_140.q
                void* var_184_5 = &var_38
                edi[2] = esi_2
                void* var_188_4 = &var_2c
                void var_a8
                eax_19 = &var_a8
                var_78 = 0x80000000
                int32_t var_74_1 = 0x80000000
                void* var_18c_2 = &var_a8
                goto label_6cdb8a
        
        goto label_6cd95e
    
    char const* const var_184_8 = "ElBox"
    int32_t var_188_7 = 0x166
    char const* const var_18c_4 = "C:\x\ax2017\Engine\FabDef.cpp"
    ecx_1 = "Halt"
else
    eax_10 = eax_7 - 3
    
    if (eax_7 != 3)
    label_6cd95e:
        *arg4 = var_140.q
        arg4[2] = var_140:8.d
        *(arg4 + 0x1c) = xmm0_9.q
        arg4[9] = xmm0_13
        *(arg4 + 0xc) = xmm1_2
        CookieCheckFunction(arg4)
        return arg4
    
    int32_t* ecx = arg3[0x18]
    
    if (ecx[1] == 2)
        void* eax_12 = *sub_5af880(ecx)
        float xmm3_4 = xmm5_4 * xmm5_4
        float xmm0_48 = (*(eax_12 + 0x4c) f+ *(eax_12 + 0x40)) * 0.5f
        float xmm2_4 = (*(eax_12 + 0x50) f+ *(eax_12 + 0x44)) * 0.5f
        float xmm4_3 = xmm5_4 * xmm5_7
        float xmm0_51 = (*(eax_12 + 0x54) f+ *(eax_12 + 0x48)) * 0.5f
        float xmm1_4 = xmm5_1 * xmm5_1
        float xmm0_53 = xmm5_7 * xmm5_7
        float xmm6_4 = xmm5_1 * xmm3_2
        float xmm0_55 = xmm3_2 * xmm3_2
        float xmm0_57 = xmm5_4 * xmm3_2
        float xmm5_10 = xmm5_1 * xmm5_7
        float xmm7_4 = xmm1_4 - xmm3_4
        float xmm0_59 = xmm3_2 * xmm5_7
        float xmm0_61 = xmm5_1 * xmm5_4
        *arg4 = (xmm2_4 + xmm2_4) * (xmm4_3 - xmm6_4)
            + (xmm3_4 + xmm1_4 - xmm0_53 - xmm0_55) * xmm0_48
            + (xmm5_10 + xmm0_57) * (xmm0_51 + xmm0_51) f+ var_140.d
        arg4[1] = (xmm6_4 + xmm4_3) * (xmm0_48 + xmm0_48) + (xmm0_53 + xmm7_4 - xmm0_55) * xmm2_4
            + (xmm0_59 - xmm0_61) * (xmm0_51 + xmm0_51) f+ var_140:4.d
        arg4[2] = (xmm0_57 - xmm5_10) * (xmm0_48 + xmm0_48)
            + (xmm0_59 + xmm0_61) * (xmm2_4 + xmm2_4)
            + (xmm7_4 - xmm0_53 + xmm0_55) * xmm0_51 f+ var_140:8.d
        *(arg4 + 0x1c) = xmm0_9.q
        arg4[9] = xmm0_13
        *(arg4 + 0xc) = xmm1_2
        CookieCheckFunction(arg4)
        return arg4
    
    char const* const var_184_1 = "StructureGetDef"
    int32_t var_188 = 0x559
    char const* const var_18c = "C:\x\ax2017\Engine\Structure.cpp"
    ecx_1 = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"

sub_63b870(eax_10, &data_801800, ecx_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
