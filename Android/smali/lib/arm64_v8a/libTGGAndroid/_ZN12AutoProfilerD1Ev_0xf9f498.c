// 函数: _ZN12AutoProfilerD1Ev
// 地址: 0xf9f498
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x19 = *gProfilerGlobals

if (x19 == 0 || zx.d(*(x19 + 0xbc6610)) == 0)
    return 

int64_t x20_1 = sx.q(*(x19 + 0xb9b680))
int64_t x21_1 = sx.q(*(x19 + x20_1 * 0x4a490 + 0x3a980))

if (x21_1.d == 0x2710)
    return 

int32_t* entry_x0
int32_t x22_1 = *entry_x0
*(x19 + x20_1 * 0x4a490 + 0x3a980) = x21_1.d + 1
int32_t** x8_6 = x19 + x20_1 * 0x4a490 + x21_1 * 0x18
*x8_6 = XGetMachineTime()
*(x8_6 + 0xc) = 2
x8_6[1].d = x22_1
