// 函数: _ZN5Eigen8internal13gemm_pack_rhsIflNS0_22const_blas_data_mapperIflLi1EEELi4ELi1ELb0ELb0EEclEPfRKS3_llll
// 地址: 0xc52340
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8

if (arg5 s< 0)
    x8 = arg5 + 3
else
    x8 = arg5

int64_t x8_1 = x8 & 0xfffffffffffffffc
int64_t x9

if (arg5 s< 4)
    x9 = 0
label_c523a8:
    
    if (x8_1 s< arg5)
    label_c523b0:
        
        if (arg4 s>= 1)
            do
                int64_t x10_2 = 0
                
                do
                    int128_t v0
                    v0.d = *(*arg3 + ((x8_1 + *(arg3 + 8) * x10_2) << 2))
                    *(arg2 + (x9 << 2) + (x10_2 << 2)) = v0.d
                    x10_2 += 1
                while (arg4 != x10_2)
                
                x8_1 += 1
                x9 += x10_2
            while (x8_1 != arg5)
else
    if (arg4 s>= 1)
        int64_t x10_1 = 0
        x9 = 0
        
        do
            int64_t x11_1 = 0
            void* x12_1 = arg2 + (x9 << 2)
            
            do
                x9 += 4
                *(x12_1 + (x11_1 << 4)) = *(*arg3 + ((x10_1 + *(arg3 + 8) * x11_1) << 2))
                x11_1 += 1
            while (arg4 != x11_1)
            
            x10_1 += 4
        while (x10_1 s< x8_1)
        
        goto label_c523a8
    
    x9 = 0
    
    if (x8_1 s< arg5)
        goto label_c523b0
