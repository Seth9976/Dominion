// 函数: _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE8overflowEi
// 地址: 0xf43644
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x78) != 0)
    void* x20_1 = arg1
    int32_t entry_x1
    void* x3_1
    int64_t buf_3
    int64_t x25_1
    
    if ((zx.d(*(arg1 + 0x9c)) & 0x10) == 0)
        int64_t x8_2 = *(x20_1 + 0x60)
        __builtin_memset(x20_1 + 0x10, 0, 0x30)
        
        if (x8_2 u< 9)
            x25_1 = 0
            buf_3 = 0
        else
            if (zx.d(*(x20_1 + 0xa2)) == 0)
                buf_3 = *(x20_1 + 0x68)
                x8_2 = *(x20_1 + 0x70)
            else
                buf_3 = *(x20_1 + 0x40)
            
            x25_1 = x8_2 + buf_3 - 1
            *(x20_1 + 0x28) = buf_3
            *(x20_1 + 0x30) = buf_3
            *(x20_1 + 0x38) = x25_1
        
        *(x20_1 + 0x9c) = 0x10
        x3_1 = *(x20_1 + 0x30)
        
        if (entry_x1 != 0xffffffff)
            goto label_f436a4
        
        goto label_f43710
    
    buf_3 = *(x20_1 + 0x28)
    x3_1 = *(x20_1 + 0x30)
    x25_1 = *(x20_1 + 0x38)
    int64_t buf_1
    size_t count
    
    if (entry_x1 != 0xffffffff)
    label_f436a4:
        
        if (x3_1 == 0)
            void var_44
            x3_1 = &var_44
            *(x20_1 + 0x28) = &var_44
            *(x20_1 + 0x30) = &var_44
            *(x20_1 + 0x38) = &var_44 | 1
        
        *x3_1 = entry_x1.b
        buf_1 = *(x20_1 + 0x28)
        x3_1 = *(x20_1 + 0x30) + 1
        *(x20_1 + 0x30) = x3_1
        count = x3_1 - buf_1
        
        if (x3_1 != buf_1)
            goto label_f43720
        
        goto label_f43748
    
label_f43710:
    buf_1 = buf_3
    count = x3_1 - buf_1
    
    if (x3_1 == buf_1)
        goto label_f43748
    
label_f43720:
    
    if (zx.d(*(x20_1 + 0xa2)) == 0)
        int64_t x5_1 = *(x20_1 + 0x40)
        int64_t var_50 = x5_1
        int64_t* x0_3 = *(x20_1 + 0x80)
        
        if (x0_3 == 0)
        label_f4386c:
            sub_f43870()
            noreturn
        
        int64_t var_58
        int32_t x0_4 = (*(*x0_3 + 0x18))(x0_3, x20_1 + 0x88, buf_1, x3_1, &var_58, x5_1, 
            x5_1 + *(x20_1 + 0x60), &var_50)
        int64_t buf_2 = *(x20_1 + 0x28)
        
        if (var_58 != buf_2)
            int32_t x22_1 = x0_4
            
            while (true)
                if (x22_1 == 3)
                    size_t count_1 = *(x20_1 + 0x30) - buf_2
                    
                    if (fwrite(buf_2, 1, count_1, *(x20_1 + 0x78)) == count_1)
                        break
                    
                    return 0xffffffff
                
                if (x22_1 u> 1)
                    return 0xffffffff
                
                int64_t buf = *(x20_1 + 0x40)
                size_t count_2 = var_50 - buf
                
                if (fwrite(buf, 1, count_2, *(x20_1 + 0x78)) != count_2)
                    return 0xffffffff
                
                if (x22_1 != 1)
                    break
                
                int64_t x2_3 = var_58
                int64_t x3_4 = *(x20_1 + 0x30)
                int64_t* x0_6 = *(x20_1 + 0x80)
                *(x20_1 + 0x28) = x2_3
                *(x20_1 + 0x38) = x3_4
                
                if (x0_6 == 0)
                    goto label_f4386c
                
                int64_t x5_2 = *(x20_1 + 0x40)
                int32_t x0_7 = (*(*x0_6 + 0x18))(x0_6, x20_1 + 0x88, x2_3, x3_4, &var_58, x5_2, 
                    x5_2 + *(x20_1 + 0x60), &var_50)
                buf_2 = *(x20_1 + 0x28)
                x22_1 = x0_7
                
                if (var_58 == buf_2)
                    return 0xffffffff
            
            goto label_f43740
    else if (fwrite(buf_1, 1, count, *(x20_1 + 0x78)) == count)
    label_f43740:
        *(x20_1 + 0x28) = buf_3
        *(x20_1 + 0x30) = buf_3
        *(x20_1 + 0x38) = x25_1
    label_f43748:
        
        if (entry_x1 == 0xffffffff)
            return 0
        
        return zx.q(entry_x1)

return 0xffffffff
