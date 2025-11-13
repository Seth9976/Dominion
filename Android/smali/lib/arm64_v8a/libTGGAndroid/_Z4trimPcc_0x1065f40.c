// 函数: _Z4trimPcc
// 地址: 0x1065f40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = arg1 - 1

do
    result += 1
while (zx.d(*result) == zx.d(arg2))

int64_t x9 = strlen(result) << 0x20
int64_t x10

if (x9 + -0x100000000 s>= 0)
    x10 = x9 + -0x100000000
else
    x10 = -1

int64_t x10_1

x10_1 = x10 s< 1 ? x10 : 1

int64_t x9_2

if (x9 + -0x100000000 s> 0x100000000 - x9)
    x9_2 = x9 + -0x100000000
else
    x9_2 = 0x100000000 - x9

if (zx.d(*(result + x10_1 * (x9_2 u>> 0x20))) == zx.d(arg2))
    int64_t x8_3 = (x9 + -0x100000000) s>> 0x20
    uint32_t i
    
    do
        void* x9_6 = result + x8_3
        i = zx.d(*(x9_6 - 1))
        x8_3 -= 1
        *x9_6 = 0
    while (i == zx.d(arg2))

return result
