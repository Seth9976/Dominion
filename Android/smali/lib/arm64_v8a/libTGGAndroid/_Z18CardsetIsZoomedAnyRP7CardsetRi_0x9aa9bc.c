// 函数: _Z18CardsetIsZoomedAnyRP7CardsetRi
// 地址: 0x9aa9bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x12 = zx.q(*(gCardset + 8))

if (x12.d != 0)
    Cardset* i_1 = *gCardset
    Cardset* i = i_1
    
    do
        if (zx.d(*(i + 0x156a)) != 0)
            if (i != 0xffffffff)
                int64_t x12_1 = i_1 + x12 * 0x1570
                
                do
                    if (*(i + 0x1538) != 0xffffffff)
                        *arg2 = 0
                        uint64_t x11 = zx.q(*(i + 0x1538))
                        int32_t x10_1 = *(i + 0x1520)
                        int32_t x12_3
                        
                        if (x10_1 s>= x11.d)
                            uint64_t x12_2 = x11
                            int64_t k
                            
                            do
                                if (x12_2.d s< 1)
                                    goto label_9aaa6c
                                
                                k = *(i + (zx.q(x12_2.d - 1) << 5) + 0x260)
                                x12_2 -= 1
                            while (k == 0)
                            *arg2 = 2
                            x11 = zx.q(*(i + 0x1538))
                            x10_1 = *(i + 0x1520)
                            x12_3 = 6
                        else
                        label_9aaa6c:
                            x12_3 = 4
                        
                        if (x11.d s>= 0xffffffff)
                            int32_t x11_1 = x11.d + 1
                            
                            while (x11_1 s< x10_1)
                                int64_t x13_6 = *(i + (zx.q(x11_1) << 5) + 0x260)
                                x11_1 += 1
                                
                                if (x13_6 != 0)
                                    if (x11_1 != 0)
                                        *arg2 = x12_3
                                    
                                    break
                        
                        *arg1 = i
                        return 1
                    
                    if (i == 0)
                        i = i_1
                    else
                        i += 0x1570
                    
                    if (i u>= x12_1)
                        break
                    
                    while (zx.d(*(i + 0x156a)) == 0)
                        i += 0x1570
                        
                        if (i u>= x12_1)
                            return 0
                while (i != 0xffffffff)
            
            break
        
        i += 0x1570
    while (i u< i_1 + x12 * 0x1570)

return 0
