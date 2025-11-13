// 函数: _Z10DomGfxDrawR9DomClientR7DomGame
// 地址: 0xb1749c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(DomClient, 0x205e0) x21 = arg1 + 0x205e0
uint64_t x8 = zx.q(*(x21 + 8))

if (x8.d == 0)
    return 

void* x9_1 = *x21
void* i = x9_1

do
    if (zx.d(*(i + 0x21d2)) != 0)
        if (i != 0xffffffff)
            void* j
            
            do
                if (*(i + 0x2148) != 0)
                    uint64_t x0 = zx.q(*(i + 0x2154))
                    
                    if (x0.d != 0)
                        UI2Draw(x0)
                    
                    uint64_t x0_1 = zx.q(*(i + 0x2150))
                    
                    if (x0_1.d != 0)
                        UI2Draw(x0_1)
                    
                    uint64_t x0_2 = zx.q(*(i + 0x214c))
                    
                    if (x0_2.d != 0)
                        UI2Draw(x0_2)
                    
                    UI2Draw(zx.q(*(i + 0x2148)))
                    arg1 = ParticleTryToGet(zx.q(*(i + 0x2184)))
                    
                    if (arg1 != 0)
                        int32_t x0_5 = Draw3DLayer(0x2de60000)
                        ParticleDraw(arg1)
                        Draw3DLayer(zx.q(x0_5))
                    
                    goto label_b17570
                
                j = x9_1
                
                if (i != 0)
                label_b17570:
                    x9_1 = *x21
                    x8 = zx.q(*(x21 + 8))
                    j = i + 0x21d8
                
                void* x11_2 = x9_1 + mulu.dp.d(x8.d, 0x21d8)
                
                if (j u>= x11_2)
                    break
                
                while (zx.d(*(j + 0x21d2)) == 0)
                    j += 0x21d8
                    
                    if (j u>= x11_2)
                        return 
                
                i = j
            while (j != 0xffffffff)
        
        break
    
    i += 0x21d8
while (i u< x9_1 + x8 * 0x21d8)
