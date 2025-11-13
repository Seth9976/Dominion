// 函数: sub_7608e0
// 地址: 0x7608e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char outputString[0xcc]

if (arg4 u>= 0x400)
    char const* const var_f4 = "aVoice < VOICE_COUNT"
    int32_t var_f8 = 0x47
    char const* const var_fc = "D:\soloud\src\core\soloud_core_voiceops.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

if (*(arg1 + 8) == 0)
    char const* const var_f4_2 = "mInsideAudioThreadMutex"
    int32_t var_f8_1 = 0x48
    char const* const var_fc_1 = "D:\soloud\src\core\soloud_core_voiceops.cpp"
    sub_63bb20(&outputString, "%s(%d): assert(%s) failed.\n")
    OutputDebugStringA(&outputString)
    breakpoint

uint32_t result = *(arg1 + (arg4 << 2) + 0x50)

if (result != 0)
    *(result + 0x14) = arg5
    double xmm0_5 = _mm_cvtps_pd(arg5 + 1f) * 3.1415926535900001 * 0.25
    int32_t entry_ebx
    _libm_sse2_cos_precise(arg3, arg2, entry_ebx)
    float var_e4 = fconvert.s(xmm0_5)
    _libm_sse2_sin_precise()
    float xmm1_1 = fconvert.s(xmm0_5)
    float xmm0_8 = var_e4
    *(*(arg1 + (arg4 << 2) + 0x50) + 0x18) = xmm0_8
    double var_e0_1
    var_e0_1.d = xmm1_1
    *(*(arg1 + (arg4 << 2) + 0x50) + 0x1c) = xmm1_1
    result = *(arg1 + (arg4 << 2) + 0x50)
    
    if (*(result + 0x48) == 4)
        *(result + 0x20) = xmm0_8
        result = *(arg1 + (arg4 << 2) + 0x50)
        *(result + 0x24) = xmm1_1
    
    void* ebx = *(arg1 + (arg4 << 2) + 0x50)
    double xmm0_9 = 2.0
    
    if (*(ebx + 0x48) == 6)
        if (0 f> xmm0_9)
            _libm_sse2_sqrt_precise()
        else
            xmm0_9 = _mm_sqrt_sd(xmm0_9, xmm0_9)
        
        float xmm0_11 = var_e4
        *(ebx + 0x20) = 1f / fconvert.s(xmm0_9)
        *(*(arg1 + (arg4 << 2) + 0x50) + 0x24) = 0x3f800000
        *(*(arg1 + (arg4 << 2) + 0x50) + 0x28) = xmm0_11
        result = *(arg1 + (arg4 << 2) + 0x50)
        xmm0_9 = 2.0
        *(result + 0x2c) = var_e0_1.d
    
    void* ebx_1 = *(arg1 + (arg4 << 2) + 0x50)
    
    if (*(ebx_1 + 0x48) == 8)
        if (0 f> xmm0_9)
            _libm_sse2_sqrt_precise()
        else
            xmm0_9 = _mm_sqrt_sd(xmm0_9, xmm0_9)
        
        float xmm0_13 = var_e4
        *(ebx_1 + 0x20) = 1f / fconvert.s(xmm0_9)
        int32_t xmm1_5 = var_e0_1.d
        *(*(arg1 + (arg4 << 2) + 0x50) + 0x24) = 0x3f800000
        *(*(arg1 + (arg4 << 2) + 0x50) + 0x28) = xmm0_13
        *(*(arg1 + (arg4 << 2) + 0x50) + 0x2c) = xmm1_5
        *(*(arg1 + (arg4 << 2) + 0x50) + 0x30) = xmm0_13
        result = *(arg1 + (arg4 << 2) + 0x50)
        *(result + 0x34) = xmm1_5

CookieCheckFunction(result)
return result
