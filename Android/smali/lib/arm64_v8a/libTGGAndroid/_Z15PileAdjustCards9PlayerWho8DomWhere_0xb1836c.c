// 函数: _Z15PileAdjustCards9PlayerWho8DomWhere
// 地址: 0xb1836c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gDomClient + 0x205e8))

if (x8.d == 0)
    return 

void* i_1 = *(gDomClient + 0x205e0)
int64_t x10_1 = i_1 + x8 * 0x21d8
void* i = i_1

do
    if (zx.d(*(i + 0x21d2)) != 0)
        while (i != 0xffffffff)
            if (*(i + 0x2c) == 3 && *(i + 0x58) == arg1.d && *(i + 0x5c) == arg2
                    && *(i + 0x60) == 0)
                if (i == 0)
                    break
                
                *(i + 0x84) = 0
                return PileAdjustCards(i, nullptr, true) __tailcall
            
            if (i == 0)
                i = i_1
            else
                i += 0x21d8
            
            if (i u>= x10_1)
                break
            
            while (zx.d(*(i + 0x21d2)) == 0)
                i += 0x21d8
                
                if (i u>= x10_1)
                    return 
        
        break
    
    i += 0x21d8
while (i u< x10_1)
