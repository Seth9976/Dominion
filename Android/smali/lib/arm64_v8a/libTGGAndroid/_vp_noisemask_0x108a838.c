// 函数: _vp_noisemask
// 地址: 0x108a838
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x25 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x25 + 0x28)
void* x19 = arg3
int64_t x24 = sx.q(*arg1)
int64_t i_9 = x24 & 0xffffffff
void var_60
void* x21 = &var_60 - (((x24 << 2) + 0xf) & 0xfffffffffffffff0)
uint128_t v0
v0.d = 0x430c0000
float128 v1
float128 v2
float128 v3
v1, v2, v3 = sub_108aa44(x24.d, *(arg1 + 0x30), arg2, x19, 0xffffffff, v0)

if (x24.d s>= 1)
    int64_t i_10 = 0
    
    if (i_9.d u>= 8)
        i_10 = i_9 & 0xfffffff8
        void* x9_3 = &arg2[4]
        void* x10_1 = x19 + 0x10
        void* x11_1 = x21 + 0x10
        int64_t i_8 = i_10
        int64_t i
        
        do
            v0 = *(x9_3 - 0x10)
            v1 = *x9_3
            v2 = *(x10_1 - 0x10)
            v3 = *x10_1
            x9_3 += 0x20
            x10_1 += 0x20
            i = i_8
            i_8 -= 8
            v0 = vsubq_f32(v0, v2)
            v1 = vsubq_f32(v1, v3)
            *(x11_1 - 0x10) = v0
            *x11_1 = v1
            x11_1 += 0x20
        while (i != 8)
    
    if (i_9.d u< 8 || i_10 != i_9)
        int64_t x11_2 = i_10 << 2
        void* x9_4 = x21 + x11_2
        int32_t* x10_2 = x19 + x11_2
        int32_t* x11_3 = &arg2[i_10]
        int64_t i_5 = i_9 - i_10
        int64_t i_1
        
        do
            v0.d = *x11_3
            x11_3 = &x11_3[1]
            v1.d = *x10_2
            x10_2 = &x10_2[1]
            i_1 = i_5
            i_5 -= 1
            v0.d = v0.d f- v1.d
            *x9_4 = v0.d
            x9_4 += 4
        while (i_1 != 1)

v0.d = 0f
int32_t result = i_9.d
float128 v1_1
float128 v2_1
float128 v3_1
v1_1, v2_1, v3_1 = sub_108aa44(result, *(arg1 + 0x30), x21, x19, *(*(arg1 + 8) + 0x80), v0)

if (i_9.d s>= 1)
    int64_t i_11 = 0
    
    if (i_9.d u> 7)
        i_11 = i_9 & 0xfffffff8
        void* x9_5 = &arg2[4]
        void* x10_3 = x21 + 0x10
        int64_t i_7 = i_11
        int64_t i_2
        
        do
            v0 = *(x9_5 - 0x10)
            v1_1 = *x9_5
            v3_1 = *x10_3
            x9_5 += 0x20
            i_2 = i_7
            i_7 -= 8
            v0 = vsubq_f32(v0, *(x10_3 - 0x10))
            v1_1 = vsubq_f32(v1_1, v3_1)
            *(x10_3 - 0x10) = v0
            *x10_3 = v1_1
            x10_3 += 0x20
        while (i_2 != 8)
    
    if (i_9.d u<= 7 || i_11 != i_9)
        void* x9_6 = x21 + (i_11 << 2)
        void* x10_5 = &arg2[i_11]
        int64_t i_6 = i_9 - i_11
        int64_t i_3
        
        do
            v0.d = *x10_5
            x10_5 += 4
            v1_1.d = *x9_6
            i_3 = i_6
            i_6 -= 1
            v0.d = v0.d f- v1_1.d
            *x9_6 = v0.d
            x9_6 += 4
        while (i_3 != 1)
    
    if (i_9.d s>= 1)
        int64_t x8_2 = *(arg1 + 8)
        v0.q = fconvert.d(0.5)
        int64_t i_4
        
        do
            v1_1.d = *x19
            v2_1.d = *x21
            x21 += 4
            v1_1.q = fconvert.d(v1_1.d)
            v1_1.q = v1_1.q f+ v0.q
            uint32_t temp0_1 = vcvtd_s32_f64(v1_1.q)
            uint32_t x10_7
            
            x10_7 = temp0_1 s< 0x27 ? temp0_1 : 0x27
            
            v1_1.d = *(x8_2 + ((zx.q(x10_7) & zx.q(not.d(x10_7 s>> 0x1f))) << 2) + 0x150)
            i_4 = i_9
            i_9 -= 1
            v1_1.d = v1_1.d f+ v2_1.d
            *x19 = v1_1.d
            x19 += 4
        while (i_4 != 1)

if (*(x25 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
