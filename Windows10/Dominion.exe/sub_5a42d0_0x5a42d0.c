// 函数: sub_5a42d0
// 地址: 0x5a42d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* edi = arg2
int32_t* var_1c = edi

for (int32_t i = 0; i s< 0x4000; i += 1)
    float eax_2
    int32_t edx
    eax_2, edx = sub_5a41c0(arg1)
    edi[i * 2] = eax_2
    edi[i * 2 + 1] = edx

void* eax_3 = &edi[0x8000]
float* esi = &edi[1]
int128_t* ecx_2
float eax_4

do
    eax_4, ecx_2 = sub_5ac9f0(eax_3, eax_3, edi, 0x4000, var_1c)
    eax_4.b = 0
    int32_t i_5 = 0x3fff
    int32_t i_1
    
    do
        if (not(0.00100000005f f<= sub_4ae0b0(esi[-1] - esi[1]))
                && not(0.00100000005f f<= sub_4ae0b0(*esi - esi[2])))
            int32_t edx_2
            eax_4, ecx_2, edx_2 = sub_5a41c0(arg1)
            float var_10_2 = eax_4
            eax_4.b = 1
            esi[1] = var_10_2
            esi[2] = edx_2
        
        esi = &esi[2]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    edi = var_1c
    eax_3 = &edi[0x8000]
    esi = &edi[1]
while (eax_4.b != 0)
int128_t var_34
int128_t* var_48_2 = &var_34
__builtin_memset(&var_34, 0, 0x18)
int128_t var_18 = data_8935c0
sub_5a2ec0(&var_18, edi, ecx_2, &var_18)
int32_t* esi_1 = var_34.d
int32_t i_4 = var_34:4.d

if (i_4 s> 0)
    void* edx_5 = esi_1[6] + 4
    int32_t i_2
    
    do
        void** j = *(edx_5 + 8)
        int32_t ecx_4 = 1
        float xmm2_1 = *(edx_5 - 4)
        float xmm3_1 = *edx_5
        
        while (j != 0)
            xmm2_1 = xmm2_1 f+ j[3]
            xmm3_1 = xmm3_1 f+ j[4]
            j = *j
            ecx_4 += 1
        
        float xmm0_13 = _mm_cvtepi32_ps(zx.o(ecx_4))
        int32_t eax_6 = *(edx_5 + 4)
        edx_5 += 0x10
        float xmm1_1 = 1f / xmm0_13
        edi[eax_6 * 2] = xmm2_1 * xmm1_1
        edi[eax_6 * 2 + 1] = xmm3_1 * xmm1_1
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

void* i_3 = esi_1[0xb]
int32_t edi_1 = esi_1[0x17]
int32_t ebx_1 = esi_1[0x19]

for (; i_3 != 0; i_3 = esi_1[0xb])
    esi_1[0xb] = *(i_3 + 4)
    ebx_1(edi_1, i_3)

uint32_t result = ebx_1(edi_1, *esi_1)
CookieCheckFunction(result)
return result
