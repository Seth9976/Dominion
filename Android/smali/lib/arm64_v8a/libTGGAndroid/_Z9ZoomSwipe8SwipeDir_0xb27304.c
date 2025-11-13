// 函数: _Z9ZoomSwipe8SwipeDir
// 地址: 0xb27304
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20

x20 = arg1 == 0 ? 2 : 4

Cardset* var_28
int32_t var_14
uint64_t result = CardsetIsZoomedAny(&var_28, &var_14)

if ((result.d & 1) == 0)
    if (*(gDomClient + 0x1d00c) == 1)
        int32_t x8_2 = *(gDomClient + 0x1d01c)
        
        if (x8_2 != 0)
            uint64_t x9_1 = zx.q(x8_2.w)
            
            if (x9_1.d u< *(gDomClient + 0x205e8))
                int64_t x10_2 = *(gDomClient + 0x205e0)
                
                if (*(x10_2 + x9_1 * 0x21d8 + 0x21d0) == x8_2)
                    result = zx.q(*(x10_2 + x9_1 * 0x21d8 + 0x178))
                    
                    if (result.d != 0)
                        result = NextCard(result, zx.q(arg1))
                        
                        if (result.d != 0)
                            DomZoomDismiss(false)
                            result = *(gDomClient + 0x205e0) + mulu.dp.d(zx.d(result.w), 0x21d8)
                            int32_t x8_5 = *(result + 0x2c)
                            
                            if (x8_5 == 3)
                                return DomZoomPile(result, true)
                            
                            if (x8_5 == 0)
                                return DomZoomCard(result, false)
else if ((var_14 & x20) != 0)
    return CardsetSwipe(var_28, zx.q(x20))

return result
