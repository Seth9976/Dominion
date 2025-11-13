// 函数: _ZN5Botan11DER_Encoder6encodeERKNS_6BigIntENS_8ASN1_TagES4_
// 地址: 0xcbadfc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg3
int64_t* x23 = arg2
int32_t entry_x3

if (*(arg2 + 0x20) == 0)
label_cbaef4:
    int64_t x0_1 = Botan::BigInt::bits()
    int64_t x0_3 = Botan::BigInt::bits()
    int64_t x8_3
    
    if ((x0_3 & 7) == 0)
        x8_3 = 0
    else
        x8_3 = 8 - (x0_3 & 7)
    
    int64_t temp0_1 = x0_1 & 7
    uint64_t x8_5 = (x8_3 + x0_3) u>> 3
    uint64_t x24_1
    
    if (temp0_1 == 0)
        x24_1 = x8_5 + 1
    else
        x24_1 = x8_5
    
    uint64_t x26_1 = zx.q(temp0_1 == 0 ? 1 : 0)
    uint64_t x22_2
    uint64_t x25_1
    
    if (x24_1 == 0)
        x22_2 = 0
        x25_1 = 0
    else
        uint64_t x0_5 = Botan::allocate_memory(x24_1, 1)
        x22_2 = x0_5
        x25_1 = x0_5 + x24_1
        memset(x0_5, 0, x24_1)
    
    int64_t x0_7
    int128_t v0_1
    int128_t v1_1
    x0_7, v0_1, v1_1 = Botan::BigInt::bits()
    int64_t x8_8
    
    if ((x0_7 & 7) == 0)
        x8_8 = 0
    else
        x8_8 = 8 - (x0_7 & 7)
    
    int64_t x12_6 = x8_8 + x0_7
    uint64_t x9_4 = x12_6 u>> 5
    uint64_t i = x12_6 u>> 3 & 3
    
    if (x9_4 != 0)
        int64_t x11_9 = *x23
        int64_t x10_6 = 0
        int64_t x12_10 = (x23[1] - x11_9) s>> 2
        int32_t* x13_3 = (x12_6 u>> 3) + x26_1 + x22_2 - 4
        
        do
            int32_t x14_2
            
            if (x12_10 u> x10_6)
                x14_2 = *(x11_9 + (x10_6 << 2))
            else
                x14_2 = 0
            
            x10_6 += 1
            *x13_3 = _byteswap(x14_2)
            x13_3 = &x13_3[-1]
        while (x9_4 != x10_6)
    
    if (i != 0)
        int64_t x10_7 = *x23
        int32_t x9_5
        
        if (x9_4 u>= (x23[1] - x10_7) s>> 2)
            x9_5 = 0
        else
            x9_5 = *(x10_7 + (x9_4 << 2))
        
        int32_t x11_12 = 0x18
        
        do
            *(x26_1 + x22_2 - 1 + i) = (x9_5 u>> (not.d(x11_12) & 0x18)).b
            i -= 1
            x11_12 -= 8
        while (i != 0)
    
    if (x23[4].d == 0)
    label_cbb104:
        uint64_t i_4 = x25_1 - x22_2
        
        if (x25_1 != x22_2)
            int64_t i_16
            
            if (i_4 u< 8)
                i_16 = 0
            label_cbb190:
                char* x9_9 = i_16 + x22_2
                void* i_13 = x9_9 - x25_1
                void* i_1
                
                do
                    i_1 = i_13
                    i_13 += 1
                    *x9_9 = (not.d(zx.d(*x9_9))).b
                    x9_9 = &x9_9[1]
                while (i_1 u< -1)
            else if (i_4 u>= 0x20)
                i_16 = i_4 & 0xffffffffffffffe0
                void* x10_15 = x22_2 + 0x10
                int64_t i_14 = i_16
                int64_t i_2
                
                do
                    i_2 = i_14
                    i_14 -= 0x20
                    v1_1 = not.o(*x10_15)
                    *(x10_15 - 0x10) = not.o(*(x10_15 - 0x10))
                    *x10_15 = v1_1
                    x10_15 += 0x20
                while (i_2 != 0x20)
                
                if (i_4 != i_16)
                    if ((i_4 & 0x18) == 0)
                        goto label_cbb190
                    
                    goto label_cbb164
            else
                i_16 = 0
            label_cbb164:
                int64_t i_17 = i_16
                i_16 = i_4 & 0xfffffffffffffff8
                int64_t* x10_16 = x22_2 + i_17
                int64_t i_15 = i_17 - i_16
                int64_t i_3
                
                do
                    v0_1.q = *x10_16
                    i_3 = i_15
                    i_15 += 8
                    *x10_16 = not.o(v0_1).q
                    x10_16 = &x10_16[1]
                while (i_3 != -8)
                
                if (i_4 != i_16)
                    goto label_cbb190
        
        while (i_4 != 0)
            int32_t x10_18 = zx.d(*(x22_2 - 1 + i_4)) + 1
            *(x22_2 - 1 + i_4) = x10_18.b
            i_4 -= 1
            
            if ((x10_18 & 0x100) == 0)
                break
    else
        int64_t i_10 = x23[3]
        
        if (i_10 == -1)
            int64_t x9_6 = *x23
            int64_t x11_13 = x23[1]
            int64_t x10_10 = x11_13 - x9_6
            
            if (x11_13 == x9_6)
                i_10 = 0
                x23[3] = 0
            label_cbb0d4:
                
                if (i_10 != 0)
                    int32_t* x9_8 = *x23
                    int32_t x10_13 = 0
                    int32_t x11_18
                    int64_t i_5
                    
                    do
                        int32_t x11_16 = *x9_8
                        x9_8 = &x9_8[1]
                        i_5 = i_10
                        i_10 -= 1
                        x11_18 = (x10_13 ^ 1) & ((x11_16 - 1) & not.d(x11_16)) s>> 0x1f
                        x10_13 = x11_18 ^ 1
                    while (i_5 != 1)
                    
                    if ((x11_18 & 0x80000000) != 0)
                        goto label_cbb104
            else
                int64_t x12_14
                
                x12_14 = x10_10 s>= 0 ? x10_10 : -1
                
                int64_t x11_14 = x9_6 - x11_13
                int64_t x12_15
                
                x12_15 = x12_14 s< 1 ? x12_14 : 1
                
                i_10 = x10_10 s>> 2
                int64_t x10_11
                
                x10_11 = x11_14 s> x10_10 ? x11_14 : x10_10
                
                int64_t i_12 = x12_15 * (x10_11 u>> 2)
                uint64_t x11_15 = 1
                int64_t i_6
                
                do
                    int32_t x12_16 = *(x9_6 - 4 + (i_12 << 2))
                    i_6 = i_12
                    i_12 -= 1
                    x11_15 = zx.q(x11_15.d) & zx.q(((x12_16 - 1) & not.d(x12_16)) s>> 0x1f)
                    i_10 -= x11_15
                while (i_6 != 1)
                x23[3] = i_10
                
                if (i_10 u<= 1)
                    goto label_cbb0d4
        else if (i_10 u<= 1)
            goto label_cbb0d4
    
    Botan::DER_Encoder::add_object(arg1, zx.q(x21), zx.q(entry_x3), x22_2)
    
    if (x22_2 != 0)
        Botan::deallocate_memory(x22_2, x25_1 - x22_2, 1)
else
    int64_t i_9 = x23[3]
    
    if (i_9 != -1)
        if (i_9 u<= 1)
            goto label_cbaeb8
        
        goto label_cbaef4
    
    int64_t x9_1 = *x23
    int64_t x11_1 = x23[1]
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        i_9 = 0
        x23[3] = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        i_9 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_11 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i_7
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_11 << 2))
            i_7 = i_11
            i_11 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            i_9 -= x11_3
        while (i_7 != 1)
        x23[3] = i_9
        
        if (i_9 u> 1)
            goto label_cbaef4
    
label_cbaeb8:
    char var_44
    
    if (i_9 == 0)
        var_44 = 0
        Botan::DER_Encoder::add_object(arg1, zx.q(x21), zx.q(entry_x3), &var_44)
    else
        int32_t* x9_3 = *x23
        int32_t x10_4 = 0
        int64_t i_8
        
        do
            int32_t x11_4 = *x9_3
            x9_3 = &x9_3[1]
            i_8 = i_9
            i_9 -= 1
            int32_t x11_6 = ((x11_4 - 1) & not.d(x11_4)) s>> 0x1f
            x10_4 = (x10_4 & x11_6) | (not.d(x11_6) & 1)
        while (i_8 != 1)
        
        if (x10_4 != 0)
            goto label_cbaef4
        
        var_44 = 0
        Botan::DER_Encoder::add_object(arg1, zx.q(x21), zx.q(entry_x3), &var_44)
return arg1
