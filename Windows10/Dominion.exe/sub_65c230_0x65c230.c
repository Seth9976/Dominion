// 函数: sub_65c230
// 地址: 0x65c230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
__security_cookie
void* ecx = data_147abe8
int32_t* eax_2 = *(arg1 + 0x14a8)
int32_t eax_3 = *(arg1 + 0x13b0)

if (ecx == 0)
    sub_63b870(eax_3, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* edx = *(ecx + 0x10)
int32_t* result_1

if (eax_3 != 0)
    uint32_t esi = zx.d(eax_3.w)
    
    if (esi u< *(edx + 4))
        result_1 = esi * 0x7c + *edx
        
        if (result_1[0x1e] != eax_3)
            result_1 = nullptr
    else
        result_1 = nullptr
else
    result_1 = nullptr

float xmm2 = *(ecx + 0x2c)
float xmm1_1 = xmm2 f- *(arg1 + 0x490)
float var_c0
float xmm2_1

if (*(arg1 + 0x480) f+ *(arg1 + 0x47c) > xmm1_1 || *(arg1 + 0x470) s> 1)
    var_c0 = sub_67f6b0(arg1 + 0x404, xmm2 f- *(arg1 + 0x48c))
    float xmm0_3 = sub_67f6b0(arg1 + 0x440, xmm1_1)
    xmm2_1 = sub_64c3c0(arg1 + 0x47c, xmm1_1) * (xmm0_3 - var_c0) + var_c0
else
    xmm2_1 = *(arg1 + 0x440)

void** var_cc_1
void** eax_5

if (result_1 != 0)
    eax_5 = sub_5af880(*result_1)
    var_cc_1 = eax_5
    var_c0 = 0f

float var_cc_4
float var_c4_2
float var_bc
float var_a0
float var_9c

if (result_1 == 0 || eax_5[2] s<= 0)
label_65c39f:
    float xmm2_5 = *(arg1 + 0x16d0)
    float xmm3_1 = *(arg1 + 0x16cc)
    var_9c = xmm2_5 / 100f
    float xmm0_9 = *(arg1 + 0x1620)
    float xmm3_3 = xmm3_1 * 0.5f * xmm0_9
    float xmm2_7 = xmm2_5 * 0.5f * xmm0_9
    float xmm7_1 = *(arg1 + 0x162c)
    float xmm6_1 = *(arg1 + 0x1628)
    var_c0 = xmm0_9 * 0f
    float xmm0_11 = *(arg1 + 0x1630)
    var_a0 = xmm3_1 / 100f
    float xmm1_9 = xmm0_11 * xmm0_11
    float xmm0_12 = *(arg1 + 0x1624)
    float xmm5_2 = xmm0_12 * xmm0_12
    float xmm1_11 = xmm7_1 f* *(arg1 + 0x1630)
    float xmm2_9 = xmm6_1 * xmm0_12
    float var_cc_2 = xmm7_1
    float xmm4_2 = xmm6_1 * xmm6_1
    float xmm3_5 = xmm7_1 * xmm7_1
    float xmm1_14 = (xmm2_9 - xmm1_11) * (xmm2_7 + xmm2_7)
    float var_c4 = xmm1_14
    float xmm0_22 = var_c0
    float xmm0_26 = xmm1_14 + (xmm5_2 + xmm1_9 - xmm4_2 - xmm3_5) * xmm3_3
        + (xmm7_1 f* *(arg1 + 0x1624) + xmm6_1 f* *(arg1 + 0x1630)) * (xmm0_22 + xmm0_22) f+
        *(arg1 + 0x1634)
    var_c4_2 = xmm0_26
    float xmm0_36 = var_c0
    float xmm1_25 = (xmm1_11 + xmm2_9) * (xmm3_3 + xmm3_3)
        + (xmm1_9 - xmm5_2 + xmm4_2 - xmm3_5) * xmm2_7
        + (xmm7_1 * xmm6_1 - *(arg1 + 0x1624) * xmm0_11) * (xmm0_36 + xmm0_36) f+ *(arg1 + 0x1638)
    var_c0 = var_c4_2
    var_cc_4 = xmm1_25
    var_bc = xmm1_25
else
    int32_t ecx_6 = 0
    int32_t var_b8_1 = 0
    
    while (true)
        int32_t eax_6
        int32_t ecx_7
        eax_6, ecx_7 = sub_6dd280(eax_5, *eax_5 + ecx_6, &data_8cc5f8, 8)
        
        if (eax_6 != 0)
            int32_t var_e4_1 = ecx_7
            sub_65bfe0(&var_c0, &var_a0, arg1, &var_c0)
            var_cc_4 = var_bc
            var_c4_2 = var_c0
            break
        
        float eax_8 = var_c0 i+ 1
        ecx_6 = var_b8_1 + 0x168
        var_c0 = eax_8
        eax_5 = var_cc_1
        var_b8_1 = ecx_6
        
        if (eax_8 s>= var_cc_1[2])
            goto label_65c39f

void* result = arg1 + 0x254
float xmm2_11 = xmm2 f- *(result + 0x8c)
float xmm2_12

if (*(result + 0x7c) f+ *(result + 0x78) > xmm2_11 || *(result + 0x6c) s> 1)
    float xmm0_43 = sub_67f6b0(result, xmm2 f- *(result + 0x88))
    float xmm0_44 = sub_67f6b0(arg1 + 0x290, xmm2_11)
    float xmm0_45
    result, xmm0_45 = sub_64c3c0(result + 0x78, xmm2_11)
    xmm2_12 = xmm0_45 * (xmm0_44 - xmm0_43) + xmm0_43
else
    xmm2_12 = *(result + 0x3c)

float xmm2_15 = xmm2_12 f* *(arg1 + 0x1680)
int32_t* ecx_14 = eax_2

if (ecx_14 == 0)
    if (result_1 == 0)
        goto label_65c6e3
    
    *(arg1 + 0x13b4) = 0
label_65c6f4:
    xmm2_15 f- 0
    result:1.b = (xmm2_15 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_15, 0f) ? 1 : 0) << 2
        | (xmm2_15 < 0f ? 1 : 0)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        float xmm3_6 = *(data_147b06c + 0xa0)
        float xmm2_18 = xmm3_6 * 0f * 100f
        result_1[0x10] = var_c0 - xmm2_18
        result_1[0x11] = var_bc - xmm2_18
        result_1[0x12] = 0f - xmm3_6 * 100f
        float xmm0_57 = (xmm2_1 + 0.785398185f) * 0.5f
        result_1[0xb] = __minss_xmmss_memss(var_a0, var_9c)
        int32_t var_94_1 = sub_4ae0d0(ebp, xmm0_57)
        float xmm0_60 = sub_4ae0f0(ebp, xmm0_57)
        float var_98_1 = xmm0_60
        float xmm1_35 = xmm0_60 * 0f
        var_a0 = xmm1_35
        float var_9c_1 = xmm1_35
        *(result_1 + 0x30) = var_a0.o
        sub_6bca30(result_1, arg2)
        result = sub_65bf00(arg1)
else
    bool p_2
    
    if (result_1 == 0)
        xmm2_15 - 0f
        result:1.b = (xmm2_15 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_15, 0f) ? 1 : 0) << 2
            | (xmm2_15 < 0f ? 1 : 0)
        p_2 = unimplemented  {test ah, 0x44}
    
    if (result_1 != 0 || not(p_2))
        if (ecx_14 == *(arg1 + 0x13b4))
            goto label_65c6e3
        
        if (result_1 != 0)
            sub_6b8440(result_1)
            ecx_14 = eax_2
        
        int128_t xmm0_62 = data_800248
        int32_t var_64_2 = 0
        float var_6c_2 = var_c4_2
        float var_68_2 = var_cc_4
        int128_t var_40 = 0x3f800000.o
        int128_t var_30_1 = xmm0_62
        int32_t* result_2 = sub_6b80f0(ecx_14, &var_40)
        ecx_14 = eax_2
        result_1 = result_2
        result = result_1[0x1e]
        *(arg1 + 0x13b0) = result
        goto label_65c6e3
    
    if (ecx_14 != *(arg1 + 0x13b4) || *(arg1 + 0x10) != 0)
        int128_t xmm0_48 = data_800248
        int32_t var_64_1 = 0
        float var_6c_1 = var_c4_2
        float var_68_1 = var_cc_4
        int128_t var_60 = 0x3f800000.o
        int128_t var_50_1 = xmm0_48
        result = sub_6b80f0(ecx_14, &var_60)
        result_1 = result
        *(arg1 + 0x13b0) = result_1[0x1e]
        ecx_14 = eax_2
    label_65c6e3:
        *(arg1 + 0x13b4) = ecx_14
        
        if (result_1 != 0)
            goto label_65c6f4

CookieCheckFunction(result)
return result
