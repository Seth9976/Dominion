// 函数: _Z13DomGfxHitTestRK4Vec2
// 地址: 0xb21b3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_v8
int64_t var_70 = entry_v8
uint32_t x9 = zx.d(*(gDomClient + 0x205d8))
int64_t* entry_x8
*entry_x8 = 0
entry_x8[1] = _vtable_for_UI2HitResult + 0x10
entry_x8[2] = 0
entry_x8[4].d = 0

if (x9 == 0 || *(gDomClient + 0x1f8c0) != 0)
    return 

Vec2 const& x20_1 = arg1
int32_t x0 = GameDlgManagerDialogActive(5)
int128_t v0_1

if ((x0 & 1) == 0)
    arg1, v0_1 = GameDlgManagerDialogActive(7)

if ((x0 & 1) != 0 || (arg1.d & 1) != 0)
    arg1, v0_1 = GameDlgManagerDialogActive(0x7e6, 7)
    
    if ((arg1.d & 1) != 0)
        goto label_b21be0
    
    return 

label_b21be0:
uint64_t x9_1 = zx.q(*(gDomClient + 0x205e8))
int32_t x8_3
int32_t x23_1
int32_t x26_1
int32_t fp_1

if (x9_1.d == 0)
    x26_1 = 0
    fp_1 = 0
    x8_3 = 0
    x23_1 = 0
else
    DomGfx* i = *(gDomClient + 0x205e0)
    int64_t x9_2 = i + x9_1 * 0x21d8
    
    while (zx.d(*(i + 0x21d2)) == 0)
        i += 0x21d8
        
        if (i u>= x9_2)
            goto label_b21ef8
    
    if (i == 0xffffffff)
    label_b21ef8:
        x26_1 = 0
        fp_1 = 0
        x8_3 = 0
        x9_1 = 0
        x23_1 = 0
    else
        x23_1 = 0
        int32_t x28_1 = 0
        arg1 = nullptr
        int32_t x1_1 = 0
        int32_t x27_1 = 0
        
        do
            uint64_t x8_8 = zx.q(*(i + 0x2c))
            
            if (x8_8.d u> 8)
                x26_1 = x27_1
                fp_1 = x1_1
                x8_3 = arg1.d
                x9_1 = zx.q(x28_1)
            else
                int32_t var_64_1 = arg1.d
                int32_t var_88
                int64_t var_80
                int32_t var_78
                
                switch (x8_8)
                    case 0, 1
                        goto label_b21d94
                    case 2, 4, 6
                    label_b21c8c:
                        arg1, v0_1 = UI2HitTest(zx.q(*(i + 0x2148)), x20_1)
                        x26_1 = var_88
                        v0_1.q = var_80
                        
                        if (x26_1 == 0)
                        label_b21e34:
                            fp_1 = x1_1
                            x8_3 = var_64_1
                            x26_1 = x27_1
                            x9_1 = zx.q(x28_1)
                        else
                            x8_3 = var_78
                            fp_1 = *(i + 0x21d0)
                            x9_1 = zx.q(*i << 0x10)
                        label_b21e1c:
                            int32_t x10_3 = *(i + 0x21d0)
                            
                            if (*(gDomClient + 0x1f8c0) == x10_3
                                    || (x23_1 != 0 && x9_1.d s<= x28_1))
                                goto label_b21e34
                            
                            x23_1 = x10_3
                            entry_v8 = v0_1.q
                    case 3
                        UI2HitTest(zx.q(*(i + 0x2148)), x20_1)
                        x26_1 = var_88
                        
                        if (x26_1 != 0 && var_78 == 1)
                            v0_1.q = var_80
                            fp_1 = *(i + 0x21d0)
                            int128_t var_b0_2 = v0_1
                            arg1, v0_1 = IsBoardPile(zx.q(*(i + 0x5c)))
                            
                            if ((arg1.d & 1) == 0)
                                int32_t x9_7 = *(gDomClient + 0x38)
                                int32_t x8_11 = *(i + 0x58)
                                v0_1 = var_b0_2
                                int32_t x9_8
                                
                                x9_8 = x9_7 == 0xffffffff ? 0 : x9_7
                                
                                if (x8_11 != x9_8)
                                    if (*(gDomClient + 0x3c) == x8_11)
                                        x9_1 = 0x2b9a0000
                                    else
                                        x9_1 = 0x2b960000
                                    
                                    x8_3 = 1
                                else
                                    x9_1 = 0x2d350000
                                    x8_3 = 1
                            else
                                v0_1 = var_b0_2
                                x9_1 = 0x2b340000
                                x8_3 = 1
                            
                            goto label_b21e1c
                        
                        x8_8 = zx.q(*(i + 0x2c))
                        v0_1 = v0_1
                    label_b21d94:
                        int128_t var_b0_3 = v0_1
                        
                        if (x8_8.d == 1)
                            arg1, v0_1 = UI2HitTest(zx.q(*(i + 0x2148)), x20_1)
                            x26_1 = var_88
                        
                        if (x8_8.d == 1 && x26_1 != 0 && var_78 == 1)
                            v0_1.q = var_80
                            fp_1 = *(i + 0x21d0)
                            x9_1 = zx.q(v0_1:4.d << 0x10)
                            x8_3 = 1
                            goto label_b21e1c
                        
                        arg1, v0_1 = CardHitTest(i, x20_1)
                        
                        if ((arg1.d & 1) != 0)
                            arg1, v0_1 = CardGetLayer(i)
                            int32_t x9_5 = *(i + 0x3c4)
                            v0_1 = var_b0_3
                            x26_1 = 0
                            fp_1 = 0
                            int32_t x9_6
                            
                            x9_6 = x9_5 == 0xffffffff ? 0 : x9_5
                            
                            x8_3 = 0
                            x9_1 = zx.q(x9_6) | zx.q(arg1.d << 0x10)
                            goto label_b21e1c
                        
                        fp_1 = x1_1
                        x8_3 = var_64_1
                        v0_1 = var_b0_3
                        x26_1 = x27_1
                        x9_1 = zx.q(x28_1)
                    case 5
                        arg1, v0_1 = UI2HitTest(zx.q(*(i + 0x2148)), x20_1)
                        x26_1 = var_88
                        v0_1.q = var_80
                        
                        if (x26_1 == 0)
                            goto label_b21e34
                        
                        x8_3 = var_78
                        fp_1 = *(i + 0x21d0)
                        x9_1 = 0x2c880000
                        goto label_b21e1c
                    case 7
                        if (*(i + 0x220) != 0)
                            goto label_b21c8c
                        
                        goto label_b21e34
                    case 8
                        if (*(i + 0x234) != 0x22)
                            goto label_b21e34
                        
                        arg1, v0_1 = UI2HitTest(zx.q(*(i + 0x2148)), x20_1)
                        x26_1 = var_88
                        v0_1.q = var_80
                        
                        if (x26_1 == 0)
                            goto label_b21e34
                        
                        x8_3 = var_78
                        fp_1 = *(i + 0x21d0)
                        x9_1 = 0x3e8 | zx.q(zx.d((*i).w) << 0x10)
                        goto label_b21e1c
            
            DomGfx* i_1 = *(gDomClient + 0x205e0)
            
            if (i == 0)
                i = i_1
            else
                i += 0x21d8
            
            int64_t x10_4 = i_1 + zx.q(*(gDomClient + 0x205e8)) * 0x21d8
            
            if (i u>= x10_4)
                break
            
            while (zx.d(*(i + 0x21d2)) == 0)
                i += 0x21d8
                
                if (i u>= x10_4)
                    goto label_b21f0c
            
            x28_1 = x9_1.d
            arg1 = zx.q(x8_3)
            x1_1 = fp_1
            x27_1 = x26_1
        while (i != 0xffffffff)

label_b21f0c:
entry_x8[4].d = x8_3
entry_x8[2].d = x26_1
*(entry_x8 + 0x14) = fp_1
entry_x8[3] = entry_v8
*entry_x8 = x23_1
*(entry_x8 + 4) = x9_1.d s>> 0x10
