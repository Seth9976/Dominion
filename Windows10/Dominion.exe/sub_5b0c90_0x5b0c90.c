// 函数: sub_5b0c90
// 地址: 0x5b0c90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = arg2 * 3
_mm_unpacklo_ps(_mm_unpacklo_ps(*arg1, *(arg1 + (arg2 << 3))), 
    _mm_unpacklo_ps(*(arg1 + (arg2 << 2)), *(arg1 + (result << 2))))
return result
