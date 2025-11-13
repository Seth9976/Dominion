// 函数: sub_c52eec
// 地址: 0xc52eec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
v8.d = arg1[2].d
int64_t* var_90 = arg1
void* var_70
__builtin_memset(&var_70, 0, 0x20)
int128_t* var_60
Eigen::internal::assign_op<float, float> var_48
Eigen::internal::call_dense_assignment_loop<Eigen::Array<float, -1, 1, 0, -1, 1>, Eigen::PartialReduxExpr<Eigen::ArrayWrapper<Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::internal::member_sum<float, float>, 1>, Eigen::internal::assign_op<float, float> >(
    &var_60, &var_90, &var_48)
int64_t* var_88 = arg1
int64_t result
uint128_t v0
float128 v1
float128 v2
float128 v3
float128 v4
float128 v5
uint128_t v6
result, v0, v1, v2, v3, v4, v5, v6 = Eigen::internal::call_dense_assignment_loop<Eigen::Array<float, -1, 1, 0, -1, 1>, Eigen::PartialReduxExpr<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>, Eigen::ArrayWrapper<Eigen::Matrix<float, -1, -1, 0, -1, -1> > const> const, Eigen::internal::member_sum<float, float>, 1>, Eigen::internal::assign_op<float, float> >(
    &var_70, &var_90, &var_48)
int128_t* x21 = var_60
v6.d = float.s(v8.d)
uint128_t var_a0 = v6
int64_t var_58
int64_t x8_4
int32_t* x20

if (var_58 s< 1)
    x20 = nullptr
    x8_4 = neg.q(neg.q(var_58) & 0xfffffffffffffffc)
else
    if (var_58 u>> 0x3e != 0)
        operator new(-1)
    
    int64_t x23_1 = var_58 << 2
    result, v0, v1, v2, v3, v4, v5, v6 = malloc(x23_1 + 0x10)
    
    if (result == 0)
        x20 = nullptr
        v6 = var_a0
        
        if (x23_1 != 0)
        label_c52fa8:
            
            if (x20 == 0)
                result, v0, v1, v2, v3, v4, v5, v6 = operator new(-1)
                v6 = var_a0
    else
        x20 = (result + 0x10) & 0xfffffffffffffff0
        *(x20 - 8) = result
        v6 = var_a0
        
        if (x23_1 != 0)
            goto label_c52fa8
    
    x8_4 = var_58 & 0xfffffffffffffffc
    
    if (var_58 s>= 4)
        int64_t x9_1 = 0
        v0 = vdupq_laneq_s32(v6, 0)
        int32_t* x10_1 = x20
        int128_t* x11_1 = x21
        
        do
            v1 = *x11_1
            x11_1 = &x11_1[1]
            x9_1 += 4
            *x10_1 = vdivq_f32(v1, v0)
            x10_1 = &x10_1[4]
        while (x9_1 s< x8_4)

int64_t x9_2 = var_58 - x8_4

if (var_58 s> x8_4)
    if (x9_2 u< 8)
    label_c53068:
        int64_t i_6 = var_58 - x8_4
        int32_t* x8_5 = x21 + (x8_4 << 2)
        void* x10_5 = &x20[x8_4]
        int64_t i
        
        do
            v0.d = *x8_5
            x8_5 = &x8_5[1]
            i = i_6
            i_6 -= 1
            v0.d = v0.d f/ v6.d
            *x10_5 = v0.d
            x10_5 += 4
        while (i != 1)
    else
        int64_t x11_2 = x8_4 << 2
        
        if (&x20[x8_4] u< x21 + (var_58 << 2) && x21 + x11_2 u< &x20[var_58])
            goto label_c53068
        
        int64_t i_10 = x9_2 & 0xfffffffffffffff8
        v0 = vdupq_laneq_s32(v6, 0)
        x8_4 += i_10
        void* x11_3 = x20 + x11_2 + 0x10
        void* x12_4 = x21 + x11_2 + 0x10
        int64_t i_8 = i_10
        int64_t i_1
        
        do
            v1 = *(x12_4 - 0x10)
            v2 = *x12_4
            i_1 = i_8
            i_8 -= 8
            x12_4 += 0x20
            v1 = vdivq_f32(v1, v0)
            v2 = vdivq_f32(v2, v0)
            *(x11_3 - 0x10) = v1
            *x11_3 = v2
            x11_3 += 0x20
        while (i_1 != 8)
        
        if (x9_2 != i_10)
            goto label_c53068

int128_t* x23_2 = var_60
void* x22_1 = var_70
int64_t x8_10
int32_t* x21_1

if (var_58 s< 1)
    x21_1 = nullptr
    x8_10 = neg.q(neg.q(var_58) & 0xfffffffffffffffc)
else
    if (var_58 u>> 0x3e != 0)
        operator new(-1)
    
    int64_t x25_1 = var_58 << 2
    result, v0, v1, v2, v3, v4, v5, v6 = malloc(x25_1 + 0x10)
    
    if (result == 0)
        x21_1 = nullptr
        v6 = var_a0
        
        if (x25_1 != 0)
        label_c530f4:
            
            if (x21_1 == 0)
                result, v0, v1, v2, v3, v4, v5, v6 = operator new(-1)
                v6 = var_a0
    else
        x21_1 = (result + 0x10) & 0xfffffffffffffff0
        *(x21_1 - 8) = result
        v6 = var_a0
        
        if (x25_1 != 0)
            goto label_c530f4
    
    x8_10 = var_58 & 0xfffffffffffffffc
    
    if (var_58 s>= 4)
        int64_t x9_3 = 0
        v0 = vdupq_laneq_s32(v6, 0)
        v1.d = 0x3727c5ac
        v1:4.d = 0x3727c5ac
        v1:8.d = 0x3727c5ac
        v1:0xc.d = 0x3727c5ac
        int32_t* x10_6 = x21_1
        void* x11_4 = x22_1
        int128_t* x12_5 = x23_2
        
        do
            v2 = *x11_4
            x11_4 += 0x10
            v3 = *x12_5
            x12_5 = &x12_5[1]
            x9_3 += 4
            *x10_6 = vsqrtq_f32(vaddq_f32(
                vdivq_f32(vsubq_f32(v2, vdivq_f32(vmulq_f32(v3, v3, 0), v0)), v0), v1))
            x10_6 = &x10_6[4]
        while (x9_3 s< x8_10)

int64_t x9_4 = var_58 - x8_10

if (var_58 s> x8_10)
    if (x9_4 u< 8)
    label_c53244:
        int64_t x11_7 = x8_10 << 2
        int64_t i_7 = var_58 - x8_10
        void* x8_11 = x23_2 + x11_7
        void* x10_11 = x22_1 + x11_7
        void* x11_8 = &x21_1[x8_10]
        int64_t i_2
        
        do
            v0.d = *x8_11
            x8_11 += 4
            v1.d = *x10_11
            x10_11 += 4
            v2.d = float.s(0x3727c5ac)
            i_2 = i_7
            i_7 -= 1
            v0.d = v0.d f* v0.d
            v0.d = v0.d f/ v6.d
            v0.d = v1.d f- v0.d
            v0.d = v0.d f/ v6.d
            v0.d = v0.d f+ v2.d
            v0.d = sqrt(v0.d)
            *x11_8 = v0.d
            x11_8 += 4
        while (i_2 != 1)
    else
        int64_t x11_5 = x8_10 << 2
        int64_t x10_7 = var_58 << 2
        void* x12_6 = &x21_1[x8_10]
        void* x13_2 = &x21_1[var_58]
        
        if (((x12_6 u< x23_2 + x10_7 ? 1 : 0) & (x23_2 + x11_5 u< x13_2 ? 1 : 0) & 1) != 0
                || ((x12_6 u< x22_1 + x10_7 ? 1 : 0) & (x22_1 + x11_5 u< x13_2 ? 1 : 0) & 1) != 0)
            goto label_c53244
        
        int64_t i_11 = x9_4 & 0xfffffffffffffff8
        v0 = vdupq_laneq_s32(v6, 0)
        x8_10 += i_11
        float128* x11_6 = x21_1 + x11_5 + 0x10
        void* x12_8 = x23_2 + x11_5 + 0x10
        void* x13_4 = x22_1 + x11_5 + 0x10
        v1.d = 0x3727c5ac
        v1:4.d = 0x3727c5ac
        v1:8.d = 0x3727c5ac
        v1:0xc.d = 0x3727c5ac
        int64_t i_9 = i_11
        int64_t i_3
        
        do
            v2 = *(x12_8 - 0x10)
            v3 = *x12_8
            v4 = *(x13_4 - 0x10)
            v5 = *x13_4
            i_3 = i_9
            i_9 -= 8
            x12_8 += 0x20
            float128 v2_4 = vmulq_f32(v2, v2, 0)
            float128 v3_2 = vmulq_f32(v3, v3, 0)
            float128 v2_5 = vdivq_f32(v2_4, v0)
            float128 v3_3 = vdivq_f32(v3_2, v0)
            float128 v2_6 = vsubq_f32(v4, v2_5)
            float128 v3_4 = vsubq_f32(v5, v3_3)
            float128 v2_7 = vdivq_f32(v2_6, v0)
            float128 v3_5 = vdivq_f32(v3_4, v0)
            float128 v2_8 = vaddq_f32(v2_7, v1)
            float128 v3_6 = vaddq_f32(v3_5, v1)
            v2 = vsqrtq_f32(v2_8)
            v3 = vsqrtq_f32(v3_6)
            x11_6[-1] = v2
            *x11_6 = v3
            x11_6 = &x11_6[2]
            x13_4 += 0x20
        while (i_3 != 8)
        
        if (x9_4 != i_11)
            goto label_c53244

if (arg1[2] s>= 1)
    int32_t* x9_5 = *arg1
    int64_t x11_9 = arg1[1]
    int64_t i_4 = 0
    
    do
        if (arg1[1] s>= 1)
            int64_t x12_11 = 0
            
            do
                v0.d = x20[x12_11]
                v1.d = x9_5[x12_11]
                x12_11 += 1
                v0.d = v1.d f- v0.d
                x9_5[x12_11] = v0.d
                x11_9 = arg1[1]
            while (x12_11 s< x11_9)
        
        i_4 += 1
        x9_5 = &x9_5[x11_9]
    while (i_4 s< arg1[2])
    
    if (arg1[2] s>= 1)
        int32_t* x9_6 = *arg1
        int64_t i_5 = 0
        
        do
            if (arg1[1] s>= 1)
                int64_t j = 0
                
                do
                    v0.d = x21_1[j]
                    v1.d = x9_6[j]
                    j += 1
                    v0.d = v1.d f/ v0.d
                    x9_6[j] = v0.d
                while (j s< arg1[1])
            
            i_5 += 1
            x9_6 = &x9_6[x11_9]
        while (i_5 s< arg1[2])

if (x21_1 != 0)
    result = free(*(x21_1 - 8))

if (x20 != 0)
    result = free(*(x20 - 8))

void* x8_14 = var_70

if (x8_14 != 0)
    result = free(*(x8_14 - 8))

int128_t* x8_15 = var_60

if (x8_15 == 0)
    return result

return free(*(x8_15 - 8))
