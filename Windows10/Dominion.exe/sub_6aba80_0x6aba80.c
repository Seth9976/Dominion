// 函数: sub_6aba80
// 地址: 0x6aba80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
int32_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
int32_t performanceCount_4 = arg2[1].d
int32_t var_2c = 0x400
int32_t var_28 = 0x1800
int32_t performanceCount = performanceCount_4
int32_t eax = sub_6a9570(0x400, performanceCount_4)
int32_t edi = eax
int32_t var_24 = edi

if (edi != 0x1000)
    sub_63b870(eax, &data_801800, "processedImage.pitch == imageWidth * (int)sizeof(uint32)", 
        "C:\x\ax2017\Engine\TextureImport.cpp", 0x4f1, "ProcessCylinderCubeMap")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ecx_1 = sub_687730(sub_6a9660(eax, 0x1800, 0x400, performanceCount_4))
int32_t i = 0
float xmm2 = 1f
int32_t var_30 = ecx_1

do
    void* var_64_1 = ((i * edi) << 0xa) + ecx_1
    int32_t j = 0
    int32_t j_1 = 0
    
    do
        int32_t k = 0
        float xmm0_2 = _mm_cvtepi32_ps(zx.o(j))
        int128_t xmm0_6 = (xmm0_2 + xmm0_2) * 0.0009765625f - 1f + 0.00048828125f
        int32_t var_3c_1 = xmm0_6
        uint32_t* ecx_3
        
        do
            float xmm1_2 = _mm_cvtepi32_ps(zx.o(k))
            int128_t xmm1_7 = ((xmm1_2 + xmm1_2) * 0.0009765625f - 1f + 0.00048828125f) ^ 0x80000000
            float var_70_1
            float var_68_1
            int128_t xmm3_1
            
            if (i == 0)
                xmm3_1 = 0x3f800000
                xmm2 = xmm0_6.d ^ 0x80000000
                var_70_1 = xmm2
                xmm1_7 ^= 0x80000000
                var_68_1 = xmm1_7
            else if (i != 1)
                xmm3_1 = xmm1_7
                
                if (i == 2)
                    xmm1_7 = 0x3f800000
                    xmm2 = xmm0_6.d ^ 0x80000000
                    var_70_1 = xmm2
                    var_68_1 = xmm1_7
                else if (i != 3)
                    xmm1_7 = xmm0_6
                    
                    if (i != 4)
                        xmm2 = -1f
                        var_70_1 = -1f
                        xmm1_7 ^= 0x80000000
                        var_68_1 = xmm1_7
                    else
                        var_68_1 = xmm0_6
                        var_70_1 = 1f
                else
                    xmm3_1 ^= 0x80000000
                    xmm2 = xmm0_6.d ^ 0x80000000
                    xmm1_7 = 0xbf800000
                    var_70_1 = xmm2
                    var_68_1 = xmm1_7
            else
                xmm3_1 = 0xbf800000
                xmm2 = xmm0_6.d ^ 0x80000000
                var_70_1 = xmm2
                var_68_1 = xmm1_7
            
            float xmm2_5 =
                1f / sub_4ac580(ebp, xmm1_7.d f* xmm1_7 + xmm3_1.d f* xmm3_1 + xmm2 * xmm2)
            float xmm0_13[0x2] = xmm2_5 * var_68_1
            float xmm1_13[0x2] = xmm2_5 * xmm3_1
            float xmm2_6 = xmm2_5 * var_70_1
            float var_68_2 = xmm0_13
            float var_6c_2 = xmm1_13
            int64_t var_60_1 = _mm_cvtps_pd(xmm0_13)
            unimplemented  {fld st0, qword [esp+0x20]}
            int64_t var_60_2 = _mm_cvtps_pd(xmm1_13)
            unimplemented  {fld st0, qword [esp+0x20]}
            _CIatan2()
            double var_60_3 = fconvert.d(unimplemented  {fstp qword [esp+0x20], st0})
            unimplemented  {fstp qword [esp+0x20], st0}
            int16_t top = top - 1
            var_60_3.d = 1f - (_mm_cvtpd_ps(zx.o(var_60_3)) + 3.14159274f) / 6.28318548f
            float xmm0_20 = sub_4ac580(ebp, var_68_2 * var_68_2 + var_6c_2 * var_6c_2)
            float xmm2_7
            
            if (9.99999975e-06f <= xmm0_20)
                xmm2_7 = 0.5f - xmm2_6 / xmm0_20
            else if (xmm2_6 f<= 0)
                xmm2_7 = 1f
            else
                xmm2_7 = -1f
            
            ecx_3 = var_64_1
            k += 1
            xmm0_6 = var_3c_1
            xmm2 = 1f
            *ecx_3 = sub_6ab610(arg2, var_60_3.d, xmm2_7)
            var_64_1 = &ecx_3[1]
        while (k s< 0x400)
        
        j = j_1 + 1
        var_64_1 = &ecx_3[1]
        j_1 = j
    while (j s< 0x400)
    
    edi = var_24
    i += 1
    ecx_1 = var_30
while (i s< 6)

int32_t eax_9 = *arg2

if (eax_9 != 0)
    _aligned_free(eax_9)

int32_t performanceCount_2 = performanceCount
*arg2 = var_30.o
arg2[1].d = performanceCount_2
QueryPerformanceCounter(&performanceCount)
int32_t performanceCount_3 = performanceCount
int32_t var_4c
int32_t var_34
uint32_t var_8c = sub_63c000(performanceCount_3 - performanceCount_1, 
    sbb.d(var_4c, var_34, performanceCount_3 u< performanceCount_1))
return sub_63b5f0("ProcessCylinderCubeMap time %d ms")
