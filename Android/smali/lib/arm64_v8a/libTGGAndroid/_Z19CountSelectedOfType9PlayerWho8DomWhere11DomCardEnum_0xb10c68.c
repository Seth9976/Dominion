// 函数: _Z19CountSelectedOfType9PlayerWho8DomWhere11DomCardEnum
// 地址: 0xb10c68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(gDomClient + 0x205e0)
void* x9 = x8
int32_t i

do
    i = *(x9 + 0x21d0)
    x9 += 0x21d8
while (i u< 0x10000)
void* x9_1 = x9 - 0x21d8

while (true)
    if (*(x9_1 + 0x2c) == 3 && *(x9_1 + 0x58) == arg1 && *(x9_1 + 0x5c) == arg2
            && *(x9_1 + 0x60) == 0)
        int32_t x23 = *(x9_1 + 0x70)
        int32_t x20
        
        if (x23 == 0)
            x20 = 0
        else
            x20 = 0
            
            while (true)
                void* fp_2 = x8 + mulu.dp.d(x23 & 0xffff, 0x21d8) + 0x98
                x23 = *(fp_2 + 0x20a4)
                
                if ((CardIs(gDomClient + 0x20728, zx.q(*fp_2), zx.q(arg3)) & 1) != 0)
                    uint64_t x8_1 = zx.q(*(gDomClient + 0x2056c))
                    
                    if (x8_1.d s>= 1)
                        int32_t i_1 = *fp_2
                        int32_t x8_2
                        
                        if (*(gDomClient + 0x1f8ec) != i_1)
                            int64_t x12_6 = 0
                            int64_t x11_1
                            
                            do
                                x11_1 = x12_6
                                
                                if (x8_1 - 1 == x12_6)
                                    break
                                
                                x12_6 = x11_1 + 1
                            while (*(gDomClient + (x11_1 << 2) + 0x1f8f0) != i_1)
                            
                            x8_2 = x11_1 + 1 u< x8_1 ? 1 : 0
                        else
                            x8_2 = 1
                        
                        x20 += x8_2
                
                if (x23 == 0)
                    break
                
                x8 = *(gDomClient + 0x205e0)
        
        return zx.q(x20)
    
    void* x12_5 = x9_1 + 0x43a8
    int32_t i_2
    
    do
        i_2 = *x12_5
        x9_1 += 0x21d8
        x12_5 += 0x21d8
    while (i_2 u< 0x10000)
