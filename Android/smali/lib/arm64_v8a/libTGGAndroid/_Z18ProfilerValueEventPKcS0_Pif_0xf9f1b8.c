// 函数: _Z18ProfilerValueEventPKcS0_Pif
// 地址: 0xf9f1b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *arg3

if (x19 == 0xffffffff)
    uint64_t x9_1 = *gProfilerGlobals
    
    if (x9_1 == 0)
        x19 = -1
    else
        char** x9_3 = x9_1 + sx.q(*(x9_1 + 0xbc6608)) * 0x28 + 0xb9b688
        *x9_3 = arg1
        x9_3[1] = arg2
        uint64_t x9_4 = *gProfilerGlobals
        x19 = *(x9_4 + 0xbc6608)
        *(x9_4 + 0xbc6608) = x19 + 1
    
    *arg3 = x19

uint64_t x20 = *gProfilerGlobals

if (x20 == 0 || zx.d(*(x20 + 0xbc6610)) == 0)
    return 

int64_t x21_1 = sx.q(*(x20 + 0xb9b680))
int64_t x22_1 = sx.q(*(x20 + x21_1 * 0x4a490 + 0x3a980))

if (x22_1.d == 0x2710)
    return 

*(x20 + x21_1 * 0x4a490 + 0x3a980) = x22_1.d + 1
char** x8_6 = x20 + x21_1 * 0x4a490 + x22_1 * 0x18
*x8_6 = XGetMachineTime()
x8_6[1].d = x19
*(x8_6 + 0xc) = 3
x8_6[2].d = arg4
