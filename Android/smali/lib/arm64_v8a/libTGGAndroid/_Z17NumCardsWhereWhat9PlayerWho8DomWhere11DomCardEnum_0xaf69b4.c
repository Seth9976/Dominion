// 函数: _Z17NumCardsWhereWhat9PlayerWho8DomWhere11DomCardEnum
// 地址: 0xaf69b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gDomClient + 0x205e8))
void* i_1
void* i

if (x8.d != 0)
    i_1 = *(gDomClient + 0x205e0)
    i = i_1
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= i_1 + x8 * 0x21d8)
            goto label_af6acc

int32_t x22

if (x8.d == 0 || i == 0xffffffff)
label_af6acc:
    x22 = 0
else
    x22 = 0
    
    do
        if (*(i + 0x2c) == 0 && *(i + 0xa0) == arg1 && *(i + 0xa4) == arg2)
            int32_t x0_1 = CardWhat(gDomClient + 0x20728, zx.q(*(i + 0x98)))
            i_1 = *(gDomClient + 0x205e0)
            x8 = zx.q(*(gDomClient + 0x205e8))
            
            if (x0_1 == arg3)
                x22 += 1
        
        if (i == 0)
            i = i_1
        else
            i += 0x21d8
        
        void* x10_5 = i_1 + mulu.dp.d(x8.d, 0x21d8)
        
        if (i u>= x10_5)
            break
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x10_5)
                return zx.q(x22)
    while (i != 0xffffffff)

return zx.q(x22)
