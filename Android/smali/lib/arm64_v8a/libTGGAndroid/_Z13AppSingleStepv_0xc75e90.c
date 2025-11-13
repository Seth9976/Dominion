// 函数: _Z13AppSingleStepv
// 地址: 0xc75e90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gpGameData
uint32_t x9 = zx.d(*(x8 + 0x3e))
*(x8 + 0x40) = 0

if (x9 == 0)
    *(x8 + 0x3e) = 1
    return 

*(x8 + 0x3f) = 1
