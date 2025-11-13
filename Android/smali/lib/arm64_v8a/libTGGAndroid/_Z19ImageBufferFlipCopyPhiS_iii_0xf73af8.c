// 函数: _Z19ImageBufferFlipCopyPhiS_iii
// 地址: 0xf73af8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = (arg6 - 1) * arg4

if ((x8_1 & 0x80000000) != 0)
    return 

uint8_t* x20_1 = arg1
void* x21_1 = &arg3[zx.q(x8_1)]

do
    memcpy(x21_1, x20_1, sx.q(arg5))
    x21_1 += 0 - sx.q(arg4)
    x20_1 = &x20_1[sx.q(arg2)]
while (x21_1 u>= arg3)
