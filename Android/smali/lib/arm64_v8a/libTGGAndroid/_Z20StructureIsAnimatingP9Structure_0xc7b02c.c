// 函数: _Z20StructureIsAnimatingP9Structure
// 地址: 0xc7b02c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_1 = *(arg1 + 0x38)

if (x8_1 == 0)
    return 0

return zx.q(*(x8_1 + 0x18) != 0 ? 1 : 0)
