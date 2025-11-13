// 函数: _ZN15RegionAllocator18PartitionSubdivideERNS_6RegionEi
// 地址: 0x10049f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* result = arg2
int32_t entry_x2

if (*arg2 == entry_x2)
    return result

uint32_t x8_1 = result[0xf]

if (x8_1 == 0)
    int64_t x0_1 = RectTopLeft(&result[1])
    uint32_t x24_1 = (x0_1 u>> 0x20).d
    int64_t x0_3 = RectISize(&result[1])
    uint32_t x8_2 = (x0_3 u>> 0x20).d
    int32_t x11_1
    
    if (x0_3.d s< 0)
        x11_1 = x0_3.d + 1
    else
        x11_1 = x0_3.d
    
    int32_t x27_1 = x11_1 s>> 1
    uint32_t x8_3
    
    if (x8_2 s< 0)
        x8_3 = x8_2 + 1
    else
        x8_3 = x8_2
    
    int32_t x28_1 = x8_3 s>> 1
    uint64_t x12_3 = zx.q(x0_1.d + *V2IX * x27_1) | zx.q(x24_1 + *(V2IX + 4) * x27_1) << 0x20
    uint64_t x8_5 = zx.q(x27_1 + x0_1.d) | zx.q(x28_1 + x24_1) << 0x20
    uint64_t x9_4 = zx.q(x0_1.d + *V2IY * x28_1) | zx.q(x24_1 + *(V2IY + 4) * x28_1) << 0x20
    int64_t var_c0 = x0_1
    uint64_t var_b8 = x12_3
    uint64_t var_b0 = x9_4
    uint64_t var_a8 = x8_5
    uint64_t var_58 = x8_5
    int64_t x0_5
    int64_t x1_1
    x0_5, x1_1 = RectISet(&var_c0, &var_58)
    int32_t x8_6 = var_b8.d
    int32_t x9_5 = var_b8:4.d
    int64_t var_a0 = x0_5
    int64_t var_98_1 = x1_1
    var_58 = zx.q(x8_6 + x27_1) | zx.q(x9_5 + x28_1) << 0x20
    int64_t x0_7
    int64_t x1_3
    x0_7, x1_3 = RectISet(&var_b8, &var_58)
    int32_t x8_9 = var_b0.d
    int32_t x9_7 = var_b0:4.d
    int64_t var_90 = x0_7
    int64_t var_88_1 = x1_3
    var_58 = zx.q(x8_9 + x27_1) | zx.q(x9_7 + x28_1) << 0x20
    int64_t x0_9
    int64_t x1_5
    x0_9, x1_5 = RectISet(&var_b0, &var_58)
    int32_t x8_12 = var_a8.d
    int32_t x9_9 = var_a8:4.d
    int64_t var_80 = x0_9
    int64_t var_78_1 = x1_5
    var_58 = zx.q(x8_12 + x27_1) | zx.q(x9_9 + x28_1) << 0x20
    int64_t x0_11
    int64_t x1_7
    x0_11, x1_7 = RectISet(&var_a8, &var_58)
    int64_t var_70 = x0_11
    int64_t var_68_1 = x1_7
    int32_t x24_2 = result[0x14]
    int32_t x23_2 = *result
    int32_t x0_13 = RectIWidth(&var_a0)
    int32_t x0_15
    int128_t v0_1
    
    if (x0_13 s>= *arg1)
        x0_15, v0_1 = RectIHeight(&var_a0)
    
    int32_t x9_15
    
    if (x0_13 s>= *arg1 && x0_15 s>= *(arg1 + 4))
        uint64_t x9_11 = zx.q(*(arg1 + 0x30))
        int64_t x10_3
        int32_t x11_3
        
        if (x9_11.d != *(arg1 + 0x28))
            x10_3 = *(arg1 + 0x20)
            x11_3 = *(x10_3 + x9_11 * 0x58 + 0x50)
        else
            x10_3 = *(arg1 + 0x20)
            x11_3 = x9_11.d + 1
            *(arg1 + 0x28) = x11_3
        
        *(arg1 + 0x30) = x11_3
        v0_1.q = 0
        v0_1:8.q = 0
        int32_t* x10_4 = x10_3 + x9_11 * 0x58
        __builtin_memset(x10_4, 0, 0x50)
        x10_4[0x14] = x9_11.d | *(arg1 + 0x38) << 0x10
        int32_t x9_13 = *(arg1 + 0x38)
        int32_t x9_14
        
        if (x9_13 == 0xffff)
            x9_14 = 1
        else
            x9_14 = x9_13 + 1
        
        *(arg1 + 0x34) += 1
        *(arg1 + 0x38) = x9_14
        v0_1 = var_a0.o
        x9_15 = x10_4[0x14]
        x10_4[0xc] = x24_2
        *x10_4 = x23_2 - 1
        *(x10_4 + 4) = v0_1
    else
        x9_15 = 0
    
    int32_t x25_1 = *result
    result[0xf] = x9_15
    int32_t x0_17 = RectIWidth(&var_90)
    int32_t x0_19
    int128_t v0_2
    
    if (x0_17 s>= *arg1)
        x0_19, v0_2 = RectIHeight(&var_90)
    
    int32_t x9_20
    
    if (x0_17 s>= *arg1 && x0_19 s>= *(arg1 + 4))
        uint64_t x9_16 = zx.q(*(arg1 + 0x30))
        int64_t x10_5
        int32_t x11_8
        
        if (x9_16.d != *(arg1 + 0x28))
            x10_5 = *(arg1 + 0x20)
            x11_8 = *(x10_5 + x9_16 * 0x58 + 0x50)
        else
            x10_5 = *(arg1 + 0x20)
            x11_8 = x9_16.d + 1
            *(arg1 + 0x28) = x11_8
        
        *(arg1 + 0x30) = x11_8
        v0_2.q = 0
        v0_2:8.q = 0
        int32_t* x10_6 = x10_5 + x9_16 * 0x58
        __builtin_memset(x10_6, 0, 0x50)
        x10_6[0x14] = x9_16.d | *(arg1 + 0x38) << 0x10
        int32_t x9_18 = *(arg1 + 0x38)
        int32_t x9_19
        
        if (x9_18 == 0xffff)
            x9_19 = 1
        else
            x9_19 = x9_18 + 1
        
        *(arg1 + 0x34) += 1
        *(arg1 + 0x38) = x9_19
        v0_2 = var_90.o
        x9_20 = x10_6[0x14]
        x10_6[0xc] = x24_2
        *x10_6 = x25_1 - 1
        *(x10_6 + 4) = v0_2
    else
        x9_20 = 0
    
    int32_t x25_2 = *result
    result[0x10] = x9_20
    int32_t x0_21 = RectIWidth(&var_80)
    int32_t x0_23
    int128_t v0_3
    
    if (x0_21 s>= *arg1)
        x0_23, v0_3 = RectIHeight(&var_80)
    
    int32_t x9_25
    
    if (x0_21 s>= *arg1 && x0_23 s>= *(arg1 + 4))
        uint64_t x9_21 = zx.q(*(arg1 + 0x30))
        int64_t x10_7
        int32_t x11_13
        
        if (x9_21.d != *(arg1 + 0x28))
            x10_7 = *(arg1 + 0x20)
            x11_13 = *(x10_7 + x9_21 * 0x58 + 0x50)
        else
            x10_7 = *(arg1 + 0x20)
            x11_13 = x9_21.d + 1
            *(arg1 + 0x28) = x11_13
        
        *(arg1 + 0x30) = x11_13
        v0_3.q = 0
        v0_3:8.q = 0
        int32_t* x10_8 = x10_7 + x9_21 * 0x58
        __builtin_memset(x10_8, 0, 0x50)
        x10_8[0x14] = x9_21.d | *(arg1 + 0x38) << 0x10
        int32_t x9_23 = *(arg1 + 0x38)
        int32_t x9_24
        
        if (x9_23 == 0xffff)
            x9_24 = 1
        else
            x9_24 = x9_23 + 1
        
        *(arg1 + 0x34) += 1
        *(arg1 + 0x38) = x9_24
        v0_3 = var_80.o
        x9_25 = x10_8[0x14]
        x10_8[0xc] = x24_2
        *x10_8 = x25_2 - 1
        *(x10_8 + 4) = v0_3
    else
        x9_25 = 0
    
    int32_t x23_3 = *result
    result[0x11] = x9_25
    int32_t x0_25 = RectIWidth(&var_70)
    int32_t x0_27
    int128_t v0_4
    
    if (x0_25 s>= *arg1)
        x0_27, v0_4 = RectIHeight(&var_70)
    
    int32_t x9_30
    
    if (x0_25 s>= *arg1 && x0_27 s>= *(arg1 + 4))
        uint64_t x9_26 = zx.q(*(arg1 + 0x30))
        int64_t x10_9
        int32_t x11_18
        
        if (x9_26.d != *(arg1 + 0x28))
            x10_9 = *(arg1 + 0x20)
            x11_18 = *(x10_9 + x9_26 * 0x58 + 0x50)
        else
            x10_9 = *(arg1 + 0x20)
            x11_18 = x9_26.d + 1
            *(arg1 + 0x28) = x11_18
        
        *(arg1 + 0x30) = x11_18
        v0_4.q = 0
        v0_4:8.q = 0
        int32_t* x10_10 = x10_9 + x9_26 * 0x58
        __builtin_memset(x10_10, 0, 0x50)
        x10_10[0x14] = x9_26.d | *(arg1 + 0x38) << 0x10
        int32_t x9_28 = *(arg1 + 0x38)
        int32_t x9_29
        
        if (x9_28 == 0xffff)
            x9_29 = 1
        else
            x9_29 = x9_28 + 1
        
        *(arg1 + 0x34) += 1
        *(arg1 + 0x38) = x9_29
        v0_4 = var_70.o
        x9_30 = x10_10[0x14]
        x10_10[0xc] = x24_2
        *x10_10 = x23_3 - 1
        *(x10_10 + 4) = v0_4
    else
        x9_30 = 0
    
    x8_1 = zx.d(result[0xf].w)
    result[0x12] = x9_30

return RegionAllocator::PartitionSubdivide(arg1, 
    (*(arg1 + 0x20)).d + mulu.dp.d(x8_1 & 0xffff, 0x58))
