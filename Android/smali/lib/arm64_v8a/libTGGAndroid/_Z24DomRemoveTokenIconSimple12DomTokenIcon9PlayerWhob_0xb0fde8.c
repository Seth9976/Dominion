// 函数: _Z24DomRemoveTokenIconSimple12DomTokenIcon9PlayerWhob
// 地址: 0xb0fde8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(*(gDomClient + 0x205e8))

if (x11.d == 0)
    return 

void* i_1 = *(gDomClient + 0x205e0)
void* i = i_1

do
    if (zx.d(*(i + 0x21d2)) != 0)
        if (i != 0xffffffff)
            int64_t x11_1 = i_1 + x11 * 0x21d8
            
            do
                if (*(i + 0x2c) == 6 && *(i + 0x1e0) == arg1.d && *(i + 0x1e4) == arg2)
                    PlayerAreaRemove(i)
                    UI2Free(i + 0x2148)
                    UI2Free(i + 0x214c)
                    UI2Free(i + 0x2150)
                    UI2Free(i + 0x2154)
                    uint64_t x0_5 = zx.q(*(i + 0x1f90))
                    
                    if (x0_5.d != 0)
                        SpineDestroy(x0_5.d)
                    
                    int32_t x10_2 = *(gDomClient + 0x205f0)
                    *(gDomClient + 0x205f0) = zx.d(*(i + 0x21d0))
                    *(i + 0x21d0) = x10_2
                    *(gDomClient + 0x205f4) -= 1
                    return 
                
                if (i == 0)
                    i = i_1
                else
                    i += 0x21d8
                
                if (i u>= x11_1)
                    break
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x11_1)
                        return 
            while (i != 0xffffffff)
        
        break
    
    i += 0x21d8
while (i u< i_1 + x11 * 0x21d8)
