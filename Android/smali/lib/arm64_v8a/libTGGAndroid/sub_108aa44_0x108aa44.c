// 函数: sub_108aa44
// 地址: 0x108aa44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x8 + 0x28)
int64_t x13 = ((zx.q(arg1) << 0x20 s>> 0x1e) + 0xf) & 0xfffffffffffffff0
void var_40
void* x9_1 = &var_40 - x13
void* x10_3 = x9_1 - x13
void* x11_1 = x10_3 - x13
void* x12_1 = x11_1 - x13
void* x13_1 = x12_1 - x13
uint128_t v1
v1.d = *arg3
uint128_t v3
v3.d = fconvert.s(1f)
uint128_t v2
v2.d = fconvert.s(0.5f)
v1.d = v1.d f+ arg6.d
uint128_t v4
v4.d = vmaxnm_f32(v1.d, v3.d)
v1.d = v4.d f* v2.d
v1.d = v4.d f* v1.d
v2.d = v1.d f* v4.d
*x11_1 = 0
*x9_1 = v1.d
*x10_3 = v1.d
*x12_1 = v2.d
*x13_1 = 0
uint128_t v5
uint128_t v6
uint128_t v7
float128 v16
uint128_t v17
uint128_t v18
float128 v19

if (arg1 s>= 2)
    v5.d = fconvert.s(1f)
    void* x14_1 = x13_1 + 4
    void* x15_1 = x12_1 + 4
    void* x16_1 = x11_1 + 4
    void* x17_1 = x10_3 + 4
    void* x18_1 = x9_1 + 4
    void* x2 = &arg3[1]
    v4.d = 0f
    int64_t i_7 = zx.q(arg1) - 1
    v6 = v5
    v7.d = 0f
    v16 = v1
    int32_t i
    
    do
        v17.d = *x2
        x2 += 4
        i = i_7
        i_7 -= 1
        v17.d = v17.d f+ arg6.d
        v17.d = vmaxnm_f32(v17.d, v5.d)
        v18.d = v17.d f* v17.d
        v19.d = v18.d f* v6.d
        v16.d = v18.d f+ v16.d
        v2.d = vfma_f32(v2.d, v18.d, v17.d)
        v1.d = v19.d f+ v1.d
        v7.d = vfma_f32(v7.d, v19.d, v6.d)
        v4.d = vfma_f32(v4.d, v19.d, v17.d)
        *x18_1 = v16.d
        x18_1 += 4
        *x15_1 = v2.d
        x15_1 += 4
        *x17_1 = v1.d
        x17_1 += 4
        *x16_1 = v7.d
        x16_1 += 4
        *x14_1 = v4.d
        x14_1 += 4
        v6.d = v6.d f+ v5.d
    while (i != 1)

int64_t x15_2 = *arg2
uint64_t x17_2 = x15_2 u>> 0x10
uint64_t x14_2
float128 v20

if ((x17_2.d & 0x80000000) != 0)
    x14_2 = 0
    v5.d = 0f
    v6.d = fconvert.s(1f)
    v4.d = 0f
    
    do
        uint64_t x15_3 = (x15_2 & 0xffff) << 2
        int64_t x17_4 = neg.q(x17_2 << 0x20) s>> 0x1e
        v1.d = *(x9_1 + x15_3)
        v17.d = *(x9_1 + x17_4)
        v2.d = *(x10_3 + x15_3)
        v16.d = *(x13_1 + x15_3)
        v18.d = *(x10_3 + x17_4)
        v17.d = v17.d f+ v1.d
        v1.d = *(x13_1 + x17_4)
        v3.d = *(x11_1 + x15_3)
        v7.d = *(x12_1 + x15_3)
        v19.d = *(x11_1 + x17_4)
        v20.d = *(x12_1 + x17_4)
        v2.d = v2.d f- v18.d
        v16.d = v16.d f- v1.d
        v3.d = v19.d f+ v3.d
        v7.d = v20.d f+ v7.d
        v1.d = v16.d f* v2.d
        unimplemented  {fnmsub s1, s7, s3, s1}
        v7.d = v7.d f* v2.d
        v18.d = v2.d f* v2.d
        unimplemented  {fnmsub s2, s16, s17, s7}
        unimplemented  {fnmsub s3, s3, s17, s18}
        v7.d = vfma_f32(v1.d, v2.d, v4.d)
        v7.d = v7.d f/ v3.d
        v7.d = vmaxnm_f32(v7.d, v5.d)
        v7.d = v7.d f- arg6.d
        arg4[x14_2] = v7.d
        x15_2 = arg2[1 + x14_2]
        x14_2 += 1
        v4.d = v4.d f+ v6.d
        x17_2 = x15_2 u>> 0x10
    while ((x17_2.d & 0x80000000) != 0)
    
    x15_2 = arg2[zx.q(x14_2.d)]
else
    x14_2 = 0
    v1.d = 0f
    v2.d = 0f
    v4.d = 0f

int32_t x16_5 = x15_2.d & 0xffff
float128 v21

if (x16_5 s< arg1)
    x14_2 = zx.q(x14_2.d)
    v5.d = 0f
    v6.d = fconvert.s(1f)
    
    do
        uint64_t x16_4 = zx.q(x16_5) << 2
        int64_t x15_5 = (x15_2 & 0xffffffff0000) << 0x10 s>> 0x20 << 2
        v1.d = *(x9_1 + x16_4)
        v2.d = *(x9_1 + x15_5)
        v3.d = *(x10_3 + x16_4)
        v7.d = *(x10_3 + x15_5)
        v16.d = *(x11_1 + x16_4)
        v17.d = *(x11_1 + x15_5)
        v20.d = *(x13_1 + x16_4)
        v21.d = v1.d f- v2.d
        v1.d = *(x13_1 + x15_5)
        v18.d = *(x12_1 + x16_4)
        v19.d = *(x12_1 + x15_5)
        v2.d = v3.d f- v7.d
        v3.d = v16.d f- v17.d
        v16.d = v20.d f- v1.d
        v7.d = v18.d f- v19.d
        v1.d = v16.d f* v2.d
        unimplemented  {fnmsub s1, s7, s3, s1}
        v7.d = v7.d f* v2.d
        v17.d = v2.d f* v2.d
        unimplemented  {fnmsub s2, s16, s21, s7}
        unimplemented  {fnmsub s3, s3, s21, s17}
        v7.d = vfma_f32(v1.d, v2.d, v4.d)
        v7.d = v7.d f/ v3.d
        v7.d = vmaxnm_f32(v7.d, v5.d)
        v7.d = v7.d f- arg6.d
        arg4[x14_2] = v7.d
        x15_2 = arg2[x14_2 + 1]
        x14_2 += 1
        v4.d = v4.d f+ v6.d
        x16_5 = x15_2.d & 0xffff
    while (x16_5 s< arg1)

if (x14_2.d s< arg1)
    uint64_t x17_5 = zx.q(arg1 - 1 - x14_2.d)
    v5.d = fconvert.s(1f)
    v6.d = v5.d f/ v3.d
    uint64_t x15_8 = zx.q(x14_2.d)
    uint64_t x17_7
    
    if (x17_5 + 1 u> 3)
        v21 = data_71b4d0
        x17_7 = zx.q(x17_5.d + 1) & 3
        int64_t i_11 = x17_5 + 1 - x17_7
        uint128_t v20_1 = vdupq_laneq_s32(v4, 0)
        v19.d = float.s(sx.d(i_11))
        v7 = vdupq_laneq_s32(v2, 0)
        v16 = vdupq_laneq_s32(v1, 0)
        v17 = vdupq_laneq_s32(v6, 0)
        v18 = vdupq_laneq_s32(arg6, 0)
        void* x18_2 = &arg4[x15_8]
        v4.d = v4.d f+ v19.d
        v19.q = 0
        v19:8.q = 0
        x15_8 += i_11
        x14_2 = zx.q(x14_2.d + i_11.d)
        v20 = vaddq_f32(v20_1, v21)
        v21.d = fconvert.s(4f)
        v21:4.d = fconvert.s(4f)
        v21:8.d = fconvert.s(4f)
        v21:0xc.d = fconvert.s(4f)
        int64_t i_1
        
        do
            i_1 = i_11
            i_11 -= 4
            *x18_2 =
                vsubq_f32(vmaxnmq_f32(vmulq_f32(vfmaq_f32(v16, v7, v20), v17, 0), zx.o(0)), v18)
            x18_2 += 0x10
            v20 = vaddq_f32(v20, v21)
        while (i_1 != 4)
    
    if (x17_5 + 1 u<= 3 || x17_7.d != 0)
        int32_t* x15_9 = &arg4[x15_8]
        int32_t i_10 = arg1 - x14_2.d
        v7.d = 0f
        int32_t i_2
        
        do
            v16.d = vfma_f32(v1.d, v4.d, v2.d)
            v16.d = v16.d f* v6.d
            v16.d = vmaxnm_f32(v16.d, v7.d)
            v16.d = v16.d f- arg6.d
            i_2 = i_10
            i_10 -= 1
            *x15_9 = v16.d
            x15_9 = &x15_9[1]
            v4.d = v4.d f+ v5.d
        while (i_2 != 1)

if (arg5 s>= 1)
    uint32_t x15_10 = arg5 u>> 1
    int32_t x14_3
    
    if (x15_10 - arg5 s< 0)
        int64_t x6_1 = zx.q(x15_10 - arg5) << 0x20 s>> 0x1e
        int64_t i_3 = 0
        v4.d = 0f
        v5.d = fconvert.s(1f)
        uint32_t x7_1 = x15_10
        int32_t* x19_1 = arg4
        
        do
            int64_t x20_1 = zx.q(x7_1) << 0x20 s>> 0x1e
            int64_t x21_1 = i_3 << 2
            v1.d = *(x9_1 + x20_1)
            v2.d = *(x9_1 - x6_1 + x21_1)
            v3.d = *(x10_3 + x20_1)
            v6.d = *(x10_3 - x6_1 + x21_1)
            v7.d = *(x11_1 + x20_1)
            v16.d = *(x11_1 - x6_1 + x21_1)
            v19.d = *(x13_1 + x20_1)
            v20.d = v2.d f+ v1.d
            v1.d = *(x13_1 - x6_1 + x21_1)
            v17.d = *(x12_1 + x20_1)
            v18.d = *(x12_1 - x6_1 + x21_1)
            v2.d = v3.d f- v6.d
            v3.d = v16.d f+ v7.d
            v7.d = v19.d f- v1.d
            v6.d = v18.d f+ v17.d
            v1.d = v7.d f* v2.d
            unimplemented  {fnmsub s1, s6, s3, s1}
            v6.d = v6.d f* v2.d
            v16.d = v2.d f* v2.d
            unimplemented  {fnmsub s2, s7, s20, s6}
            v7.d = *x19_1
            unimplemented  {fnmsub s3, s3, s20, s16}
            v6.d = vfma_f32(v1.d, v2.d, v4.d)
            v6.d = v6.d f/ v3.d
            v6.d = v6.d f- arg6.d
            
            if (not(v6.d f>= v7.d))
                *x19_1 = v6.d
            
            i_3 -= 1
            v4.d = v4.d f+ v5.d
            x19_1 = &x19_1[1]
            x7_1 += 1
        while (neg.q(zx.q(arg5 - x15_10)) != i_3)
        
        x14_3 = arg5 - 1 - x15_10 + 1
    else
        x14_3 = 0
        v4.d = 0f
    
    int32_t x17_10 = x14_3 + x15_10
    
    if (x17_10 s< arg1)
        int64_t x6_3 = zx.q(x17_10) << 0x20 s>> 0x1e
        int64_t x6_4 = (sx.q(x17_10) - sx.q(arg5)) << 2
        int64_t i_4 = 0
        int32_t* x14_4 = &arg4[zx.q(x14_3)]
        v5.d = fconvert.s(1f)
        
        do
            int64_t x6_5 = i_4 << 2
            v1.d = *(x9_1 + x6_3 + x6_5)
            v2.d = *(x9_1 + x6_4 + x6_5)
            v3.d = *(x10_3 + x6_3 + x6_5)
            v6.d = *(x10_3 + x6_4 + x6_5)
            v7.d = *(x11_1 + x6_3 + x6_5)
            v16.d = *(x11_1 + x6_4 + x6_5)
            v19.d = *(x13_1 + x6_3 + x6_5)
            v20.d = v1.d f- v2.d
            v1.d = *(x13_1 + x6_4 + x6_5)
            v17.d = *(x12_1 + x6_3 + x6_5)
            v18.d = *(x12_1 + x6_4 + x6_5)
            v2.d = v3.d f- v6.d
            v3.d = v7.d f- v16.d
            v7.d = v19.d f- v1.d
            v6.d = v17.d f- v18.d
            v1.d = v7.d f* v2.d
            unimplemented  {fnmsub s1, s6, s3, s1}
            v6.d = v6.d f* v2.d
            v16.d = v2.d f* v2.d
            unimplemented  {fnmsub s2, s7, s20, s6}
            v7.d = x14_4[i_4]
            unimplemented  {fnmsub s3, s3, s20, s16}
            v6.d = vfma_f32(v1.d, v2.d, v4.d)
            v6.d = v6.d f/ v3.d
            v6.d = v6.d f- arg6.d
            
            if (not(v6.d f>= v7.d))
                x14_4[i_4] = v6.d
            
            i_4 += 1
            v4.d = v4.d f+ v5.d
        while (zx.q(arg1 - x15_10) - zx.q(x14_3) != i_4)
        
        x14_3 = arg1 - 1 - x15_10 + 1
    
    if (x14_3 s< arg1)
        uint64_t x10_5 = zx.q(arg1 - 1 - x14_3)
        v5.d = fconvert.s(1f)
        v3.d = v5.d f/ v3.d
        uint64_t x9_4 = zx.q(x14_3)
        
        if (x10_5 + 1 u> 3)
            uint64_t x10_7 = zx.q(x10_5.d + 1) & 3
            int64_t i_9 = x10_5 + 1 - x10_7
            v19.d = float.s(sx.d(i_9))
            uint128_t v18_1 = vdupq_laneq_s32(v4, 0)
            v4.d = v4.d f+ v19.d
            v19 = data_71b4d0
            uint128_t v17_1 = vdupq_laneq_s32(arg6, 0)
            v6 = vdupq_laneq_s32(v2, 0)
            v7 = vdupq_laneq_s32(v1, 0)
            uint128_t v16_1 = vdupq_laneq_s32(v3, 0)
            int128_t* x11_3 = &arg4[x9_4]
            float128 v17_2 = vnegq_f32(v17_1)
            x9_4 += i_9
            x14_3 += i_9.d
            float128 v18_2 = vaddq_f32(v18_1, v19)
            v19.d = fconvert.s(4f)
            v19:4.d = fconvert.s(4f)
            v19:8.d = fconvert.s(4f)
            v19:0xc.d = fconvert.s(4f)
            int64_t i_5
            
            do
                v21 = *x11_3
                float128 v20_3 = vfmaq_f32(v17_2, v16_1, vfmaq_f32(v7, v6, v18_2))
                v21 = vmovn_s32(vcgtq_f32(v21, v20_3))
                
                if ((zx.d(v21.w) & 1) == 0)
                    if ((zx.d(v21:2.w) & 1) != 0)
                        goto label_108aff8
                    
                    goto label_108b048
                
                *x11_3 = v20_3.d
                
                if ((zx.d(v21:2.w) & 1) != 0)
                label_108aff8:
                    *(x11_3 + 4) = v20_3:4.d
                    
                    if ((zx.d(v21:4.w) & 1) == 0)
                        goto label_108b050
                    
                    goto label_108b008
                
            label_108b048:
                
                if ((zx.d(v21:4.w) & 1) != 0)
                label_108b008:
                    *(x11_3 + 8) = v20_3:8.d
                    
                    if ((zx.d(v21:6.w) & 1) != 0)
                        *(x11_3 + 0xc) = v20_3:0xc.d
                else
                label_108b050:
                    
                    if ((zx.d(v21:6.w) & 1) != 0)
                        *(x11_3 + 0xc) = v20_3:0xc.d
                
                v18_2 = vaddq_f32(v18_2, v19)
                i_5 = i_9
                i_9 -= 4
                x11_3 = &x11_3[1]
            while (i_5 != 4)
            
            if (x10_7.d != 0)
                goto label_108b070
        else
        label_108b070:
            int32_t* x9_5 = &arg4[x9_4]
            int32_t i_8 = arg1 - x14_3
            int32_t i_6
            
            do
                v7.d = *x9_5
                v6.d = vfma_f32(v1.d, v4.d, v2.d)
                unimplemented  {fnmsub s6, s6, s3, s0}
                
                if (not(v6.d f>= v7.d))
                    *x9_5 = v6.d
                
                v4.d = v4.d f+ v5.d
                i_6 = i_8
                i_8 -= 1
                x9_5 = &x9_5[1]
            while (i_6 != 1)

if (*(x8 + 0x28) == x9)
    return 

__stack_chk_fail()
noreturn
