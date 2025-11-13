// 函数: _ZN15RegionAllocator5ClearEv
// 地址: 0x1003cac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

while (true)
    int32_t* entry_x0
    void* x10_1 = *(entry_x0 + 0x20)
    void* x9 = x10_1
    
    while (true)
        int64_t x10_2 = x10_1 + zx.q(entry_x0[0xa]) * 0x58
        
        if (x9 u>= x10_2)
        label_1003d30:
            int32_t i = 0
            entry_x0[0xa] = 0
            entry_x0[0xc] = 0
            
            do
                int64_t x8_1 = *(entry_x0 + 0x48)
                uint64_t i_1 = zx.q(i)
                void* j_1 = *(x8_1 + (zx.q(i) << 3))
                
                if (j_1 != 0)
                    void* j
                    
                    do
                        j = *(j_1 + 0x18)
                        XPooledFree(j_1, 0x20)
                        j_1 = j
                    while (j != 0)
                    x8_1 = *(entry_x0 + 0x48)
                
                *(x8_1 + (i_1 << 3)) = 0
                i = i_1.d + 1
            while (i u<= entry_x0[0x14])
            
            entry_x0[0x15] = 0
            int64_t x0_1
            int64_t x1
            x0_1, x1 = RectStroke(&entry_x0[2], 0xfffffffe)
            int64_t var_30 = x0_1
            int64_t var_28 = x1
            int64_t result = RectIWidth(&var_30)
            int32_t x8_4 = 0
            
            if (result.d s>= *entry_x0)
                int128_t v0_1
                result, v0_1 = RectIHeight(&var_30)
                
                if (result.d s>= entry_x0[1])
                    uint64_t x8_6 = zx.q(entry_x0[0xc])
                    int64_t x9_2
                    int32_t x10_6
                    
                    if (x8_6.d != entry_x0[0xa])
                        x9_2 = *(entry_x0 + 0x20)
                        x10_6 = *(x9_2 + x8_6 * 0x58 + 0x50)
                    else
                        x9_2 = *(entry_x0 + 0x20)
                        x10_6 = x8_6.d + 1
                        entry_x0[0xa] = x10_6
                    
                    entry_x0[0xc] = x10_6
                    v0_1.q = 0
                    v0_1:8.q = 0
                    int32_t* x9_3 = x9_2 + x8_6 * 0x58
                    __builtin_memset(x9_3, 0, 0x50)
                    x9_3[0x14] = x8_6.d | entry_x0[0xe] << 0x10
                    int32_t x8_8 = entry_x0[0xe]
                    int32_t x8_9
                    
                    if (x8_8 == 0xffff)
                        x8_9 = 1
                    else
                        x8_9 = x8_8 + 1
                    
                    entry_x0[0xd] += 1
                    entry_x0[0xe] = x8_9
                    v0_1 = var_30.o
                    x8_4 = x9_3[0x14]
                    x9_3[0xc] = 0
                    *x9_3 = 0
                    *(x9_3 + 4) = v0_1
                else
                    x8_4 = 0
            
            entry_x0[6] = x8_4
            return result
        
        int32_t x11_2
        
        while (true)
            x11_2 = *(x9 + 0x50)
            
            if (x11_2 u>> 0x10 != 0)
                break
            
            x9 += 0x58
            
            if (x9 u>= x10_2)
                goto label_1003d30
        
        int32_t x10_3 = entry_x0[0xc]
        entry_x0[0xc] = x11_2 & 0xffff
        *(x9 + 0x50) = x10_3
        entry_x0[0xd] -= 1
        
        if (x9 == 0)
            break
        
        x10_1 = *(entry_x0 + 0x20)
        x9 += 0x58
