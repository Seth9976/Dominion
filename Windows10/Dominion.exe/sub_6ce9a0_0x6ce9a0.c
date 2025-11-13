// 函数: sub_6ce9a0
// 地址: 0x6ce9a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_770bd1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_168 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
char const* const var_174
int32_t var_170_1
char const* const var_16c_1
char* ecx

if (*arg2 != 0)
    var_16c_1 = "FabUIDraw"
    var_170_1 = 0x34a
    var_174 = "C:\x\ax2017\Engine\FabDef.cpp"
    ecx = "elState.asset == NULL"
else if (*edi == 2)
    if (edi[0x22] == 0)
    label_6ceec6:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    float var_70
    float* eax_4
    int32_t edx
    eax_4, edx = sub_6cd460(&var_70, arg2, arg1, &var_70)
    int128_t var_fc_1 = *eax_4
    int128_t xmm0_2 = *(eax_4 + 0x10)
    int64_t xmm0_3 = *(eax_4 + 0x20)
    int32_t eax_6
    uint128_t xmm0_4
    int128_t xmm1_1
    
    if (arg2[0x120] s<= arg2[0x17])
        xmm0_4 = *(edi + 0x10)
        eax_6 = edi[0xc]
        xmm1_1 = *(edi + 0x20)
    else
        xmm0_4 = *(arg2 + 0x484)
        eax_6 = arg2[0x129]
        xmm1_1 = *(arg2 + 0x494)
    
    int32_t var_28_1 = eax_6
    uint128_t var_24 = xmm0_4
    uint128_t var_48 = xmm0_4
    int128_t var_38 = xmm1_1
    float var_58[0x4]
    int128_t* eax_8 = sub_4eb2f0(&var_58, edx, &var_48:0xc, &var_58)
    var_48:4.d = 0x3f800000
    var_48 = *eax_8
    uint128_t xmm0_6 = var_24
    var_38:8.q = xmm0_6
    int32_t var_28_2 = _mm_bsrli_si128(xmm0_6, 8)
    float var_68[0x4] = var_48
    var_58 = var_38
    sub_4eb600(&arg2[0xf], &var_68, &var_48:4, &arg2[0xf])
    float xmm2_1[0x4] = var_48
    float xmm5_1[0x4] = var_38
    data_147abbc = 1
    data_147abc4 = 0
    float xmm6_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa)
    float xmm1_3 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55)
    var_68 = xmm2_1
    float xmm2_2 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff)
    float xmm4_3 = xmm6_2 * xmm1_3 - xmm2_2 f* xmm5_1
    float xmm3_3 = xmm2_2 * xmm6_2 + xmm5_1[0] * xmm1_3
    float xmm0_15 = xmm5_1[0] f* xmm5_1
    var_58 = xmm5_1
    data_147abc0 = (xmm6_2 * xmm6_2 - xmm2_2 * xmm2_2 + xmm0_15 - xmm1_3 * xmm1_3)
        * (_mm_shuffle_ps(xmm5_1, xmm5_1, 0xaa) f- data_cf65e0:8)
        + (xmm4_3 + xmm4_3) * (_mm_shuffle_ps(xmm5_1, xmm5_1, 0x55) f- data_cf65e0:4)
        + (xmm3_3 + xmm3_3) * (_mm_shuffle_ps(xmm5_1, xmm5_1, 0xff) f- data_cf65e0:0xc)
    sub_6830d0(&var_68)
    
    if (data_1a9a300 s> *(*fsbase->ThreadLocalStoragePointer + 8))
        sub_75970e(&data_1a9a300)
        
        if (data_1a9a300 == 0xffffffff)
            int32_t var_8_1 = 0
            data_1a9a304 = sub_69f030("sys/sprite_3d.material", 5)
            int32_t var_8_2 = 0xffffffff
            __Init_thread_footer(&data_1a9a300)
    
    *(data_147b06c + 0x2dc) = data_1a9a304
    var_24:8.d = xmm0_2:0xc.d
    var_24:0xc.d = xmm0_3:4.d
    result = sub_5af7f0(&var_58, &var_24:8, &data_7ffb14, &var_58)
    int32_t* ecx_6 = arg2[0x18]
    float xmm0_23[0x4] = *result
    var_58 = xmm0_23
    var_38 = xmm0_23
    
    if (ecx_6 == 0)
        ecx_6 = edi[0x22]
    
    if (ecx_6[1] == 0x1e)
        var_24 = *(sub_5af880(ecx_6) + 0xc)
        float var_15c[0x18]
        float* eax_17 = sub_69c260(&var_15c, &var_24, &var_38:4, &var_15c)
        int128_t xmm0_25 = *eax_17
        int128_t var_c4_1 = *(eax_17 + 0x10)
        int128_t var_b4_1 = *(eax_17 + 0x20)
        int128_t var_a4_1 = *(eax_17 + 0x30)
        int96_t xmm0_30 = (*(eax_17 + 0x50)).12
        float xmm7_1
        
        if (arg2[0x12a] s<= arg2[0x17])
            xmm7_1 = edi[0x24]
        else
            xmm7_1 = arg2[0x12b]
        
        float xmm0_31 = xmm0_30.d
        float xmm2_4 = xmm0_30:8.d
        float xmm1_6 = (*(eax_17 + 0x40)):0xc.d
        float xmm4_6 = xmm0_30:4.d
        void* eax_19 = data_147abe4
        float xmm3_8 = (xmm0_31 + xmm2_4) * 0.5f
        float xmm5_6 = (xmm1_6 + xmm4_6) * 0.5f
        int96_t var_84_1
        var_84_1.d = (xmm0_31 - xmm3_8) * xmm7_1 + xmm3_8
        var_84_1:8.d = (xmm2_4 - xmm3_8) * xmm7_1 + xmm3_8
        float xmm2_8 = 1f - xmm7_1
        var_24:0xc.d = *(eax_19 + 0x38)
        var_84_1:4.d = (xmm4_6 - xmm5_6) * xmm7_1 + xmm5_6
        float xmm4_10 = xmm0_25:0xc.d
        int128_t var_94_1
        var_94_1:0xc.d = (xmm1_6 - xmm5_6) * xmm7_1 + xmm5_6
        int128_t var_d4_1
        var_d4_1:0xc.d = xmm7_1 * xmm4_10
        var_d4_1.d = xmm0_25.d + xmm2_8 * (var_24.d f+ var_24:8.d) * 0.5f * xmm4_10
        var_d4_1:4.d = var_d4_1:4.d + xmm2_8 * (var_24:4.d f+ var_24:0xc.d) * 0.5f * xmm4_10
        var_38 = *(eax_19 + 0x28)
        *(eax_19 + 0x28) = var_58
        *(eax_19 + 0x38) = 0xffffffff
        int32_t* eax_20 = arg2[0x18]
        int32_t* var_74_1 = eax_20
        
        if (eax_20 == 0)
            eax_20 = edi[0x22]
            var_74_1 = eax_20
        
        int32_t ecx_9 = arg2[1]
        
        if (ecx_9 != 0)
            if (*(sub_6985c0(ecx_9) + 4) != var_74_1)
                sub_698a30(arg2[1])
                arg2[1] = sub_6987e0(var_74_1)
        else if (eax_20 != 0)
            arg2[1] = sub_6987e0(eax_20)
        
        arg2[1]
        sub_69b9c0(0x3f800000)
        void* eax_23 = data_147abe4
        int32_t ecx_13 = var_24:0xc.d
        *(eax_23 + 0x28) = var_38
        *(eax_23 + 0x38) = ecx_13
        result = data_147b06c
        result[0xb7] = 0
        __builtin_memcpy(&result[0x49], 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
            0x41)
        sub_649d30()
        data_147abbc = 0
        data_147abc0 = 0
        data_147abc4 = 0
        goto label_6ceec6
    
    var_16c_1 = "UIDefGet"
    var_170_1 = 0x127
    var_174 = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx = "ptr->assetType == ASSET_TYPE_UI"
else
    var_16c_1 = "FabUIDraw"
    var_170_1 = 0x34b
    var_174 = "C:\x\ax2017\Engine\FabDef.cpp"
    ecx = "el.type == FAB_UI"

sub_63b870(result, &data_801800, ecx, var_174, var_170_1, var_16c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
