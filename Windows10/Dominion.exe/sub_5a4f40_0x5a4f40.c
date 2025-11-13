// 函数: sub_5a4f40
// 地址: 0x5a4f40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ecx = __chkstk(0x10004)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t i = 0
int32_t* ebx = ecx + 0xeffc0
void var_10008

do
    int32_t ecx_1 = 0
    int32_t xmm1_1 = (zx.o(0)).d
    int32_t* edx_1 = ecx + ((*ebx + 0x3fff0) << 2)
    int32_t j = *edx_1
    float xmm1_2
    
    if (j == 0xffffffff)
        xmm1_2 = (zx.o(0)).d
    else
        do
            edx_1 = &edx_1[1]
            xmm1_1 = xmm1_1 f+ *(ecx + j * 0xc + 8)
            ecx_1 += 1
            j = *edx_1
        while (j != 0xffffffff)
        
        if (ecx_1 s< 3)
            xmm1_2 = (zx.o(0)).d
        else
            xmm1_2 = xmm1_1 f/ _mm_cvtepi32_ps(zx.o(ecx_1))
    
    *(&var_10008 + (i << 2)) = xmm1_2
    ebx = &ebx[1]
    i += 1
while (i s< 0x4000)

void* edx_2 = ecx + 0x14
uint32_t result

for (int32_t i_1 = 0; i_1 s< 0x4000; )
    edx_2 += 0x60
    *(edx_2 - 0x6c) = *(&var_10008 + (i_1 << 2))
    void var_10004
    *(edx_2 - 0x60) = *(&var_10004 + (i_1 << 2))
    void var_10000
    *(edx_2 - 0x54) = *(&var_10000 + (i_1 << 2))
    void var_fffc
    *(edx_2 - 0x48) = *(&var_fffc + (i_1 << 2))
    void var_fff8
    *(edx_2 - 0x3c) = *(&var_fff8 + (i_1 << 2))
    void var_fff4
    *(edx_2 - 0x30) = *(&var_fff4 + (i_1 << 2))
    void var_fff0
    *(edx_2 - 0x24) = *(&var_fff0 + (i_1 << 2))
    int32_t var_ffec[0x3ff7]
    result = var_ffec[i_1]
    i_1 += 8
    *(edx_2 - 0x18) = result

CookieCheckFunction(result)
return result
