// 函数: _Z18ProfilerBeginEventPKcS0_Pi
// 地址: 0xf9f004
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *arg3

if (x20 == 0xffffffff)
    uint64_t x9_1 = *gProfilerGlobals
    
    if (x9_1 == 0)
        x20 = -1
    else
        char** x9_3 = x9_1 + sx.q(*(x9_1 + 0xbc6608)) * 0x28 + 0xb9b688
        *x9_3 = arg1
        x9_3[1] = arg2
        uint64_t x9_4 = *gProfilerGlobals
        x20 = *(x9_4 + 0xbc6608)
        *(x9_4 + 0xbc6608) = x20 + 1
    
    *arg3 = x20

uint64_t x21 = *gProfilerGlobals

if (x21 != 0 && zx.d(*(x21 + 0xbc6610)) != 0)
    int64_t x22_1 = sx.q(*(x21 + 0xb9b680))
    int64_t x23_1 = sx.q(*(x21 + x22_1 * 0x4a490 + 0x3a980))
    
    if (x23_1.d != 0x2710)
        *(x21 + x22_1 * 0x4a490 + 0x3a980) = x23_1.d + 1
        int64_t* x8_6 = x21 + x22_1 * 0x4a490 + x23_1 * 0x18
        *x8_6 = XGetMachineTime()
        *(x8_6 + 0xc) = 1
        x8_6[1].d = x20
        x20 = *arg3

return zx.q(x20)
