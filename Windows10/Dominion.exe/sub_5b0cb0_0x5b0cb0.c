// 函数: sub_5b0cb0
// 地址: 0x5b0cb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

float xmm1[0x4] = *arg2
int32_t xmm0_1 = _mm_shuffle_ps(xmm1, xmm1, 1)
*arg3 = xmm1
void* const __return_addr_1 = __return_addr
(*arg3)[arg4] = xmm0_1
(*arg3)[arg4 * 2] = _mm_shuffle_ps(xmm1, xmm1, 2)
int32_t result = arg4 * 3
(*arg3)[result] = _mm_shuffle_ps(xmm1, xmm1, 3)
return result
