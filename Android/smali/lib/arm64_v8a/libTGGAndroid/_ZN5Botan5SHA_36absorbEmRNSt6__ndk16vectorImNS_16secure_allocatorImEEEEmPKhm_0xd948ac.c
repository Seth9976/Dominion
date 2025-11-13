// 函数: _ZN5Botan5SHA_36absorbEmRNSt6__ndk16vectorImNS_16secure_allocatorImEEEEmPKhm
// 地址: 0xd948ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 == 0)
    return arg3

uint64_t i = arg5
uint64_t x21_1 = arg1 u>> 3
uint64_t x0

do
    uint64_t i_2 = x21_1 - arg3
    uint64_t i_1
    
    i_1 = i_2 u< i ? i_2 : i
    
    uint8_t const* x22_1
    
    if (i_1 == 0)
        x0 = arg3
        x22_1 = arg4
    else
        int64_t x10_1 = 0
        uint64_t x9_1 = i_1
        x22_1 = arg4
        x0 = arg3
        uint64_t j
        
        do
            int64_t x11_1 = x0 & 7
            
            if (x11_1 == 0)
                if ((x9_1 & 7) != 0)
                label_d94990:
                    uint64_t x10_2 = x0 << 3
                    uint64_t k
                    
                    do
                        uint64_t x11_6 = zx.q(*x22_1)
                        x22_1 = &x22_1[1]
                        int64_t* x12_4 = *arg2
                        int64_t x14_4 = x0 & 0xfffffffffffffff8
                        uint64_t x11_7 = x11_6 << (x10_2 & 0x38)
                        x0 += 1
                        k = x9_1
                        x9_1 -= 1
                        x10_2 += 8
                        *(x12_4 + x14_4) ^= x11_7
                    while (k != 1)
                else
                    int64_t x12_3
                    
                    do
                        int64_t* x12_2 = *arg2
                        int64_t x13_3 = (arg3 + x10_1) & 0xfffffffffffffff8
                        *(x12_2 + x13_3) ^= *(arg4 + x10_1)
                        x12_3 = x10_1 + 8
                        
                        if (i_1 - 8 == x10_1)
                            break
                        
                        x10_1 = x12_3
                    while ((x9_1 & 7) == 0)
                    
                    x9_1 = i_1 - x12_3
                    x22_1 = &arg4[x12_3]
                    x0 = arg3 + x12_3
                    
                    if (i_1 != x12_3)
                        goto label_d94990
                
                break
            
            uint64_t x12_1 = zx.q(*x22_1)
            x22_1 = &x22_1[1]
            int64_t* x13_1 = *arg2
            int64_t x14_1 = x0 & 0xfffffffffffffff8
            x0 += 1
            j = x9_1
            x9_1 -= 1
            x10_1 += 1
            *(x13_1 + x14_1) ^= x12_1 << x11_1 << 3
        while (j != 1)
    
    i -= i_1
    
    if (x0 == x21_1)
        Botan::SHA_3::permute(*arg2)
        x0 = 0
    
    arg4 = x22_1
    arg3 = x0
while (i != 0)

return x0
