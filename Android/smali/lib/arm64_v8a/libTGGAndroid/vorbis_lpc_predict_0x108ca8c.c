// 函数: vorbis_lpc_predict
// 地址: 0x108ca8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x25 = sx.q(arg3)
int64_t x8 = *(x24 + 0x28)
int64_t x23 = arg1
void var_60
void* x22 = &var_60 - ((((x25 + arg5) << 2) + 0xf) & 0xfffffffffffffff0)
float128 v0
float128 v1
int128_t v3
uint128_t v4
uint128_t v5

if (arg2 == 0)
    if (arg3 s>= 1)
        arg1, v0, v1, v3, v4, v5 = memset(x22, 0, x25 << 2)
    
    goto label_108cb1c

if (arg3 s< 1)
label_108cb1c:
    
    if (arg5 s>= 1)
        goto label_108cb24
else
    arg1, v0, v1, v3, v4, v5 = memcpy(x22, arg2, x25 << 2)
    
    if (arg5 s>= 1)
    label_108cb24:
        int64_t i_2 = x25 & 0xfffffffffffffff8
        int64_t x8_2 = 0
        void* x10_1 = x22 + 0x10
        int64_t x14_1 = x25
        
        do
            int64_t x17_2
            
            if (arg3 s< 1)
                v0.d = 0f
                x17_2 = x8_2
            else
                v0.d = 0f
                int64_t x16_1 = x25
                int64_t x15_1 = x8_2
                
                if (arg3 u>= 8)
                    x15_1 = x8_2 + i_2
                    v0.q = 0
                    v0:8.q = 0
                    int64_t i_1 = i_2
                    void* x17_1 = x23 + (x25 << 2) - 0x10
                    void* x18_1 = x10_1
                    v1.q = 0
                    v1:8.q = 0
                    int64_t i
                    
                    do
                        v5 = *(x17_1 - 0x10)
                        *(x18_1 - 0x10)
                        *x18_1
                        x18_1 += 0x20
                        i = i_1
                        i_1 -= 8
                        uint128_t v4_1 = vrev64q_s32(*x17_1)
                        uint128_t v5_1 = vrev64q_s32(v5)
                        v4 = vextq_s8(v4_1, v4_1, 8)
                        v5 = vextq_s8(v5_1, v5_1, 8)
                        v0 = vfmsq_f32(v0, v4, 0)
                        v1 = vfmsq_f32(v1, v5, 0)
                        x17_1 -= 0x20
                    while (i != 8)
                    float128 v0_1 = vaddq_f32(v1, v0)
                    float128 v0_2 = vaddq_f32(v0_1, vextq_s8(v0_1, v0_1, 8))
                    v0 = vaddq_f32(v0_2, vdupq_laneq_s32(v0_2, 1))
                    x16_1 = x25 - i_2
                    x17_2 = x14_1
                
                if (arg3 u< 8 || i_2 != x25)
                    int32_t* x16_2 = x23 - 4 + (x16_1 << 2)
                    
                    do
                        v1.d = *(x22 + (x15_1 << 2))
                        int32_t v2 = *x16_2
                        x16_2 = &x16_2[-1]
                        x15_1 += 1
                        v0.d = vfms_f64(v0.d, v2, v1.d)
                    while (x14_1 != x15_1)
                    
                    x17_2 = x14_1
            
            *(x22 + (x17_2 << 2)) = v0.d
            *(arg4 + (x8_2 << 2)) = v0.d
            x8_2 += 1
            x14_1 += 1
            x10_1 += 4
        while (x8_2 != arg5)

if (*(x24 + 0x28) == x8)
    return 

__stack_chk_fail()
noreturn
