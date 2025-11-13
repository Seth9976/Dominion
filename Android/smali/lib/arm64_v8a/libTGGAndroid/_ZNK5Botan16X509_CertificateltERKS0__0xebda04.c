// 函数: _ZNK5Botan16X509_CertificateltERKS0_
// 地址: 0xebda04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9_1 = *(arg1 + 0x60)
int64_t x8_1 = *(arg1 + 0x68)
void* entry_x1
char* x11 = *(entry_x1 + 0x60)
int64_t x10 = *(entry_x1 + 0x68)

if (x8_1 - x9_1 != x10 - x11)
label_ebda90:
    
    if (x11 != x10)
        while (true)
            if (x8_1 != x9_1)
                uint32_t x12_3 = zx.d(*x9_1)
                uint32_t x13_3 = zx.d(*x11)
                
                if (x12_3 u>= x13_3)
                    if (x13_3 u< x12_3)
                        break
                    
                    x11 = &x11[1]
                    x9_1 = &x9_1[1]
                    
                    if (x10 == x11)
                        break
                    
                    continue
            
            return 1
else
    if (x9_1 != x8_1)
        char* x12_1 = x9_1
        char* x13_1 = x11
        
        while (zx.d(*x12_1) == zx.d(*x13_1))
            x12_1 = &x12_1[1]
            x13_1 = &x13_1[1]
            
            if (x8_1 == x12_1)
                goto label_ebda4c
        
        goto label_ebda90
    
label_ebda4c:
    char* x8 = *(entry_x1 + 0x48)
    int64_t x9 = *(entry_x1 + 0x50)
    
    if (x8 != x9)
        char* x11_1 = *(arg1 + 0x48)
        
        while (true)
            if (*(arg1 + 0x50) == x11_1)
                return 1
            
            uint32_t x12_2 = zx.d(*x11_1)
            uint32_t x13_2 = zx.d(*x8)
            
            if (x12_2 u< x13_2)
                return 1
            
            if (x13_2 u< x12_2)
                return 0
            
            x8 = &x8[1]
            x11_1 = &x11_1[1]
            
            if (x9 == x8)
                return 0

return 0
