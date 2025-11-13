// 函数: stbtt_PackBegin
// 地址: 0x1008b8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x0 = malloc(0x14)
int32_t x28 = arg3 - arg6
int64_t x0_2 = malloc(sx.q(x28))

if (x0 == 0 || x0_2 == 0)
    if (x0 != 0)
        free(x0)
    
    if (x0_2 != 0)
        free(x0_2)
    
    return 0

int32_t x9_1

x9_1 = arg5 == 0 ? arg3 : arg5

arg1[2].d = arg3
*(arg1 + 0x14) = arg4
*arg1 = arg7
arg1[1] = x0
arg1[6] = arg2
arg1[7] = x0_2
arg1[5].d = 1
arg1[3].d = x9_1
*(arg1 + 0x1c) = arg6
arg1[4] = 0x100000000
*x0 = x28
x0[1] = arg4 - arg6
*(x0 + 8) = 0
x0[4] = 0

if (arg2 == 0)
    return 1

memset(arg2, 0, sx.q(arg4 * arg3))
return 1
