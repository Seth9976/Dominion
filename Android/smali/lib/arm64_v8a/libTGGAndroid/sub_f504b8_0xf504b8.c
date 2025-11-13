// 函数: sub_f504b8
// 地址: 0xf504b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int32_t x0_1 = sub_f4f6d4(arg4, arg2, arg1)
int32_t x0_3
int128_t v0
int128_t v1
int128_t v2
x0_3, v0, v1, v2 = sub_f4f6d4(arg4, arg3, arg2)
int64_t result

if ((x0_1 & 1) != 0)
    int128_t var_90_1 = *arg1
    int128_t var_80_1 = arg1[1]
    char x8_1 = (arg1[4].q).b
    int128_t var_70_1 = arg1[2]
    int128_t var_60_1 = arg1[3]
    
    if ((x0_3 & 1) == 0)
        *arg1 = *arg2
        v0 = arg2[3]
        v2 = arg2[1]
        arg1[4].b = arg2[4].b
        arg1[2] = arg2[2]
        arg1[3] = v0
        arg1[1] = v2
        arg2[4].b = x8_1
        arg2[2] = var_70_1
        arg2[3] = var_60_1
        *arg2 = var_90_1
        arg2[1] = var_80_1
        int32_t x0_7
        int128_t v0_2
        int128_t v1_2
        int128_t v2_2
        x0_7, v0_2, v1_2, v2_2 = sub_f4f6d4(arg4, arg3, arg2)
        
        if ((x0_7 & 1) == 0)
            result = 1
        else
            int128_t var_90_4 = *arg2
            int128_t var_80_4 = arg2[1]
            char x8_12 = (arg2[4].q).b
            int128_t var_70_4 = arg2[2]
            int128_t var_60_4 = arg2[3]
            v0_2 = arg3[3]
            v1_2 = arg3[1]
            arg2[4].b = arg3[4].b
            arg2[2] = arg3[2]
            arg2[3] = v0_2
            arg2[1] = v1_2
            *arg2 = *arg3
            arg3[4].b = x8_12
            arg3[2] = var_70_4
            arg3[3] = var_60_4
            *arg3 = var_90_4
            arg3[1] = var_80_4
            result = 2
    else
        result = 1
        *arg1 = *arg3
        v0 = arg3[3]
        v2 = arg3[1]
        arg1[4].b = arg3[4].b
        arg1[2] = arg3[2]
        arg1[3] = v0
        arg1[1] = v2
        arg3[4].b = x8_1
        arg3[2] = var_70_1
        arg3[3] = var_60_1
        *arg3 = var_90_1
        arg3[1] = var_80_1
else if ((x0_3 & 1) == 0)
    result = 0
else
    int128_t var_90_2 = *arg2
    int128_t var_80_2 = arg2[1]
    char x8_4 = (arg2[4].q).b
    int128_t var_70_2 = arg2[2]
    int128_t var_60_2 = arg2[3]
    v0 = arg3[3]
    v1 = arg3[1]
    arg2[4].b = arg3[4].b
    arg2[2] = arg3[2]
    arg2[3] = v0
    arg2[1] = v1
    *arg2 = *arg3
    arg3[4].b = x8_4
    arg3[2] = var_70_2
    arg3[3] = var_60_2
    *arg3 = var_90_2
    arg3[1] = var_80_2
    int32_t x0_5
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    x0_5, v0_1, v1_1, v2_1 = sub_f4f6d4(arg4, arg2, arg1)
    
    if ((x0_5 & 1) == 0)
        result = 1
    else
        int128_t var_90_3 = *arg1
        int128_t var_80_3 = arg1[1]
        char x8_7 = (arg1[4].q).b
        int128_t var_70_3 = arg1[2]
        int128_t var_60_3 = arg1[3]
        v0_1 = arg2[3]
        v1_1 = arg2[1]
        arg1[4].b = arg2[4].b
        arg1[2] = arg2[2]
        arg1[3] = v0_1
        arg1[1] = v1_1
        *arg1 = *arg2
        arg2[4].b = x8_7
        arg2[2] = var_70_3
        arg2[3] = var_60_3
        *arg2 = var_90_3
        arg2[1] = var_80_3
        result = 2

if (*(x24 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
