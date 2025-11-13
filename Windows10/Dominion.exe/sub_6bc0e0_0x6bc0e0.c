// 函数: sub_6bc0e0
// 地址: 0x6bc0e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float* var_c = arg1
int32_t esi
int32_t var_14 = esi
void* eax = arg1[0xb9]
*(eax + 0x14) += 1
sub_6bb270(arg1, arg1, esi.w, arg1)
int32_t eax_2 = sub_5af880(*arg1[0xb9])
int32_t* ebx_1 = arg1[0xb7] i* 0x168 + *eax_2
void* i_2 = sub_6dcf50(eax_2, ebx_1, &data_8cc5f8, 3)
void* i_1 = i_2

if (i_1 s> 0)
    void* i
    
    do
        i_2 = sub_6bc970(arg1)
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result = sub_6dcf50(i_2, ebx_1, &data_8cc5f8, 4)
arg1[0xbe] = _mm_cvtepi32_ps(zx.o(result)) / 100f
return result
