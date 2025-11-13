// 函数: _Z19AssignCardsFromPileP6CardIDRi9PlayerWho8DomWhere9ContextId
// 地址: 0xb25ae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = 0
uint64_t x10 = zx.q(*(gDomClient + 0x205e8))

if (x10.d == 0)
    return 

void* i_1 = *(gDomClient + 0x205e0)
int64_t x11_1 = i_1 + x10 * 0x21d8
void* i = i_1

do
    if (zx.d(*(i + 0x21d2)) != 0)
        while (i != 0xffffffff)
            if (*(i + 0x2c) == 3 && *(i + 0x58) == arg3 && *(i + 0x5c) == arg4
                    && *(i + 0x60) == arg5)
                if (i != 0)
                    int32_t x10_1 = *(i + 0x7c)
                    
                    if (x10_1 != 0)
                        void* x9_1 = i_1 + zx.q(x10_1.w) * 0x21d8
                        int32_t x11_3 = *(x9_1 + 0x98)
                        *arg2 = 1
                        *arg1 = x11_3
                        void* x11_5
                        
                        for (int32_t j = *(x9_1 + 0x13c); j != 0; j = *(x11_5 + 0x13c))
                            int64_t x13_1 = sx.q(*arg2)
                            x11_5 = *(gDomClient + 0x205e0) + mulu.dp.d(j & 0xffff, 0x21d8)
                            int32_t x12_2 = *(x11_5 + 0x98)
                            *arg2 = x13_1.d + 1
                            *(arg1 + (x13_1 << 2)) = x12_2
                        
                        int32_t x10_2 = *arg2
                        
                        if (x10_2 s>= 2)
                            int64_t j_1 = 0
                            int32_t x9_2 = -1
                            int32_t x11_7
                            
                            do
                                int64_t x11_6 = j_1 << 2
                                int64_t x10_4 = zx.q(x10_2 + x9_2) << 0x20 s>> 0x1e
                                int32_t x13_2 = *(arg1 + x10_4)
                                j_1 += 1
                                x9_2 -= 1
                                *(arg1 + x10_4) = *(arg1 + x11_6)
                                *(arg1 + x11_6) = x13_2
                                x10_2 = *arg2
                                
                                if (x10_2 s< 0)
                                    x11_7 = x10_2 + 1
                                else
                                    x11_7 = x10_2
                            while (j_1 s< sx.q(x11_7 s>> 1))
                
                break
            
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
        
        break
    
    i += 0x21d8
while (i u< x11_1)
