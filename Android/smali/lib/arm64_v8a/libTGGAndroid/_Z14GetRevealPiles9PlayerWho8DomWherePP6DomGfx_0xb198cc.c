// 函数: _Z14GetRevealPiles9PlayerWho8DomWherePP6DomGfx
// 地址: 0xb198cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
void* i_1
void* i

if (x9.d != 0)
    i_1 = *(gDomClient + 0x205e0)
    i = i_1
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= i_1 + x9 * 0x21d8)
            goto label_b199b8

int32_t x19

if (x9.d == 0 || i == 0xffffffff)
label_b199b8:
    x19 = 0
else
    x19 = 0
    
    do
        if (*(i + 0x2c) == 3 && *(i + 0x5c) == arg2 && *(i + 0x58) == arg1)
            arg3[sx.q(x19)] = i
            i_1 = *(gDomClient + 0x205e0)
            x9 = zx.q(*(gDomClient + 0x205e8))
            x19 += 1
        
        if (i == 0)
            i = i_1
        else
            i += 0x21d8
        
        void* x16_6 = i_1 + mulu.dp.d(x9.d, 0x21d8)
        
        if (i u>= x16_6)
            break
        
        while (zx.d(*(i + 0x21d2)) == 0)
            i += 0x21d8
            
            if (i u>= x16_6)
                goto label_b199d0
    while (i != 0xffffffff)

label_b199d0:
bool (* var_18)(DomGfx*, DomGfx*) = SortRevealPiles
std::__ndk1::__sort<bool (*&)(DomGfx*, DomGfx*), DomGfx**>(arg3, &arg3[sx.q(x19)], &var_18)
return zx.q(x19)
