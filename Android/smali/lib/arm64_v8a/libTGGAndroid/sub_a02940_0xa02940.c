// 函数: sub_a02940
// 地址: 0xa02940
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 s< 1)
    return 

uint64_t i_3 = zx.q(arg4)
int32_t* x19_1 = arg3
char* x20_1 = arg2
int32_t* x21_1 = arg1
uint64_t x22_1 = 0
uint64_t i_2 = i_3
char* x10_1 = arg2
int32_t* x11_1 = arg1
int32_t var_cd0[0x320]
uint64_t i

do
    if (zx.d(*x10_1) == 0)
        var_cd0[sx.q(x22_1.d)] = *x11_1
        x22_1 = zx.q(x22_1.d + 1)
    
    x11_1 = &x11_1[1]
    i = i_2
    i_2 -= 1
    x10_1 = &x10_1[1]
while (i != 1)

if (arg4 s< 1)
    return 

uint64_t i_1

do
    int32_t x8_2
    
    if (zx.d(*x20_1) == 0)
        int64_t x9_1 = (RandomInt(&data_14a71e8, x22_1.d) & 0xffffffff) << 0x20 s>> 0x1e
        x22_1 = sx.q(x22_1.d) - 1
        x8_2 = *(&var_cd0 + x9_1)
        *(&var_cd0 + x9_1) = var_cd0[x22_1]
    else
        x8_2 = *x21_1
    
    *x19_1 = x8_2
    x19_1 = &x19_1[1]
    x21_1 = &x21_1[1]
    i_1 = i_3
    i_3 -= 1
    x20_1 = &x20_1[1]
while (i_1 != 1)
