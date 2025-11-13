// 函数: _ZN5Eigen8internal20generic_product_implINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEES3_NS_10DenseShapeES4_Li8EE6evalToIS3_EEvRT_RKS3_SA_
// 地址: 0xc4c808
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = *(arg3 + 8)
Eigen::Matrix<float, -1, -1, 0, -1, -1>* x8 = *(arg1 + 8)
int64_t x9 = *(arg1 + 0x10)
int64_t* var_98
Eigen::Matrix<float, -1, -1, 0, -1, -1> const& var_68

if (x10 s< 1 || x8 + x10 + x9 s> 0x13)
    var_68 = x8
    int64_t var_60_1 = x9
    int32_t var_58_1 = 0
    Eigen::internal::call_assignment_no_alias<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::internal::assign_op<float, float> >(
        arg1, &var_68, &var_98)
    var_68.d = 0x3f800000
    return Eigen::internal::generic_product_impl<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::DenseShape, Eigen::DenseShape, 8>::scaleAndAddTo<Eigen::Matrix<float, -1, -1, 0, -1, -1> >(
        arg1, arg2, arg3, &var_68)

var_68 = arg2
Eigen::Matrix<float, -1, -1, 0, -1, -1> const& var_60 = arg3
int64_t x22_1 = *(arg2 + 8)
int32_t var_58
var_58.q = *arg2
int64_t var_50_1 = x22_1
int64_t var_48_1 = *arg3
int64_t var_40_1 = x10
int64_t var_38_1 = *(arg2 + 0x10)
int64_t x20_1 = *(arg3 + 0x10)

if (x8 != x22_1 || x9 != x20_1)
    if (x22_1 != 0 && x20_1 != 0 && 0x7fffffffffffffff s/ x20_1 s< x22_1)
        operator new(-1)
        x8 = *(arg1 + 8)
        x9 = *(arg1 + 0x10)
    
    int64_t x21_1 = x20_1 * x22_1
    
    if (x9 * x8 != x21_1)
        void* x8_2 = *arg1
        
        if (x8_2 != 0)
            free(*(x8_2 - 8))
        
        if (x21_1 s< 1)
            *arg1 = 0
        else
            if (x21_1 u>> 0x3e != 0)
                operator new(-1)
            
            int64_t x21_2 = x21_1 << 2
            int64_t x0_2 = malloc(x21_2 + 0x10)
            void* const x23_1
            
            if (x0_2 == 0)
                x23_1 = nullptr
                
                if (x21_2 != 0)
                label_c4c93c:
                    
                    if (x23_1 == 0)
                        operator new(-1)
            else
                x23_1 = (x0_2 + 0x10) & 0xfffffffffffffff0
                *(x23_1 - 8) = x0_2
                
                if (x21_2 != 0)
                    goto label_c4c93c
            
            *arg1 = x23_1
    
    *(arg1 + 8) = x22_1
    *(arg1 + 0x10) = x20_1

int64_t x8_5 = *arg1
int64_t var_78
var_98 = &var_78
Eigen::Matrix<float, -1, -1, 0, -1, -1> const&* var_90_1 = &var_68
var_78 = x8_5
int64_t var_70_1 = x22_1
void var_a0
void* var_88_1 = &var_a0
Eigen::Matrix<float, -1, -1, 0, -1, -1>& var_80_1 = arg1
return Eigen::internal::dense_assignment_loop<Eigen::internal::restricted_packet_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<float, -1, -1, 0, -1, -1> >, Eigen::internal::evaluator<Eigen::Product<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::Matrix<float, -1, -1, 0, -1, -1>, 1> >, Eigen::internal::assign_op<float, float> >, 4, 0>::run(
    &var_98)
