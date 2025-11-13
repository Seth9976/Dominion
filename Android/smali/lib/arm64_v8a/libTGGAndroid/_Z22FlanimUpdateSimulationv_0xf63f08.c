// 函数: _Z22FlanimUpdateSimulationv
// 地址: 0xf63f08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x21 = nullptr
uint64_t x8 = *gpGameData
int64_t* x20 = *(x8 + 0x18)

while (true)
    uint64_t x9_1 = zx.q(x20[1].d)
    uint32_t x10_3
    
    do
        int64_t x11_1
        
        if (x21 == 0)
            void* x10_2 = *x20
            x21 = x10_2
            x11_1 = x10_2 + x9_1 * 0xa8
            
            if (x21 u>= x11_1)
                return 
        else
            x21 += 0xa8
            x11_1 = *x20 + x9_1 * 0xa8
            
            if (x21 u>= x11_1)
                return 
        
        while (true)
            x10_3 = *(x21 + 0xa0)
            
            if (x10_3 u>> 0x10 != 0)
                break
            
            x21 += 0xa8
            
            if (x21 u>= x11_1)
                return 
    while (zx.d(*(x21 + 0x88)) == 0)
    
    void* x0 = *(x21 + 0x70)
    
    if (x0 != 0)
        XPooledFree(x0, *(x21 + 0x78) * 0x70)
        *(x21 + 0x70) = 0
        x8 = *gpGameData
        x10_3 = zx.d(*(x21 + 0xa0))
    
    void* x9_2 = *(x8 + 0x18)
    int32_t x11_3 = *(x9_2 + 0x10)
    *(x9_2 + 0x10) = x10_3 & 0xffff
    *(x21 + 0xa0) = x11_3
    *(x9_2 + 0x14) -= 1
