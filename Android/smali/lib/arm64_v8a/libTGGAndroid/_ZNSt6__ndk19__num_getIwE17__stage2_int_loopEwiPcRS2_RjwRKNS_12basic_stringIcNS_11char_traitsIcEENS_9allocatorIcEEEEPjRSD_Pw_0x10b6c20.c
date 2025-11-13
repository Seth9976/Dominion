// 函数: _ZNSt6__ndk19__num_getIwE17__stage2_int_loopEwiPcRS2_RjwRKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPjRSD_Pw
// 地址: 0x10b6c20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
char* x8 = *arg4

if (x8 == arg3)
    char x8_2
    
    if (arg10[0x18] == arg1)
        x8_2 = 0x2b
    label_10b6cc8:
        *arg4 = &arg3[1]
        *arg3 = x8_2
        *arg5 = 0
        return 0
    
    if (arg10[0x19] == arg1)
        x8_2 = 0x2d
        goto label_10b6cc8

uint64_t x10_1 = zx.q(*arg7)
uint64_t x10_2

if ((x10_1.d & 1) == 0)
    x10_2 = x10_1 u>> 1
else
    x10_2 = *(arg7 + 8)

if (arg1 == arg6 && x10_2 != 0)
    uint32_t* x9_1 = *arg9
    
    if (x9_1 - arg8 s> 0x9f)
        return 0
    
    uint32_t x10_4 = *arg5
    *arg9 = &x9_1[1]
    *x9_1 = x10_4
    *arg5 = 0
    return 0

void* x10_7 = &arg10[0x1a]

if (*arg10 == arg1)
    x10_7 = &arg10[0]
else if (arg10[1] == arg1)
    x10_7 = &arg10[1]
else if (arg10[2] == arg1)
    x10_7 = &arg10[2]
else if (arg10[3] == arg1)
    x10_7 = &arg10[3]
else if (arg10[4] == arg1)
    x10_7 = &arg10[4]
else if (arg10[5] == arg1)
    x10_7 = &arg10[5]
else if (arg10[6] == arg1)
    x10_7 = &arg10[6]
else if (arg10[7] == arg1)
    x10_7 = &arg10[7]
else if (arg10[8] == arg1)
    x10_7 = &arg10[8]
else if (arg10[9] == arg1)
    x10_7 = &arg10[9]
else if (arg10[0xa] == arg1)
    x10_7 = &arg10[0xa]
else if (arg10[0xb] == arg1)
    x10_7 = &arg10[0xb]
else if (arg10[0xc] == arg1)
    x10_7 = &arg10[0xc]
else if (arg10[0xd] == arg1)
    x10_7 = &arg10[0xd]
else if (arg10[0xe] == arg1)
    x10_7 = &arg10[0xe]
else if (arg10[0xf] == arg1)
    x10_7 = &arg10[0xf]
else if (arg10[0x10] == arg1)
    x10_7 = &arg10[0x10]
else if (arg10[0x11] == arg1)
    x10_7 = &arg10[0x11]
else if (arg10[0x12] == arg1)
    x10_7 = &arg10[0x12]
else if (arg10[0x13] == arg1)
    x10_7 = &arg10[0x13]
else if (arg10[0x14] == arg1)
    x10_7 = &arg10[0x14]
else if (arg10[0x15] == arg1)
    x10_7 = &arg10[0x15]
else if (arg10[0x16] == arg1)
    x10_7 = &arg10[0x16]
else if (arg10[0x17] == arg1)
    x10_7 = &arg10[0x17]
else if (arg10[0x18] == arg1)
    x10_7 = &arg10[0x18]
else if (arg10[0x19] == arg1)
    x10_7 = &arg10[0x19]

int64_t x10_10 = x10_7 - arg10

if (x10_10 s<= 0x5c)
    int64_t x9_3 = x10_10 s>> 2
    
    if (arg2 == 8)
        if (x9_3 s< zx.q(arg2))
        label_10b6f24:
            char x9_4 = *(std::__ndk1::__num_get_base::__src + x9_3)
            *arg4 = &x8[1]
            *x8 = x9_4
            *arg5 += 1
            return 0
    else if (arg2 == 0x10)
        if (x10_10 s< 0x58)
            goto label_10b6f24
        
        if (x8 != arg3 && x8 - arg3 s<= 2 && zx.d(x8[-1]) == 0x30)
            *arg5 = 0
            char x9_5 = *(std::__ndk1::__num_get_base::__src + x9_3)
            *arg4 = &x8[1]
            *x8 = x9_5
            return 0
    else if (arg2 != 0xa || x9_3 s< zx.q(arg2))
        goto label_10b6f24

return 0xffffffff
