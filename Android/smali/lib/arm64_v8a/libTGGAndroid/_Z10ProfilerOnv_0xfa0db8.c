// 函数: _Z10ProfilerOnv
// 地址: 0xfa0db8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpGameData
int32_t x9 = *(x8 + 0x38)

if ((x9 & 0x80) != 0)
    return 

*(x8 + 0x38) = x9 | 0x80
uint64_t x8_1 = *gProfilerGlobals

if (x8_1 == 0)
    return 

uint32_t x10_1 = zx.d(*(x8_1 + 0xbc6610))
*(x8_1 + 0xbc6618) = 1

if (x10_1 == 0)
    *(x8_1 + 0xbc6612) = 1
