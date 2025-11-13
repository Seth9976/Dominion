// 函数: sub_1102b44
// 地址: 0x1102b44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()

if (zx.d(*(arg1 + 0x268)) != 0)
    __builtin_memset(arg2, 0, 0x48)
    return zx.o(0)

*arg2 = *(arg1 + 0x220)
int128_t result = *(arg1 + 0x250)
int128_t v2 = *(arg1 + 0x230)
arg2[4].q = *(arg1 + 0x260)
arg2[2] = *(arg1 + 0x240)
arg2[3] = result
arg2[1] = v2
return result
