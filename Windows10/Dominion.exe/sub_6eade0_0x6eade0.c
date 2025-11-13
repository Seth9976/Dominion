// 函数: sub_6eade0
// 地址: 0x6eade0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_77179d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_1a4 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0x1a].b == 0)
    int32_t* ecx = arg1[0xd]
    int32_t var_1b0
    
    if (ecx != 0)
        arg1[4]
        int32_t var_1a8_1 = 0
        int128_t* const var_1ac_1 = &data_7ff520
        var_1b0 = 1
        int32_t var_1b4_1 = 0
        int32_t var_1b8_1 = 0
        int32_t* var_1bc_1 = &data_bf23ac
        sub_685a90(result, &data_8002b0, ecx, &data_8002b0, arg1[5], arg1[6], (arg1[7]).b)
    
    float xmm2_2 = arg1[4]
    float xmm1_2 = arg1[5]
    float xmm3_3 = xmm2_2 f+ arg1[6]
    void* eax_3 = data_147abe4
    float xmm0_3 = xmm1_2 f+ arg1[7]
    float var_60 = xmm2_2
    float var_5c_1 = xmm1_2
    int128_t xmm1_3 = *(eax_3 + 0x28)
    int32_t ecx_1 = *(eax_3 + 0x38)
    float var_58_1 = xmm3_3
    float var_54_1 = xmm0_3
    *(eax_3 + 0x28) = var_60.o
    *(eax_3 + 0x38) = 0xffffffff
    float xmm2_5 = arg1[9] f+ arg1[5] f+ arg1[0xb]
    float xmm3_6 = arg1[8] f+ arg1[4] f+ arg1[0xa]
    int128_t var_100
    int128_t var_c0
    float var_50
    int32_t var_3c
    float var_30
    
    if (arg1[0xf] == 0)
        char* eax_11 = *arg1
        float xmm0_16 = xmm2_5 f+ arg1[7]
        float xmm1_8 = xmm3_6 f+ arg1[6]
        var_60 = xmm3_6
        float var_5c_2 = xmm2_5
        char* edi_2 = &data_801800
        float var_54_2 = xmm0_16
        
        if (eax_11 != 0)
            edi_2 = eax_11
        
        float var_58_2 = xmm1_8
        var_60.o = var_60.o
        struct _EXCEPTION_REGISTRATION_RECORD*** esi_2 = arg1[0xe]
        var_50 = arg1[0x12]
        int32_t var_1a8_3 = sub_6ea9d0(arg1)
        sub_6b40d0(&var_60, esi_2, edi_2, &var_60, &arg1[0x11], &arg1[0x15], var_1b0, var_50)
    else
        int32_t xmm0_5 = arg1[0x12]
        float xmm1_4 = arg1[6]
        var_3c = xmm0_5
        int32_t var_38_1 = xmm0_5
        int32_t var_34_1 = xmm0_5
        int32_t var_28_1 = 0
        var_30 = xmm1_4 * 0.5f + xmm3_6
        float var_2c_1 = xmm1_4 * 0f * 0.5f + xmm2_5
        float* eax_5 = sub_6818c0(&var_100, &data_800248, &var_30, &var_100, &var_3c)
        char* const edi_1 = &data_801800
        var_c0 = *eax_5
        int128_t var_b0_1 = *(eax_5 + 0x10)
        int128_t var_a0_1 = *(eax_5 + 0x20)
        char* eax_6 = *arg1
        int32_t* esi_1 = arg1[0xf]
        
        if (eax_6 != 0)
            edi_1 = eax_6
        
        int128_t var_90_1 = *(eax_5 + 0x30)
        var_50 = arg1[0x10]
        int32_t eax_8 = sub_6ea9d0(arg1)
        sub_642130(&arg1[0x11], edi_1, &var_c0, var_50, esi_1, &arg1[0x11], eax_8, 0f, 0f)
    
    int32_t* edi_5 = arg1
    float var_78
    sub_6ead20(edi_5, &var_50, &var_78)
    int32_t esi_3 = edi_5[1]
    int32_t ecx_9 = edi_5[3]
    float xmm2_7 = edi_5[0x12]
    int32_t eax_18
    int32_t edx_3
    edx_3:eax_18 = sx.q(esi_3 - ecx_9)
    uint32_t eax_20 = (eax_18 ^ edx_3) - edx_3
    float var_68_1 = xmm2_7 * 3f
    
    if (esi_3 s>= ecx_9)
        esi_3 = ecx_9
    
    if (eax_20 s> 0)
        int32_t var_1a8_5 = esi_3
        var_68_1 = xmm2_7
        var_60 = sub_6eaa50(edi_5)
        int32_t var_1a8_6 = eax_20 + esi_3
        float xmm0_25 = edi_5[0xb] f+ edi_5[5] f+ edi_5[9]
        float var_48 = xmm0_25
        float var_5c_3 = xmm0_25
        int32_t var_58_3 = sub_6eaa50(edi_5)
        float var_54_3 = var_48 + var_50
        
        if (edi_5[1] == esi_3)
            var_60 = var_60 + var_68_1
        
        sub_682f00(&var_60, &edi_5[0x17])
        int32_t var_1a8_7 = esi_3
        int32_t xmm0_31 = sub_6eaa50(edi_5)
        var_48 = &data_801800
        int32_t var_14_1 = 0
        char* const ecx_14 = &data_801800
        char* eax_23 = *edi_5
        
        if (eax_23 != 0)
            ecx_14 = eax_23
        
        int32_t ecx_16
        int32_t edx_5
        ecx_16, edx_5 = sub_63db30(&var_48, &ecx_14[esi_3], eax_20)
        int32_t* eax_25 = edi_5[0xf]
        float xmm0_32 = edi_5[0x12]
        float esi_4
        
        if (eax_25 == 0)
            esi_4 = var_48
            float eax_31 = &data_801800
            int32_t var_1a8_12 = ecx_16
            
            if (esi_4 != 0)
                eax_31 = esi_4
            
            sub_6b3f10(eax_31, edx_5, eax_31, edi_5[0xe], edi_5[0x16], 1, xmm0_32)
        else
            var_30 = xmm0_32
            float var_2c_2 = xmm0_32
            float var_28_2 = xmm0_32
            int32_t var_34_2 = 0
            var_3c.q = _mm_unpacklo_ps(xmm0_31.o, xmm2_5)
            float* eax_27 = sub_6818c0(&var_100, &data_800248, &var_3c, &var_100, &var_30)
            esi_4 = var_48
            var_c0 = *eax_27
            int64_t xmm0_36 = (*(eax_27 + 0x10)).q
            int128_t var_a0_2 = *(eax_27 + 0x20)
            float ecx_18 = &data_801800
            
            if (esi_4 != 0)
                ecx_18 = esi_4
            
            int128_t var_90_2 = *(eax_27 + 0x30)
            float xmm0_39 = edi_5[0x10]
            
            if (eax_25[1] != 0x25)
                sub_63b870(&data_801800, &data_801800, "ttf->assetType == ASSET_TYPE_TRUETYPE", 
                    "C:\x\ax2017\Engine\TTFont.cpp", 0x1ef, "TTFontGet")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            void* eax_28 = sub_5af880(eax_25)
            void* ecx_20 = *(eax_28 + 0x38)
            int32_t edx_6 = *(ecx_20 + 0x14)
            int32_t ecx_21 = *(ecx_20 + 4)
            float xmm1_10 = xmm0_39 / _mm_cvtepi32_ps(zx.o(zx.d(*(edx_6 + ecx_21 + 0x13))
                + (zx.d(*(edx_6 + ecx_21 + 0x12)) << 8)))
            int32_t var_13c_1 = 0x80000000
            float var_134_1 = xmm1_10 f* *(eax_28 + 0x48) + 0f
            int32_t var_138_1 = 0
            int32_t var_130_1 = 0
            int32_t var_12c_1 = 0x3f800000
            float var_124_1 = xmm1_10 f* *(eax_28 + 0x4c) + 0f + sub_6419c0(eax_25, xmm0_39)
            var_100 = 0x3f800000.o
            int32_t var_128_1 = 0
            int128_t var_e0_1
            __builtin_memcpy(&var_e0_1, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            int128_t var_f0_1 = var_130_1.o
            void var_190
            int128_t* eax_29 = sub_642e30(&var_190)
            float xmm1_17 = var_c0.d
            var_100 = *eax_29
            int128_t var_f0_2 = eax_29[1]
            int128_t var_e0_2 = eax_29[2]
            int128_t var_d0_1 = eax_29[3]
            float xmm0_52 = xmm0_36:4.d
            int32_t ecx_25
            float xmm0_55
            ecx_25, xmm0_55 = sub_4ac580(&__saved_ebp, xmm0_52 * xmm0_52 + xmm1_17 * xmm1_17)
            edi_5 = arg1
            int32_t var_1a8_11 = ecx_25
            int32_t var_1b0_2 = ecx_25
            sub_641d40(&edi_5[0x16], &var_100, eax_25, xmm0_39, ecx_18, 
                xmm0_55 * 0.707106769f * xmm0_39, &edi_5[0x16])
        
        int32_t var_14_2 = 1
        
        if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
            char* eax_32 = sub_63d4e0(&var_48)
            int32_t temp0_1 = *(eax_32 + 4)
            *(eax_32 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
        
        int32_t var_14_3 = 0xffffffff
    
    float xmm0_58 = edi_5[2]
    
    if (not(xmm0_58 <= 1f))
        xmm0_58 = xmm0_58 - 1f
        edi_5[2] = xmm0_58
    
    if (*(edi_5 + 0x69) != 0 && not(0.5f <= xmm0_58))
        int32_t var_1a8_14 = edi_5[1]
        float xmm0_59 = sub_6eaa50(edi_5)
        float xmm0_61 = var_50 * 0.075000003f
        var_60 = xmm0_59
        float xmm0_62
        
        if (0 f<= xmm0_61)
            xmm0_62 = xmm0_61 + 0.5f
        else
            xmm0_62 = xmm0_61 - 0.5f
        
        float var_58_4 = xmm0_59 + var_68_1
        float xmm1_23 = (edi_5[0xb] f+ edi_5[9]) f* edi_5[0x12] f+ edi_5[5]
            + _mm_cvtepi32_ps(zx.o(int.d(xmm0_62)))
        float var_5c_4 = xmm1_23
        float var_54_4 = xmm1_23 + var_78
        sub_682f00(&var_60, &edi_5[0x11])
    
    result = data_147abe4
    *(result + 0x28) = xmm1_3
    result[0xe] = ecx_1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
