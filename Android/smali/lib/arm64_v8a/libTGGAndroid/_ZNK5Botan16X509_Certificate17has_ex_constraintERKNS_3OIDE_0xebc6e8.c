// 函数: _ZNK5Botan16X509_Certificate17has_ex_constraintERKNS_3OIDE
// 地址: 0xebc6e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = Botan::X509_Certificate::data()
void* x8 = *(x0 + 0x250)
int64_t x9 = *(x0 + 0x258)

if (x8 != x9)
    void* entry_x1
    int32_t* x10_1 = *(entry_x1 + 8)
    
    while (true)
        int32_t* x13_1 = *(x8 + 8)
        int64_t x12_1 = *(x8 + 0x10)
        
        if (x12_1 - x13_1 == *(entry_x1 + 0x10) - x10_1)
            if (x13_1 == x12_1)
                break
            
            int32_t* x14_2 = x10_1
            
            while (*x13_1 == *x14_2)
                x13_1 = &x13_1[1]
                x14_2 = &x14_2[1]
                
                if (x12_1 == x13_1)
                    return zx.q(x8 != x9 ? 1 : 0)
        
        x8 += 0x20
        
        if (x8 == x9)
            return zx.q(x9 != x9 ? 1 : 0)

return zx.q(x8 != x9 ? 1 : 0)
