// 函数: _ZNSt6__ndk113basic_filebufIcNS_11char_traitsIcEEE4syncEv
// 地址: 0xf431b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int32_t x20_2

if (entry_x0[0xf] == 0)
    x20_2 = 0
else
    int64_t* x0 = entry_x0[0x10]
    
    if (x0 == 0)
        sub_f43870()
        noreturn
    
    int32_t x8_1 = *(entry_x0 + 0x9c)
    int64_t var_28
    
    if ((x8_1 & 0x10) != 0)
        int32_t x0_2
        
        if (entry_x0[6] != entry_x0[5])
            x20_2 = -1
            x0_2 = (*(*entry_x0 + 0x68))(entry_x0, 0xffffffff)
        
        if (entry_x0[6] == entry_x0[5] || x0_2 != 0xffffffff)
            int32_t i
            
            do
                int64_t* x0_3 = entry_x0[0x10]
                int64_t x2_1 = entry_x0[8]
                i = (*(*x0_3 + 0x28))(x0_3, &entry_x0[0x11], x2_1, x2_1 + entry_x0[0xc], &var_28)
                int64_t buf = entry_x0[8]
                size_t count = var_28 - buf
                
                if (fwrite(buf, 1, count, entry_x0[0xf]) != count)
                    goto label_f4332c_2
            while (i == 1)
            
            if (i == 2)
            label_f4332c:
                x20_2 = -1
            else if (fflush(entry_x0[0xf]) != 0)
            label_f4332c_1:
                x20_2 = -1
            else
                x20_2 = 0
    else if ((x8_1 & 8) == 0)
        x20_2 = 0
    else
        var_28 = entry_x0[0x12]
        int64_t x20_1
        int32_t x21_1
        
        if (zx.d(*(entry_x0 + 0xa2)) == 0)
            int32_t x0_7 = (*(*x0 + 0x30))()
            int64_t x3_3 = entry_x0[9]
            x20_1 = entry_x0[0xa] - x3_3
            
            if (x0_7 s< 1)
                int64_t x8_16 = entry_x0[3]
                
                if (x8_16 == entry_x0[4])
                    x21_1 = 0
                else
                    int64_t* x0_8 = entry_x0[0x10]
                    int32_t x0_9 =
                        (*(*x0_8 + 0x40))(x0_8, &var_28, entry_x0[8], x3_3, x8_16 - entry_x0[2])
                    x21_1 = 1
                    x20_1 = x20_1 + entry_x0[9] - (entry_x0[8] + sx.q(x0_9))
            else
                x21_1 = 0
                x20_1 += (entry_x0[4] - entry_x0[3]) * zx.q(x0_7)
        else
            x21_1 = 0
            x20_1 = entry_x0[4] - entry_x0[3]
        
        if (fseeko(entry_x0[0xf], neg.q(x20_1), 1) == 0)
            if (x21_1 != 0)
                entry_x0[0x11] = var_28
            
            int64_t x8_20 = entry_x0[8]
            *(entry_x0 + 0x9c) = 0
            __builtin_memset(&entry_x0[2], 0, 0x18)
            entry_x0[9] = x8_20
            entry_x0[0xa] = x8_20
            x20_2 = 0
        else
        label_f4332c_2:
            x20_2 = -1

return zx.q(x20_2)
