// 函数: sub_a0a104
// 地址: 0xa0a104
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg2 + 0xd8) s> 0x1f3)
    return 

int32_t x8_1 = *(arg3 + 0x74)

if (x8_1 == arg5)
    void var_d80
    YldCopy(&var_d80, arg3)
    uint64_t x8_2 = zx.q(*(arg3 + 0x74))
    void var_d08
    
    if (x8_2.d s>= 1)
        memcpy(&var_d08, arg4, x8_2 << 2)
    sub_a07b04(arg1, arg2, &var_d80)
    x8_1 = *(arg3 + 0x74)

if (x8_1 s< 1)
    return 

int64_t i = 0

do
    if (zx.d(arg6[i]) == 0)
        if (i != 0)
            int64_t x9_4 = 0
            
            do
                if (zx.d(arg6[x9_4]) == 0)
                    uint64_t x11_2 = zx.q(*(arg3 + (i << 2) + 0x78))
                    uint64_t x12_1 = zx.q(*(arg3 + 0x78 + (x9_4 << 2)))
                    
                    if (*(arg1 + 0x1a68 + x11_2 * 0x68 + 8) == *(arg1 + 0x1a68 + x12_1 * 0x68 + 8)
                            && *(arg1 + 0x1a68 + x11_2 * 0x68 + 0x2c)
                            == *(arg1 + 0x1a68 + x12_1 * 0x68 + 0x2c)
                            && *(arg1 + 0x1a68 + x11_2 * 0x68 + 0xc)
                            == *(arg1 + 0x1a68 + x12_1 * 0x68 + 0xc))
                        goto label_a0a1f8
                
                x9_4 += 1
            while (i != x9_4)
        
        *(arg4 + (sx.q(arg5) << 2)) = *(arg3 + (i << 2) + 0x78)
        arg6[i] = 1
        sub_a0a104(arg1, arg2, arg3, arg4, zx.q(arg5 + 1), arg6)
        arg6[i] = 0
        x8_1 = *(arg3 + 0x74)
    
label_a0a1f8:
    i += 1
while (i s< sx.q(x8_1))
