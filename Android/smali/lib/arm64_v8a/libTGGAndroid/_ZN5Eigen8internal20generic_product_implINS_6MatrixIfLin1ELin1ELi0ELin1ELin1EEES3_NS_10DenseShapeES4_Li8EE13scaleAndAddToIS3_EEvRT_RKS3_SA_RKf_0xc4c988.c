// 函数: _ZN5Eigen8internal20generic_product_implINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEES3_NS_10DenseShapeES4_Li8EE13scaleAndAddToIS3_EEvRT_RKS3_SA_RKf
// 地址: 0xc4c988
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t entry_v8
int64_t var_40 = entry_v8.q
int64_t x1 = *(arg2 + 0x10)

if (x1 != 0)
    Eigen::Matrix<float, -1, -1, 0, -1, -1>& x21_1 = arg1
    arg1 = *(arg2 + 8)
    
    if (arg1 != 0)
        int64_t x11_1 = *(arg3 + 0x10)
        
        if (x11_1 != 0)
            int64_t x10_1 = *(x21_1 + 0x10)
            float* var_b0
            float* var_78
            float v1
            float v2
            float v3
            
            if (x10_1 != 1)
                int64_t x9_3 = *(x21_1 + 8)
                int64_t var_68
                int64_t var_60
                int64_t var_58
                
                if (x9_3 != 1)
                    entry_v8.d = *arg4
                    var_58 = x1
                    var_78 = nullptr
                    void* var_70_2 = nullptr
                    var_68 = x9_3
                    var_60 = x10_1
                    Eigen::internal::evaluateProductBlockingSizesHeuristic<float, float, 1, int64_t>(
                        &var_58, &var_68, &var_60, 1)
                    int64_t x8_4 = var_58
                    int64_t var_50_1 = x8_4 * var_68
                    int64_t var_48_1 = var_60 * x8_4
                    int64_t x0_1 = *(arg2 + 8)
                    float** var_c0_1 = &var_78
                    int64_t var_b8_1 = 0
                    int64_t var_d0_1 = 1
                    int64_t var_c8_1 = *(x21_1 + 8)
                    Eigen::internal::general_matrix_matrix_product<int64_t, float, 0, false, float, 0, false, 0, 1>::run(
                        x0_1, *(arg3 + 0x10), *(arg2 + 0x10), *arg2, x0_1, *arg3, *(arg3 + 8), 
                        *x21_1, entry_v8)
                    float* x8_7 = var_78
                    
                    if (x8_7 != 0)
                        free(*(x8_7 - 8))
                    
                    if (var_70_2 != 0)
                        free(*(var_70_2 - 8))
                else
                    float* x8_2 = *x21_1
                    float* x9_4 = *arg2
                    
                    if (x11_1 != 1)
                        var_78 = x8_2
                        int64_t var_a0_1 = x1
                        Eigen::Matrix<float, -1, -1, 0, -1, -1> const& var_98_1 = arg2
                        var_68 = x10_1
                        var_60 = x21_1
                        var_58 = 0
                        int64_t var_50_2 = 0
                        Eigen::Matrix<float, -1, -1, 0, -1, -1> const& var_38 = arg3
                        var_b0 = x9_4
                        int64_t var_90_1 = 0
                        int64_t var_88_1 = 0
                        int64_t var_48_2 = 1
                        int64_t var_80_1 = 1
                        Eigen::internal::gemv_dense_selector<2, 1, true>::run<Eigen::Transpose<Eigen::Matrix<float, -1, -1, 0, -1, -1> const>, Eigen::Transpose<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1> const, 1, -1, false> const>, Eigen::Transpose<Eigen::Block<Eigen::Matrix<float, -1, -1, 0, -1, -1>, 1, -1, false> > >(
                            &var_38, &var_b0, &var_78, arg4)
                    else
                        int64_t x10_4 = *(arg3 + 8)
                        
                        if (x10_4 == 0)
                            v1 = 0f
                        else
                            float* x11_2 = *arg3
                            v1 = *x9_4 * *x11_2
                            
                            if (x10_4 s>= 2)
                                int64_t i_3 = x10_4 - 1
                                float* x11_3 = &x11_2[1]
                                void* x9_5 = &x9_4[arg1]
                                int64_t i
                                
                                do
                                    v2 = *x9_5
                                    v3 = *x11_3
                                    x11_3 = &x11_3[1]
                                    i = i_3
                                    i_3 -= 1
                                    x9_5 += arg1 << 2
                                    v1 = v1 + v2 * v3
                                while (i != 1)
                        
                        *x8_2 = *arg4 * v1 + *x8_2
            else
                float* x4_1 = *x21_1
                float* x9_1 = *arg3
                float const v0 = *arg4
                
                if (arg1 != 1)
                    var_78 = *arg2
                    Eigen::Matrix<float, -1, -1, 0, -1, -1>& var_70_1 = arg1
                    var_b0 = x9_1
                    int64_t var_a8_1 = 1
                    Eigen::internal::general_matrix_vector_product<int64_t, float, Eigen::internal::const_blas_data_mapper<float, int64_t, 0>, 0, false, float, Eigen::internal::const_blas_data_mapper<float, int64_t, 1>, false, 0>::run(
                        arg1, x1, &var_78, &var_b0, x4_1, 1, v0)
                else
                    int64_t x8_1 = *(arg3 + 8)
                    
                    if (x8_1 == 0)
                        v1 = 0f
                    else
                        float* x10_2 = *arg2
                        v1 = *x10_2 * *x9_1
                        
                        if (x8_1 s>= 2)
                            int64_t i_2 = x8_1 - 1
                            void* x9_2 = &x9_1[1]
                            void* x10_3 = &x10_2[1]
                            int64_t i_1
                            
                            do
                                v2 = *x10_3
                                x10_3 += 4
                                v3 = *x9_2
                                x9_2 += 4
                                i_1 = i_2
                                i_2 -= 1
                                v1 = v1 + v2 * v3
                            while (i_1 != 1)
                    
                    *x4_1 = v0 * v1 + *x4_1

entry_v8.q = var_40
