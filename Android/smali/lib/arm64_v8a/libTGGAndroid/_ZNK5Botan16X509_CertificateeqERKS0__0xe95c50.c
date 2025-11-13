// 函数: _ZNK5Botan16X509_CertificateeqERKS0_
// 地址: 0xe95c50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *(arg1 + 0x60)
int64_t x8_3 = *(arg1 + 0x68)
void* entry_x1
char* x10 = *(entry_x1 + 0x60)

if (x8_3 - x9 == *(entry_x1 + 0x68) - x10)
    if (x9 != x8_3)
        do
            if (zx.d(*x9) != zx.d(*x10))
                return 0
            
            x9 = &x9[1]
            x10 = &x10[1]
        while (x8_3 != x9)
    
    int32_t* x9_1 = *(arg1 + 0x18)
    int64_t x8 = *(arg1 + 0x20)
    int32_t* x10_1 = *(entry_x1 + 0x18)
    
    if (x8 - x9_1 == *(entry_x1 + 0x20) - x10_1)
        if (x9_1 != x8)
            do
                if (*x9_1 != *x10_1)
                    return 0
                
                x9_1 = &x9_1[1]
                x10_1 = &x10_1[1]
            while (x8 != x9_1)
        
        char* x8_1 = *(arg1 + 0x30)
        int64_t x9_2 = *(arg1 + 0x38)
        char* x10_5
        int64_t x11_6
        
        if (x8_1 == x9_2 || (x9_2 - x8_1 == 2 && zx.d(*x8_1) == 5 && zx.d(x8_1[1]) == 0))
            x10_5 = *(entry_x1 + 0x30)
            x11_6 = *(entry_x1 + 0x38)
        
        if ((x8_1 == x9_2 || (x9_2 - x8_1 == 2 && zx.d(*x8_1) == 5 && zx.d(x8_1[1]) == 0)) &&
            (x10_5 == x11_6 || (x11_6 - x10_5 == 2 && zx.d(*x10_5) == 5 && zx.d(x10_5[1]) == 0)))
        label_e95d6c:
            char* x9_3 = *(arg1 + 0x48)
            int64_t x8_2 = *(arg1 + 0x50)
            char* x10_8 = *(entry_x1 + 0x48)
            
            if (x8_2 - x9_3 == *(entry_x1 + 0x50) - x10_8)
                if (x9_3 == x8_2)
                    return 1
                
                uint32_t x11_13
                uint32_t x12_8
                
                do
                    x11_13 = zx.d(*x9_3)
                    x12_8 = zx.d(*x10_8)
                    
                    if (x11_13 != x12_8)
                        break
                    
                    x9_3 = &x9_3[1]
                    x10_8 = &x10_8[1]
                while (x8_2 != x9_3)
                
                return zx.q(x11_13 == x12_8 ? 1 : 0)
        else
            char* x10_7 = *(entry_x1 + 0x30)
            void* x11_9 = x9_2 - x8_1
            void* x12_5 = *(entry_x1 + 0x38) - x10_7
            
            if (x9_2 != x8_1 && x11_9 == x12_5)
                do
                    if (zx.d(*x8_1) != zx.d(*x10_7))
                        return 0
                    
                    x8_1 = &x8_1[1]
                    x10_7 = &x10_7[1]
                while (x9_2 != x8_1)
                
                goto label_e95d6c
            
            if (x11_9 == x12_5)
                goto label_e95d6c

return 0
