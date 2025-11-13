// 函数: _Z15ProfileAddEvent17ProfilerEventTypeif
// 地址: 0xf9ef44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_40 = v8
uint64_t x21 = *gProfilerGlobals

if (x21 == 0 || zx.d(*(x21 + 0xbc6610)) == 0)
    return 

int64_t x22_1 = sx.q(*(x21 + 0xb9b680))
int64_t x23_1 = sx.q(*(x21 + x22_1 * 0x4a490 + 0x3a980))

if (x23_1.d == 0x2710)
    return 

*(x21 + x22_1 * 0x4a490 + 0x3a980) = x23_1.d + 1
ProfilerEventType* x8_6 = x21 + x22_1 * 0x4a490 + x23_1 * 0x18
*x8_6 = XGetMachineTime()
*(x8_6 + 8) = arg2
*(x8_6 + 0xc) = arg1.d
*(x8_6 + 0x10) = arg3.q.d
