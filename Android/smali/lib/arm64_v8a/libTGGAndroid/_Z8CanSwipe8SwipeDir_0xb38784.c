// 函数: _Z8CanSwipe8SwipeDir
// 地址: 0xb38784
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x1 = zx.q(arg1)
int32_t x9 = *(gDomClient + 0x1d00c)

if (x9 == 3)
    if (x1.d == 1)
        int64_t x9_6 = muls.dp.d(*(gDomClient + 0x1f0a4) + 0xb, 0x2aaaaaab)
        return zx.q(*(gDomClient + 0x1f0b4) s< (x9_6 s>> 0x21).d + (x9_6 u>> 0x3f).d - 1 ? 1 : 0)
    
    if (x1.d == 0)
        return zx.q(*(gDomClient + (-0xf4c | 0x10000)) s> 0 ? 1 : 0)
else if (x9 == 2)
    if (x1.d == 1)
        return zx.q(*(gDomClient + 0x1f0b0) s< (*(gDomClient + 0x1f8b8) + 0x3e) s/ 0x3f - 1 ? 1 : 0)
    
    if (x1.d == 0)
        return zx.q(*(gDomClient + (-0xf50 | 0x10000)) s> 0 ? 1 : 0)
else if (x9 == 1)
    int32_t x9_1 = *(gDomClient + 0x1d01c)
    
    if (x9_1 != 0)
        uint64_t x10_1 = zx.q(x9_1.w)
        
        if (x10_1.d u< *(gDomClient + 0x205e8))
            int64_t x8_1 = *(gDomClient + 0x205e0)
            
            if (*(x8_1 + x10_1 * 0x21d8 + 0x21d0) == x9_1)
                uint64_t result = zx.q(*(x8_1 + x10_1 * 0x21d8 + 0x178))
                
                if (result.d == 0)
                    return result
                
                return zx.q(NextCard(result, x1) != 0 ? 1 : 0)
    
    return 0

pthread_kill(pthread_self(), 6)
XNoReturn()
return TryGetOpenPile() __tailcall
