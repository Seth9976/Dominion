// 函数: _Z16CardnamesDisposev
// 地址: 0xb16008
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gDomClient + 0x205e8))

if (x8.d == 0)
    return 

void* i_1 = *(gDomClient + 0x205e0)
void* i = i_1

do
    if (zx.d(*(i + 0x21d2)) != 0)
        while (i != 0xffffffff)
            if (*(i + 0x2c) == 1)
                UI2Free(i + 0x2148)
                UI2Free(i + 0x214c)
                UI2Free(i + 0x2150)
                UI2Free(i + 0x2154)
                uint64_t x0 = zx.q(*(i + 0x1f90))
                
                if (x0.d != 0)
                    SpineDestroy(x0.d)
                
                int32_t x9_1 = *(gDomClient + 0x205f0)
                *(gDomClient + 0x205f0) = zx.d(*(i + 0x21d0))
                *(i + 0x21d0) = x9_1
                i_1 = *(gDomClient + 0x205e0)
                x8 = zx.q(*(gDomClient + 0x205e8))
                *(gDomClient + 0x205f4) -= 1
            
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
                    return 
        
        break
    
    i += 0x21d8
while (i u< i_1 + x8 * 0x21d8)
