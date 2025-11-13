// 函数: _Z16DomClientDisposev
// 地址: 0xb91c6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomMapDispose()
DisposeThreadLocalDomContextStack()

if (zx.d(*(gDomClient + 0x205d8)) != 0)
    DomGameEnd()

CardsetFree(*(gDomClient + 0x82e28))
CardsetFree(*(gDomClient + 0x82e30))

if (*(gKV + 0x3a20) s>= 1)
    int64_t i = 0
    int64_t (* x19_1)() = gKV + 0x24
    
    do
        UI2Free(x19_1)
        i += 1
        x19_1 += 0x74
    while (i s< sx.q(*(gKV + 0x3a20)))

void* x8_3 = *(gDomClient + 0x205e0)
*(gKV + 0x3a20) = 0

if (x8_3 != 0)
    uint64_t x10_1 = zx.q(*(gDomClient + 0x205e8))
    void* x0_3
    
    if (x10_1.d == 0)
        x0_3 = x8_3
    else
        int64_t x11_1 = x8_3 + x10_1 * 0x21d8
        x0_3 = x8_3
        
        while (true)
            int32_t x12_1 = *(x8_3 + 0x21d0)
            
            if (x12_1 u>> 0x10 != 0)
                int32_t x11_2 = *(gDomClient + 0x205f0)
                *(gDomClient + 0x205f0) = x12_1 & 0xffff
                *(x8_3 + 0x21d0) = x11_2
                x0_3 = *(gDomClient + 0x205e0)
                uint64_t x12_3 = zx.q(*(gDomClient + 0x205e8))
                x8_3 += 0x21d8
                *(gDomClient + 0x205f4) -= 1
                x11_1 = x0_3 + x12_3 * 0x21d8
                
                if (x11_1 u<= x8_3)
                    break
            else
                x8_3 += 0x21d8
                
                if (x8_3 u>= x11_1)
                    break
    
    *(gDomClient + 0x205e8) = 0
    *(gDomClient + 0x205f0) = 0
    XFree(x0_3)
    *(gDomClient + 0x20600) = 0
    __builtin_memset(gDomClient + 0x205e0, 0, 0x18)

return XMap<DomCardEnum, DomCardTranslation>::Dispose() __tailcall
