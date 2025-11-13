// 函数: _ZNKSt6__ndk118__time_get_storageIcE15__do_date_orderEv
// 地址: 0x10d9128
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
void* entry_x0
uint32_t x10 = zx.d(*(entry_x0 + 0x3f8))
void* x11 = entry_x0 + 0x3f9
int32_t x12 = 2
uint32_t x9 = x10 u>> 1
void* x13_5

while (true)
    uint64_t x13_1 = zx.q(x12 - 2)
    
    if ((x10 & 1) != 0)
        if (*(entry_x0 + 0x400) u<= x13_1 || zx.d(*(*(entry_x0 + 0x408) + x13_1)) == 0x25)
            x13_5 = *(entry_x0 + 0x408)
            break
    else if (x13_1.d u>= x9 || zx.d(*(entry_x0 + 0x3f8 + x13_1 + 1)) == 0x25)
        x13_5 = x11
        break
    
    x12 += 1

uint64_t x13_7 = zx.q(zx.d(*(x13_5 + zx.q(x12 - 1))) - 0x59)

if (x13_7.d u<= 0x20)
    switch (x13_7)
        case 0, 0x20
            while (true)
                SystemHintOp_BTI()
                uint64_t x12_1 = zx.q(x12)
                void* x13_13
                
                if ((x10 & 1) != 0)
                    int64_t x13_10 = *(entry_x0 + 0x400)
                    
                    if (x13_10 u> x12_1)
                        if (zx.d(*(*(entry_x0 + 0x408) + x12_1)) != 0x25)
                            x12 = x12_1.d + 1
                            continue
                            continue
                        else
                            x13_10 = *(entry_x0 + 0x400)
                    
                    if (x13_10 == x12_1)
                        break
                    
                    x13_13 = *(entry_x0 + 0x408)
                else if (x12_1.d u>= x9 || zx.d(*(entry_x0 + 0x3f8 + x12_1 + 1)) == 0x25)
                    x13_13 = x11
                    
                    if (x9 == x12_1.d)
                        break
                else
                    x12 = x12_1.d + 1
                    continue
                
                uint32_t x13_24 = zx.d(*(x13_13 + zx.q(x12_1.d + 1)))
                int32_t x12_4 = x12_1.d - 2
                
                if (x13_24 == 0x64)
                    while (true)
                        uint64_t x13_25 = zx.q(x12_4 + 4)
                        
                        if ((x10 & 1) != 0)
                            int64_t x14_5 = *(entry_x0 + 0x400)
                            
                            if (x14_5 u> x13_25)
                                if (zx.d(*(*(entry_x0 + 0x408) + x13_25)) != 0x25)
                                    x12_4 += 1
                                    continue
                                    continue
                                else
                                    x14_5 = *(entry_x0 + 0x400)
                            
                            if (x14_5 == zx.q(x12_4 + 4))
                                break
                            
                            x11 = *(entry_x0 + 0x408)
                        else if (x13_25.d u< x9 && zx.d(*(entry_x0 + 0x3f8 + x13_25 + 1)) != 0x25)
                            x12_4 += 1
                            continue
                        else if (x9 - 4 == x12_4)
                            break
                        
                        if (zx.d(*(x11 + zx.q(x12_4 + 5))) != 0x6d)
                            break
                        
                        return 4
                else if (x13_24 == 0x6d)
                    while (true)
                        uint64_t x13_29 = zx.q(x12_4 + 4)
                        
                        if ((x10 & 1) != 0)
                            int64_t x14_7 = *(entry_x0 + 0x400)
                            
                            if (x14_7 u> x13_29)
                                if (zx.d(*(*(entry_x0 + 0x408) + x13_29)) != 0x25)
                                    x12_4 += 1
                                    continue
                                    continue
                                else
                                    x14_7 = *(entry_x0 + 0x400)
                            
                            if (x14_7 == zx.q(x12_4 + 4))
                                break
                            
                            x11 = *(entry_x0 + 0x408)
                        else if (x13_29.d u< x9 && zx.d(*(entry_x0 + 0x3f8 + x13_29 + 1)) != 0x25)
                            x12_4 += 1
                            continue
                        else if (x9 - 4 == x12_4)
                            break
                        
                        if (zx.d(*(x11 + zx.q(x12_4 + 5))) != 0x64)
                            break
                        
                        return 3
                
                break
        case 0xb
            while (true)
                SystemHintOp_BTI()
                uint64_t x12_2 = zx.q(x12)
                
                if ((x10 & 1) != 0)
                    int64_t x13_16 = *(entry_x0 + 0x400)
                    
                    if (x13_16 u> x12_2)
                        if (zx.d(*(*(entry_x0 + 0x408) + x12_2)) != 0x25)
                            x12 = x12_2.d + 1
                            continue
                            continue
                        else
                            x13_16 = *(entry_x0 + 0x400)
                    
                    if (x13_16 == x12_2)
                        break
                    
                    x11 = *(entry_x0 + 0x408)
                else if (x12_2.d u< x9 && zx.d(*(entry_x0 + 0x3f8 + x12_2 + 1)) != 0x25)
                    x12 = x12_2.d + 1
                    continue
                else if (x9 == x12_2.d)
                    break
                
                if (zx.d(*(x11 + zx.q(x12_2.d + 1))) != 0x6d)
                    break
                
                int32_t x11_4 = x12_2.d - 2
                
                while (true)
                    uint64_t x12_9 = zx.q(x11_4 + 4)
                    uint32_t x8_8
                    
                    if ((x10 & 1) != 0)
                        int64_t x13_37 = *(entry_x0 + 0x400)
                        
                        if (x13_37 u> x12_9)
                            if (zx.d(*(*(entry_x0 + 0x408) + x12_9)) != 0x25)
                                x11_4 += 1
                                continue
                                continue
                            else
                                x13_37 = *(entry_x0 + 0x400)
                        
                        if (x13_37 == zx.q(x11_4 + 4))
                            break
                        
                        x8_8 = zx.d(*(*(entry_x0 + 0x408) + zx.q(x11_4 + 5)))
                    else if (x12_9.d u>= x9 || zx.d(*(entry_x0 + 0x3f8 + x12_9 + 1)) == 0x25)
                        if (x9 - 4 == x11_4)
                            break
                        
                        x8_8 = zx.d(*(entry_x0 + 0x3f8 + zx.q(x11_4 + 5) + 1))
                    else
                        x11_4 += 1
                        continue
                    
                    if (x8_8 != 0x79 && x8_8 != 0x59)
                        break
                    
                    return 1
                
                break
        case 0x14
            while (true)
                SystemHintOp_BTI()
                uint64_t x12_3 = zx.q(x12)
                
                if ((x10 & 1) != 0)
                    int64_t x13_21 = *(entry_x0 + 0x400)
                    
                    if (x13_21 u> x12_3)
                        if (zx.d(*(*(entry_x0 + 0x408) + x12_3)) != 0x25)
                            x12 = x12_3.d + 1
                            continue
                            continue
                        else
                            x13_21 = *(entry_x0 + 0x400)
                    
                    if (x13_21 == x12_3)
                        break
                    
                    x11 = *(entry_x0 + 0x408)
                else if (x12_3.d u< x9 && zx.d(*(entry_x0 + 0x3f8 + x12_3 + 1)) != 0x25)
                    x12 = x12_3.d + 1
                    continue
                else if (x9 == x12_3.d)
                    break
                
                if (zx.d(*(x11 + zx.q(x12_3.d + 1))) != 0x64)
                    break
                
                int32_t x11_2 = x12_3.d - 2
                
                while (true)
                    uint64_t x12_5 = zx.q(x11_2 + 4)
                    uint32_t x8_5
                    
                    if ((x10 & 1) != 0)
                        int64_t x13_34 = *(entry_x0 + 0x400)
                        
                        if (x13_34 u> x12_5)
                            if (zx.d(*(*(entry_x0 + 0x408) + x12_5)) != 0x25)
                                x11_2 += 1
                                continue
                                continue
                            else
                                x13_34 = *(entry_x0 + 0x400)
                        
                        if (x13_34 == zx.q(x11_2 + 4))
                            break
                        
                        x8_5 = zx.d(*(*(entry_x0 + 0x408) + zx.q(x11_2 + 5)))
                        
                        if (x8_5 == 0x79)
                            return 2
                    else if (x12_5.d u>= x9 || zx.d(*(entry_x0 + 0x3f8 + x12_5 + 1)) == 0x25)
                        if (x9 - 4 == x11_2)
                            break
                        
                        x8_5 = zx.d(*(entry_x0 + 0x3f8 + zx.q(x11_2 + 5) + 1))
                        
                        if (x8_5 == 0x79)
                            return 2
                    else
                        x11_2 += 1
                        continue
                    
                    if (x8_5 != 0x59)
                        break
                    
                    return 2
                
                break

SystemHintOp_BTI()
return 0
