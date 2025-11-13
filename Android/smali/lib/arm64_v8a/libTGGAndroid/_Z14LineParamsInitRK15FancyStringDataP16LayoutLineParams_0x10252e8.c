// 函数: _Z14LineParamsInitRK15FancyStringDataP16LayoutLineParams
// 地址: 0x10252e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
*entry_x8 = -1
entry_x8[1] = -1

if (arg2 == 0)
    __builtin_memset(&entry_x8[2], 0, 0x18)
    __builtin_memset(entry_x8 + 0x14, 0, 0x20)
    *(entry_x8 + 0x34) = 0f
    entry_x8[7].d = 0
    return 

entry_x8[2].d = *(arg2 + 0x10) + 1
float v0 = *(arg2 + 0x18)

if (not(v0 != 0f))
    v0 = *(arg2 + 0x28)

entry_x8[5].d = v0
v0 = *(arg2 + 0x1c)

if (not(v0 != 0f))
    v0 = *(arg2 + 0x2c)

*(entry_x8 + 0x2c) = v0
v0 = *(arg2 + 0x24)

if (not(v0 != 0f))
    v0 = *(arg2 + 0x30)

entry_x8[6].d = v0
v0 = *(arg2 + 0x20)

if (not(v0 != 0f))
    v0 = *(arg2 + 0x34)

*(entry_x8 + 0x34) = v0
entry_x8[7].d = 0
