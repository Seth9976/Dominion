// 函数: _Z15ToggleSelectionR6DomGfxi
// 地址: 0xb4b544
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGfx& x20 = arg1

if (*(arg1 + 0xc0) == 0)
    int64_t x8_1 = *(gDomClient + 0x205e0)
    uint32_t i = zx.d(*(x8_1 + zx.q(*(x20 + 0x138)) * 0x21d8 + 0x84))
    uint64_t x11_3
    
    do
        x11_3 = zx.q(i) & 0xffff
        
        if (*(gDomClient + zx.q(*(x8_1 + mulu.dp.d(x11_3.d, 0x21d8) + 0x98)) * 0x68 + 0x22198)
                == *(gDomClient + zx.q(*(x20 + 0x98)) * 0x68 + 0x22198))
            break
        
        i = *(x8_1 + x11_3 * 0x21d8 + 0x14c)
    while (i != 0)
    
    x20 = x8_1 + x11_3 * 0x21d8

int32_t x0_1 = CardWhat(gDomClient + 0x20728, zx.q(*(x20 + 0x98)))
uint64_t x8_2 = zx.q(*(gDomClient + 0x2056c))
int32_t i_1 = *(x20 + 0x98)
int32_t x10_1

if (arg2 == 0)
    x10_1 = *(gDomClient + 0x207ac)
else
    x10_1 = arg2

int64_t x4 = sx.q(x8_2.d)
int32_t x20_1

if (x8_2.d s< 1)
label_b4b664:
    *(gDomClient + 0x2056c) = x4.d + 1
    *(gDomClient + (x4 << 2) + 0x1f8ec) = i_1
    x20_1 = 1
else
    int64_t (* x11_4)() = gDomClient + 0x1f8ec
    uint64_t x12_1 = x8_2
    
    while (*x11_4 != i_1)
        uint64_t temp0_1 = x12_1
        x12_1 -= 1
        x11_4 += 4
        
        if (temp0_1 == 1)
            goto label_b4b664
    
    if (*(x20 + 0xc0) s< 2)
        *(gDomClient + 0x2056c) = (x4 - 1).d
        x20_1 = 2
        *x11_4 = *(gDomClient + ((x4 - 1) << 2) + 0x1f8ec)
    else
        int32_t x8_5
        
        if (x8_2.d != x10_1)
            x8_5 = *(gDomClient + 0x20758)
        
        if (x8_2.d == x10_1 || x8_5 == 0x96 || x8_5 == 0x8d)
            int32_t i_2 = 0
            x20_1 = 0
            
            do
                void* x26_1 = gDomClient + (sx.q(i_2) << 2) + 0x1f8ec
                
                if ((CardIs(gDomClient + 0x20728, zx.q(*x26_1), zx.q(x0_1)) & 1) != 0)
                    i_2 -= 1
                    x20_1 = 2
                    int64_t x8_9 = sx.q(*(gDomClient + 0x2056c)) - 1
                    *(gDomClient + 0x2056c) = x8_9.d
                    *x26_1 = *(gDomClient + (x8_9 << 2) + 0x1f8ec)
                
                i_2 += 1
            while (i_2 s< *(gDomClient + 0x2056c))
        else
            void* x0_6 = FindNextUnselectedOfType(zx.q(*(x20 + 0xa0)), zx.q(*(x20 + 0xa4)), 
                zx.q(x0_1), gDomClient + 0x1f8ec, x4.d)
            
            if (x0_6 != 0)
                int64_t x9_2 = sx.q(*(gDomClient + 0x2056c))
                int32_t x10_2 = *(x0_6 + 0x98)
                *(gDomClient + 0x2056c) = x9_2.d + 1
                *(gDomClient + (x9_2 << 2) + 0x1f8ec) = x10_2
                x20_1 = 1
            else if (*(gDomClient + 0x2056c) s< 1)
                x20_1 = 0
            else
                int32_t i_3 = 0
                x20_1 = 0
                
                do
                    void* x26_2 = gDomClient + (sx.q(i_3) << 2) + 0x1f8ec
                    
                    if ((CardIs(gDomClient + 0x20728, zx.q(*x26_2), zx.q(x0_1)) & 1) != 0)
                        i_3 -= 1
                        x20_1 = 2
                        int64_t x8_18 = sx.q(*(gDomClient + 0x2056c)) - 1
                        *(gDomClient + 0x2056c) = x8_18.d
                        *x26_2 = *(gDomClient + (x8_18 << 2) + 0x1f8ec)
                    
                    i_3 += 1
                while (i_3 s< *(gDomClient + 0x2056c))

return zx.q(x20_1)
