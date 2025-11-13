// 函数: _Z13SetDisplayWho9PlayerWho
// 地址: 0xb03d40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *(gDomClient + 0x38)
*(gDomClient + 0x38) = arg1.d

if (x20 == arg1.d)
    return 

uint64_t x9_1 = zx.q(*(gDomClient + 0x205e8))

if (x9_1.d == 0)
    return 

int64_t x8_2 = *(gDomClient + 0x205e0)
int32_t x19_1 = arg1.d
int64_t x10_1 = x8_2 + x9_1 * 0x21d8
arg1 = x8_2

do
    if (zx.d(*(arg1 + 0x21d2)) != 0)
        while (arg1 != 0xffffffff)
            if (*(arg1 + 0x2c) == 3 && *(arg1 + 0x58) == x19_1 && *(arg1 + 0x5c) == 0x3ea
                    && *(arg1 + 0x60) == 0)
                if (arg1 != 0)
                    *(arg1 + 0x84) = 0
                    PileAdjustCards(arg1, nullptr, true)
                    x9_1 = zx.q(*(gDomClient + 0x205e8))
                    x8_2 = *(gDomClient + 0x205e0)
                
                break
            
            if (arg1 == 0)
                arg1 = x8_2
            else
                arg1 = arg1 + 0x21d8
            
            if (arg1 u>= x10_1)
                break
            
            while (zx.d(*(arg1 + 0x21d2)) == 0)
                arg1 = arg1 + 0x21d8
                
                if (arg1 u>= x10_1)
                    goto label_b03e1c
        
        break
    
    arg1 = arg1 + 0x21d8
while (arg1 u< x10_1)

label_b03e1c:

if (x9_1.d == 0)
    return 

int64_t x10_2 = x8_2 + mulu.dp.d(x9_1.d, 0x21d8)
arg1 = x8_2

do
    if (zx.d(*(arg1 + 0x21d2)) != 0)
        while (arg1 != 0xffffffff)
            if (*(arg1 + 0x2c) == 3 && *(arg1 + 0x58) == x19_1 && *(arg1 + 0x5c) == 0x3eb
                    && *(arg1 + 0x60) == 0)
                if (arg1 != 0)
                    *(arg1 + 0x84) = 0
                    PileAdjustCards(arg1, nullptr, true)
                    x9_1 = zx.q(*(gDomClient + 0x205e8))
                    x8_2 = *(gDomClient + 0x205e0)
                
                break
            
            if (arg1 == 0)
                arg1 = x8_2
            else
                arg1 = arg1 + 0x21d8
            
            if (arg1 u>= x10_2)
                break
            
            while (zx.d(*(arg1 + 0x21d2)) == 0)
                arg1 = arg1 + 0x21d8
                
                if (arg1 u>= x10_2)
                    goto label_b03ec0
        
        break
    
    arg1 = arg1 + 0x21d8
while (arg1 u< x10_2)

label_b03ec0:

if (x9_1.d == 0)
    return 

int64_t x10_3 = x8_2 + mulu.dp.d(x9_1.d, 0x21d8)
arg1 = x8_2

do
    if (zx.d(*(arg1 + 0x21d2)) != 0)
        while (arg1 != 0xffffffff)
            if (*(arg1 + 0x2c) == 3 && *(arg1 + 0x58) == x19_1 && *(arg1 + 0x5c) == 0x3ec
                    && *(arg1 + 0x60) == 0)
                if (arg1 != 0)
                    *(arg1 + 0x84) = 0
                    PileAdjustCards(arg1, nullptr, true)
                    x9_1 = zx.q(*(gDomClient + 0x205e8))
                    x8_2 = *(gDomClient + 0x205e0)
                
                break
            
            if (arg1 == 0)
                arg1 = x8_2
            else
                arg1 = arg1 + 0x21d8
            
            if (arg1 u>= x10_3)
                break
            
            while (zx.d(*(arg1 + 0x21d2)) == 0)
                arg1 = arg1 + 0x21d8
                
                if (arg1 u>= x10_3)
                    goto label_b03f64
        
        break
    
    arg1 = arg1 + 0x21d8
while (arg1 u< x10_3)

label_b03f64:

if (x9_1.d == 0)
    return 

int64_t x10_4 = x8_2 + mulu.dp.d(x9_1.d, 0x21d8)
arg1 = x8_2

do
    if (zx.d(*(arg1 + 0x21d2)) != 0)
        while (arg1 != 0xffffffff)
            if (*(arg1 + 0x2c) == 3 && *(arg1 + 0x58) == x20 && *(arg1 + 0x5c) == 0x3ea
                    && *(arg1 + 0x60) == 0)
                if (arg1 != 0)
                    *(arg1 + 0x84) = 0
                    PileAdjustCards(arg1, nullptr, true)
                    x9_1 = zx.q(*(gDomClient + 0x205e8))
                    x8_2 = *(gDomClient + 0x205e0)
                
                break
            
            if (arg1 == 0)
                arg1 = x8_2
            else
                arg1 = arg1 + 0x21d8
            
            if (arg1 u>= x10_4)
                break
            
            while (zx.d(*(arg1 + 0x21d2)) == 0)
                arg1 = arg1 + 0x21d8
                
                if (arg1 u>= x10_4)
                    goto label_b04008
        
        break
    
    arg1 = arg1 + 0x21d8
while (arg1 u< x10_4)

label_b04008:

if (x9_1.d == 0)
    return 

int64_t x10_5 = x8_2 + mulu.dp.d(x9_1.d, 0x21d8)
arg1 = x8_2

do
    if (zx.d(*(arg1 + 0x21d2)) != 0)
        while (arg1 != 0xffffffff)
            if (*(arg1 + 0x2c) == 3 && *(arg1 + 0x58) == x20 && *(arg1 + 0x5c) == 0x3eb
                    && *(arg1 + 0x60) == 0)
                if (arg1 != 0)
                    *(arg1 + 0x84) = 0
                    PileAdjustCards(arg1, nullptr, true)
                    x9_1 = zx.q(*(gDomClient + 0x205e8))
                    x8_2 = *(gDomClient + 0x205e0)
                
                break
            
            if (arg1 == 0)
                arg1 = x8_2
            else
                arg1 = arg1 + 0x21d8
            
            if (arg1 u>= x10_5)
                break
            
            while (zx.d(*(arg1 + 0x21d2)) == 0)
                arg1 = arg1 + 0x21d8
                
                if (arg1 u>= x10_5)
                    goto label_b040ac
        
        break
    
    arg1 = arg1 + 0x21d8
while (arg1 u< x10_5)

label_b040ac:

if (x9_1.d == 0)
    return 

int64_t x9_2 = x8_2 + mulu.dp.d(x9_1.d, 0x21d8)
arg1 = x8_2

do
    if (zx.d(*(arg1 + 0x21d2)) != 0)
        while (arg1 != 0xffffffff)
            if (*(arg1 + 0x2c) == 3 && *(arg1 + 0x58) == x20 && *(arg1 + 0x5c) == 0x3ec
                    && *(arg1 + 0x60) == 0)
                if (arg1 == 0)
                    break
                
                *(arg1 + 0x84) = 0
                return PileAdjustCards(arg1, nullptr, true) __tailcall
            
            if (arg1 == 0)
                arg1 = x8_2
            else
                arg1 = arg1 + 0x21d8
            
            if (arg1 u>= x9_2)
                break
            
            while (zx.d(*(arg1 + 0x21d2)) == 0)
                arg1 = arg1 + 0x21d8
                
                if (arg1 u>= x9_2)
                    return 
        
        break
    
    arg1 = arg1 + 0x21d8
while (arg1 u< x9_2)
