// 函数: _ZNK5Botan7X509_DN9has_fieldERKNS_3OIDE
// 地址: 0xeac6e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 8)
int64_t x9 = *(arg1 + 0x10)

if (x8 != x9)
    void* entry_x1
    int32_t* x10_1 = *(entry_x1 + 8)
    
    do
        int32_t* x13_1 = *(x8 + 8)
        int64_t x12_1 = *(x8 + 0x10)
        
        if (x12_1 - x13_1 == *(entry_x1 + 0x10) - x10_1)
            if (x13_1 == x12_1)
                return 1
            
            int32_t* x14_2 = x10_1
            
            while (*x13_1 == *x14_2)
                x13_1 = &x13_1[1]
                x14_2 = &x14_2[1]
                
                if (x12_1 == x13_1)
                    return 1
        
        x8 += 0x60
    while (x8 != x9)

return 0
