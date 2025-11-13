// 函数: sub_fe92b4
// 地址: 0xfe92b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t var_130 = arg9
int128_t var_120 = arg10
int128_t var_110 = arg11
int128_t var_100 = arg12
int128_t var_f0 = arg13
int128_t var_e0 = arg14
int128_t var_d0 = arg15
int128_t var_c0 = arg16

if (((arg5 | arg4) & 0x80000000) != 0)
    return 0

int64_t var_70_1 = -0x8000000000
void arg_18
int128_t var_b0 = (&arg_18).o
int128_t var_a0_1 = (&var_b0).o
int64_t* x19_2
int32_t x20_2
x19_2, x20_2 = sub_fe943c(arg1, arg19, &var_b0)
int32_t var_64 = 0

if (arg5 s>= 1)
    uint32_t x9_1 = *stbi__flip_vertically_on_write
    int32_t fp_1
    
    fp_1 = x9_1 != 0 ? 1 : -1
    
    int32_t x8_2
    
    if (x9_1 == 0)
        x8_2 = arg5 - 1
    else
        x8_2 = 0
    
    int32_t i_1
    
    i_1 = x9_1 != 0 ? arg5 : -1
    
    if (arg4 s<= 0)
        int32_t i_2 = x8_2 - i_1
        int32_t i
        
        do
            (*x19_2)(x19_2[1], &var_64, zx.q(arg18))
            i = i_2
            i_2 += fp_1
        while (i != neg.d(fp_1))
    else
        int64_t x27_1 = sx.q(arg6)
        uint64_t x28_1 = zx.q(x8_2)
        uint64_t j_2 = zx.q(arg4)
        char* x26_1 = arg8 + x27_1 * x28_1 * j_2
        
        do
            char* x23_2 = x26_1
            uint64_t j_1 = j_2
            uint64_t j
            
            do
                sub_fe9598(x19_2, arg6, arg17, x20_2, x23_2)
                j = j_1
                j_1 -= 1
                x23_2 = &x23_2[x27_1]
            while (j != 1)
            (*x19_2)(x19_2[1], &var_64, zx.q(arg18))
            x28_1 += sx.q(fp_1)
            x26_1 = &x26_1[muls.dp.d(fp_1, arg6) * j_2]
        while (i_1 != x28_1.d)

return 1
