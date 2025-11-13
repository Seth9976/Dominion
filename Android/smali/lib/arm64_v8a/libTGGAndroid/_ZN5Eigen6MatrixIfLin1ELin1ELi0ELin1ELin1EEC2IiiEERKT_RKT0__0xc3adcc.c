// 函数: _ZN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEC2IiiEERKT_RKT0_
// 地址: 0xc3adcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int32_t* entry_x2
int32_t x10 = *entry_x2
int64_t x20 = sx.q(*arg2)
int32_t const& x19 = arg1
int64_t x8 = 0
int64_t x21 = sx.q(x10)
int64_t x9 = 0

if (x20.d == 0 || x10 == 0)
    goto label_c3ae1c

int64_t x22

if (0x7fffffffffffffff s/ x21 s>= x20)
    x22 = x21 * x20
    
    if (0 != x22)
        goto label_c3ae48
else
    operator new(-1)
    x9 = *(x19 + 8)
    x8 = *(x19 + 0x10)
label_c3ae1c:
    x22 = x21 * x20
    
    if (x8 * x9 != x22)
    label_c3ae48:
        void* x8_3 = *x19
        
        if (x8_3 != 0)
            free(*(x8_3 - 8))
        
        if (x22 s< 1)
            *x19 = 0
        else
            if (x22 u>> 0x3e != 0)
                operator new(-1)
            
            int64_t x22_1 = x22 << 2
            arg1 = malloc(x22_1 + 0x10)
            void* x23_1
            
            if (arg1 == 0)
                x23_1 = nullptr
                
                if (x22_1 != 0)
                label_c3aea4:
                    
                    if (x23_1 == 0)
                        operator new(-1)
            else
                x23_1 = &arg1[4] & 0xfffffffffffffff0
                *(x23_1 - 8) = arg1
                
                if (x22_1 != 0)
                    goto label_c3aea4
            
            *x19 = x23_1
*(x19 + 8) = x20
*(x19 + 0x10) = x21
