// 函数: _Z13DragRevealEndR6DomGfx8DomWhereRK10DomPileLoci
// 地址: 0xb9298c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_1 = arg2

if (arg4 == 1)
    void* x8_2 = *(gDomClient + 0x205e0)
    void* x11_3 = x8_2
    int32_t i
    
    do
        i = *(x11_3 + 0x21d0)
        x11_3 += 0x21d8
    while (i u< 0x10000)
    void* x11_4 = x11_3 - 0x21d8
    
    while (*(x11_4 + 0x2c) != 3 || *(x11_4 + 0x58) != *(arg1 + 0xa0) || *(x11_4 + 0x5c) != i_1
            || *(x11_4 + 0x60) != *(arg1 + 0xc8))
        void* x14_5 = x11_4 + 0x43a8
        int32_t j
        
        do
            j = *x14_5
            x11_4 += 0x21d8
            x14_5 += 0x21d8
        while (j u< 0x10000)
    
    void* x12_1 = x11_4 + 0x70
    
    while (true)
        int32_t x11_5 = *x12_1
        
        if (x11_5 == 0)
            break
        
        uint64_t x11_6 = zx.q(x11_5.w)
        void* x12_2 = x8_2 + x11_6 * 0x21d8
        x12_1 = x12_2 + 0x213c
        
        if (x12_2 != arg1)
            if (x8_2 != 0)
                void* x22_1 = x8_2 + zx.q(x11_6.d) * 0x21d8
                DomGfx* x0_2 = DomFindOrCreatePile(zx.q(*(x22_1 + 0xa0)), zx.q(*(arg1 + 0x2188)), 
                    *(x22_1 + 0xc8), 0)
                DomMoveCard(zx.q(*(x22_1 + 0xa0)), zx.q(*(x22_1 + 0x98)), x0_2, &data_7ef484, 0, 
                    false, 0xb, true)
            
            break
    
    goto label_b92b20

uint64_t x0
uint64_t x1
DomGfx* i_4
DomPileLoc const& x3

if (arg4 != 0)
label_b92b20:
    x0 = zx.q(*(arg1 + 0xa0))
    uint64_t x10_3 = zx.q(*(gDomClient + 0x205e8))
    DomGfx* i_6
    int64_t x10_4
    DomGfx* i_2
    
    if (x10_3.d != 0)
        i_6 = *(gDomClient + 0x205e0)
        x10_4 = i_6 + x10_3 * 0x21d8
        i_2 = i_6
        
        while (zx.d(*(i_2 + 0x21d2)) == 0)
            i_2 += 0x21d8
            
            if (i_2 u>= x10_4)
                goto label_b92be4
    
    if (x10_3.d == 0 || i_2 == 0xffffffff)
    label_b92be4:
        i_4 = nullptr
    else
        do
            if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == x0.d && *(i_2 + 0x5c) == i_1
                    && *(i_2 + 0x60) == *(arg1 + 0xc8))
                i_4 = i_2
                break
            
            if (i_2 == 0)
                i_2 = i_6
            else
                i_2 += 0x21d8
            
            if (i_2 u>= x10_4)
                goto label_b92be4
            
            while (zx.d(*(i_2 + 0x21d2)) == 0)
                i_2 += 0x21d8
                
                if (i_2 u>= x10_4)
                    goto label_b92be4
            
            i_4 = nullptr
        while (i_2 != 0xffffffff)
    
    x1 = zx.q(*(arg1 + 0x98))
    x3 = arg3
else
    x0 = zx.q(*(arg1 + 0xa0))
    x1 = zx.q(*(arg1 + 0x98))
    uint64_t x11_1 = zx.q(*(gDomClient + 0x205e8))
    void* i_5
    int64_t x11_2
    void* i_3
    
    if (x11_1.d != 0)
        i_5 = *(gDomClient + 0x205e0)
        x11_2 = i_5 + x11_1 * 0x21d8
        i_3 = i_5
        
        while (zx.d(*(i_3 + 0x21d2)) == 0)
            i_3 += 0x21d8
            
            if (i_3 u>= x11_2)
                goto label_b92c80
    
    if (x11_1.d == 0 || i_3 == 0xffffffff)
    label_b92c80:
        i_4 = nullptr
    else
        do
            if (*(i_3 + 0x2c) == 3 && *(i_3 + 0x58) == x0.d && *(i_3 + 0x5c) == *(arg1 + 0x2188)
                    && *(i_3 + 0x60) == *(arg1 + 0x2190))
                i_4 = i_3
                break
            
            if (i_3 == 0)
                i_3 = i_5
            else
                i_3 += 0x21d8
            
            if (i_3 u>= x11_2)
                goto label_b92c80
            
            while (zx.d(*(i_3 + 0x21d2)) == 0)
                i_3 += 0x21d8
                
                if (i_3 u>= x11_2)
                    goto label_b92c80
            
            i_4 = nullptr
        while (i_3 != 0xffffffff)
    
    x3 = arg1 + 0x2198

return DomMoveCard(x0, x1, i_4, x3, 0, false, 0xb, true) __tailcall
