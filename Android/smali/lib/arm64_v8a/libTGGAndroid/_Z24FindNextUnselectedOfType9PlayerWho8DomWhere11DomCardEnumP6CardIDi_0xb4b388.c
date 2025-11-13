// 函数: _Z24FindNextUnselectedOfType9PlayerWho8DomWhere11DomCardEnumP6CardIDi
// 地址: 0xb4b388
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = *(gDomClient + 0x205e0)
int32_t x19 = arg3
void* x8 = x23
int32_t i

do
    i = *(x8 + 0x21d0)
    x8 += 0x21d8
while (i u< 0x10000)
void* x8_1 = x8 - 0x21d8

while (true)
    if (*(x8_1 + 0x2c) == 3 && *(x8_1 + 0x58) == arg1 && *(x8_1 + 0x5c) == arg2
            && *(x8_1 + 0x60) == 0)
        int32_t i_1 = *(x8_1 + 0x70)
        
        if (arg5 s<= 0)
            while (i_1 != 0)
                int32_t x26_1 = i_1 & 0xffff
                void* x8_3 = x23 + mulu.dp.d(x26_1, 0x21d8)
                i_1 = *(x8_3 + 0x213c)
                
                if ((CardIs(gDomClient + 0x20728, zx.q(*(x8_3 + 0x98)), zx.q(x19)) & 1) != 0)
                    return x23 + mulu.dp.d(x26_1, 0x21d8)
                
                x23 = *(gDomClient + 0x205e0)
        else if (i_1 != 0)
            uint64_t x25_1 = zx.q(arg5)
            
            while (true)
                int32_t x28_1 = i_1 & 0xffff
                void* x9_1 = x23 + mulu.dp.d(x28_1, 0x21d8)
                uint64_t x1 = zx.q(*(x9_1 + 0x98))
                i_1 = *(x9_1 + 0x213c)
                
                if (*arg4 != x1.d)
                    int64_t x10_1 = 1
                    int64_t x9_2
                    
                    do
                        x9_2 = x10_1
                        
                        if (x25_1 == x10_1)
                            break
                        
                        x10_1 = x9_2 + 1
                    while (*(arg4 + (x9_2 << 2)) != x1.d)
                    
                    if (x9_2 u>= x25_1)
                        if ((CardIs(gDomClient + 0x20728, x1, zx.q(x19)) & 1) != 0)
                            return x23 + mulu.dp.d(x28_1, 0x21d8)
                        
                        x23 = *(gDomClient + 0x205e0)
                        
                        if (i_1 == 0)
                            return nullptr
                        
                        continue
                
                if (i_1 == 0)
                    break
        
        return nullptr
    
    void* x11_5 = x8_1 + 0x43a8
    int32_t i_2
    
    do
        i_2 = *x11_5
        x8_1 += 0x21d8
        x11_5 += 0x21d8
    while (i_2 u< 0x10000)
