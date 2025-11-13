// 函数: _ZN5Eigen8internal17product_evaluatorINS_7ProductINS_6MatrixIfLin1ELin1ELi0ELin1ELin1EEES4_Li0EEELi8ENS_10DenseShapeES6_ffEC2ERKS5_
// 地址: 0xc4c6f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = -1
int64_t* entry_x1
int64_t x22 = *(*entry_x1 + 8)
int64_t x23 = *(entry_x1[1] + 0x10)
int64_t x8 = 0
__builtin_memset(arg1 + 0x10, 0, 0x18)
int64_t x9_1 = 0

if (x22 != 0 && x23 != 0)
    if (0x7fffffffffffffff s/ x23 s>= x22)
        x8 = 0
        x9_1 = 0
    else
        operator new(-1)
        x9_1 = *(arg1 + 0x18)
        x8 = *(arg1 + 0x20)

void* const x24 = *(arg1 + 0x10)
int64_t x25 = x23 * x22

if (x9_1 * x8 != x25)
    if (x24 != 0)
        free(*(x24 - 8))
    
    if (x25 s< 1)
        x24 = nullptr
        *(arg1 + 0x10) = 0
    else
        if (x25 u>> 0x3e != 0)
            operator new(-1)
        
        int64_t x25_1 = x25 << 2
        int64_t x0_2 = malloc(x25_1 + 0x10)
        
        if (x0_2 == 0)
            x24 = nullptr
            
            if (x25_1 != 0)
            label_c4c7d4:
                
                if (x24 == 0)
                    operator new(-1)
        else
            x24 = (x0_2 + 0x10) & 0xfffffffffffffff0
            *(x24 - 8) = x0_2
            
            if (x25_1 != 0)
                goto label_c4c7d4
        
        *(arg1 + 0x10) = x24

*(arg1 + 0x18) = x22
*(arg1 + 0x20) = x23
*arg1 = x24
*(arg1 + 8) = x22
return Eigen::internal::generic_product_impl<Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::Matrix<float, -1, -1, 0, -1, -1>, Eigen::DenseShape, Eigen::DenseShape, 8>::evalTo<Eigen::Matrix<float, -1, -1, 0, -1, -1> >(
    arg1 + 0x10, *entry_x1, entry_x1[1]) __tailcall
