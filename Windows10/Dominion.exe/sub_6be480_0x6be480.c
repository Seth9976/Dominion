// 函数: sub_6be480
// 地址: 0x6be480
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
void* ecx = arg1[0xc]
int128_t xmm0 = *(arg2 + 0x24)
int32_t* esi = *(ecx + 0x2e4)
int32_t ecx_1 = esi[0xa]
float var_70
float var_60
int128_t var_50
float result

if (ecx_1 s> 0)
    int32_t eax_3 = arg1[0xf]
    
    if (eax_3 s< 0)
        eax_3 = 0
    else if (eax_3 s> ecx_1)
        eax_3 = ecx_1
    
    int64_t* eax_5 = (eax_3 << 4) + esi[9]
    float xmm2_1[0x4] = *sub_6c3d10(&var_50, *eax_5, eax_5[1].d)
    result = xmm2_1[0] f* xmm0.d
    var_60 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0x55) f* xmm0:4.d
    var_70 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xaa) f* xmm0:8.d
    var_50 = _mm_shuffle_ps(xmm2_1, xmm2_1, 0xff) f* xmm0:0xc.d
else if (*(arg2 + 0x64) == 0)
    var_50 = xmm0:0xc.d
    var_70 = xmm0:8.d
    var_60 = xmm0:4.d
    result = xmm0.d
else
    float xmm2_4[0x4] = *(arg2 + 0x24)
    float xmm4_3 = xmm2_4[0]
    float xmm1_2 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0x55)
    float xmm0_2 = xmm2_4[0]
    int32_t xmm4_4 = _mm_max_ss(xmm4_3, xmm1_2)
    int32_t xmm0_3 = _mm_min_ss(xmm0_2, xmm1_2)
    float xmm3_8 = _mm_shuffle_ps(xmm2_4, xmm2_4, 0xaa)
    float xmm4_5 = _mm_max_ss(xmm4_4, xmm3_8)
    float var_34_1 = xmm4_5
    float xmm5_2 = xmm4_5 - _mm_min_ss(xmm0_3, xmm3_8)
    float var_30_1
    float var_18
    int32_t xmm1_3
    
    if (0 f< xmm5_2)
        float xmm0_6 = xmm5_2 / xmm4_5
        var_18 = xmm0_6
        float xmm1_5
        
        if (not(xmm2_4 f< xmm4_5))
            xmm1_5 = (xmm1_2 - xmm3_8) / xmm5_2
        else if (xmm1_2 < xmm4_5)
            xmm1_5 = (xmm2_4 f- xmm1_2) / xmm5_2 + 4f
        else
            xmm1_5 = (xmm3_8 f- xmm2_4) / xmm5_2 + 2f
        
        xmm1_3 = xmm1_5 * 60f
        
        if (not(0 f<= xmm1_3))
            xmm1_3 = xmm1_3 f+ 360f
        
        var_30_1 = xmm0_6
        var_34_1 = xmm4_5
    else
        xmm1_3 = (zx.o(0)).d
        var_18 = 0f
        var_30_1 = 0f
    
    int128_t xmm1_6 = xmm1_3 f+ *(arg2 + 0x34)
    var_50 = xmm1_6
    int128_t var_28
    var_28:8.q = fconvert.d(xmm1_6)
    _CIfmod()
    var_28:0xc.d = fconvert.s(fconvert.t(360.0))
    float xmm1_7[0x4] = var_28:0xc.d
    float xmm0_9
    float xmm2_8
    
    if (0f f<= var_50.d)
        xmm0_9 = var_30_1
        xmm2_8 = var_34_1
    else
        xmm1_7 = xmm1_7 f+ 360f
        xmm0_9 = var_18
        xmm2_8 = xmm4_5
    
    var_28:0xc.d = xmm2_8 f* *(arg2 + 0x3c)
    int96_t xmm0_11 =
        (*sub_6c3d10(&var_50, _mm_unpacklo_ps(xmm1_7, xmm0_9 f+ *(arg2 + 0x38)), var_28:0xc.d)).12
    var_50 = *(arg2 + 0x30)
    var_60 = xmm0_11:4.d
    var_70 = xmm0_11:8.d
    result = xmm0_11.d

float xmm1_9 = 1f
int32_t* eax_2

if (not(esi[0x13] f<= 0f))
    eax_2 = *sub_5af880(*esi)
    
    if (*(&eax_2[*(ecx + 0x2dc) * 0x5a] + 0xe6) != 0)
        xmm1_9 = 1f
    else
        xmm1_9 = esi[0x14] f/ esi[0x13]

float xmm0_17 = *(arg2 + 0x40)
float xmm2_14 = xmm0_17 * result

if (not(xmm2_14 <= 0.999000013f))
    eax_2.b = 0xff
else if (0.00100000005f <= xmm2_14)
    eax_2 = int.d(xmm2_14 * 255f + 0.5f)
else
    eax_2.b = 0

result.b = eax_2.b
float xmm2_18 = xmm0_17 * var_60

if (not(xmm2_18 <= 0.999000013f))
    eax_2.b = 0xff
else if (0.00100000005f <= xmm2_18)
    eax_2 = int.d(xmm2_18 * 255f + 0.5f)
else
    eax_2.b = 0

float xmm0_18 = xmm0_17 * var_70
result:1.b = eax_2.b

if (not(xmm0_18 <= 0.999000013f))
    eax_2.b = 0xff
else if (0.00100000005f <= xmm0_18)
    eax_2 = int.d(xmm0_18 * 255f + 0.5f)
else
    eax_2.b = 0

float xmm1_12 = xmm1_9 f* esi[0x19] f* var_50.d
result:2.b = eax_2.b

if (not(xmm1_12 <= 0.999000013f))
    result:3.b = 0xff
else if (0.00100000005f <= xmm1_12)
    result:3.b = (int.d(xmm1_12 * 255f + 0.5f)).b
else
    result:3.b = 0

CookieCheckFunction(result)
return result
