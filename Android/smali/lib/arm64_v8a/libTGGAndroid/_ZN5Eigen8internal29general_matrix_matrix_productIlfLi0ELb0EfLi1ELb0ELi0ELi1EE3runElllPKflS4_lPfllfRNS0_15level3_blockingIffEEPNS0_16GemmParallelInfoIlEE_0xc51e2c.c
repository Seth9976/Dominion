// 函数: _ZN5Eigen8internal29general_matrix_matrix_productIlfLi0ELb0EfLi1ELb0ELi0ELi1EE3runElllPKflS4_lPfllfRNS0_15level3_blockingIffEEPNS0_16GemmParallelInfoIlEE
// 地址: 0xc51e2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_180
int64_t* sp = &var_180
int128_t v8 = arg11
int64_t x26 = arg3
int64_t x22 = *(arg12 + 0x10)
int64_t x20 = *(arg12 + 0x18)
int64_t x8 = *(arg12 + 0x20)
int64_t x27 = arg1
float* var_f0 = arg8
int64_t x9

x9 = x22 s< arg1 ? x22 : arg1

int64_t x24 = x9 * x8
int64_t x19

x19 = x20 s< arg2 ? x20 : arg2

if (x24 u>> 0x3e != 0)
    operator new(-1)

Eigen::internal::const_blas_data_mapper<float, int64_t, 0>* x8_2 = *arg12
int64_t x24_1 = x24 << 2
int64_t x23 = x19 * x8
Eigen::internal::const_blas_data_mapper<float, int64_t, 0>* x10 = x8_2

if (x8_2 == 0)
    if (x24_1 u>= 0x20001)
        arg1 = malloc(x24_1 + 0x10)
        Eigen::internal::const_blas_data_mapper<float, int64_t, 0>* x8_5
        
        if (arg1 != 0)
            x8_5 = (arg1 + 0x10) & 0xfffffffffffffff0
            x10 = x8_5
            *(x8_5 - 8) = arg1
        
        if (arg1 == 0 || x8_5 == 0)
            operator new(-1)
            x10 = nullptr
    else
        void* x8_3 = &var_180 - ((x24_1 + 0x1e) & 0xfffffffffffffff0)
        x10 = x8_3
        sp = x8_3
    
    x8_2 = *arg12

Eigen::internal::const_blas_data_mapper<float, int64_t, 0>* x9_4

x9_4 = x8_2 == 0 ? x10 : nullptr

if (x23 u>> 0x3e != 0)
    operator new(-1)

int64_t x9_7 = *(arg12 + 8)
int64_t x23_1 = x23 << 2
int64_t x11 = x9_7

if (x9_7 == 0)
    if (x23_1 u>= 0x20001)
        arg1 = malloc(x23_1 + 0x10)
        
        if (arg1 != 0)
            x11 = (arg1 + 0x10) & 0xfffffffffffffff0
            *(x11 - 8) = arg1
        
        if (arg1 == 0 || x11 == 0)
            operator new(-1)
            x11 = 0
    else
        x11 = sp - ((x23_1 + 0x1e) & 0xfffffffffffffff0)
        sp = x11
    
    x9_7 = *(arg12 + 8)

int64_t x9_8

x9_8 = x9_7 == 0 ? x11 : 0

var_180 = x9_8

if (x27 s>= 1)
    int32_t x8_10 = (x20 s< arg2 ? 1 : 0) | (x8 != x26 ? 1 : 0) | (x22 s>= x27 ? 1 : 0)
    int64_t var_148_1 = x27
    int64_t x14_1 = 0
    int64_t var_118_1 = x26
    void* var_130_1 = arg4
    int64_t x8_20
    
    do
        Eigen::internal::const_blas_data_mapper<float, int64_t, 0>* x28_1 = x10
        x8_20 = x14_1 + x9
        int64_t x8_21
        
        x8_21 = x8_20 s> x27 ? x27 : x8_20
        
        if (x26 s>= 1)
            int64_t x25_1 = x8_21 - x14_1
            void* var_98
            float var_68
            
            if (arg2 s<= 0)
                void* x22_3 = var_130_1
                int64_t x23_4 = x8
                int64_t x20_4 = 0
                int64_t x21_3 = 0
                
                do
                    int64_t x8_31
                    
                    x8_31 = x26 s< x23_4 ? x26 : x23_4
                    
                    x21_3 += x8
                    var_98 = x22_3
                    int64_t var_90_5 = arg5
                    Eigen::internal::gemm_pack_lhs<float, int64_t, Eigen::internal::const_blas_data_mapper<float, int64_t, 0>, 12, 4, __Float32x4_t, 0, false, false>::operator()(
                        &var_68, x28_1, &var_98, x8_31 + x20_4, x25_1, 0)
                    x23_4 += x8
                    x20_4 -= x8
                    x22_3 += (x8 * arg5) << 2
                while (x21_3 s< x26)
            else
                float const* x20_1 = arg6
                int64_t x8_22 = 0
                int64_t var_100_1 = x14_1
                int32_t x9_15 = x8_10 | (x14_1 == 0 ? 1 : 0)
                int64_t var_a8_1 = x25_1
                int64_t x12_3
                
                do
                    x12_3 = x8_22 + x8
                    int64_t x10_10
                    
                    x10_10 = x12_3 s> x26 ? x26 : x12_3
                    
                    int64_t x26_1 = x10_10 - x8_22
                    var_98 = &arg4[x14_1 + x8_22 * arg5]
                    int64_t var_90_1 = arg5
                    Eigen::internal::gemm_pack_lhs<float, int64_t, Eigen::internal::const_blas_data_mapper<float, int64_t, 0>, 12, 4, __Float32x4_t, 0, false, false>::operator()(
                        &var_68, x28_1, &var_98, x26_1, x25_1, 0)
                    float const* var_d0_1 = x20_1
                    Eigen::internal::blas_data_mapper<float, int64_t, 0, 0, 1> var_88
                    
                    if ((x9_15 & 1) == 0)
                        void* x23_3 = var_f0
                        int64_t x20_3 = 0
                        int64_t x21_2 = 0
                        int64_t x22_2 = x19
                        
                        do
                            x21_2 += x19
                            int64_t x8_30
                            
                            x8_30 = arg2 s< x22_2 ? arg2 : x22_2
                            
                            var_98 = x23_3
                            int64_t var_90_4 = arg10
                            *(sp - 0x18) = 0
                            *(sp - 0x10) = 0
                            *(sp - 0x20) = -1
                            Eigen::internal::gebp_kernel<float, float, int64_t, Eigen::internal::blas_data_mapper<float, int64_t, 0, 0, 1>, 12, 4, false, false>::operator()(
                                &var_88, &var_98, x10, x11, var_a8_1, x26_1, x8_30 + x20_3, -1, v8)
                            x23_3 += (arg10 * x19) << 2
                            x22_2 += x19
                            x20_3 -= x19
                        while (x21_2 s< arg2)
                    else
                        float* x21_1 = var_f0
                        int64_t x24_2 = 0
                        int64_t x27_1 = 0
                        int64_t x22_1 = x19
                        
                        do
                            int64_t x8_25
                            
                            x8_25 = arg2 s< x22_1 ? arg2 : x22_1
                            
                            int64_t x23_2 = x8_25 + x24_2
                            x27_1 += x19
                            var_98 = x20_1
                            int64_t var_90_2 = arg7
                            float var_80
                            Eigen::internal::gemm_pack_rhs<float, int64_t, Eigen::internal::const_blas_data_mapper<float, int64_t, 1>, 4, 1, false, false>::operator()(
                                &var_80, x11, &var_98, x26_1, x23_2, 0)
                            var_98 = x21_1
                            int64_t var_90_3 = arg10
                            *(sp - 0x18) = 0
                            *(sp - 0x10) = 0
                            *(sp - 0x20) = -1
                            Eigen::internal::gebp_kernel<float, float, int64_t, Eigen::internal::blas_data_mapper<float, int64_t, 0, 0, 1>, 12, 4, false, false>::operator()(
                                &var_88, &var_98, x10, x11, var_a8_1, x26_1, x23_2, -1, v8)
                            x22_1 += x19
                            x24_2 -= x19
                            x21_1 = &x21_1[arg10 * x19]
                            x20_1 = &x20_1[x19]
                        while (x27_1 s< arg2)
                    x26 = var_118_1
                    x25_1 = var_a8_1
                    x28_1 = x10
                    x14_1 = var_100_1
                    x20_1 = &var_d0_1[x8 * arg7]
                    x8_22 = x12_3
                while (x12_3 s< x26)
        
        x27 = var_148_1
        var_130_1 += x9 << 2
        x14_1 = x8_20
        var_f0 = &var_f0[x9]
    while (x8_20 s< x27)

int64_t x8_35 = var_180

if (x23_1 u>= 0x20001 && x8_35 != 0)
    free(*(x8_35 - 8))

if (x24_1 u>= 0x20001 && x9_4 != 0)
    free(*(x9_4 - 8))
