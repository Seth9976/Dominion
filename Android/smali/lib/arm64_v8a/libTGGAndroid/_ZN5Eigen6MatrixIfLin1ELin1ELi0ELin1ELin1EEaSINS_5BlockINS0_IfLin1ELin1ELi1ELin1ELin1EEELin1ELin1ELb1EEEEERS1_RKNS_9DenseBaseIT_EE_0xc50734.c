// 函数: _ZN5Eigen6MatrixIfLin1ELin1ELi0ELin1ELin1EEaSINS_5BlockINS0_IfLin1ELin1ELi1ELin1ELin1EEELin1ELin1ELb1EEEEERS1_RKNS_9DenseBaseIT_EE
// 地址: 0xc50734
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
int64_t x22 = entry_x1[2]
int32_t* x20 = *entry_x1
int64_t x21 = entry_x1[1]
int64_t x8 = *(arg1 + 8)
int64_t x23 = *(entry_x1[3] + 0x10)

if (x8 != x21 || *(arg1 + 0x10) != x22)
    if (x21 != 0 && x22 != 0 && 0x7fffffffffffffff s/ x22 s< x21)
        operator new(-1)
        x8 = *(arg1 + 8)
    
    int64_t x24_1 = x22 * x21
    
    if (*(arg1 + 0x10) * x8 != x24_1)
        void* x8_2 = *arg1
        
        if (x8_2 != 0)
            free(*(x8_2 - 8))
        
        if (x24_1 s< 1)
            *arg1 = 0
        else
            if (x24_1 u>> 0x3e != 0)
                operator new(-1)
            
            int64_t x24_2 = x24_1 << 2
            int64_t x0_2 = malloc(x24_2 + 0x10)
            void* const x25_1
            
            if (x0_2 == 0)
                x25_1 = nullptr
                
                if (x24_2 != 0)
                label_c50800:
                    
                    if (x25_1 == 0)
                        operator new(-1)
            else
                x25_1 = (x0_2 + 0x10) & 0xfffffffffffffff0
                *(x25_1 - 8) = x0_2
                
                if (x24_2 != 0)
                    goto label_c50800
            
            *arg1 = x25_1
    
    *(arg1 + 8) = x21
    *(arg1 + 0x10) = x22

if (x22 s>= 1)
    int64_t x9_4 = *arg1
    int64_t x8_5 = 0
    int64_t x11_1 = x21 << 2
    
    do
        if (x21 s>= 1)
            int64_t x12_1 = 0
            int32_t* x13_1 = x20
            
            do
                int32_t v0 = *x13_1
                x13_1 = &x13_1[x23]
                *(x9_4 + (x12_1 << 2)) = v0
                x21 = *(arg1 + 8)
                x12_1 += 1
            while (x12_1 s< x21)
            
            x22 = *(arg1 + 0x10)
        
        x8_5 += 1
        x20 = &x20[1]
        x9_4 += x11_1
    while (x8_5 s< x22)

return arg1
