// 函数: sub_a05c90
// 地址: 0xa05c90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = zx.q(*(arg1 + 0xd40))
int64_t x19 = arg1
int32_t var_57d0[0x1e0]
void var_cd4
int32_t var_cd0[0x140]
int32_t x8_2

if (x22.d s< 1)
    int32_t x10_1 = sx.d(*arg2)
    
    if (x10_1 s>= 1)
        int32_t x12_2 = x10_1 & 0xffff
        int64_t x9_2 = 0
        x8_2 = 0
        uint64_t x12_3
        
        if (x12_2 u> 1)
            x12_3 = zx.q(x12_2)
        else
            x12_3 = 1
        
        while (true)
            int32_t i = *(arg2 + x9_2 * 0x68 + 0x18)
            
            if (i != 0)
                int64_t x16_1 = 0
                int64_t x14_2 = sx.q(x8_2)
                
                do
                    if (x14_2 + x16_1 s< 1)
                        goto label_a05ea4
                    
                    arg1 = zx.q(*(&var_cd4 + (sx.q(x8_2) << 2) + (x16_1 << 2)))
                    x16_1 -= 1
                while (arg1.d != i)
                
                if (x8_2 + x16_1.d + 1 s< 1)
                label_a05ea4:
                    x8_2 += 1
                    var_cd0[x14_2] = *(arg2 + x9_2 * 0x68 + 0x1c)
                    x9_2 += 1
                    
                    if (x9_2 == x12_3)
                        break
                    
                    continue
            
            x9_2 += 1
            
            if (x9_2 == x12_3)
                break
        
    label_a05f04:
        
        if (x22.d s>= 1)
            if (x8_2 s<= 0)
                goto label_a06000
            
            int64_t i_1 = 0
            
            do
                int64_t j = 0
                float v0 = 0f
                
                do
                    int64_t x1 = sx.q(var_cd0[j])
                    int64_t x2_4 = x1 * 0x68c8c4ad
                    int32_t* x2_8 = *(&data_13db978
                        + (sx.q(x1.d - ((x2_4 s>> 0x2c).d + (x2_4 u>> 0x3f).d) * 0x2717) << 3))
                    
                    if (x2_8 == 0)
                    label_a06044:
                        void* x0_2
                        int16_t* x1_2
                        void* x2_11
                        x0_2, x1_2, x2_11 = printf("Couldn't lookup %d\n")
                        uint64_t x26
                        return sub_a06048(x0_2, x1_2, x2_11, x26) __tailcall
                    
                    while (*x2_8 != x1.d)
                        x2_8 = *(x2_8 + 0x1b8)
                        
                        if (x2_8 == 0)
                            goto label_a06044
                    
                    int32_t x1_1 = x2_8[0x6d]
                    
                    if (x1_1 != 0)
                        float v1 = *(sx.q(*(arg3 + 0xb4)) * 0x84 + 0x14a76dc)
                        float v2 = float.s(x2_8[sx.q(*(&var_57d0 + i_1 * 0xc80 + (j << 2))) + 9])
                            / float.s(x1_1)
                        
                        if (not(v2 >= v1))
                            v0 = v0 + v1 - v2
                    
                    j += 1
                while (j != zx.q(x8_2))
                
                *(arg3 + (i_1 << 2) + 0x18) = v0
                i_1 += 1
            while (i_1 s< sx.q(*(x19 + 0xd40)))
else
    memset(&var_57d0, 0, x22 * 0xc80)
    uint32_t x17_1 = zx.d(*arg2)
    
    if (sx.d(x17_1.w) s> 0)
        int64_t x9_1 = 0
        x8_2 = 0
        int64_t i_7 = x22 & 0xfffffffe
        void* x12_1 = arg2 + 0x2d
        void* x13_1 = &arg2[0x16]
        uint64_t x17_2
        
        if (x17_1 u> 1)
            x17_2 = zx.q(x17_1)
        else
            x17_2 = 1
        
        while (true)
            int32_t x5_1 = *(arg2 + x9_1 * 0x68 + 0x18)
            
            if (x5_1 != 0)
                uint64_t x6_1 = 0
                int64_t x2_2 = sx.q(x8_2)
                int64_t x4_1 = zx.q(x8_2) << 0x20
                
                while (true)
                    uint64_t x24_1 = x2_2 + x6_1
                    int64_t i_8
                    
                    if (x24_1 s< 1)
                    label_a05df8:
                        x8_2 += 1
                        var_cd0[x2_2] = *(arg2 + x9_1 * 0x68 + 0x1c)
                        
                        if (x22.d u>= 2)
                        label_a05d9c:
                            void* x3_2 = &var_57d0[x2_2]
                            void* x4_2 = x12_1
                            int64_t i_6 = i_7
                            int64_t i_2
                            
                            do
                                uint32_t x7_2 = zx.d(*(x4_2 - 1))
                                
                                if (x7_2 != 0)
                                    x6_1 = zx.q(*x3_2)
                                
                                uint32_t x25_1 = zx.d(*x4_2)
                                
                                if (x25_1 != 0)
                                    x24_1 = zx.q(*(x3_2 + 0xc80))
                                
                                if (x7_2 != 0)
                                    x6_1 = zx.q(x6_1.d + 1)
                                    *x3_2 = x6_1.d
                                
                                if (x25_1 != 0)
                                    x6_1 = zx.q(x24_1.d + 1)
                                    *(x3_2 + 0xc80) = x6_1.d
                                
                                i_2 = i_6
                                i_6 -= 2
                                x3_2 += 0x1900
                                x4_2 += 2
                            while (i_2 != 2)
                            i_8 = i_7
                            
                            if (i_7 == x22)
                                break
                        else
                            i_8 = 0
                    else
                        x24_1 = zx.q(*(&var_cd4 + (sx.q(x8_2) << 2) + (x6_1 << 2)))
                        x6_1 -= 1
                        x4_1 += -0x100000000
                        
                        if (x24_1.d != x5_1)
                            continue
                        else
                            if (x8_2 + x6_1.d + 1 s< 1)
                                goto label_a05df8
                            
                            x2_2 = x4_1 s>> 0x20
                            
                            if (x22.d u>= 2)
                                goto label_a05d9c
                            
                            i_8 = 0
                    
                    void* x3_5 = x13_1 + i_8
                    int32_t* x2_3 = &var_57d0 + i_8 * 0xc80 + (x2_2 << 2)
                    int64_t i_5 = x22 - i_8
                    int64_t i_3
                    
                    do
                        if (zx.d(*x3_5) != 0)
                            *x2_3 += 1
                        
                        x3_5 += 1
                        i_3 = i_5
                        i_5 -= 1
                        x2_3 = &x2_3[0x320]
                    while (i_3 != 1)
                    break
            
            x9_1 += 1
            x12_1 += 0x68
            x13_1 += 0x68
            
            if (x9_1 == x17_2)
                break
        
        goto label_a05f04
    
label_a06000:
    int64_t i_4 = 0
    
    do
        *(arg3 + 0x18 + (i_4 << 2)) = 0
        i_4 += 1
    while (i_4 s< sx.q(*(x19 + 0xd40)))
