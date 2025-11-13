// 函数: sub_c48e30
// 地址: 0xc48e30
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_d8
__builtin_memset(&var_d8, 0, 0x18)
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
    void* var_c8_1
    void* x26_1
    
    if (x24 + 7 u>= 0x17)
        uint64_t x27_1 = (x24 + 0x17) & 0xfffffffffffffff0
        void* x0_1 = operator new(x27_1)
        x26_1 = x0_1
        uint64_t var_d0_1 = x24
        var_c8_1 = x0_1
        var_d8 = x27_1 | 1
        memcpy(x26_1, x25, x24)
    else
        x26_1 = &var_d8 | 1
        var_d8.b = (x24.d << 1).b
        
        if (x24 != 0)
            memcpy(x26_1, x25, x24)
    
    *(x26_1 + x24) = 0
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_d8, "/kernel")
    int64_t x0_5 = sub_c48afc(arg2, &var_d8)
    
    if ((zx.d(var_d8.b) & 1) != 0)
        operator delete(var_c8_1)
    
    int64_t var_f0
    __builtin_memset(&var_f0, 0, 0x18)
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
        void* var_e0_1
        void* x26_2
        
        if (x25_1 + 5 u>= 0x17)
            uint64_t x27_2 = (x25_1 + 0x15) & 0xfffffffffffffff0
            void* x0_8 = operator new(x27_2)
            x26_2 = x0_8
            size_t var_e8_1 = x25_1
            var_e0_1 = x0_8
            var_f0 = x27_2 | 1
            memcpy(x26_2, x23_1, x25_1)
        else
            x26_2 = &var_f0 | 1
            var_f0.b = (x25_1.d << 1).b
            
            if (x25_1 != 0)
                memcpy(x26_2, x23_1, x25_1)
        
        *(x26_2 + x25_1) = 0
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_f0, "/bias")
        int64_t x0_12 = sub_c4aa70(arg2, &var_f0)
        
        if ((zx.d(var_f0.b) & 1) != 0)
            operator delete(var_e0_1)
        
        *arg1 = 0
        arg1[1] = 0
        int64_t* var_c0 = arg3
        int64_t var_b8 = x0_5
        int64_t var_b0 = x0_12
        int64_t* var_100 = arg1
        Eigen::internal::assign_op<float, float> var_58
        int64_t result = Eigen::internal::call_dense_assignment_loop<Eigen::Transpose<Eigen::Matrix<float, -1, 1, 0, -1, 1> >, Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float, float>, Eigen::Product<Eigen::Matrix<float, 1, -1, 1, 1, -1>, Eigen::Matrix<float, -1, -1, 0, -1, -1>, 0> const, Eigen::Matrix<float, 1, -1, 1, 1, -1> const>, Eigen::internal::assign_op<float, float> >(
            &var_100, &var_c0, &var_58)
        
        if ((arg5 & 1) != 0)
            int64_t x20_1 = arg1[1]
            var_c0 = arg1
            int64_t* var_a0_1 = arg1
            int32_t var_84_1 = 0x3f800000
            int64_t var_90_1 = x20_1
            var_100 = nullptr
            int64_t var_f8_1 = 0
            
            if (x20_1 != 0)
                if (x20_1 s< 1)
                    var_100 = nullptr
                else
                    if (x20_1 u>> 0x3e != 0)
                        operator new(-1)
                    
                    int64_t x21_1 = x20_1 << 2
                    int64_t x0_16 = malloc(x21_1 + 0x10)
                    int64_t* x22_2
                    
                    if (x0_16 == 0)
                        x22_2 = nullptr
                        
                        if (x21_1 != 0)
                        label_c49058:
                            
                            if (x22_2 == 0)
                                operator new(-1)
                    else
                        x22_2 = (x0_16 + 0x10) & 0xfffffffffffffff0
                        x22_2[-1] = x0_16
                        
                        if (x21_1 != 0)
                            goto label_c49058
                    
                    var_100 = x22_2
            
            result = Eigen::internal::call_dense_assignment_loop<Eigen::Matrix<float, -1, 1, 0, -1, 1>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<float, float>, Eigen::ArrayWrapper<Eigen::Matrix<float, -1, 1, 0, -1, 1> const> const, Eigen::CwiseUnaryOp<Eigen::internal::scalar_tanh_op<float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_log_op<float>, Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<float, float>, Eigen::CwiseUnaryOp<Eigen::internal::scalar_exp_op<float>, Eigen::ArrayWrapper<Eigen::Matrix<float, -1, 1, 0, -1, 1> const> const> const, Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>, Eigen::Array<float, -1, 1, 0, -1, 1> const> const> const> const> const>, Eigen::internal::assign_op<float, float> >(
                &var_100, &var_c0, &var_58)
            int64_t* x8_14 = *arg1
            int64_t x11_1 = arg1[1]
            *arg1 = var_100
            arg1[1] = x20_1
            var_100 = x8_14
            int64_t var_f8_3 = x11_1
            
            if (x8_14 != 0)
                return free(x8_14[-1])
        
        return result

return Eigen::Matrix<float, 1, -1, 1, 1, -1>::operator=<Eigen::Matrix<float, -1, 1, 0, -1, 1> >(
    std::__ndk1::__basic_string_common<true>::__throw_length_error()) __tailcall
