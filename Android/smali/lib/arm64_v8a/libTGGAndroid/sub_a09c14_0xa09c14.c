// 函数: sub_a09c14
// 地址: 0xa09c14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t var_38 = arg11
uint64_t var_20 = arg10
uint64_t var_8 = arg9

if (*(arg2 + 0xd8) s> 0x1f3)
    return 

int128_t v2 = arg5[1]
DomGame* x20_1 = arg1
int128_t var_da0_1 = arg5[2]
int128_t var_d90_1 = arg5[3]
int128_t var_dc0 = *arg5
int128_t var_db0_1 = v2
int32_t x8_1 = *(arg3 + 0x74)

if (x8_1 == arg4)
    int32_t var_d80[0x1d]
    YldCopy(&var_d80, arg3)
    uint64_t x9_1 = zx.q(*(arg3 + 0x74))
    int32_t x8_2
    
    if (x9_1.d s< 1)
        x8_2 = 0
    else
        int64_t x10_1 = 0
        x8_2 = 0
        
        do
            if (((*(&var_dc0 + ((x10_1 u>> 6 & 0x3ffffff) << 3)) u>> x10_1).d & 1) != 0)
                void* x14_1 = &var_d80[sx.q(x8_2)]
                x8_2 += 1
                *(x14_1 + 0x78) = *(arg3 + 0x78 + (x10_1 << 2))
            
            x10_1 += 1
        while (x9_1 != x10_1)
    
    int32_t var_d0c_1 = x8_2
    
    if (x8_2 s>= *(arg3 + 0x68) && x8_2 s<= *(arg3 + 0x64))
        sub_a07b04(x20_1, arg2, &var_d80)
    
    return 

int32_t x12_1
int32_t x14_2

if (arg4 s< 1)
    x14_2 = 0
    x12_1 = 0
else
    uint64_t x9_2 = zx.q(arg4)
    int64_t x11_2
    
    if (arg4 != 1)
        int64_t x14_3 = 0
        int32_t x12_2 = 0
        int32_t x13_5 = 0
        int32_t x15_1 = 0
        int32_t x16_1 = 0
        x11_2 = x9_2 & 0xfffffffe
        
        do
            uint64_t x10_5 = *(&var_dc0 + ((x14_3 u>> 6 & 0x3ffffff) << 3))
            uint64_t x8_8 = 1 << (x14_3 & 0x3e)
            uint64_t x2_4 = x10_5 & x8_8
            int64_t x4_4
            
            if (x2_4 != 0)
                x4_4 = x10_5 & 1 << zx.q(x14_3.d + 1)
                
                if (x4_4 == 0)
                    goto label_a09f30
                
                goto label_a09e18
            
            x8_8 = zx.q(*(arg3 + (x14_3 << 2) + 0x78))
            x4_4 = x10_5 & 1 << zx.q(x14_3.d + 1)
            uint64_t x23_1
            uint64_t x24_2
            
            if (x4_4 == 0)
            label_a09f30:
                x10_5 = zx.q(*(arg3 + (x14_3 << 2) + 0x7c))
                x24_2 = zx.q(x8_8.d)
                x23_1 = zx.q(x10_5.d)
                
                if (x2_4 != 0)
                    goto label_a09e24
                
                goto label_a09f40
            
        label_a09e18:
            x24_2 = zx.q(x8_8.d)
            x23_1 = zx.q(x10_5.d)
            
            if (x2_4 != 0)
            label_a09e24:
                
                if (x4_4 == 0)
                    goto label_a09f4c
                
                goto label_a09e28
            
        label_a09f40:
            x8_8 = x20_1 + x24_2 * 0x68
            arg6 = *(x8_8 + 0x1a70)
            
            if (x4_4 == 0)
            label_a09f4c:
                x8_8 = x20_1 + x23_1 * 0x68
                arg7 = *(x8_8 + 0x1a70)
                
                if (x2_4 != 0)
                    goto label_a09e2c
                
                goto label_a09f5c
            
        label_a09e28:
            
            if (x2_4 != 0)
            label_a09e2c:
                
                if (x4_4 == 0)
                    goto label_a09f6c
                
                goto label_a09e30
            
        label_a09f5c:
            x8_8 = zx.q(*(arg3 + (zx.q(arg4) << 2) + 0x78))
            uint64_t x26_2
            uint64_t x28_1
            
            if (x4_4 == 0)
            label_a09f6c:
                x28_1 = zx.q(x8_8.d)
                x26_2 = zx.q(*(arg3 + (zx.q(arg4) << 2) + 0x78))
                
                if (x2_4 != 0)
                    goto label_a09e3c
                
                goto label_a09f7c
            
        label_a09e30:
            x28_1 = zx.q(x8_8.d)
            x26_2 = zx.q(x10_5.d)
            
            if (x2_4 == 0)
            label_a09f7c:
                arg8 = *(x20_1 + x28_1 * 0x68 + 0x1a70)
                
                if (x4_4 == 0)
                    arg10 = zx.q(*(x20_1 + x26_2 * 0x68 + 0x1a70))
            else
            label_a09e3c:
                
                if (x4_4 == 0)
                    arg10 = zx.q(*(x20_1 + x26_2 * 0x68 + 0x1a70))
            
            int32_t x8_9 = x4_4 == 0 ? 1 : 0
            uint64_t x17_6 = zx.q(x2_4 == 0 ? 1 : 0)
            int32_t x3_3 = arg6 == arg8 ? 1 : 0
            int32_t x27_1 = x3_3 & x17_6.d
            int32_t x10_6 = arg7 == arg10.d ? 1 : 0
            int32_t fp_1
            
            if (x27_1 == 1)
                x17_6 = x20_1 + x24_2 * 0x68
                arg11 = zx.q(*(x17_6 + 0x1a94))
                fp_1 = x10_6 & x8_9
                
                if (fp_1 != 0)
                    goto label_a09e9c
                
                goto label_a09e7c
            
            fp_1 = x10_6 & x8_9
            
            if (fp_1 != 0)
            label_a09e9c:
                x17_6 = zx.q(*(x20_1 + x23_1 * 0x68 + 0x1a94))
                
                if (x27_1 != 0)
                    goto label_a09e84
                
                goto label_a09ea4
            
        label_a09e7c:
            uint64_t lr
            
            if (x27_1 == 0)
            label_a09ea4:
                
                if (fp_1 != 0)
                    x3_3 = *(x20_1 + x26_2 * 0x68 + 0x1a94)
            else
            label_a09e84:
                lr = zx.q(*(x20_1 + x28_1 * 0x68 + 0x1a94))
                
                if (fp_1 != 0)
                    x3_3 = *(x20_1 + x26_2 * 0x68 + 0x1a94)
            
            int32_t x8_14 = (arg11.d == lr.d ? 1 : 0) & x27_1
            int32_t x10_2 = x17_6.d == x3_3 ? 1 : 0
            int32_t x24_1
            
            if (x8_14 == 1)
                arg9 = zx.q(*(x20_1 + x24_2 * 0x68 + 0x1a74))
                x24_1 = x10_2 & fp_1
                
                if (x24_1 != 0)
                    goto label_a09efc
                
                goto label_a09edc
            
            x24_1 = x10_2 & fp_1
            
            if (x24_1 != 0)
            label_a09efc:
                x10_2 = *(x20_1 + x23_1 * 0x68 + 0x1a74)
                
                if (x8_14 != 0)
                    goto label_a09ee4
                
                goto label_a09f04
            
        label_a09edc:
            
            if (x8_14 == 0)
            label_a09f04:
                
                if (x24_1 != 0)
                    x28_1 = zx.q(*(x20_1 + x26_2 * 0x68 + 0x1a74))
            else
            label_a09ee4:
                x23_1 = zx.q(*(x20_1 + x28_1 * 0x68 + 0x1a74))
                
                if (x24_1 != 0)
                    x28_1 = zx.q(*(x20_1 + x26_2 * 0x68 + 0x1a74))
            
            arg11 = zx.q(arg11.d == lr.d ? 1 : 0)
            arg6 = arg6 == arg8 ? 1 : 0
            int32_t x4_2 = (arg7 == arg10.d ? 1 : 0) | (x4_4 != 0 ? 1 : 0)
            arg7 = arg9.d == x23_1.d ? 1 : 0
            x14_3 += 2
            x15_1 |= x8_14 & arg7
            x16_1 |= x24_1 & (x10_2 == x28_1.d ? 1 : 0)
            x12_2 += x8_14 ^ ((arg6 | (x2_4 != 0 ? 1 : 0)) & (arg11.d | (x27_1 ^ 1)))
            x13_5 += x24_1 ^ (x4_2 & ((x17_6.d == x3_3 ? 1 : 0) | (fp_1 ^ 1)))
        while (x11_2 != x14_3)
        
        x14_2 = x16_1 | x15_1
        x12_1 = x13_5 + x12_2
        
        if (x11_2 != x9_2)
            goto label_a09ff8
    else
        x11_2 = 0
        x12_1 = 0
        x14_2 = 0
    label_a09ff8:
        
        do
            if (((*(&var_dc0 + ((x11_2 u>> 6 & 0x3ffffff) << 3)) u>> x11_2).d & 1) != 0)
                x12_1 += 1
            else
                uint64_t x10_14 = zx.q(*(arg3 + 0x78 + (x11_2 << 2)))
                arg1 = zx.q(*(arg3 + (zx.q(arg4) << 2) + 0x78))
                
                if (*(x20_1 + 0x1a68 + x10_14 * 0x68 + 8) == *(x20_1 + 0x1a68 + arg1 * 0x68 + 8)
                        && *(x20_1 + 0x1a68 + x10_14 * 0x68 + 0x2c)
                        == *(x20_1 + 0x1a68 + arg1 * 0x68 + 0x2c))
                    x14_2 |= *(x20_1 + 0x1a68 + x10_14 * 0x68 + 0xc)
                        == *(x20_1 + 0x1a68 + arg1 * 0x68 + 0xc) ? 1 : 0
            
            x11_2 += 1
        while (x9_2 != x11_2)

void* x1_2 = arg2

if (x12_1 s> *(arg3 + 0x64) || x8_1 - arg4 + x12_1 s< *(arg3 + 0x68))
    return 

int32_t x22

if ((x14_2 & 1) == 0)
    int32_t x8_23
    
    if (arg4 s< 0)
        x8_23 = arg4 + 0x3f
    else
        x8_23 = arg4
    
    int64_t x23_3 = zx.q(x8_23 s>> 6) << 0x20 s>> 0x1d
    int64_t x24_3 = *(&var_dc0 + x23_3)
    int64_t x25 = 1 << zx.q(arg4 - (x8_23 & 0xffffffc0))
    x22 = arg4 + 1
    *(&var_dc0 + x23_3) = x24_3 | x25
    sub_a09c14(x20_1, x1_2, arg3, zx.q(x22), &var_dc0)
    x1_2 = arg2
    *(&var_dc0 + x23_3) = x24_3 & not.q(x25)
else
    x22 = arg4 + 1

sub_a09c14(x20_1, x1_2, arg3, zx.q(x22), &var_dc0)
