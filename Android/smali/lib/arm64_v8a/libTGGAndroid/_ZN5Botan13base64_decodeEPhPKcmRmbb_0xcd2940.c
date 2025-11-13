// 函数: _ZN5Botan13base64_decodeEPhPKcmRmbb
// 地址: 0xcd2940
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x21

if ((arg3 & 3) == 0)
    x21 = 0
else
    x21 = 4 - (arg3 & 3)

int32_t* x0 = operator new(4)
uint64_t x2 = ((x21 + arg3) * 3) u>> 2
*x0 = 0

if (x2 != 0)
    memset(arg1, 0, x2)

size_t var_70
uint8_t* x28
uint64_t x8_19

if (arg3 == 0)
    x28 = arg1
    var_70 = 0
    x8_19 = *arg4
    
    if (x8_19 u< arg3)
    label_cd2d04:
        
        do
            uint32_t x0_5 = zx.d(arg2[x8_19])
            char x2_9 = (((x0_5.b - 0x41) | ((0x5a - x0_5.b) | x0_5.b | (x0_5.b - 0x41)) s>> 7)
                ^ (x0_5.b - 0x47)) & ((0x7a - x0_5.b) | x0_5.b | (x0_5.b - 0x61)) s>> 7
            int32_t x7_4 = (((x0_5 ^ 0x2b) - 1) & not.d(x0_5) & 0x80) << 0x18 s>> 0x1f
            int32_t x6_4 = (((x0_5 ^ 0x2f) - 1) & not.d(x0_5) & 0x80) << 0x18 s>> 0x1f
            int32_t x5_3 = (((x0_5 ^ 0x3d) - 1) & not.d(x0_5) & 0x80) << 0x18 s>> 0x1f
            int32_t x0_7 = ((((x0_5 ^ 9) - 1) | ((x0_5 ^ 0x20) - 1) | ((x0_5 ^ 0xa) - 1)
                | ((x0_5 ^ 0xd) - 1)) & not.d(x0_5) & 0x80) << 0x18 s>> 0x1f
            char x0_9 = (x0_7.b & 0x80) | (((x5_3.b & 0x81) | (((x6_4.b & 0x3f) | (((x7_4.b & 0x3e)
                | (((((x0_5.b + 4) ^ (x0_5.b - 0x47) ^ x2_9)
                & ((0x39 - x0_5.b) | x0_5.b | (x0_5.b - 0x30)) s>> 7) ^ (x0_5.b + 4))
                & (not.d(x7_4)).b)) & (not.d(x6_4)).b)) & (not.d(x5_3)).b)) & (not.d(x0_7)).b)
            
            if (zx.d(x0_9) != 0x80)
                break
            
            x8_19 += 1
            *arg4 = x8_19
        while (arg3 != x8_19)
else
    int64_t x21_1 = 0
    uint64_t fp_1 = 0
    x28 = arg1
    var_70 = 0
    
    while (true)
        uint32_t x1 = zx.d(arg2[fp_1])
        char x9_10 = (((x1.b - 0x41) | ((0x5a - x1.b) | x1.b | (x1.b - 0x41)) s>> 7)
            ^ (x1.b - 0x47)) & ((0x7a - x1.b) | x1.b | (x1.b - 0x61)) s>> 7
        int32_t x14_4 = (((x1 ^ 0x2b) - 1) & not.d(x1) & 0x80) << 0x18 s>> 0x1f
        int32_t x13_4 = (((x1 ^ 0x2f) - 1) & not.d(x1) & 0x80) << 0x18 s>> 0x1f
        int32_t x12_4 = (((x1 ^ 0x3d) - 1) & not.d(x1) & 0x80) << 0x18 s>> 0x1f
        int32_t x8_15 = ((((x1 ^ 9) - 1) | ((x1 ^ 0x20) - 1) | ((x1 ^ 0xa) - 1) | ((x1 ^ 0xd) - 1))
            & not.d(x1) & 0x80) << 0x18 s>> 0x1f
        char x27_1 = (x8_15.b & 0x80) | (((x12_4.b & 0x81) | (((x13_4.b & 0x3f) | (((x14_4.b & 0x3e)
            | (((((x1.b + 4) ^ (x1.b - 0x47) ^ x9_10)
            & ((0x39 - x1.b) | x1.b | (x1.b - 0x30)) s>> 7) ^ (x1.b + 4)) & (not.d(x14_4)).b))
            & (not.d(x13_4)).b)) & (not.d(x12_4)).b)) & (not.d(x8_15)).b)
        
        if ((sub_f26ba8(x27_1, x1.b, arg6.d & 1) & 1) != 0)
            *(x0 + x21_1) = x27_1
            x21_1 += 1
        
        if ((arg5.d & 1) == 0 || fp_1 != arg3 - 1 || x21_1 == 0)
            if (x21_1 != 4)
                fp_1 += 1
                
                if (fp_1 == arg3)
                    break
                
                continue
        else if (x21_1 u< 4)
            var_70 = 4 - x21_1
            memset(x0 + x21_1, 0, 4 - x21_1)
        else
            var_70 = 4 - x21_1
        
        uint32_t x8_5 = zx.d(*(x0 + 1))
        x21_1 = 0
        fp_1 += 1
        *x28 = (x8_5 u>> 4).b | *x0 << 2
        uint32_t x9_3 = zx.d(*(x0 + 2))
        x28[1] = (x9_3 u>> 2).b | (x8_5 << 4).b
        x28[2] = *(x0 + 3) | (x9_3 << 6).b
        x28 = &x28[3]
        *arg4 = fp_1
        
        if (fp_1 == arg3)
            break
    
    x8_19 = *arg4
    
    if (x8_19 u< arg3)
        goto label_cd2d04
operator delete(x0)
return x28 - &arg1[var_70]
