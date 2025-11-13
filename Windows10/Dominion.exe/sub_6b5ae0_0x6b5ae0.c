// 函数: sub_6b5ae0
// 地址: 0x6b5ae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
char* var_14 = arg1

if (*(arg1 + 0x1c) == 0)
    return arg1

uint32_t eax_1 = sub_6398e0(arg1 + 0x48, arg1 + 0x58)
uint32_t var_30 = eax_1
uint32_t eax_2 = sub_6398e0(&var_14[0x4c], arg1 + 0x58)
uint32_t eax_4 = sub_6398e0(&var_14[0x50], &var_14[0x58])
char* const eax_5 = var_14
float xmm1_2 = *(eax_5 + 0x20) f+ *(eax_5 + 0xc)
int32_t* ecx_4 = *(eax_5 + 0x38)
float xmm2_3 = _mm_cvtepi32_ps(zx.o(*(eax_5 + 0x44))) f+ *(eax_5 + 0x24)
char const* const var_10c_1
int32_t var_108_1
char const* const var_104_1
char* ecx_5
void var_f8
int128_t var_b8

if (ecx_4 == 0)
    int32_t* ecx_49 = *(eax_5 + 0x34)
    
    if (ecx_49[1] == 0x12)
        void* eax_29 = sub_5af880(ecx_49)
        char* const ecx_50 = &data_801800
        int32_t var_74_6 = 0
        int32_t var_70_6 = 0
        int32_t var_68_6 = 0
        float var_6c_6 = xmm1_2 f+ *(eax_29 + 0x14)
        char* eax_31 = *arg2
        
        if (eax_31 != 0)
            ecx_50 = eax_31
        
        float var_5c_6 = xmm2_3 f+ *(eax_29 + 0x18)
        int32_t var_60_6 = 0
        int32_t xmm1_39 = *(var_14 + 0x28)
        int32_t var_64_6 = xmm1_39
        var_b8 = xmm1_39.o
        int128_t var_98_11
        __builtin_memcpy(&var_98_11, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x20)
        int128_t var_a8_11 = var_68_6.o
        float* eax_34 = sub_642ae0(&var_f8, &var_b8, &var_14[0x64], &var_f8)
        var_b8 = *eax_34
        int128_t var_a8_12 = *(eax_34 + 0x10)
        int128_t var_98_12 = *(eax_34 + 0x20)
        int128_t var_88_6 = *(eax_34 + 0x30)
        int32_t var_104_8 = *(var_14 + 0x30)
        int32_t var_108_7 = *(var_14 + 0x2c)
        float var_110
        float var_10c
        return sub_6b3d40(var_14, &var_b8, ecx_50, *(var_14 + 0x34), eax_1, eax_2, eax_4, 1, 
            var_110, var_10c)
    
    var_104_1 = "FontGetDef"
    var_108_1 = 0x2e6
    var_10c_1 = "C:\x\ax2017\Engine\AssetUtils.cpp"
    ecx_5 = "assetPtr->assetType == ASSET_TYPE_FONT"
else
    char* const edi_3 = eax_5
    float xmm3_1 = *(edi_3 + 0x40)
    char* edx_4 = *arg2
    xmm3_1 f- 0
    bool p_1 = unimplemented  {test ah, 0x44}
    eax_5 = &data_801800
    
    if (not(p_1))
        float xmm0_102 = *(edi_3 + 0x3c) f* *(edi_3 + 0x28)
        
        if (edx_4 != 0)
            eax_5 = edx_4
        
        if (ecx_4[1] == 0x25)
            void* eax_25 = sub_5af880(ecx_4)
            int32_t var_78_5 = 0x3f800000
            void* ecx_41 = *(eax_25 + 0x38)
            int32_t var_70_5 = 0
            int32_t var_68_5 = 0
            int32_t var_64_5 = 0x3f800000
            int32_t esi_6 = *(ecx_41 + 0x14)
            int32_t ecx_42 = *(ecx_41 + 4)
            int32_t var_60_5 = 0
            float xmm1_34 = xmm0_102 / _mm_cvtepi32_ps(zx.o(zx.d(*(esi_6 + ecx_42 + 0x13))
                + (zx.d(*(esi_6 + ecx_42 + 0x12)) << 8)))
            int32_t var_74_5 = 0x80000000
            float var_6c_5 = xmm1_2 + xmm1_34 f* *(eax_25 + 0x48)
            float var_5c_5 = sub_6419c0(ecx_4, xmm0_102) + xmm2_3 + xmm1_34 f* *(eax_25 + 0x4c)
            int128_t var_98_9
            __builtin_memcpy(&var_98_9, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            var_b8 = var_78_5.o
            int128_t var_a8_9 = var_68_5.o
            int128_t* eax_26 = sub_642e30(&var_f8)
            float xmm1_37 = *(edi_3 + 0x78)
            var_b8 = *eax_26
            int128_t var_a8_10 = eax_26[1]
            int128_t var_98_10 = eax_26[2]
            int128_t var_88_5 = eax_26[3]
            float xmm0_117 = *(edi_3 + 0x64)
            int32_t eax_27
            int32_t ecx_47
            float xmm0_120
            eax_27, ecx_47, xmm0_120 = sub_4ac580(ebp_1, xmm0_117 * xmm0_117 + xmm1_37 * xmm1_37)
            int32_t var_10c_10 = ecx_47
            return sub_641d40(eax_27, &var_b8, ecx_4, xmm0_102, eax_5, 
                xmm0_120 * 0.707106769f * xmm0_102, &var_30)
        
        var_104_1 = "TTFontGet"
        var_108_1 = 0x1ef
        var_10c_1 = "C:\x\ax2017\Engine\TTFont.cpp"
        ecx_5 = "ttf->assetType == ASSET_TYPE_TRUETYPE"
    else
        if (edx_4 != 0)
            eax_5 = edx_4
        
        float xmm0_6 = *(edi_3 + 0x28) f* *(edi_3 + 0x3c)
        
        if (ecx_4[1] == 0x25)
            void* eax_6 = sub_5af880(ecx_4)
            int32_t var_78_1 = 0x3f800000
            void* ecx_6 = *(eax_6 + 0x38)
            int32_t var_70_1 = 0
            int32_t var_68_1 = 0
            int32_t var_64_1 = 0x3f800000
            int32_t esi_2 = *(ecx_6 + 0x14)
            int32_t ecx_7 = *(ecx_6 + 4)
            int32_t var_60_1 = 0
            float xmm1_4 = xmm0_6 / _mm_cvtepi32_ps(zx.o((zx.d(*(esi_2 + ecx_7 + 0x12)) << 8)
                + zx.d(*(esi_2 + ecx_7 + 0x13))))
            float var_6c_1 = xmm1_2 + xmm3_1 + xmm1_4 f* *(eax_6 + 0x48)
            int32_t var_74_1 = 0x80000000
            float var_5c_1 = sub_6419c0(ecx_4, xmm0_6) + xmm2_3 + xmm3_1 + xmm1_4 f* *(eax_6 + 0x4c)
            int128_t var_98_1
            __builtin_memcpy(&var_98_1, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            var_b8 = var_78_1.o
            int128_t var_a8_1 = var_68_1.o
            int128_t* eax_7 = sub_642e30(&var_f8)
            float xmm1_7 = *(edi_3 + 0x78)
            var_b8 = *eax_7
            int128_t var_a8_2 = eax_7[1]
            int128_t var_98_2 = eax_7[2]
            int128_t var_88_1 = eax_7[3]
            float xmm0_21 = *(edi_3 + 0x64)
            int32_t eax_8
            int32_t ecx_11
            float xmm0_24
            eax_8, ecx_11, xmm0_24 = sub_4ac580(ebp_1, xmm0_21 * xmm0_21 + xmm1_7 * xmm1_7)
            int32_t var_10c_2 = ecx_11
            sub_641d40(eax_8, &var_b8, ecx_4, xmm0_6, eax_5, xmm0_24 * 0.707106769f * xmm0_6, 
                &var_30)
            float xmm0_28 = *(edi_3 + 0x40) ^ (data_8937c0.o).d
            char* eax_10 = *arg2
            char* const ecx_13 = &data_801800
            float xmm0_30 = *(edi_3 + 0x28) f* *(edi_3 + 0x3c)
            
            if (eax_10 != 0)
                ecx_13 = eax_10
            
            eax_5 = *(edi_3 + 0x38)
            
            if (*(eax_5 + 4) == 0x25)
                void* eax_11 = sub_5af880(eax_5)
                int32_t var_78_2 = 0x3f800000
                void* ecx_15 = *(eax_11 + 0x38)
                int32_t var_70_2 = 0
                int32_t var_68_2 = 0
                int32_t var_64_2 = 0x3f800000
                int32_t esi_3 = *(ecx_15 + 0x14)
                int32_t ecx_16 = *(ecx_15 + 4)
                int32_t var_60_2 = 0
                float xmm1_14 = xmm0_30 / _mm_cvtepi32_ps(zx.o((zx.d(*(esi_3 + ecx_16 + 0x12)) << 8)
                    + zx.d(*(esi_3 + ecx_16 + 0x13))))
                float var_6c_2 = xmm1_2 + xmm0_28 + xmm1_14 f* *(eax_11 + 0x48)
                int32_t var_74_2 = 0x80000000
                float var_5c_2 =
                    sub_6419c0(eax_5, xmm0_30) + xmm2_3 + xmm0_28 + xmm1_14 f* *(eax_11 + 0x4c)
                var_b8 = var_78_2.o
                int128_t var_a8_3 = var_68_2.o
                int128_t var_98_3
                __builtin_memcpy(&var_98_3, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                    0x20)
                int128_t* eax_12 = sub_642e30(&var_f8)
                float xmm1_17 = *(edi_3 + 0x78)
                var_b8 = *eax_12
                int128_t var_a8_4 = eax_12[1]
                int128_t var_98_4 = eax_12[2]
                int128_t var_88_2 = eax_12[3]
                float xmm0_45 = *(edi_3 + 0x64)
                int32_t eax_13
                int32_t ecx_20
                float xmm0_48
                eax_13, ecx_20, xmm0_48 = sub_4ac580(ebp_1, xmm0_45 * xmm0_45 + xmm1_17 * xmm1_17)
                int32_t var_10c_4 = ecx_20
                sub_641d40(eax_13, &var_b8, eax_5, xmm0_30, ecx_13, 
                    xmm0_48 * 0.707106769f * xmm0_30, &var_30)
                float xmm2_5 = xmm1_2 + (*(edi_3 + 0x40) ^ (data_8937c0.o).d)
                float xmm0_54 = xmm2_3 f+ *(edi_3 + 0x40)
                char* const ecx_22 = &data_801800
                float xmm0_56 = *(edi_3 + 0x28) f* *(edi_3 + 0x3c)
                char* eax_15 = *arg2
                
                if (eax_15 != 0)
                    ecx_22 = eax_15
                
                eax_5 = *(edi_3 + 0x38)
                
                if (*(eax_5 + 4) == 0x25)
                    void* eax_16 = sub_5af880(eax_5)
                    int32_t var_78_3 = 0x3f800000
                    void* ecx_24 = *(eax_16 + 0x38)
                    int32_t var_70_3 = 0
                    int32_t var_68_3 = 0
                    int32_t var_64_3 = 0x3f800000
                    int32_t esi_4 = *(ecx_24 + 0x14)
                    int32_t ecx_25 = *(ecx_24 + 4)
                    int32_t var_60_3 = 0
                    float xmm1_20 = xmm0_56 / _mm_cvtepi32_ps(zx.o((zx.d(*(esi_4 + ecx_25 + 0x12))
                        << 8) + zx.d(*(esi_4 + ecx_25 + 0x13))))
                    float var_6c_3 = xmm2_5 + xmm1_20 f* *(eax_16 + 0x48)
                    int32_t var_74_3 = 0x80000000
                    float var_5c_3 =
                        sub_6419c0(eax_5, xmm0_56) + xmm0_54 + xmm1_20 f* *(eax_16 + 0x4c)
                    var_b8 = var_78_3.o
                    int128_t var_a8_5 = var_68_3.o
                    int128_t var_98_5
                    __builtin_memcpy(&var_98_5, 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x"
                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                        0x20)
                    int128_t* eax_17 = sub_642e30(&var_f8)
                    float xmm1_23 = *(edi_3 + 0x78)
                    var_b8 = *eax_17
                    int128_t var_a8_6 = eax_17[1]
                    int128_t var_98_6 = eax_17[2]
                    int128_t var_88_3 = eax_17[3]
                    float xmm0_71 = *(edi_3 + 0x64)
                    int32_t eax_18
                    int32_t ecx_29
                    float xmm0_74
                    eax_18, ecx_29, xmm0_74 =
                        sub_4ac580(ebp_1, xmm0_71 * xmm0_71 + xmm1_23 * xmm1_23)
                    int32_t var_10c_6 = ecx_29
                    sub_641d40(eax_18, &var_b8, eax_5, xmm0_56, ecx_22, 
                        xmm0_74 * 0.707106769f * xmm0_56, &var_30)
                    float xmm2_7 = xmm1_2 f+ *(edi_3 + 0x40)
                    float xmm1_26 = xmm2_3 + (*(edi_3 + 0x40) ^ (data_8937c0.o).d)
                    char* const ecx_31 = &data_801800
                    float xmm0_80 = *(edi_3 + 0x28) f* *(edi_3 + 0x3c)
                    char* eax_20 = *arg2
                    
                    if (eax_20 != 0)
                        ecx_31 = eax_20
                    
                    eax_5 = *(edi_3 + 0x38)
                    
                    if (*(eax_5 + 4) == 0x25)
                        void* eax_21 = sub_5af880(eax_5)
                        int32_t var_78_4 = 0x3f800000
                        void* ecx_33 = *(eax_21 + 0x38)
                        int32_t var_70_4 = 0
                        int32_t var_68_4 = 0
                        int32_t var_64_4 = 0x3f800000
                        int32_t esi_5 = *(ecx_33 + 0x14)
                        int32_t ecx_34 = *(ecx_33 + 4)
                        int32_t var_60_4 = 0
                        float xmm1_28 = xmm0_80 / _mm_cvtepi32_ps(zx.o(
                            zx.d(*(esi_5 + ecx_34 + 0x13)) + (zx.d(*(esi_5 + ecx_34 + 0x12)) << 8)))
                        float var_6c_4 = xmm2_7 + xmm1_28 f* *(eax_21 + 0x48)
                        int32_t var_74_4 = 0x80000000
                        float var_5c_4 =
                            sub_6419c0(eax_5, xmm0_80) + xmm1_26 + xmm1_28 f* *(eax_21 + 0x4c)
                        var_b8 = var_78_4.o
                        int128_t var_a8_7 = var_68_4.o
                        int128_t var_98_7
                        __builtin_memcpy(&var_98_7, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x"
                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                            0x20)
                        int128_t* eax_22 = sub_642e30(&var_f8)
                        float xmm1_31 = *(edi_3 + 0x78)
                        var_b8 = *eax_22
                        int128_t var_a8_8 = eax_22[1]
                        int128_t var_98_8 = eax_22[2]
                        int128_t var_88_4 = eax_22[3]
                        float xmm0_95 = *(edi_3 + 0x64)
                        int32_t eax_23
                        int32_t ecx_39
                        float xmm0_98
                        eax_23, ecx_39, xmm0_98 =
                            sub_4ac580(ebp_1, xmm0_95 * xmm0_95 + xmm1_31 * xmm1_31)
                        int32_t var_10c_8 = ecx_39
                        return sub_641d40(eax_23, &var_b8, eax_5, xmm0_80, ecx_31, 
                            xmm0_98 * 0.707106769f * xmm0_80, &var_30)
                    
                    var_104_1 = "TTFontGet"
                    var_108_1 = 0x1ef
                    var_10c_1 = "C:\x\ax2017\Engine\TTFont.cpp"
                    ecx_5 = "ttf->assetType == ASSET_TYPE_TRUETYPE"
                else
                    var_104_1 = "TTFontGet"
                    var_108_1 = 0x1ef
                    var_10c_1 = "C:\x\ax2017\Engine\TTFont.cpp"
                    ecx_5 = "ttf->assetType == ASSET_TYPE_TRUETYPE"
            else
                var_104_1 = "TTFontGet"
                var_108_1 = 0x1ef
                var_10c_1 = "C:\x\ax2017\Engine\TTFont.cpp"
                ecx_5 = "ttf->assetType == ASSET_TYPE_TRUETYPE"
        else
            var_104_1 = "TTFontGet"
            var_108_1 = 0x1ef
            var_10c_1 = "C:\x\ax2017\Engine\TTFont.cpp"
            ecx_5 = "ttf->assetType == ASSET_TYPE_TRUETYPE"
sub_63b870(eax_5, &data_801800, ecx_5, var_10c_1, var_108_1, var_104_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
