// 函数: _Z16ProfilerEndEventi
// 地址: 0xf9f10c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = *gProfilerGlobals

if (x20 == 0 || zx.d(*(x20 + 0xbc6610)) == 0)
    return 

int64_t x21_1 = sx.q(*(x20 + 0xb9b680))
int64_t x22_1 = sx.q(*(x20 + x21_1 * 0x4a490 + 0x3a980))

if (x22_1.d == 0x2710)
    return 

*(x20 + x21_1 * 0x4a490 + 0x3a980) = x22_1.d + 1
int32_t* x8_6 = x20 + x21_1 * 0x4a490 + x22_1 * 0x18
*x8_6 = XGetMachineTime()
*(x8_6 + 0xc) = 2
x8_6[2] = arg1
