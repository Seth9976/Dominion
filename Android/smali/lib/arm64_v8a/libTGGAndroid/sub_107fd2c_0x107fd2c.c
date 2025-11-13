// 函数: sub_107fd2c
// 地址: 0x107fd2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
void* x19 = arg1
int64_t x8_1 = sx.q(*(arg1 + 0x24))
void var_a0
void* x20 = &var_a0 - (((x8_1 << 2) + 0xf) & 0xfffffffffffffff0)
*(arg1 + 0x2c) = 1

if (x8_1 - *(arg1 + 0x50) s>= 0x21 && *(*(x19 + 8) + 4) s>= 1)
    int64_t i = 0
    
    do
        uint128_t v0
        uint128_t v1
        
        if (x8_1.d s>= 1)
            int64_t x10_3 = *(*(x19 + 0x10) + (i << 3))
            *x20 = *(x10_3 + (sx.q(x8_1.d) << 2) - 4)
            
            if (x8_1.d != 1)
                int64_t x9_7 = sx.q(x8_1.d)
                int64_t x11_3
                
                x11_3 = x9_7 s> 2 ? x9_7 : 2
                
                int64_t x11_4
                
                if (x11_3 - 1 u>= 8)
                    x11_4 = x9_7 s> 2 ? x9_7 : 2
                
                int64_t x11_1
                
                if (x11_3 - 1 u>= 8 && (x20 + 4 u>= x10_3 + (x9_7 << 2) - 4
                        || x10_3 + ((x9_7 - x11_4) << 2) u>= x20 + (x11_4 << 2)))
                    int64_t x13_1 = (x11_3 - 1) & 0xfffffffffffffff8
                    int64_t x14_1 = 0
                    x11_1 = x13_1 | 1
                    void* x15_1 = x20 + 0x14
                    
                    do
                        void* x16_3 = x10_3 + (((x14_1 ^ 0x3ffffffffffffffe) + x9_7) << 2)
                        v1 = *(x16_3 - 0x1c)
                        x14_1 += 8
                        uint128_t v0_1 = vrev64q_s32(*(x16_3 - 0xc))
                        uint128_t v1_1 = vrev64q_s32(v1)
                        v0 = vextq_s8(v0_1, v0_1, 8)
                        v1 = vextq_s8(v1_1, v1_1, 8)
                        *(x15_1 - 0x10) = v0
                        *x15_1 = v1
                        x15_1 += 0x20
                    while (x13_1 != x14_1)
                    
                    if (x11_3 - 1 != x13_1)
                        goto label_107fecc
                else
                    x11_1 = 1
                label_107fecc:
                    int32_t* x10_5 = x10_3 + ((x9_7 - x11_1) << 2) - 4
                    
                    do
                        int32_t x12_3 = *x10_5
                        x10_5 = &x10_5[-1]
                        *(x20 + (x11_1 << 2)) = x12_3
                        x11_1 += 1
                    while (x11_1 s< x9_7)
        
        vorbis_lpc_from_data(x20, &var_a0, zx.q(x8_1.d - *(x19 + 0x50)), 0x10)
        void* x3_1 = x20 + (sx.q(*(x19 + 0x24)) << 2) - (*(x19 + 0x50) << 2)
        arg1, v0, v1 = vorbis_lpc_predict(&var_a0, x3_1 - 0x40, 0x10, x3_1)
        x8_1 = zx.q(*(x19 + 0x24))
        
        if (x8_1.d s>= 1)
            int64_t x10_6 = *(*(x19 + 0x10) + (i << 3))
            int64_t x9_10 = sx.q(x8_1.d)
            *(x10_6 + (x9_10 << 2) - 4) = *x20
            
            if (x8_1.d != 1)
                int64_t x11_8
                
                x11_8 = x9_10 s> 2 ? x9_10 : 2
                
                int64_t x11_9
                
                if (x11_8 - 1 u>= 8)
                    x11_9 = x9_10 s> 2 ? x9_10 : 2
                
                int64_t x11_2
                
                if (x11_8 - 1 u>= 8 && (x10_6 + ((x9_10 - x11_9) << 2) u>= x20 + (x11_9 << 2)
                        || x20 + 4 u>= x10_6 + (x9_10 << 2) - 4))
                    int64_t x13_2 = (x11_8 - 1) & 0xfffffffffffffff8
                    int64_t x14_2 = 0
                    x11_2 = x13_2 | 1
                    void* x15_2 = x20 + 0x14
                    
                    do
                        v1 = *x15_2
                        int64_t x16_4 = x14_2 ^ 0x3ffffffffffffffe
                        x14_2 += 8
                        uint128_t v0_2 = vrev64q_s32(*(x15_2 - 0x10))
                        uint128_t v1_2 = vrev64q_s32(v1)
                        void* x16_6 = x10_6 + ((x16_4 + x9_10) << 2)
                        v0 = vextq_s8(v0_2, v0_2, 8)
                        v1 = vextq_s8(v1_2, v1_2, 8)
                        x15_2 += 0x20
                        *(x16_6 - 0xc) = v0
                        *(x16_6 - 0x1c) = v1
                    while (x13_2 != x14_2)
                    
                    if (x11_8 - 1 != x13_2)
                        goto label_107ff94
                else
                    x11_2 = 1
                label_107ff94:
                    int32_t* x10_8 = x10_6 + ((x9_10 - x11_2) << 2) - 4
                    
                    do
                        int32_t x12_7 = *(x20 + (x11_2 << 2))
                        x11_2 += 1
                        *x10_8 = x12_7
                        x10_8 = &x10_8[-1]
                    while (x11_2 s< x9_10)
        
        i += 1
    while (i s< sx.q(*(*(x19 + 8) + 4)))

if (*(x21 + 0x28) == x8)
    return 

__stack_chk_fail()
noreturn
