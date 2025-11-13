// 函数: _ve_envelope_shift
// 地址: 0x10873b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = sx.q(*(arg1 + 8))
int64_t x0 = *(arg1 + 0xf0)
int64_t x9_1 = arg2 s/ x9
int64_t result = memmove(x0, x0 + (x9_1 << 0x20 s>> 0x1e), 
    zx.q((*(arg1 + 0x100) s/ x9).d + 2 - x9_1.d) << 0x20 s>> 0x1e)
int64_t x8_4 = *(arg1 + 0x108)
*(arg1 + 0x100) -= arg2

if ((x8_4 & 0xffffffff80000000) == 0)
    *(arg1 + 0x108) = x8_4 - arg2

*(arg1 + 0x110) -= arg2
return result
