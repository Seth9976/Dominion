// 函数: _ZN5Eigen8internal13gemm_pack_lhsIflNS0_22const_blas_data_mapperIflLi0EEELi12ELi4E13__Float32x4_tLi0ELb0ELb0EEclEPfRKS3_llll
// 地址: 0xc4ddc0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x16 = arg5 s/ 0xc * 0xc
int64_t x10 = arg5 s% 0xc
int64_t x11 =
    zx.q(((x10.d + (sx.d((x10.d).b) u>> 0xc & 7)) & 0xf8) << 0x18 s>> 0x1b) << 0x20 s>> 0x1d
int64_t x14 = x11 + x16
int64_t x8_7 = arg5 - x14
int64_t x8_8

if (x8_7 s< 0)
    x8_8 = x8_7 + 3
else
    x8_8 = x8_7

int64_t x12 = x8_8 & 0xfffffffffffffffc
int64_t x13 = x12 + x14
int64_t x8_9 = arg5 - x13
int64_t x15

if (x8_9 s< 0)
    x15 = x8_9 + 1
else
    x15 = x8_9

int64_t x8_10
int64_t x9_2
int64_t x15_1
int128_t v1

if (x16 s>= 1)
    if (arg4 s< 1)
        x8_10 = 0
        x9_2 = 0xc + (not.q(x10) + arg5) u/ 0xc * 0xc
        x15_1 = x15 & 0xfffffffffffffffe
        
        if (x9_2 s< x14)
            goto label_c4de94
        
        goto label_c4df18
    
    x9_2 = 0
    x8_10 = 0
    
    do
        arg1 = nullptr
        void* x5 = arg2 + 0x20 + (x8_10 << 2)
        
        do
            x8_10 += 0xc
            int128_t* x6_3 = *arg3 + ((x9_2 + *(arg3 + 8) * arg1) << 2)
            v1 = x6_3[1]
            int128_t v2 = x6_3[2]
            arg1 += 1
            *(x5 - 0x20) = *x6_3
            *(x5 - 0x10) = v1
            *x5 = v2
            x5 += 0x30
        while (arg4 != arg1)
        
        x9_2 += 0xc
    while (x9_2 s< x16)
    
    goto label_c4de8c

x8_10 = 0
x9_2 = 0
label_c4de8c:
x15_1 = x15 & 0xfffffffffffffffe
int64_t x14_1

if (x9_2 s>= x14)
label_c4df18:
    x14_1 = x15_1 + x13
    
    if (x9_2 s< x13)
    label_c4df20:
        
        if (arg4 s< 1)
            x9_2 = x9_2 + ((x11 + arg5 + x12 + not.q(x9_2) - x10) & 0xfffffffffffffffc) + 4
        else
            do
                int64_t x16_2 = 0
                void* x17_3 = arg2 + (x8_10 << 2)
                
                do
                    x8_10 += 4
                    *(x17_3 + (x16_2 << 4)) = *(*arg3 + ((x9_2 + *(arg3 + 8) * x16_2) << 2))
                    x16_2 += 1
                while (arg4 != x16_2)
                
                x9_2 += 4
            while (x9_2 s< x13)
else
label_c4de94:
    
    if (arg4 s>= 1)
        do
            int64_t x17_2 = 0
            arg1 = arg2 + 0x10 + (x8_10 << 2)
            
            do
                x8_10 += 8
                int128_t* x5_3 = *arg3 + ((x9_2 + *(arg3 + 8) * x17_2) << 2)
                v1 = x5_3[1]
                x17_2 += 1
                *(arg1 - 0x10) = *x5_3
                *arg1 = v1
                arg1 = &arg1[8]
            while (arg4 != x17_2)
            
            x9_2 += 8
        while (x9_2 s< x14)
        
        goto label_c4df18
    
    x9_2 = x9_2 + ((x11 + arg5 + not.q(x9_2) - x10) & 0xfffffffffffffff8) + 8
    x14_1 = x15_1 + x13
    
    if (x9_2 s< x13)
        goto label_c4df20

int128_t v0

if (x9_2 s>= x14_1)
label_c4dff8:
    
    if (x9_2 s< arg5)
    label_c4e000:
        
        if (arg4 s>= 1)
            do
                int64_t x10_2 = 0
                
                do
                    v0.d = *(*arg3 + ((x9_2 + *(arg3 + 8) * x10_2) << 2))
                    *(arg2 + (x8_10 << 2) + (x10_2 << 2)) = v0.d
                    x10_2 += 1
                while (arg4 != x10_2)
                
                x9_2 += 1
                x8_10 += x10_2
            while (x9_2 != arg5)
else
    if (arg4 s>= 1)
        do
            int64_t x10_1 = 0
            void* x11_1 = arg2 + (x8_10 << 2)
            
            do
                x8_10 += 2
                v0.q = *(*arg3 + ((x9_2 + *(arg3 + 8) * x10_1) << 2))
                *(x11_1 + (x10_1 << 3)) = v0.q
                x10_1 += 1
            while (arg4 != x10_1)
            
            x9_2 += 2
        while (x9_2 s< x14_1)
        
        goto label_c4dff8
    
    x9_2 = x9_2 + ((x11 + arg5 + x12 + x15_1 + not.q(x9_2) - x10) & 0xfffffffffffffffe) + 2
    
    if (x9_2 s< arg5)
        goto label_c4e000
