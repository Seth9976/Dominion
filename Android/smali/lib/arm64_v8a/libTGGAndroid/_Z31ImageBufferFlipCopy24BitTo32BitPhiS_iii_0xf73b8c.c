// 函数: _Z31ImageBufferFlipCopy24BitTo32BitPhiS_iii
// 地址: 0xf73b8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = (arg6 - 1) * arg4

if ((x10 & 0x80000000) != 0 || arg5 s< 1)
    return 

void* x10_1 = &arg3[sx.q(x10)]

do
    int64_t x12_1 = 0
    uint8_t* x13_1 = arg1
    
    do
        uint16_t x14_1 = zx.w(x13_1[2])
        int16_t x15_1 = *x13_1
        x13_1 = &x13_1[3]
        *(x10_1 + (x12_1 << 2)) = zx.d(x15_1) | zx.d(x14_1) << 0x10 | 0xff000000
        x12_1 += 1
    while (arg5 != x12_1.d)
    
    x10_1 += 0 - sx.q(arg4)
    arg1 = &arg1[sx.q(arg2)]
while (x10_1 u>= arg3)
