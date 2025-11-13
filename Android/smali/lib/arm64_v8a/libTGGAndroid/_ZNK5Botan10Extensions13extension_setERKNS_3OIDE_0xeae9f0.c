// 函数: _ZNK5Botan10Extensions13extension_setERKNS_3OIDE
// 地址: 0xeae9f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i = *(arg1 + 0x28)

if (i != 0)
    void* entry_x1
    int32_t* x9_1 = *(entry_x1 + 8)
    int64_t x10_1 = *(entry_x1 + 0x10)
    void* __offset(Botan::OID, 0x28) i_1
    
    if (x9_1 == x10_1)
        do
            i_1 = i
            i = *i
        while (i != 0)
    else
        i_1 = arg1 + 0x28
        
        while (true)
        label_eaea28:
            int32_t* x13_1 = *(i + 0x28)
            int32_t* x14_1 = x9_1
            
            while (true)
                if (*(i + 0x30) != x13_1)
                    int32_t x15_1 = *x13_1
                    int32_t x16_1 = *x14_1
                    
                    if (x15_1 u>= x16_1)
                        if (x16_1 u< x15_1)
                            break
                        
                        x14_1 = &x14_1[1]
                        x13_1 = &x13_1[1]
                        
                        if (x10_1 == x14_1)
                            break
                        
                        continue
                
                i = *(i + 8)
                
                if (i == 0)
                    goto label_eaea6c
                
                goto label_eaea28
            
            i_1 = i
            i = *i
            
            if (i == 0)
                break
    
label_eaea6c:
    
    if (i_1 != arg1 + 0x28)
        int32_t* x11_1 = *(i_1 + 0x28)
        int64_t x12_2 = *(i_1 + 0x30)
        
        if (x11_1 == x12_2)
            return zx.q(i_1 != arg1 + 0x28 ? 1 : 0)
        
        while (true)
            if (x10_1 == x9_1)
                return zx.q(arg1 + 0x28 != arg1 + 0x28 ? 1 : 0)
            
            int32_t x13_2 = *x9_1
            int32_t x14_2 = *x11_1
            
            if (x13_2 u< x14_2)
                return zx.q(arg1 + 0x28 != arg1 + 0x28 ? 1 : 0)
            
            if (x14_2 u< x13_2)
                return zx.q(i_1 != arg1 + 0x28 ? 1 : 0)
            
            x11_1 = &x11_1[1]
            x9_1 = &x9_1[1]
            
            if (x12_2 == x11_1)
                return zx.q(i_1 != arg1 + 0x28 ? 1 : 0)

return zx.q(arg1 + 0x28 != arg1 + 0x28 ? 1 : 0)
