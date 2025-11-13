// 函数: sub_c50890
// 地址: 0xc50890
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_78
__builtin_memset(&var_78, 0, 0x18)
uint64_t x8 = zx.q(*arg3)
uint64_t x20
void* x23

if ((x8.d & 1) != 0)
    x20 = *(arg3 + 8)
    x23 = *(arg3 + 0x10)
else
    x20 = x8 u>> 1
    x23 = &arg3[1]

if (x20 + 7 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* var_68_1
    void* x24_1
    
    if (x20 + 7 u>= 0x17)
        uint64_t x25_1 = (x20 + 0x17) & 0xfffffffffffffff0
        void* x0_1 = operator new(x25_1)
        x24_1 = x0_1
        uint64_t var_70_1 = x20
        var_68_1 = x0_1
        var_78 = x25_1 | 1
        memcpy(x24_1, x23, x20)
    else
        x24_1 = &var_78 | 1
        var_78.b = (x20.d << 1).b
        
        if (x20 != 0)
            memcpy(x24_1, x23, x20)
    
    *(x24_1 + x20) = 0
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_78, "/kernel")
    int64_t* x0_5 = sub_c4aa70(arg1, &var_78)
    
    if ((zx.d(var_78.b) & 1) != 0)
        operator delete(var_68_1)
    
    int64_t var_90
    __builtin_memset(&var_90, 0, 0x18)
    uint64_t x8_6 = zx.q(*arg3)
    void* x22_1
    size_t x23_1
    
    if ((x8_6.d & 1) != 0)
        x23_1 = *(arg3 + 8)
        x22_1 = *(arg3 + 0x10)
    else
        x23_1 = x8_6 u>> 1
        x22_1 = &arg3[1]
    
    if (x23_1 + 5 u< -0x10)
        void* var_80_1
        void* x24_2
        
        if (x23_1 + 5 u>= 0x17)
            uint64_t x25_2 = (x23_1 + 0x15) & 0xfffffffffffffff0
            void* x0_8 = operator new(x25_2)
            x24_2 = x0_8
            size_t var_88_1 = x23_1
            var_80_1 = x0_8
            var_90 = x25_2 | 1
            memcpy(x24_2, x22_1, x23_1)
        else
            x24_2 = &var_90 | 1
            var_90.b = (x23_1.d << 1).b
            
            if (x23_1 != 0)
                memcpy(x24_2, x22_1, x23_1)
        
        *(x24_2 + x23_1) = 0
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_90, "/bias")
        int64_t* x0_12 = sub_c4aa70(arg1, &var_90)
        
        if ((zx.d(var_90.b) & 1) != 0)
            operator delete(var_80_1)
        
        int64_t v8
        v8.d = arg2[2].d
        void* var_b0
        __builtin_memset(&var_b0, 0, 0x20)
        int64_t* var_d0 = arg2
        int128_t* var_a0
        Eigen::internal::assign_op<float, float> var_58
        Eigen::internal::call_dense_assignment_loop<Eigen::Array<float, -1, 1, 0, -1, 1>, Eigen::PartialReduxExpr<Eigen::ArrayWrapper<Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::internal::member_sum<float, float>, 1>, Eigen::internal::assign_op<float, float> >(
            &var_a0, &var_d0, &var_58)
        int64_t* var_c8 = arg2
        int64_t result
        uint128_t v0
        float128 v1
        float128 v2
        float128 v3
        float128 v4
        float128 v5
        uint128_t v6
        result, v0, v1, v2, v3, v4, v5, v6 = Eigen::internal::call_dense_assignment_loop<Eigen::Array<float, -1, 1, 0, -1, 1>, Eigen::PartialReduxExpr<Eigen::CwiseUnaryOp<Eigen::internal::scalar_square_op<float>, Eigen::ArrayWrapper<Eigen::Matrix<float, -1, -1, 0, -1, -1> > const> const, Eigen::internal::member_sum<float, float>, 1>, Eigen::internal::assign_op<float, float> >(
            &var_b0, &var_d0, &var_58)
        int128_t* x23_2 = var_a0
        v6.d = float.s(v8.d)
        uint128_t var_e0 = v6
        int64_t var_98
        int64_t x8_16
        int32_t* x22_2
        
        if (var_98 s< 1)
            x22_2 = nullptr
            x8_16 = neg.q(neg.q(var_98) & 0xfffffffffffffffc)
        else
            if (var_98 u>> 0x3e != 0)
                operator new(-1)
            
            int64_t x25_3 = var_98 << 2
            result, v0, v1, v2, v3, v4, v5, v6 = malloc(x25_3 + 0x10)
            
            if (result == 0)
                x22_2 = nullptr
                
                if (x25_3 != 0)
                label_c50ab8:
                    
                    if (x22_2 == 0)
                        result, v0, v1, v2, v3, v4, v5, v6 = operator new(-1)
            else
                x22_2 = (result + 0x10) & 0xfffffffffffffff0
                *(x22_2 - 8) = result
                
                if (x25_3 != 0)
                    goto label_c50ab8
            
            v6 = var_e0
            x8_16 = var_98 & 0xfffffffffffffffc
            
            if (var_98 s>= 4)
                int64_t x9_1 = 0
                v0 = vdupq_laneq_s32(v6, 0)
                int32_t* x10_1 = x22_2
                int128_t* x11_1 = x23_2
                
                do
                    v1 = *x11_1
                    x11_1 = &x11_1[1]
                    x9_1 += 4
                    *x10_1 = vdivq_f32(v1, v0)
                    x10_1 = &x10_1[4]
                while (x9_1 s< x8_16)
        
        int64_t x9_2 = var_98 - x8_16
        
        if (var_98 s> x8_16)
            if (x9_2 u< 8)
            label_c50b78:
                int64_t i_8 = var_98 - x8_16
                int32_t* x8_17 = x23_2 + (x8_16 << 2)
                void* x10_5 = &x22_2[x8_16]
                int64_t i
                
                do
                    v0.d = *x8_17
                    x8_17 = &x8_17[1]
                    i = i_8
                    i_8 -= 1
                    v0.d = v0.d f/ v6.d
                    *x10_5 = v0.d
                    x10_5 += 4
                while (i != 1)
            else
                int64_t x11_2 = x8_16 << 2
                
                if (&x22_2[x8_16] u< x23_2 + (var_98 << 2) && x23_2 + x11_2 u< &x22_2[var_98])
                    goto label_c50b78
                
                int64_t i_12 = x9_2 & 0xfffffffffffffff8
                v0 = vdupq_laneq_s32(v6, 0)
                x8_16 += i_12
                void* x11_3 = x22_2 + x11_2 + 0x10
                void* x12_4 = x23_2 + x11_2 + 0x10
                int64_t i_10 = i_12
                int64_t i_1
                
                do
                    v1 = *(x12_4 - 0x10)
                    v2 = *x12_4
                    i_1 = i_10
                    i_10 -= 8
                    x12_4 += 0x20
                    v1 = vdivq_f32(v1, v0)
                    v2 = vdivq_f32(v2, v0)
                    *(x11_3 - 0x10) = v1
                    *x11_3 = v2
                    x11_3 += 0x20
                while (i_1 != 8)
                
                if (x9_2 != i_12)
                    goto label_c50b78
        
        int128_t* x25_4 = var_a0
        void* x24_4 = var_b0
        int64_t x8_22
        int32_t* x23_3
        
        if (var_98 s< 1)
            x23_3 = nullptr
            x8_22 = neg.q(neg.q(var_98) & 0xfffffffffffffffc)
        else
            if (var_98 u>> 0x3e != 0)
                operator new(-1)
            
            int64_t x27_1 = var_98 << 2
            result, v0, v1, v2, v3, v4, v5, v6 = malloc(x27_1 + 0x10)
            
            if (result == 0)
                x23_3 = nullptr
                v6 = var_e0
                
                if (x27_1 != 0)
                label_c50c04:
                    
                    if (x23_3 == 0)
                        result, v0, v1, v2, v3, v4, v5, v6 = operator new(-1)
                        v6 = var_e0
            else
                x23_3 = (result + 0x10) & 0xfffffffffffffff0
                *(x23_3 - 8) = result
                v6 = var_e0
                
                if (x27_1 != 0)
                    goto label_c50c04
            
            x8_22 = var_98 & 0xfffffffffffffffc
            
            if (var_98 s>= 4)
                int64_t x9_3 = 0
                v0 = vdupq_laneq_s32(v6, 0)
                v1.d = 0x3727c5ac
                v1:4.d = 0x3727c5ac
                v1:8.d = 0x3727c5ac
                v1:0xc.d = 0x3727c5ac
                int32_t* x10_6 = x23_3
                void* x11_4 = x24_4
                int128_t* x12_5 = x25_4
                
                do
                    v2 = *x11_4
                    x11_4 += 0x10
                    v3 = *x12_5
                    x12_5 = &x12_5[1]
                    x9_3 += 4
                    *x10_6 = vsqrtq_f32(vaddq_f32(
                        vdivq_f32(vsubq_f32(v2, vdivq_f32(vmulq_f32(v3, v3, 0), v0)), v0), v1))
                    x10_6 = &x10_6[4]
                while (x9_3 s< x8_22)
        
        int64_t x9_4 = var_98 - x8_22
        
        if (var_98 s> x8_22)
            if (x9_4 u< 8)
            label_c50d54:
                int64_t x11_7 = x8_22 << 2
                int64_t i_9 = var_98 - x8_22
                void* x8_23 = x25_4 + x11_7
                void* x10_11 = x24_4 + x11_7
                void* x11_8 = &x23_3[x8_22]
                int64_t i_2
                
                do
                    v0.d = *x8_23
                    x8_23 += 4
                    v1.d = *x10_11
                    x10_11 += 4
                    v2.d = float.s(0x3727c5ac)
                    i_2 = i_9
                    i_9 -= 1
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
                int64_t x11_5 = x8_22 << 2
                int64_t x10_7 = var_98 << 2
                void* x12_6 = &x23_3[x8_22]
                void* x13_2 = &x23_3[var_98]
                
                if (((x12_6 u< x25_4 + x10_7 ? 1 : 0) & (x25_4 + x11_5 u< x13_2 ? 1 : 0) & 1) != 0
                        || ((x12_6 u< x24_4 + x10_7 ? 1 : 0) & (x24_4 + x11_5 u< x13_2 ? 1 : 0)
                        & 1) != 0)
                    goto label_c50d54
                
                int64_t i_13 = x9_4 & 0xfffffffffffffff8
                v0 = vdupq_laneq_s32(v6, 0)
                x8_22 += i_13
                float128* x11_6 = x23_3 + x11_5 + 0x10
                void* x12_8 = x25_4 + x11_5 + 0x10
                void* x13_4 = x24_4 + x11_5 + 0x10
                v1.d = 0x3727c5ac
                v1:4.d = 0x3727c5ac
                v1:8.d = 0x3727c5ac
                v1:0xc.d = 0x3727c5ac
                int64_t i_11 = i_13
                int64_t i_3
                
                do
                    v2 = *(x12_8 - 0x10)
                    v3 = *x12_8
                    v4 = *(x13_4 - 0x10)
                    v5 = *x13_4
                    i_3 = i_11
                    i_11 -= 8
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
                
                if (x9_4 != i_13)
                    goto label_c50d54
        
        if (arg2[2] s>= 1)
            int32_t* x10_12 = *arg2
            int64_t x8_25 = arg2[1]
            int64_t i_4 = 0
            
            do
                if (arg2[1] s>= 1)
                    int64_t x12_11 = 0
                    
                    do
                        v0.d = x22_2[x12_11]
                        v1.d = x10_12[x12_11]
                        x12_11 += 1
                        v0.d = v1.d f- v0.d
                        x10_12[x12_11] = v0.d
                        x8_25 = arg2[1]
                    while (x12_11 s< x8_25)
                
                i_4 += 1
                x10_12 = &x10_12[x8_25]
            while (i_4 s< arg2[2])
            
            if (arg2[2] s>= 1)
                int32_t* x10_13 = *arg2
                int64_t i_5 = 0
                
                do
                    if (arg2[1] s>= 1)
                        int64_t x12_14 = 0
                        
                        do
                            v0.d = x23_3[x12_14]
                            v1.d = x10_13[x12_14]
                            x12_14 += 1
                            v0.d = v1.d f/ v0.d
                            x10_13[x12_14] = v0.d
                            x8_25 = arg2[1]
                        while (x12_14 s< x8_25)
                    
                    i_5 += 1
                    x10_13 = &x10_13[x8_25]
                while (i_5 s< arg2[2])
                
                if (arg2[2] s>= 1)
                    int32_t* x10_14 = *arg2
                    int64_t x11_11 = *x0_5
                    int64_t i_6 = 0
                    
                    do
                        if (arg2[1] s>= 1)
                            int64_t x13_7 = 0
                            
                            do
                                v0.d = *(x11_11 + (i_6 << 2))
                                v1.d = x10_14[x13_7]
                                x13_7 += 1
                                v0.d = v0.d f* v1.d
                                x10_14[x13_7] = v0.d
                                x8_25 = arg2[1]
                            while (x13_7 s< x8_25)
                        
                        i_6 += 1
                        x10_14 = &x10_14[x8_25]
                    while (i_6 s< arg2[2])
                    
                    if (arg2[2] s>= 1)
                        int32_t* x10_15 = *arg2
                        int64_t x11_12 = *x0_12
                        int64_t i_7 = 0
                        
                        do
                            if (arg2[1] s>= 1)
                                int64_t j = 0
                                
                                do
                                    v0.d = *(x11_12 + (i_7 << 2))
                                    v1.d = x10_15[j]
                                    j += 1
                                    v0.d = v0.d f+ v1.d
                                    x10_15[j] = v0.d
                                while (j s< arg2[1])
                            
                            i_7 += 1
                            x10_15 = &x10_15[x8_25]
                        while (i_7 s< arg2[2])
        
        if (x23_3 != 0)
            result = free(*(x23_3 - 8))
        
        if (x22_2 != 0)
            result = free(*(x22_2 - 8))
        
        void* x8_30 = var_b0
        
        if (x8_30 != 0)
            result = free(*(x8_30 - 8))
        
        int128_t* x8_31 = var_a0
        
        if (x8_31 == 0)
            return result
        
        return free(*(x8_31 - 8))

return Eigen::NoAlias<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::MatrixBase>::operator=<Eigen::Product<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true>, Eigen::Transpose<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, -1, -1, true> >, 0> >(
    std::__ndk1::__basic_string_common<true>::__throw_length_error()) __tailcall
