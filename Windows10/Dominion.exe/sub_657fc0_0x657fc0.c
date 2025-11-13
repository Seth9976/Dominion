// 函数: sub_657fc0
// 地址: 0x657fc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_147abe8
float xmm2 = *(eax + 0x2c)
int32_t* edi = arg1
float xmm1_1 = xmm2 f- edi[0xdc]
int32_t result = edi[0x5b3]

if (edi[0xd8] f+ edi[0xd7] > xmm1_1 || edi[0xd4] s> 1)
    sub_67f6b0(&edi[0xb9], xmm2 f- edi[0xdb])
    sub_67f6b0(&edi[0xc8], xmm1_1)
    arg1 = &edi[0xd7]
    float xmm0_4
    eax, xmm0_4 = sub_64c3c0(arg1, xmm1_1)
else
    edi[0xc8]

edi[0x588]
int32_t* var_30 = arg1
int32_t var_34 = data_c23bf4
float xmm0_7 = sub_6b7420(eax, edi[0x542], &edi[0x576])
float edx_1 = sub_657e50(edi)
float xmm0_10 = sub_4d5cf0(xmm0_7 / edx_1)
float xmm0_11

if (0 f<= xmm0_10)
    xmm0_11 = xmm0_10 + 0.5f
else
    xmm0_11 = xmm0_10 - 0.5f

float var_18_3 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_11))) * edx_1
return result
