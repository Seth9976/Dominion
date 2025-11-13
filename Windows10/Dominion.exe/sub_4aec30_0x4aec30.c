// 函数: sub_4aec30
// 地址: 0x4aec30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_cf65b8
int32_t result = data_8c40a8
int32_t i = 0
float xmm4_3 =
    (_mm_cvtepi32_ps(zx.o(*(eax + 0x14))) - 0f) / (_mm_cvtepi32_ps(zx.o(*(eax + 0x18))) - 0f)

do
    int32_t eax_1 = result * 3
    int32_t xmm0_6 =
        sub_4ae0b0(xmm4_3 - float.s(*(i + &data_8c40ac)) / float.s(*(i + &data_8c40b0)))
    
    if (not(sub_4ae0b0(xmm4_3 - float.s((&data_8c40ac)[eax_1]) / float.s((&data_8c40b0)[eax_1]))
            f<= xmm0_6))
        result = *(i + &data_8c40a8)
    
    i += 0xc
while (i u< 0x30)

return result
