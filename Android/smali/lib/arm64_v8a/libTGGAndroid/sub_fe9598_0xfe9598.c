// 函数: sub_fe9598
// 地址: 0xfe9598
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg3 & 0x80000000) == 0)
    if (arg2 - 1 u< 2)
        goto label_fe9634
    
    goto label_fe95cc

(*arg1)(arg1[1], &arg5[sx.q(arg2)] - 1, 1)
char var_34

if (arg2 - 1 u>= 2)
label_fe95cc:
    
    if (arg2 == 3)
    label_fe95e4:
        char x9_1 = arg5[1]
        char x10_1 = *arg5
        int64_t x11_1 = *arg1
        int64_t x0 = arg1[1]
        var_34 = arg5[2]
        char var_33_1 = x9_1
        char var_32_1 = x10_1
        x11_1(x0, &var_34, 3)
        
        if (arg3 s>= 1)
            (*arg1)(arg1[1], &arg5[sx.q(arg2)] - 1, 1)
    else
        if (arg2 != 4)
            goto label_fe9658
        
        if (arg3 != 0)
            goto label_fe95e4
        
        uint32_t x8_7 = zx.d(arg5[3])
        int32_t x9_7 = (zx.d(*arg5) - 0xff) * x8_7
        int32_t x8_8 = (zx.d(arg5[2]) - 0xff) * x8_7
        int64_t x11_4 = *arg1
        int64_t x0_5 = arg1[1]
        uint8_t var_33_3 = (zx.d(arg5[1]) * x8_7 u/ 0xff).b
        int32_t x9_8 = (muls.dp.d(x9_7, 0x80808081) u>> 0x20).d + x9_7
        int32_t x8_9 = (muls.dp.d(x8_8, 0x80808081) u>> 0x20).d + x8_8
        var_34 = (x8_9 u>> 7).b + (x8_9 u>> 0x1f).b - 1
        char var_32_3 = (x9_8 u>> 7).b + (x9_8 u>> 0x1f).b - 1
        x11_4(x0_5, &var_34, 3)
else
label_fe9634:
    
    if (arg4 == 0)
        (*arg1)(arg1[1], arg5, 1)
        
        if (arg3 s>= 1)
            (*arg1)(arg1[1], &arg5[sx.q(arg2)] - 1, 1)
    else
        char x8_4 = *arg5
        int64_t x9_3 = *arg1
        int64_t x0_2 = arg1[1]
        var_34 = x8_4
        char var_33_2 = x8_4
        char var_32_2 = x8_4
        x9_3(x0_2, &var_34, 3)
    label_fe9658:
        
        if (arg3 s>= 1)
            (*arg1)(arg1[1], &arg5[sx.q(arg2)] - 1, 1)
