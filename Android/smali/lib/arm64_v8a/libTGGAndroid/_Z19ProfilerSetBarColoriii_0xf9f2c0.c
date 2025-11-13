// 函数: _Z19ProfilerSetBarColoriii
// 地址: 0xf9f2c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = *gProfilerGlobals

if (x22 == 0 || zx.d(*(x22 + 0xbc6610)) == 0)
    return 

int64_t x23_1 = sx.q(*(x22 + 0xb9b680))
int64_t x24_1 = sx.q(*(x22 + x23_1 * 0x4a490 + 0x3aa88))

if (x24_1.d == 0x10)
    return 

*(x22 + x23_1 * 0x4a490 + 0x3aa88) = x24_1.d + 1
*(x22 + x23_1 * 0x4a490 + (x24_1 << 4) + 0x3a988) = XGetMachineTime()
*(x22 + x23_1 * 0x4a490 + (x24_1 << 4) + 0x3a990) =
    zx.d(arg1.b) | zx.d((zx.d(arg2.b) << 8).w) | zx.d(arg3.w) << 0x10 | 0xff000000
