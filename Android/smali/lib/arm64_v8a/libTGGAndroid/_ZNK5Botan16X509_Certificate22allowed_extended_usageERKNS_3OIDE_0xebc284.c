// 函数: _ZNK5Botan16X509_Certificate22allowed_extended_usageERKNS_3OIDE
// 地址: 0xebc284
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = Botan::X509_Certificate::data()
void* x9 = *(x0 + 0x250)
int64_t x8 = *(x0 + 0x258)

if (x9 == x8)
    return 1

void* entry_x1
int32_t* x10 = *(entry_x1 + 8)

do
    int32_t* x13_1 = *(x9 + 8)
    int64_t x12_1 = *(x9 + 0x10)
    
    if (x12_1 - x13_1 == *(entry_x1 + 0x10) - x10)
        if (x13_1 == x12_1)
            return zx.q(x9 != x8 ? 1 : 0)
        
        int32_t* x14_2 = x10
        
        while (*x13_1 == *x14_2)
            x13_1 = &x13_1[1]
            x14_2 = &x14_2[1]
            
            if (x12_1 == x13_1)
                return zx.q(x9 != x8 ? 1 : 0)
    
    x9 += 0x20
while (x9 != x8)

return zx.q(x8 != x8 ? 1 : 0)
