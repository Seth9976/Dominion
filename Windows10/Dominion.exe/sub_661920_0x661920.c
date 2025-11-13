// 函数: sub_661920
// 地址: 0x661920
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t __saved_ebp
uint16_t ebp_1 = &__saved_ebp
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76d1b5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t var_114 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg2
void* var_48 = edi
int32_t eax_3 = arg4[3]

if (eax_3 == 2)
    sub_63b870(eax_3, &data_801800, "line.elipsisStyle != ELIPSIS_REPLACE", 
        "C:\x\ax2017\Engine\UI2.cpp", 0x2e74, "DrawLayoutString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void var_108
int128_t var_c8
int32_t var_44
float var_38
char* const var_24
char* eax_18
char* const esi_1

if (eax_3 != 1)
    int32_t* eax_25 = *(edi + 0x60)
    
    if (eax_25 == 0 || *eax_25 == 0)
        float xmm0_52 = arg6 + (*arg4 ^ (data_8937c0.o).d)
        int32_t ecx_32 = *(edi + 0x1c)
        var_44 = *(edi + 0x14)
        float var_34_5 = xmm0_52
        float xmm0_53 = *(edi + 0x4c)
        float xmm0_54 = *(edi + 0x48)
        int32_t var_120_5 = arg4[2]
        int32_t var_40_3 = ecx_32
        char* var_124_3 = arg4[1]
        char** eax_37 = *(edi + 4)
        var_38 = arg5 + 0f
        eax_18 = sub_661380(eax_37, &var_38, arg3, *(edi + 0x20), *eax_37, &var_44, var_124_3, 
            var_120_5, xmm0_54, xmm0_53)
    else
        var_24 = &data_801800
        int32_t var_14_3 = 2
        char* ecx_18 = arg4[1]
        sub_63da70(&var_24, ecx_18, arg4[2] - ecx_18)
        char* const eax_28 = &data_801800
        esi_1 = var_24
        
        if (esi_1 != 0)
            eax_28 = esi_1
        
        float xmm0_28 = arg6 + (*arg4 ^ (data_8937c0.o).d)
        int32_t* eax_30 = **(edi + 0x60)
        float xmm0_30 = *(edi + 0x64) f* *(edi + 0x20)
        
        if (eax_30[1] != 0x25)
            sub_63b870(eax_30, &data_801800, "ttf->assetType == ASSET_TYPE_TRUETYPE", 
                "C:\x\ax2017\Engine\TTFont.cpp", 0x1ef, "TTFontGet")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        void* eax_31 = sub_5af880(eax_30)
        void* ecx_21 = *(eax_31 + 0x38)
        int32_t edi_3 = *(ecx_21 + 0x14)
        int32_t ecx_22 = *(ecx_21 + 4)
        float xmm1_16 = xmm0_30 / _mm_cvtepi32_ps(zx.o((zx.d(*(edi_3 + ecx_22 + 0x12)) << 8)
            + zx.d(*(edi_3 + ecx_22 + 0x13))))
        float var_7c_2 = arg5 + 0f + xmm1_16 f* *(eax_31 + 0x48)
        float var_6c_2 = sub_6419c0(eax_30, xmm0_30) + xmm0_28 + xmm1_16 f* *(eax_31 + 0x4c)
        int32_t var_80_2 = 0
        int32_t var_78_2 = 0
        int32_t var_74_2 = 0x3f800000
        int32_t var_88_1
        var_c8 = var_88_1.o
        int32_t var_70_2 = 0
        int128_t var_a8_3
        __builtin_memcpy(&var_a8_3, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x80", 
            0x28)
        int128_t var_b8_3 = var_78_2.o
        int128_t* eax_32 = sub_642e30(&var_108)
        float xmm1_20 = arg3[5]
        var_c8 = *eax_32
        int128_t var_b8_4 = eax_32[1]
        int128_t var_a8_4 = eax_32[2]
        int128_t var_98_2 = eax_32[3]
        float xmm0_45 = *arg3
        int32_t ecx_26
        float xmm0_48
        ecx_26, xmm0_48 = sub_4ac580(ebp_1, xmm0_45 * xmm0_45 + xmm1_20 * xmm1_20)
        int32_t var_118_6 = ecx_26
        int32_t var_120_3 = ecx_26
        eax_18 = sub_641d40(var_48 + 0x14, &var_c8, eax_30, xmm0_30, eax_28, 
            xmm0_48 * 0.707106769f * xmm0_30, var_48 + 0x14)
        int32_t var_14_4 = 3
    label_661ec9:
        
        if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
            eax_18 = sub_63d4e0(&var_24)
            int32_t temp0_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t* eax_35 = sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_35
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_18

var_24 = &data_801800
int32_t var_14_1 = 0
char* ecx = arg4[1]
sub_63da70(&var_24, ecx, arg4[2] - ecx)
char* const eax_6 = var_24

if (eax_6 == 0 || *eax_6 == 0)
    int32_t* ecx_4 = sub_64bfd0(0x14)
    ecx_4[3] += 1
    
    if (*ecx_4 == 0)
        sub_64be70(ecx_4)
    
    int32_t* esi_2 = *ecx_4
    *ecx_4 = *esi_2
    void* const ecx_5 = &data_875290
    *esi_2 = 0xfafafafa
    esi_2[1] = 1
    esi_2[2] = 3
    esi_2[3] = 4
    esi_1 = &esi_2[4]
    var_24 = esi_1
    int32_t eax_9
    
    do
        eax_9.b = *ecx_5
        ecx_5 += 1
        *(esi_1 - &data_875290 + ecx_5 - 1) = eax_9.b
    while (eax_9.b != 0)
else
    char* eax_7 = sub_63d4e0(&var_24)
    int32_t* edi_1 = *(eax_7 + 8)
    sub_63d5e0(eax_7, edi_1 + 3, &var_24, 1)
    esi_1 = var_24
    *(edi_1 + esi_1) = 0x2e2e2e
    edi = var_48

int32_t* eax_10 = *(edi + 0x60)
int32_t* ecx_6

if (eax_10 != 0)
    ecx_6 = *eax_10

if (eax_10 == 0 || ecx_6 == 0)
    int32_t ecx_14 = *(edi + 0x1c)
    var_44 = *(edi + 0x14)
    int32_t var_40_1 = ecx_14
    float xmm0_24 = arg6 + (*arg4 ^ (data_8937c0.o).d)
    var_38 = arg5 + 0f
    float var_34_3 = xmm0_24
    char* const var_28_2
    int32_t ecx_15
    
    if (esi_1 != 0)
        var_28_2 = esi_1
        
        if (*esi_1 != 0)
            ecx_15 = *(sub_63d4e0(&var_24) + 8)
        else
            ecx_15 = 0
    else
        var_28_2 = &data_801800
        ecx_15 = 0
    
    char* const edx_7 = &data_801800
    
    if (esi_1 != 0)
        edx_7 = esi_1
    
    char** eax_24 = *(edi + 4)
    eax_18 = sub_661380(eax_24, &var_38, arg3, *(edi + 0x20), *eax_24, &var_44, edx_7, 
        &var_28_2[ecx_15], *(edi + 0x48), *(edi + 0x4c))
else
    char* const eax_12 = &data_801800
    
    if (esi_1 != 0)
        eax_12 = esi_1
    
    float xmm0_1 = arg6 + (*arg4 ^ (data_8937c0.o).d)
    float xmm0_3 = *(edi + 0x64) f* *(edi + 0x20)
    
    if (ecx_6[1] != 0x25)
        sub_63b870(eax_12, &data_801800, "ttf->assetType == ASSET_TYPE_TRUETYPE", 
            "C:\x\ax2017\Engine\TTFont.cpp", 0x1ef, "TTFontGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_13 = sub_5af880(ecx_6)
    void* ecx_7 = *(eax_13 + 0x38)
    int32_t edi_2 = *(ecx_7 + 0x14)
    int32_t ecx_8 = *(ecx_7 + 4)
    float xmm1_3 = xmm0_3 /
        _mm_cvtepi32_ps(zx.o((zx.d(*(edi_2 + ecx_8 + 0x12)) << 8) + zx.d(*(edi_2 + ecx_8 + 0x13))))
    float var_7c_1 = arg5 + 0f + xmm1_3 f* *(eax_13 + 0x48)
    int32_t var_80_1 = 0
    int32_t var_78_1 = 0
    float var_6c_1 = xmm0_1 + xmm1_3 f* *(eax_13 + 0x4c) + sub_6419c0(ecx_6, xmm0_3)
    int32_t var_88
    var_c8 = var_88.o
    int32_t var_74_1 = 0x3f800000
    int32_t var_70_1 = 0
    int128_t var_a8_1
    __builtin_memcpy(&var_a8_1, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x80", 
        0x28)
    int128_t var_b8_1 = var_78_1.o
    int128_t* eax_14 = sub_642e30(&var_108)
    var_c8 = *eax_14
    int128_t var_b8_2 = eax_14[1]
    int128_t var_a8_2 = eax_14[2]
    int128_t var_98_1 = eax_14[3]
    float xmm1_9 = arg3[5]
    float xmm0_17 = *arg3
    int32_t ecx_12
    float xmm0_20
    ecx_12, xmm0_20 = sub_4ac580(ebp_1, xmm0_17 * xmm0_17 + xmm1_9 * xmm1_9)
    int32_t var_118_2 = ecx_12
    int32_t var_120 = ecx_12
    eax_18 = sub_641d40(var_48 + 0x14, &var_c8, ecx_6, xmm0_3, eax_12, 
        xmm0_20 * 0.707106769f * xmm0_3, var_48 + 0x14)

int32_t var_14_2 = 1
goto label_661ec9
