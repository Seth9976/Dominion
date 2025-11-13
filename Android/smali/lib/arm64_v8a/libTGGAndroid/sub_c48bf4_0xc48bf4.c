// 函数: sub_c48bf4
// 地址: 0xc48bf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_e0
__builtin_memset(&var_e0, 0, 0x18)
uint64_t x8 = zx.q(*arg4)
uint64_t x24
void* x25

if ((x8.d & 1) != 0)
    x24 = *(arg4 + 8)
    x25 = *(arg4 + 0x10)
else
    x24 = x8 u>> 1
    x25 = &arg4[1]

if (x24 + 7 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    void* var_d0_1
    void* x26_1
    
    if (x24 + 7 u>= 0x17)
        uint64_t x27_1 = (x24 + 0x17) & 0xfffffffffffffff0
        void* x0_1 = operator new(x27_1)
        x26_1 = x0_1
        uint64_t var_d8_1 = x24
        var_d0_1 = x0_1
        var_e0 = x27_1 | 1
        memcpy(x26_1, x25, x24)
    else
        x26_1 = &var_e0 | 1
        var_e0.b = (x24.d << 1).b
        
        if (x24 != 0)
            memcpy(x26_1, x25, x24)
    
    *(x26_1 + x24) = 0
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_e0, "/kernel")
    int64_t x0_5 = sub_c48afc(arg2, &var_e0)
    
    if ((zx.d(var_e0.b) & 1) != 0)
        operator delete(var_d0_1)
    
    int64_t var_f8
    __builtin_memset(&var_f8, 0, 0x18)
    uint64_t x8_6 = zx.q(*arg4)
    void* x23_1
    size_t x25_1
    
    if ((x8_6.d & 1) != 0)
        x25_1 = *(arg4 + 8)
        x23_1 = *(arg4 + 0x10)
    else
        x25_1 = x8_6 u>> 1
        x23_1 = &arg4[1]
    
    if (x25_1 + 5 u< -0x10)
        void* var_e8_1
        void* x26_2
        
        if (x25_1 + 5 u>= 0x17)
            uint64_t x27_2 = (x25_1 + 0x15) & 0xfffffffffffffff0
            void* x0_8 = operator new(x27_2)
            x26_2 = x0_8
            size_t var_f0_1 = x25_1
            var_e8_1 = x0_8
            var_f8 = x27_2 | 1
            memcpy(x26_2, x23_1, x25_1)
        else
            x26_2 = &var_f8 | 1
            var_f8.b = (x25_1.d << 1).b
            
            if (x25_1 != 0)
                memcpy(x26_2, x23_1, x25_1)
        
        *(x26_2 + x25_1) = 0
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_f8, "/bias")
        int64_t x0_12 = sub_c4aa70(arg2, &var_f8)
        
        if ((zx.d(var_f8.b) & 1) != 0)
            operator delete(var_e8_1)
        
        void* var_110
        __builtin_memset(&var_110, 0, 0x18)
        int64_t x8_12 = arg3[1]
        int64_t* var_c8 = arg3
        int64_t var_c0 = x0_5
        int64_t var_b8 = x0_12
        int64_t var_b0 = x8_12
        Eigen::internal::assign_op<float, float> var_58
        int64_t result
        int128_t v0
        result, v0 = Eigen::internal::call_dense_assignment_loop<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::MatrixWrapper<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float, float>, Eigen::ArrayWrapper<Eigen::Product<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::Matrix<float, -1, -1, 0, -1, -1>, 0> const> const, Eigen::Replicate<Eigen::ArrayWrapper<Eigen::Matrix<float, 1, -1, 1, 1, -1> >, -1, 1> const> >, Eigen::internal::assign_op<float, float> >(
            &var_110, &var_c8, &var_58)
        int64_t var_108
        
        if ((arg5 & 1) == 0)
            *arg1 = var_110
            *(arg1 + 8) = var_108.o
        else
            var_c8 = &var_110
            int64_t* var_a8_1 = &var_110
            int128_t var_98_1 = var_108.o
            int32_t var_88_1 = 0x3f800000
            result = Eigen::PlainObjectBase<Eigen::Matrix<float, -1, -1, 0, -1, -1> >::PlainObjectBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float, float>, Eigen::ArrayWrapper<Eigen::Matrix<float, -1, -1, 0, -1, -1> const> const, Eigen::CwiseUnaryOp<Eigen::internal::scalar_tanh_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_log_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float, float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_exp_op<float>, Eigen::ArrayWrapper<Eigen::Matrix<float, -1, -1, 0, -1, -1> const> const> const, Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Array<float, -1, -1, 0, -1, -1> const> const> const> const> const> >(
                arg1)
            void* x8_13 = var_110
            
            if (x8_13 != 0)
                return free(*(x8_13 - 8))
        return result

int64_t* x0_17
int64_t x1_5
int64_t* x2_5
char* x3
int32_t x4
x0_17, x1_5, x2_5, x3, x4 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
return sub_c48e30(x0_17, x1_5, x2_5, x3, x4) __tailcall
