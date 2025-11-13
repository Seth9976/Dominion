// 函数: _Z12ComputeFancyRK10TextLayoutRK15FancyStringDataii
// 地址: 0x10258c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0 = *(arg2 + 0x10)
int128_t* entry_x8
*entry_x8 = *arg2
entry_x8[1] = v0
v0 = *(arg2 + 0x50)
int128_t v3 = *(arg2 + 0x20)
int128_t v2 = *(arg2 + 0x30)
entry_x8[4] = *(arg2 + 0x40)
entry_x8[5] = v0
entry_x8[2] = v3
entry_x8[3] = v2
v0 = *(arg2 + 0x80)
int64_t x8 = *(arg2 + 0x90)
int128_t v1 = *(arg2 + 0x60)
entry_x8[7] = *(arg2 + 0x70)
entry_x8[8] = v0
entry_x8[9].q = x8
entry_x8[6] = v1

if (arg3 s> arg4)
    return 

int64_t x21_1 = zx.q(arg3) << 0x20 s>> 0x1a
int32_t i_1 = arg4 - arg3 + 1
int32_t i

do
    int32_t* x8_2 = *(arg1 + 0x20)
    
    if (*(x8_2 + x21_1) == 1)
        MergeFancyFont(entry_x8, *(x8_2 + x21_1 + 0x20))
    
    i = i_1
    i_1 -= 1
    x21_1 += 0x40
while (i != 1)
