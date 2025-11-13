// 函数: ov_fopen
// 地址: 0x107ad98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
FILE* fp
int128_t v0
int128_t v1
fp, v0, v1 = fopen(arg1, "rb")
int32_t x21

if (fp == 0)
    x21 = -1
else
    v0 = data_11816d0.o
    int128_t var_60 = data_11816c0.o
    int128_t var_50_1 = v0
    int32_t x0_1 = sub_107a99c(fp, arg2, 0, 0, &var_60)
    x21 = x0_1
    int32_t x0_3
    
    if (x0_1 == 0)
        x0_3 = sub_107ab78(arg2)
        x21 = x0_3
    
    if (x0_1 != 0 || x0_3 != 0)
        fclose(fp)

if (*(x22 + 0x28) == x8)
    return zx.q(x21)

__stack_chk_fail()
noreturn
