// 函数: _ZN5Botan7X509_DN9lookup_ubERKNS_3OIDE
// 地址: 0xead1f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i = data_23ecc68

if (i != 0)
    int32_t* x8_1 = *(arg1 + 8)
    int64_t x9_1 = *(arg1 + 0x10)
    int64_t* i_1
    
    if (x8_1 == x9_1)
        do
            i_1 = i
            i = *i
        while (i != 0)
    else
        i_1 = &data_23ecc68
        
        while (true)
        label_ead240:
            int32_t* x14_1 = i[5]
            int32_t* x15_1 = x8_1
            
            while (true)
                if (i[6] != x14_1)
                    int32_t x16_1 = *x14_1
                    int32_t x17_1 = *x15_1
                    
                    if (x16_1 u>= x17_1)
                        if (x17_1 u< x16_1)
                            break
                        
                        x15_1 = &x15_1[1]
                        x14_1 = &x14_1[1]
                        
                        if (x9_1 == x15_1)
                            break
                        
                        continue
                
                i = i[1]
                
                if (i == 0)
                    goto label_ead284
                
                goto label_ead240
            
            i_1 = i
            i = *i
            
            if (i == 0)
                break
    
label_ead284:
    
    if (i_1 != &data_23ecc68)
        int32_t* x11_1 = i_1[5]
        int64_t x12_1 = i_1[6]
        
        if (x11_1 == x12_1)
            return i_1[8]
        
        while (true)
            if (x9_1 == x8_1)
                return 0
            
            int32_t x13_2 = *x8_1
            int32_t x14_2 = *x11_1
            
            if (x13_2 u< x14_2)
                return 0
            
            if (x14_2 u< x13_2)
                return i_1[8]
            
            x11_1 = &x11_1[1]
            x8_1 = &x8_1[1]
            
            if (x12_1 == x11_1)
                return i_1[8]

return 0
