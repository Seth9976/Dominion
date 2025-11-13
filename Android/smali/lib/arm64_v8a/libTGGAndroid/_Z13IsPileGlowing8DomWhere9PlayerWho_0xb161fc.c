// 函数: _Z13IsPileGlowing8DomWhere9PlayerWho
// 地址: 0xb161fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x9 = *(gDomClient + 0x38)
int32_t x8 = *(gDomClient + 0x207a0)
uint64_t result = 0
int32_t x9_1

x9_1 = x9 == 0xffffffff ? 0 : x9

if (x8 == x9_1)
    if (x19 != 3 && x8 != arg2)
        return 0
    
    uint64_t x8_1 = zx.q(GetZoomPileStyle(zx.q(*(gDomClient + 0x20758))) - 4)
    result = 0
    int32_t x0_5
    int32_t x11_2
    
    if (x8_1.d u<= 9)
        switch (x8_1)
            case 0
                return zx.q(x19 == 0x44e ? 1 : 0)
            case 1
                return zx.q(x19 == 0x44d ? 1 : 0)
            case 2
                x0_5 = BoardPileWhere(gDomClient + 0x20728, 0x70d)
                uint64_t x9_2 = zx.q(*(gDomClient + 0x205e8))
                
                if (x9_2.d == 0)
                    return 0
                
                void* i_2 = *(gDomClient + 0x205e0)
                int64_t x9_3 = i_2 + x9_2 * 0x21d8
                void* i = i_2
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x9_3)
                        return 0
                
                if (i == 0xffffffff)
                    return 0
                
                x11_2 = 0
                
                do
                    if (*(i + 0x2c) == 0 && *(i + 0xa0) == 0xffffffff && *(i + 0xa4) == x0_5
                            && *(i + 0xc8) == 0)
                        x11_2 += 1
                    
                    if (i == 0)
                        i = i_2
                    else
                        i += 0x21d8
                    
                    if (i u>= x9_3)
                        break
                    
                    while (zx.d(*(i + 0x21d2)) == 0)
                        i += 0x21d8
                        
                        if (i u>= x9_3)
                            goto label_b164c0
                while (i != 0xffffffff)
                
            label_b164c0:
                result = zx.q(x0_5 == x19 ? 1 : 0)
                
                if (x11_2 == 0)
                    return 0
            case 3
                return zx.q(x19 == 3 ? 1 : 0)
            case 4
                return zx.q(x19 == 0x462 ? 1 : 0)
            case 5
                return zx.q(x19 == 0x469 ? 1 : 0)
            case 6
                return zx.q(x19 == 0x46b ? 1 : 0)
            case 8
                x0_5 = BoardPileWhere(gDomClient + 0x20728, 0x718)
                uint64_t x9_4 = zx.q(*(gDomClient + 0x205e8))
                
                if (x9_4.d == 0)
                    return 0
                
                void* i_3 = *(gDomClient + 0x205e0)
                int64_t x9_5 = i_3 + x9_4 * 0x21d8
                void* i_1 = i_3
                
                while (zx.d(*(i_1 + 0x21d2)) == 0)
                    i_1 += 0x21d8
                    
                    if (i_1 u>= x9_5)
                        return 0
                
                if (i_1 == 0xffffffff)
                    return 0
                
                x11_2 = 0
                
                do
                    if (*(i_1 + 0x2c) == 0 && *(i_1 + 0xa0) == 0xffffffff && *(i_1 + 0xa4) == x0_5
                            && *(i_1 + 0xc8) == 0)
                        x11_2 += 1
                    
                    if (i_1 == 0)
                        i_1 = i_3
                    else
                        i_1 += 0x21d8
                    
                    if (i_1 u>= x9_5)
                        break
                    
                    while (zx.d(*(i_1 + 0x21d2)) == 0)
                        i_1 += 0x21d8
                        
                        if (i_1 u>= x9_5)
                            goto label_b164c0
                while (i_1 != 0xffffffff)
                
                goto label_b164c0
            case 9
                return zx.q(x19 == 0x46d ? 1 : 0)

return result
