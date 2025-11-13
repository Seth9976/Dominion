// 函数: _Z14ProfilerEnableb
// 地址: 0xfa0ac8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x10 = arg1.d & 1
int32_t x11

x11 = x10 != 0 ? 0x80 : 0

uint64_t x8 = *gpGameData
*(x8 + 0x38) = (*(x8 + 0x38) & 0xffffff7f) | x11
char* x8_2 = *gProfilerGlobals + 0xbc6610
uint32_t x9_3 = zx.d(*x8_2)
x8_2[8] = x10.b

if (x9_3 != 0)
    return 

x8_2[2] = 1
