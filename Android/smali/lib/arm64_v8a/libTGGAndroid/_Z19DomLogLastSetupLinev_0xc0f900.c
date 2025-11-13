// 函数: _Z19DomLogLastSetupLinev
// 地址: 0xc0f900
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = sx.q(*(gLog + 0x10))

if (x9.d == 0)
    return 0

int64_t i_1 = x9 << 6
uint64_t result = 0
int32_t x9_3 = ((i_1 - -0x3fffffffc0) u>> 6).d + 1
int32_t* x10_1 = *(gLog + 8) + 8
int64_t i

do
    if (*x10_1 == 4)
        return result
    
    result = zx.q(result.d + 1)
    i = i_1
    i_1 -= 0x40
    x10_1 = &x10_1[0x10]
while (i != 0x40)
return zx.q(x9_3)
