// 函数: sub_f50700
// 地址: 0xf50700
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
int32_t x19 = sub_f504b8(arg1, arg2, arg3, arg6)
int32_t x0_2
int128_t v0
int128_t v1
int128_t v2
x0_2, v0, v1, v2 = sub_f4f6d4(arg6, arg4, arg3)

if ((x0_2 & 1) != 0)
    int128_t var_a0_1 = *arg3
    int128_t var_90_1 = arg3[1]
    char x8_1 = (arg3[4].q).b
    int128_t var_80_1 = arg3[2]
    int128_t var_70_1 = arg3[3]
    v0 = arg4[3]
    v1 = arg4[1]
    arg3[4].b = arg4[4].b
    arg3[2] = arg4[2]
    arg3[3] = v0
    arg3[1] = v1
    *arg3 = *arg4
    arg4[4].b = x8_1
    arg4[2] = var_80_1
    arg4[3] = var_70_1
    *arg4 = var_a0_1
    arg4[1] = var_90_1
    int32_t x0_4
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    x0_4, v0_1, v1_1, v2_1 = sub_f4f6d4(arg6, arg3, arg2)
    
    if ((x0_4 & 1) == 0)
        x19 += 1
    else
        int128_t var_a0_2 = *arg2
        int128_t var_90_2 = arg2[1]
        char x8_4 = (arg2[4].q).b
        int128_t var_80_2 = arg2[2]
        int128_t var_70_2 = arg2[3]
        v0_1 = arg3[3]
        v1_1 = arg3[1]
        arg2[4].b = arg3[4].b
        arg2[2] = arg3[2]
        arg2[3] = v0_1
        arg2[1] = v1_1
        *arg2 = *arg3
        arg3[4].b = x8_4
        arg3[2] = var_80_2
        arg3[3] = var_70_2
        *arg3 = var_a0_2
        arg3[1] = var_90_2
        int32_t x0_6
        int128_t v0_2
        int128_t v1_2
        int128_t v2_2
        x0_6, v0_2, v1_2, v2_2 = sub_f4f6d4(arg6, arg2, arg1)
        
        if ((x0_6 & 1) == 0)
            x19 += 2
        else
            x19 += 3
            int128_t var_a0_3 = *arg1
            int128_t var_90_3 = arg1[1]
            char x8_7 = (arg1[4].q).b
            int128_t var_80_3 = arg1[2]
            int128_t var_70_3 = arg1[3]
            v0_2 = arg2[3]
            v1_2 = arg2[1]
            arg1[4].b = arg2[4].b
            arg1[2] = arg2[2]
            arg1[3] = v0_2
            arg1[1] = v1_2
            *arg1 = *arg2
            arg2[4].b = x8_7
            arg2[2] = var_80_3
            arg2[3] = var_70_3
            *arg2 = var_a0_3
            arg2[1] = var_90_3

int32_t x0_8
int128_t v0_3
int128_t v1_3
int128_t v2_3
x0_8, v0_3, v1_3, v2_3 = sub_f4f6d4(arg6, arg5, arg4)

if ((x0_8 & 1) == 0)
    goto label_f50a54

int128_t var_a0_4 = *arg4
int128_t var_90_4 = arg4[1]
char x8_10 = (arg4[4].q).b
int128_t var_80_4 = arg4[2]
int128_t var_70_4 = arg4[3]
v0_3 = arg5[3]
v1_3 = arg5[1]
arg4[4].b = arg5[4].b
arg4[2] = arg5[2]
arg4[3] = v0_3
arg4[1] = v1_3
*arg4 = *arg5
arg5[4].b = x8_10
arg5[2] = var_80_4
arg5[3] = var_70_4
*arg5 = var_a0_4
arg5[1] = var_90_4
int32_t x0_10
int128_t v0_4
int128_t v1_4
int128_t v2_4
x0_10, v0_4, v1_4, v2_4 = sub_f4f6d4(arg6, arg4, arg3)

if ((x0_10 & 1) == 0)
    if (*(x26 + 0x28) == x8)
        return zx.q(x19 + 1)
else
    int128_t var_a0_5 = *arg3
    int128_t var_90_5 = arg3[1]
    char x8_13 = (arg3[4].q).b
    int128_t var_80_5 = arg3[2]
    int128_t var_70_5 = arg3[3]
    v0_4 = arg4[3]
    v1_4 = arg4[1]
    arg3[4].b = arg4[4].b
    arg3[2] = arg4[2]
    arg3[3] = v0_4
    arg3[1] = v1_4
    *arg3 = *arg4
    arg4[4].b = x8_13
    arg4[2] = var_80_5
    arg4[3] = var_70_5
    *arg4 = var_a0_5
    arg4[1] = var_90_5
    int32_t x0_12
    int128_t v0_5
    int128_t v1_5
    int128_t v2_5
    x0_12, v0_5, v1_5, v2_5 = sub_f4f6d4(arg6, arg3, arg2)
    
    if ((x0_12 & 1) == 0)
        x19 += 2
    label_f50a54:
        
        if (*(x26 + 0x28) == x8)
            return zx.q(x19)
    else
        int128_t var_a0_6 = *arg2
        int128_t var_90_6 = arg2[1]
        char x8_16 = (arg2[4].q).b
        int128_t var_80_6 = arg2[2]
        int128_t var_70_6 = arg2[3]
        v0_5 = arg3[3]
        v1_5 = arg3[1]
        arg2[4].b = arg3[4].b
        arg2[2] = arg3[2]
        arg2[3] = v0_5
        arg2[1] = v1_5
        *arg2 = *arg3
        arg3[4].b = x8_16
        arg3[2] = var_80_6
        arg3[3] = var_70_6
        *arg3 = var_a0_6
        arg3[1] = var_90_6
        int32_t x0_14
        int128_t v0_6
        int128_t v1_6
        int128_t v2_6
        x0_14, v0_6, v1_6, v2_6 = sub_f4f6d4(arg6, arg2, arg1)
        
        if ((x0_14 & 1) == 0)
            if (*(x26 + 0x28) == x8)
                return zx.q(x19 + 3)
        else
            int128_t var_a0_7 = *arg1
            int128_t var_90_7 = arg1[1]
            char x8_19 = (arg1[4].q).b
            int128_t var_80_7 = arg1[2]
            int128_t var_70_7 = arg1[3]
            v0_6 = arg2[3]
            v1_6 = arg2[1]
            arg1[4].b = arg2[4].b
            arg1[2] = arg2[2]
            arg1[3] = v0_6
            arg1[1] = v1_6
            *arg1 = *arg2
            arg2[4].b = x8_19
            arg2[2] = var_80_7
            arg2[3] = var_70_7
            *arg2 = var_a0_7
            arg2[1] = var_90_7
            
            if (*(x26 + 0x28) == x8)
                return zx.q(x19 + 4)

__stack_chk_fail()
noreturn
