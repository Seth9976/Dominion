// 函数: _ZN5Eigen6MatrixIfLi1ELin1ELi1ELi1ELin1EEaSINS0_IfLin1ELi1ELi0ELin1ELi1EEEEERS1_RKNS_9DenseBaseIT_EE
// 地址: 0xc490c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
int128_t* x20 = *entry_x1
int64_t x21 = entry_x1[1]
int64_t x8 = *(arg1 + 8)
int128_t v0
int128_t v1

if (x8 != x21)
    if (x21 != 0 && 0x7fffffffffffffff s/ x21 s<= 0)
        v0, v1 = operator new(-1)
        
        if (*(arg1 + 8) != x21)
            goto label_c49104
    else if (x8 != x21)
    label_c49104:
        void* x8_1 = *arg1
        
        if (x8_1 != 0)
            v0, v1 = free(*(x8_1 - 8))
        
        if (x21 s< 1)
            *arg1 = 0
        else
            if (x21 u>> 0x3e != 0)
                operator new(-1)
            
            int64_t x22_1 = x21 << 2
            int64_t x0_2
            x0_2, v0, v1 = malloc(x22_1 + 0x10)
            void* const x23_1
            
            if (x0_2 == 0)
                x23_1 = nullptr
                
                if (x22_1 != 0)
                label_c49178:
                    
                    if (x23_1 == 0)
                        v0, v1 = operator new(-1)
            else
                x23_1 = (x0_2 + 0x10) & 0xfffffffffffffff0
                *(x23_1 - 8) = x0_2
                
                if (x22_1 != 0)
                    goto label_c49178
            
            *arg1 = x23_1
    
    *(arg1 + 8) = x21

int128_t* x8_5 = *arg1
int64_t x9_3

if (x21 s< 0)
    x9_3 = x21 + 3
else
    x9_3 = x21

int64_t x9_4 = x9_3 & 0xfffffffffffffffc

if (x21 s>= 4)
    int64_t x10_1 = 0
    int128_t* x11_1 = x8_5
    int128_t* x12_1 = x20
    
    do
        v0 = *x12_1
        x12_1 = &x12_1[1]
        x10_1 += 4
        *x11_1 = v0
        x11_1 = &x11_1[1]
    while (x10_1 s< x9_4)

int64_t x10_2 = x21 - x9_4

if (x21 s> x9_4)
    if (x10_2 u< 8)
    label_c49238:
        int64_t x11_4 = x9_4 << 2
        int64_t i_2 = x21 - x9_4
        void* x9_5 = x20 + x11_4
        void* x8_6 = x8_5 + x11_4
        int64_t i
        
        do
            v0.d = *x9_5
            x9_5 += 4
            i = i_2
            i_2 -= 1
            *x8_6 = v0.d
            x8_6 += 4
        while (i != 1)
    else
        int64_t x12_2 = x9_4 << 2
        int64_t x11_2 = x21 << 2
        
        if (x8_5 + x12_2 u< x20 + x11_2 && x20 + x12_2 u< x8_5 + x11_2)
            goto label_c49238
        
        int64_t i_4 = x10_2 & 0xfffffffffffffff8
        x9_4 += i_4
        void* x12_3 = x8_5 + x12_2 + 0x10
        void* x13_4 = x20 + x12_2 + 0x10
        int64_t i_3 = i_4
        int64_t i_1
        
        do
            v0 = *(x13_4 - 0x10)
            v1 = *x13_4
            i_1 = i_3
            i_3 -= 8
            x13_4 += 0x20
            *(x12_3 - 0x10) = v0
            *x12_3 = v1
            x12_3 += 0x20
        while (i_1 != 8)
        
        if (x10_2 != i_4)
            goto label_c49238

return arg1
