// 函数: _Z24UI2CountUnlockedElementsv
// 地址: 0x103bdd4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gUI2Editor + 0x6000))

if (x9.d s< 1)
    return 0

uint64_t result
int64_t i_4

if (x9.d u>= 3)
    int64_t (* const x13_1)() = gUI2Editor
    i_4 = x9 & 0xfffffffe
    int32_t x11_1 = 0
    int32_t x12_1 = 0
    int64_t i_3 = i_4
    int64_t i
    
    do
        void* x15_1 = *x13_1
        void* x16_1 = *(x13_1 + 0x18)
        i = i_3
        i_3 -= 2
        x13_1 += 0x30
        x11_1 += zx.d(*(x15_1 + 0x16)) ^ 1
        x12_1 += zx.d(*(x16_1 + 0x16)) ^ 1
    while (i != 2)
    result = zx.q(x12_1 + x11_1)
    
    if (i_4 != x9)
        goto label_103be5c
else
    i_4 = 0
    result = 0
label_103be5c:
    int64_t* x8_1 = gUI2Editor + i_4 * 0x18
    int64_t i_2 = x9 - i_4
    int64_t i_1
    
    do
        void* x10 = *x8_1
        x8_1 = &x8_1[3]
        i_1 = i_2
        i_2 -= 1
        result = zx.q(result.d + (zx.d(*(x10 + 0x16)) ^ 1))
    while (i_1 != 1)
return result
