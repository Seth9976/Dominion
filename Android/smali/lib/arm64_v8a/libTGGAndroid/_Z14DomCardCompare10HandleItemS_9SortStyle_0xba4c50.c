// 函数: _Z14DomCardCompare10HandleItemS_9SortStyle
// 地址: 0xba4c50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x27 = zx.q(arg1) & 0xffff
int64_t x26 = *(gDomClient + 0x205e0)
uint64_t x28 = zx.q(arg2) & 0xffff
DomGfx* x24 = x26 + mulu.dp.d(x27.d, 0x21d8)
int64_t x8 = x26
DomGfx* x23 = x26 + mulu.dp.d(x28.d, 0x21d8)
DomGfx* x9 = x24
int32_t i
int32_t x21_1

for (i = *(x9 + 0x2c); i == 3; i = *(x9 + 0x2c))
    x21_1 = *(x9 + 0x30)
    
    if (x21_1 == 0x70d)
        goto label_ba4d30
    
    if (x21_1 == 0x718)
        goto label_ba4d30
    
    int32_t x9_1 = *(x9 + 0x70)
    
    if (x9_1 == 0)
        goto label_ba4d30
    
    x9 = x26 + zx.q(x9_1.w) * 0x21d8

if (i == 5)
    x21_1 = *(x9 + 0x204)
label_ba4d30:
    DomGfx* x9_3 = x23
    int32_t x11 = *(x9_3 + 0x2c)
    int32_t x25_1
    
    if (x11 == 3)
        while (true)
            x25_1 = *(x9_3 + 0x30)
            
            if (x25_1 == 0x70d)
                break
            
            if (x25_1 == 0x718)
                break
            
            int32_t x9_4 = *(x9_3 + 0x70)
            
            if (x9_4 == 0)
                break
            
            x9_3 = x8 + zx.q(x9_4.w) * 0x21d8
            x11 = *(x9_3 + 0x2c)
            
            if (x11 != 3)
                goto label_ba4d70
        
        goto label_ba4dbc
    
label_ba4d70:
    
    if (x11 == 5)
        x25_1 = *(x9_3 + 0x204)
    label_ba4dbc:
        
        if (*(x26 + x27 * 0x21d8 + 0xa4) != 2)
            int32_t x8_19
            int32_t x9_12
            int32_t x24_1
            
            if (zx.d(*(x26 + x27 * 0x21d8 + 0x114)) == 0)
                bool var_64
                x24_1 = CalcCardFaceup(x24, &var_64) ^ 1
                
                if (zx.d(*(x26 + x28 * 0x21d8 + 0x114)) != 0)
                    x8_19 = x24_1 ^ 1
                    x9_12 = 1
                else
                label_ba4f48:
                    x8_19 = x24_1 ^ 1
                    x9_12 = CalcCardFaceup(x23, &var_64) ^ 1
                    
                    if ((x8_19 & 1) == 0 && (x9_12 & 1) == 0)
                        return 0xffffffff
            else
                x24_1 = 1
                
                if (zx.d(*(x26 + x28 * 0x21d8 + 0x114)) == 0)
                    goto label_ba4f48
                
                x8_19 = x24_1 ^ 1
                x9_12 = 1
            
            int32_t x9_13 = x9_12 ^ 1
            
            if (((x24_1 | x9_13) & 1) != 0)
                if (((x8_19 | x9_13) & 1) == 0)
                    return 0
                
                goto label_ba4dc0
        else
        label_ba4dc0:
            
            if (x21_1 != x25_1)
                uint64_t x0_5 = zx.q(x21_1)
                uint64_t x1_2 = zx.q(x25_1)
                int32_t x0_6
                
                if (arg3 != 3)
                    x0_6 = SortCardsByCostName(x0_5, x1_2)
                else
                    x0_6 = SortHandCards(x0_5, x1_2)
                
                if ((x0_6 & 1) == 0)
                    return 1
                
                return 0xffffffff
            
            int32_t x8_4 = *(x26 + x27 * 0x21d8 + 0xd4)
            uint64_t x9_6
            
            if (x8_4 != 0)
                x9_6 = zx.q(x8_4.w)
            
            if (x8_4 != 0 && x9_6.d u< *(gDomClient + 0x205e8)
                && *(*(gDomClient + 0x205e0) + x9_6 * 0x21d8 + 0x21d0) == x8_4)
            label_ba4eac:
                
                if (arg1 s>= arg2)
                    return 1
                
                return 0xffffffff
            
            int32_t x8_6 = *(x26 + x28 * 0x21d8 + 0xd4)
            
            if (x8_6 == 0)
                if (x21_1 == 0x1121 || zx.d(*(x26 + x27 * 0x21d8 + 0x105)) != 0
                        || zx.d(*(x26 + x28 * 0x21d8 + 0x105)) != 0
                        || *(x26 + x27 * 0x21d8 + 0x100) s> 1
                        || *(x26 + x28 * 0x21d8 + 0x100) s>= 2)
                    goto label_ba4eac
                
                goto label_ba4f80
            
            uint64_t x9_9 = zx.q(x8_6.w)
            
            if ((x9_9.d u< *(gDomClient + 0x205e8)
                    && *(*(gDomClient + 0x205e0) + x9_9 * 0x21d8 + 0x21d0) == x8_6) || x21_1 == 0x1121
                    || zx.d(*(x26 + x27 * 0x21d8 + 0x105)) != 0
                    || zx.d(*(x26 + x28 * 0x21d8 + 0x105)) != 0
                    || *(x26 + x27 * 0x21d8 + 0x100) s> 1 || *(x26 + x28 * 0x21d8 + 0x100) s>= 2)
                goto label_ba4eac
            
        label_ba4f80:
            uint32_t x9_15 = zx.d(*(x26 + x27 * 0x21d8 + 0x114))
            uint32_t x8_24 = zx.d(*(x26 + x28 * 0x21d8 + 0x114))
            
            if (x9_15 u< x8_24)
                return 0xffffffff
            
            if (x9_15 u<= x8_24)
                uint32_t x9_17 = zx.d(*(x26 + x27 * 0x21d8 + 0x116))
                uint32_t x8_26 = zx.d(*(x26 + x28 * 0x21d8 + 0x116))
                
                if (x9_17 u< x8_26)
                    return 0xffffffff
                
                if (x9_17 u<= x8_26)
                    int32_t x9_19 = *(x26 + x27 * 0x21d8 + 0x10c)
                    int32_t x8_28 = *(x26 + x28 * 0x21d8 + 0x10c)
                    
                    if (x9_19 s< x8_28)
                        return 0xffffffff
                    
                    if (x9_19 s<= x8_28)
                        int32_t x9_21 = *(x26 + x27 * 0x21d8 + 0x110)
                        int32_t x8_30 = *(x26 + x28 * 0x21d8 + 0x110)
                        
                        if (x9_21 s< x8_30)
                            return 0xffffffff
                        
                        if (x9_21 s<= x8_30)
                            uint32_t x9_23 = zx.d(*(x26 + x27 * 0x21d8 + 0x104))
                            uint32_t x8_32 = zx.d(*(x26 + x28 * 0x21d8 + 0x104))
                            
                            if (x9_23 u>= x8_32)
                                return zx.q(x9_23 u> x8_32 ? 1 : 0)
                            
                            return 0xffffffff
        
        return 1
    
    if (x11 == 1)
        x25_1 = *(x9_3 + 0x170)
        goto label_ba4dbc
    
    if (x11 == 0)
        x25_1 = CardWhat(gDomClient + 0x20728, zx.q(*(x9_3 + 0x98)))
        goto label_ba4dbc
else
    if (i == 1)
        x21_1 = *(x9 + 0x170)
        goto label_ba4d30
    
    if (i == 0)
        int32_t x0_1 = CardWhat(gDomClient + 0x20728, zx.q(*(x9 + 0x98)))
        x8 = *(gDomClient + 0x205e0)
        x21_1 = x0_1
        goto label_ba4d30

pthread_kill(pthread_self(), 6)
return ValidBane(XNoReturn()) __tailcall
