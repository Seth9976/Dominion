// 函数: _Z14DomDragCardEndR6DomGfx
// 地址: 0xb92cbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2SetDragging(false)
uint64_t result
int128_t var_108
int128_t var_f8
int128_t var_e8
int128_t var_d8
int128_t var_c8
int128_t var_b8
int128_t var_a8
int128_t var_98
int128_t var_88
int128_t var_78
int128_t var_68

if ((IsRearranging() & 1) == 0)
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    result, v0_1, v1_1, v2_1, v3_1 = CurrentTransformWithMouseover(arg1)
    *(arg1 + 0x308) = 0
    v2_1 = var_e8
    *(arg1 + 0x32c) = var_c8
    *(arg1 + 0x31c) = var_d8
    *(arg1 + 0x30c) = v2_1
    *(arg1 + 0x35c) = var_98
    *(arg1 + 0x36c) = var_88
    *(arg1 + 0x33c) = var_b8
    *(arg1 + 0x34c) = var_a8
    *(arg1 + 0x3ac) = var_f8:0xc.d
    *(arg1 + 0x38c) = var_68
    *(arg1 + 0x39c) = var_108
    *(arg1 + 0x37c) = var_78
    *(arg1 + 0x3b0) = 0
    v2_1 = var_e8
    *(arg1 + 0x3c4) = var_d8
    *(arg1 + 0x3d4) = var_c8
    *(arg1 + 0x3b4) = v2_1
    *(arg1 + 0x404) = var_98
    *(arg1 + 0x414) = var_88
    *(arg1 + 0x3e4) = var_b8
    *(arg1 + 0x3f4) = var_a8
    *(arg1 + 0x454) = var_f8:0xc.d
    *(arg1 + 0x424) = var_78
    *(arg1 + 0x434) = var_68
    *(arg1 + 0x444) = var_108
    *(arg1 + 0x1f78) = 0
    *(gDomClient + 0x1f8c0) = 0
    int32_t x9_6 = *(arg1 + 0x2c)
    int32_t x8_6 = *(arg1 + 0x21a0)
    *(arg1 + 0x2130) = 0
    
    if (x9_6 == 1)
        if (x8_6 == 5)
            DomGfxActivate(arg1, V20, false, false, false)
        
        UI2Free(arg1 + 0x2148)
        UI2Free(arg1 + 0x214c)
        UI2Free(arg1 + 0x2150)
        UI2Free(arg1 + 0x2154)
        result = zx.q(*(arg1 + 0x1f90))
        
        if (result.d != 0)
            result = SpineDestroy(result.d)
        
        int32_t x10_1 = *(gDomClient + 0x205f0)
        *(gDomClient + 0x205f0) = zx.d(*(arg1 + 0x21d0))
        *(arg1 + 0x21d0) = x10_1
        *(gDomClient + 0x205f4) -= 1
    else if (x8_6 == 5)
        int32_t x23_1 = *(gDomClient + 0x2074c)
        int32_t x21_2 = *(gDomClient + 0x207ac)
        int32_t x20_2 = *(gDomClient + 0x20758)
        result = DomGfxActivate(arg1, V20, false, false, false)
        uint64_t x0_15
        uint64_t x1_8
        DomGfx* x12_3
        
        if (x23_1 == 1 && x21_2 s>= 2 && x20_2 != 2)
            x0_15 = zx.q(*(arg1 + 0xa0))
            uint64_t x11_5 = zx.q(*(gDomClient + 0x205e8))
            x1_8 = zx.q(*(arg1 + 0x98))
            
            if (x11_5.d == 0)
                goto label_b93684
            
            DomGfx* x8_11 = *(gDomClient + 0x205e0)
            int64_t x11_6 = x8_11 + x11_5 * 0x21d8
            x12_3 = x8_11
            
            while (zx.d(*(x12_3 + 0x21d2)) == 0)
                x12_3 += 0x21d8
                
                if (x12_3 u>= x11_6)
                    goto label_b93684
            
            if (x12_3 == 0xffffffff)
                goto label_b93684
            
            while (*(x12_3 + 0x2c) != 3 || *(x12_3 + 0x58) != x0_15.d
                    || *(x12_3 + 0x5c) != *(arg1 + 0x2188) || *(x12_3 + 0x60) != *(arg1 + 0x2190))
                if (x12_3 == 0)
                    x12_3 = x8_11
                else
                    x12_3 += 0x21d8
                
                if (x12_3 u>= x11_6)
                    goto label_b93684
                
                while (zx.d(*(x12_3 + 0x21d2)) == 0)
                    x12_3 += 0x21d8
                    
                    if (x12_3 u>= x11_6)
                        goto label_b93684
                
                if (x12_3 == 0xffffffff)
                    return DomMoveCard(x0_15, x1_8, nullptr, arg1 + 0x2198, 0, false, 0xb, false)
            
            return DomMoveCard(x0_15, x1_8, x12_3, arg1 + 0x2198, 0, false, 0xb, false)
        
        if (result.d == 2)
            x0_15 = zx.q(*(arg1 + 0xa0))
            uint64_t x11_9 = zx.q(*(gDomClient + 0x205e8))
            x1_8 = zx.q(*(arg1 + 0x98))
            
            if (x11_9.d == 0)
            label_b93684:
                return DomMoveCard(x0_15, x1_8, nullptr, arg1 + 0x2198, 0, false, 0xb, false)
            
            DomGfx* x8_14 = *(gDomClient + 0x205e0)
            int64_t x11_10 = x8_14 + x11_9 * 0x21d8
            x12_3 = x8_14
            
            while (zx.d(*(x12_3 + 0x21d2)) == 0)
                x12_3 += 0x21d8
                
                if (x12_3 u>= x11_10)
                    goto label_b93684
            
            if (x12_3 == 0xffffffff)
                goto label_b93684
            
            while (*(x12_3 + 0x2c) != 3 || *(x12_3 + 0x58) != x0_15.d
                    || *(x12_3 + 0x5c) != *(arg1 + 0x2188) || *(x12_3 + 0x60) != *(arg1 + 0x2190))
                if (x12_3 == 0)
                    x12_3 = x8_14
                else
                    x12_3 += 0x21d8
                
                if (x12_3 u>= x11_10)
                    goto label_b93684
                
                while (zx.d(*(x12_3 + 0x21d2)) == 0)
                    x12_3 += 0x21d8
                    
                    if (x12_3 u>= x11_10)
                        goto label_b93684
                
                if (x12_3 == 0xffffffff)
                    return DomMoveCard(x0_15, x1_8, nullptr, arg1 + 0x2198, 0, false, 0xb, false)
            
            return DomMoveCard(x0_15, x1_8, x12_3, arg1 + 0x2198, 0, false, 0xb, false)
    else if (x8_6 == 4)
        uint64_t x0_16 = zx.q(*(arg1 + 0xa0))
        uint64_t x11_7 = zx.q(*(gDomClient + 0x205e8))
        DomGfx* i_9
        int64_t x11_8
        DomGfx* i
        
        if (x11_7.d != 0)
            i_9 = *(gDomClient + 0x205e0)
            x11_8 = i_9 + x11_7 * 0x21d8
            i = i_9
            
            while (zx.d(*(i + 0x21d2)) == 0)
                i += 0x21d8
                
                if (i u>= x11_8)
                    goto label_b93540
        
        DomGfx* i_6
        
        if (x11_7.d == 0 || i == 0xffffffff)
        label_b93540:
            i_6 = nullptr
        else
            do
                if (*(i + 0x2c) == 3 && *(i + 0x58) == x0_16.d && *(i + 0x5c) == *(arg1 + 0x2188)
                        && *(i + 0x60) == *(arg1 + 0x2190))
                    i_6 = i
                    break
                
                if (i == 0)
                    i = i_9
                else
                    i += 0x21d8
                
                if (i u>= x11_8)
                    goto label_b93540
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x11_8)
                        goto label_b93540
                
                i_6 = nullptr
            while (i != 0xffffffff)
        
        result = DomMoveCard(x0_16, zx.q(*(arg1 + 0x98)), i_6, arg1 + 0x2198, 0, false, 0xb, false)
        
        if (*(arg1 + 0x2188) == 0x3ea)
            *(gDomClient + 0x1f8e0) = 0
    else if (x8_6 == 0)
        uint64_t x0_8 = zx.q(*(arg1 + 0xa0))
        uint64_t x11_3 = zx.q(*(gDomClient + 0x205e8))
        DomGfx* i_8
        int64_t x11_4
        DomGfx* i_1
        
        if (x11_3.d != 0)
            i_8 = *(gDomClient + 0x205e0)
            x11_4 = i_8 + x11_3 * 0x21d8
            i_1 = i_8
            
            while (zx.d(*(i_1 + 0x21d2)) == 0)
                i_1 += 0x21d8
                
                if (i_1 u>= x11_4)
                    goto label_b9348c
        
        DomGfx* i_5
        
        if (x11_3.d == 0 || i_1 == 0xffffffff)
        label_b9348c:
            i_5 = nullptr
        else
            do
                if (*(i_1 + 0x2c) == 3 && *(i_1 + 0x58) == x0_8.d
                        && *(i_1 + 0x5c) == *(arg1 + 0x2188) && *(i_1 + 0x60) == *(arg1 + 0x2190))
                    i_5 = i_1
                    break
                
                if (i_1 == 0)
                    i_1 = i_8
                else
                    i_1 += 0x21d8
                
                if (i_1 u>= x11_4)
                    goto label_b9348c
                
                while (zx.d(*(i_1 + 0x21d2)) == 0)
                    i_1 += 0x21d8
                    
                    if (i_1 u>= x11_4)
                        goto label_b9348c
                
                i_5 = nullptr
            while (i_1 != 0xffffffff)
        
        result = DomMoveCard(x0_8, zx.q(*(arg1 + 0x98)), i_5, arg1 + 0x2198, 0, false, 0xb, true)
        
        if (*(arg1 + 0x2188) == 0x3ea)
            *(gDomClient + 0x1f8e0) = 0
else
    int128_t v0
    int128_t v1
    int128_t v2
    int128_t v3
    v0, v1, v2, v3 = CurrentTransformWithMouseover(arg1)
    *(arg1 + 0x308) = 0
    v2 = var_e8
    *(arg1 + 0x32c) = var_c8
    *(arg1 + 0x31c) = var_d8
    *(arg1 + 0x30c) = v2
    *(arg1 + 0x35c) = var_98
    *(arg1 + 0x36c) = var_88
    *(arg1 + 0x33c) = var_b8
    *(arg1 + 0x34c) = var_a8
    *(arg1 + 0x3ac) = var_f8:0xc.d
    *(arg1 + 0x38c) = var_68
    *(arg1 + 0x39c) = var_108
    *(arg1 + 0x37c) = var_78
    *(arg1 + 0x3b0) = 0
    v2 = var_e8
    *(arg1 + 0x3c4) = var_d8
    *(arg1 + 0x3d4) = var_c8
    *(arg1 + 0x3b4) = v2
    *(arg1 + 0x404) = var_98
    *(arg1 + 0x414) = var_88
    *(arg1 + 0x3e4) = var_b8
    *(arg1 + 0x3f4) = var_a8
    *(arg1 + 0x454) = var_f8:0xc.d
    *(arg1 + 0x424) = var_78
    *(arg1 + 0x434) = var_68
    *(arg1 + 0x444) = var_108
    *(arg1 + 0x1f78) = 0
    *(gDomClient + 0x1f8c0) = 0
    uint64_t x9_2 = zx.q(*(arg1 + 0x21a0))
    *(arg1 + 0x2130) = 0
    
    if (x9_2.d u> 5)
        pthread_kill(pthread_self(), 6)
        return GetBottomOfStack(XNoReturn()) __tailcall
    
    void* i_7 = *(gDomClient + 0x205e0)
    uint64_t x0_10
    uint64_t x1_1
    DomPileLoc* x2_1
    DomGfx* i_4
    int32_t x8_8
    
    switch (x9_2)
        case 0
            int32_t x11_2 = *(gDomClient + 0x20758)
            int32_t x3_1
            
            x3_1 = x11_2 != 0x3b ? -1 : 1
            
            int64_t x8_3
            
            if (x11_2 == 0x3b)
                x8_3 = 0
            else
                x8_3 = *(arg1 + 0x21a4)
            
            var_e8.q = x8_3
            result = DragRevealEnd(arg1, 
                zx.q(*(i_7 + zx.q(*(gDomClient + 0x1f8e4)) * 0x21d8 + 0x5c)), &var_e8, x3_1)
        case 1
            x8_8 = *(gDomClient + 0x20758)
            x2_1 = &data_7ef484
            x1_1 = 0x3ef
        label_b93058:
            
            if (x8_8 != 0x3b)
                result = DragRevealEnd(arg1, x1_1, x2_1, -1)
            else
                result = DragRevealEnd(arg1, x1_1, x2_1, 1)
        case 2
            x8_8 = *(gDomClient + 0x20758)
            x2_1 = &data_7ef484
            x1_1 = 0x3f0
            goto label_b93058
        case 3
            x0_10 = zx.q(*(arg1 + 0xa0))
            uint64_t x9_11 = zx.q(*(gDomClient + 0x205e8))
            int64_t x9_12
            void* i_2
            
            if (x9_11.d != 0)
                x9_12 = i_7 + x9_11 * 0x21d8
                i_2 = i_7
                
                while (zx.d(*(i_2 + 0x21d2)) == 0)
                    i_2 += 0x21d8
                    
                    if (i_2 u>= x9_12)
                        goto label_b93314
            
            if (x9_11.d == 0 || i_2 == 0xffffffff)
            label_b93314:
                i_4 = nullptr
            else
                do
                    if (*(i_2 + 0x2c) == 3 && *(i_2 + 0x58) == x0_10.d && *(i_2 + 0x5c) == 0x3ea
                            && *(i_2 + 0x60) == 0)
                        i_4 = i_2
                        break
                    
                    if (i_2 == 0)
                        i_2 = i_7
                    else
                        i_2 += 0x21d8
                    
                    if (i_2 u>= x9_12)
                        goto label_b93314
                    
                    while (zx.d(*(i_2 + 0x21d2)) == 0)
                        i_2 += 0x21d8
                        
                        if (i_2 u>= x9_12)
                            goto label_b93314
                    
                    i_4 = nullptr
                while (i_2 != 0xffffffff)
            
            result =
                DomMoveCard(x0_10, zx.q(*(arg1 + 0x98)), i_4, &data_7ef484, 0, false, 0xb, true)
            *(gDomClient + 0x1f8e0) = 0
        case 4
            int32_t x20_1 = *(arg1 + 0xa0)
            result = DomMoveCard(zx.q(x20_1), zx.q(*(arg1 + 0x98)), 
                DomFindOrCreatePile(zx.q(x20_1), zx.q(*(arg1 + 0x2188)), *(arg1 + 0x2190), 0), 
                arg1 + 0x2198, 0, false, 0xb, true)
            
            if (*(arg1 + 0x2188) == 0x3ea)
                *(gDomClient + 0x1f8e0) = 0
        case 5
            x0_10 = zx.q(*(arg1 + 0xa0))
            uint64_t x9_13 = zx.q(*(gDomClient + 0x205e8))
            int64_t x9_14
            void* i_3
            
            if (x9_13.d != 0)
                x9_14 = i_7 + x9_13 * 0x21d8
                i_3 = i_7
                
                while (zx.d(*(i_3 + 0x21d2)) == 0)
                    i_3 += 0x21d8
                    
                    if (i_3 u>= x9_14)
                        goto label_b933b4
            
            if (x9_13.d == 0 || i_3 == 0xffffffff)
            label_b933b4:
                i_4 = nullptr
            else
                do
                    if (*(i_3 + 0x2c) == 3 && *(i_3 + 0x58) == x0_10.d && *(i_3 + 0x5c) == 0x3ea
                            && *(i_3 + 0x60) == 0)
                        i_4 = i_3
                        break
                    
                    if (i_3 == 0)
                        i_3 = i_7
                    else
                        i_3 += 0x21d8
                    
                    if (i_3 u>= x9_14)
                        goto label_b933b4
                    
                    while (zx.d(*(i_3 + 0x21d2)) == 0)
                        i_3 += 0x21d8
                        
                        if (i_3 u>= x9_14)
                            goto label_b933b4
                    
                    i_4 = nullptr
                while (i_3 != 0xffffffff)
            
            result =
                DomMoveCard(x0_10, zx.q(*(arg1 + 0x98)), i_4, &data_7ef484, 0, false, 0xb, false)
            *(gDomClient + 0x1f8e0) = 0
    
    *(arg1 + 0x21a0) = 4
    *(arg1 + 0x21a4) = 0
return result
