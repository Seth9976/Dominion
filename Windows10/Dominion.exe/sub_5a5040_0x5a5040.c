// 函数: sub_5a5040
// 地址: 0x5a5040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t result = *arg2
int32_t* var_840 = arg2
int32_t* i_2 = arg3

if (result s> 0x80)
    sub_63b870(result, &data_801800, "dots.count <= MAX_DOTS", 
        "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp", 0x3ef, "ApplyDots")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t esi = 0
int32_t var_844 = 0
int32_t var_810[0x80]
int32_t var_610[0x80]
int32_t var_410[0x101]
var_40c

if (result s> 0)
    do
        float eax_3
        int32_t edx
        eax_3, edx = sub_5a41c0(arg3)
        int32_t* i_3 = i_2
        int32_t edi = *i_3
        var_410[esi * 2] = eax_3
        *(&var_40c + (esi << 3)) = edx
        float xmm0_3 = var_840[1]
        int32_t esi_1 = i_3[1]
        float xmm0_4 = var_840[2]
        int32_t eax_5
        int32_t edx_1
        eax_5, edx_1 = __allmul(edi, esi_1, 0x4c957f2d, 0x5851f42d)
        int32_t* i_4 = i_2
        int32_t eax_6 = eax_5 + i_4[2]
        bool c_1 = eax_5 + i_4[2] u< eax_5
        *i_4 = eax_6
        int32_t edx_2 = adc.d(edx_1, i_4[3], c_1)
        i_4[1] = edx_2
        int32_t edi_2 = (edi u>> 0x1b | esi_1 << 5) ^ esi_1 u>> 0xd
        uint32_t esi_2 = esi_1 u>> 0x1b
        int32_t var_820_1 = edx_2
        int32_t var_834_1 = 0
        var_810[var_844] = (xmm0_4 - xmm0_3) * ((((edi_2 << ((neg.d(esi_2)).b & 0x1f)
            | edi_2 u>> esi_2.b) & 0x7fffff) | 0x3f800000) - 1f) + xmm0_3
        float xmm0_7 = var_840[3]
        float xmm0_8 = var_840[4]
        int32_t eax_15
        int32_t edx_3
        eax_15, edx_3 = __allmul(eax_6, edx_2, 0x4c957f2d, 0x5851f42d)
        int32_t* i_5 = i_2
        int32_t var_82c_1 = 0
        bool c_2 = eax_15 + i_5[2] u< eax_15
        *i_5 = eax_15 + i_5[2]
        i_5[1] = adc.d(edx_3, i_5[3], c_2)
        uint32_t esi_4 = edx_2 u>> 0x1b
        int32_t edi_6 = (eax_6 u>> 0x1b | edx_2 << 5) ^ edx_2 u>> 0xd
        float xmm2_4[0x2] = ((((edi_6 << ((neg.d(esi_4)).b & 0x1f) | edi_6 u>> esi_4.b) & 0x7fffff)
            | 0x3f800000) - 1f) * (xmm0_8 - xmm0_7) + xmm0_7
        float xmm0_14
        
        if (0 f<= xmm2_4)
            double xmm0_16 = _mm_cvtps_pd(xmm2_4)
            
            if (0 f> xmm0_16)
                _libm_sse2_sqrt_precise(arg5, arg4, i_2)
            else
                xmm0_16 = _mm_sqrt_sd(xmm0_16, xmm0_16)
            
            xmm0_14 = fconvert.s(xmm0_16)
        else
            double xmm0_11 = fconvert.d(xmm2_4[0] ^ (data_8937c0.o).d)
            
            if (0 f> xmm0_11)
                _libm_sse2_sqrt_precise(arg5, arg4, i_2)
                xmm0_14 = fconvert.s(xmm0_11) ^ 0x80000000
            else
                xmm0_14 = fconvert.s(_mm_sqrt_sd(xmm0_11, xmm0_11)) ^ 0x80000000
        
        arg2 = var_840
        arg3 = i_2
        var_610[var_844] = xmm0_14
        esi = var_844 + 1
        result = *arg2
        var_844 = esi
    while (esi s< result)

int32_t* i_1 = 0x4000
int32_t* edi_9 = arg6 + 8
i_2 = 0x4000
int32_t* i

do
    int32_t esi_6 = 0
    
    if (result s> 0)
        float var_844_1 = *edi_9
        
        do
            float xmm0_19 = *(&var_40c + (esi_6 << 3)) f- edi_9[-1]
            float xmm2_7 = var_410[esi_6 * 2] f- edi_9[-2]
            float xmm1_5 = var_810[esi_6]
            int32_t __saved_ebp
            float xmm0_26 = sub_4ea090(&__saved_ebp, 
                ((xmm0_19 * xmm0_19 + xmm2_7 * xmm2_7) ^ 0x80000000) / (xmm1_5 * xmm1_5)
                    * (arg2[5] f+ 1f)) f* var_610[esi_6]
            esi_6 += 1
            arg2 = var_840
            float xmm0_27 = xmm0_26 + var_844_1
            *edi_9 = xmm0_27
            result = *arg2
            var_844_1 = xmm0_27
        while (esi_6 s< result)
        
        i_1 = i_2
    
    edi_9 = &edi_9[3]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
CookieCheckFunction(result)
return result
