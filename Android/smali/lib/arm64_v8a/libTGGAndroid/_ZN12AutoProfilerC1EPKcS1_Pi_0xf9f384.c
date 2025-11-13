// 函数: _ZN12AutoProfilerC1EPKcS1_Pi
// 地址: 0xf9f384
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x3
int32_t x21 = *entry_x3

if (x21 == 0xffffffff)
    uint64_t x9_1 = *gProfilerGlobals
    
    if (x9_1 == 0)
        x21 = -1
    else
        char** x9_3 = x9_1 + sx.q(*(x9_1 + 0xbc6608)) * 0x28 + 0xb9b688
        *x9_3 = arg2
        x9_3[1] = arg3
        uint64_t x9_4 = *gProfilerGlobals
        x21 = *(x9_4 + 0xbc6608)
        *(x9_4 + 0xbc6608) = x21 + 1
    
    *entry_x3 = x21

uint64_t x22 = *gProfilerGlobals

if (x22 != 0 && zx.d(*(x22 + 0xbc6610)) != 0)
    int64_t x23_1 = sx.q(*(x22 + 0xb9b680))
    int64_t x24_1 = sx.q(*(x22 + x23_1 * 0x4a490 + 0x3a980))
    
    if (x24_1.d != 0x2710)
        *(x22 + x23_1 * 0x4a490 + 0x3a980) = x24_1.d + 1
        char** x8_6 = x22 + x23_1 * 0x4a490 + x24_1 * 0x18
        *x8_6 = XGetMachineTime()
        *(x8_6 + 0xc) = 1
        x8_6[1].d = x21
        x21 = *entry_x3

*arg1 = x21
