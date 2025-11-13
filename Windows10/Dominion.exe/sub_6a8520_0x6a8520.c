// 函数: sub_6a8520
// 地址: 0x6a8520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
uint32_t eax = sub_6a82e0(ecx)
int32_t* ebx = *(eax + 8)
int32_t* result = sub_710140(**ebx, arg2)

if (result != 0)
    int32_t edx_1
    edx_1.b = arg3 == 0
    result = sub_7129a0(result, edx_1, ebx, result, edx_1)
    
    if (arg3 == 0)
        float eax_3 = (sub_63eb70() & 0x7fffff) | 0x3f800000
        float xmm0_2 = ((sub_63eb70() & 0x7fffff) | 0x3f800000) - 1f
        void* eax_7 = *(eax + 4)
        float xmm2_4 = (eax_3 - 1f) * 100f + xmm0_2
        *(eax_7 + 0x48) = xmm2_4 f+ *(eax_7 + 0x48)
        sub_711450(*(eax + 8), xmm2_4)
        sub_7117c0(*(eax + 8), *(eax + 4))
        result = sub_7145c0(*(eax + 4))
    
    *(eax + 0xc) = arg3

return result
