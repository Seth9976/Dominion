// 函数: _Z17DomZoomDismissAllv
// 地址: 0xb48b44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gDomClient + 0x205e8))

if (x9.d != 0)
    void* i_1 = *(gDomClient + 0x205e0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            while (i != 0xffffffff)
                int32_t x10_1 = *(i + 0x2c)
                uint64_t x10_5
                
                if (x10_1 == 2)
                    int32_t x11_4 = *(i + 0x24c)
                    uint64_t x0
                    int128_t v0
                    int128_t v1
                    int128_t v2
                    int128_t v3
                    
                    if (x11_4 == 0)
                    label_b48ca4:
                        UI2Free(i + 0x2148)
                        UI2Free(i + 0x214c)
                        UI2Free(i + 0x2150)
                        v0, v1, v2, v3 = UI2Free(i + 0x2154)
                        x0 = zx.q(*(i + 0x1f90))
                        
                        if (x0.d != 0)
                            x0, v0, v1, v2, v3 = SpineDestroy(x0.d)
                        
                        int32_t x9_11 = *(gDomClient + 0x205f0)
                        *(gDomClient + 0x205f0) = zx.d(*(i + 0x21d0))
                        *(i + 0x21d0) = x9_11
                        *(gDomClient + 0x205f4) -= 1
                    else
                        x10_5 = zx.q(x11_4.w)
                        
                        if (x10_5.d u>= x9.d || *(i_1 + x10_5 * 0x21d8 + 0x21d0) != x11_4
                                || *(i_1 + x10_5 * 0x21d8 + 0x1f78) != 0)
                            goto label_b48ca4
                        
                    label_b48d38:
                        v0.q = 0
                        v0:8.q = 0
                        int128_t var_130_1
                        __builtin_memset(&var_130_1, 0, 0x20)
                        var_130_1:8.d = 3
                        void* x8_4 = i_1 + x10_5 * 0x21d8
                        var_130_1.q = i
                        int128_t var_120_1
                        var_120_1:8.d = 0
                        int32_t var_108 = 1
                        int128_t var_e0_1 = *(x8_4 + 0x3d8)
                        int128_t var_d0_1 = *(x8_4 + 0x3e8)
                        int128_t var_100_1 = *(x8_4 + 0x3b8)
                        int128_t var_f0_1 = *(x8_4 + 0x3c8)
                        int128_t var_a0_1 = *(x8_4 + 0x418)
                        int128_t var_90_1 = *(x8_4 + 0x428)
                        int128_t var_c0_1 = *(x8_4 + 0x3f8)
                        int128_t var_b0_1 = *(x8_4 + 0x408)
                        x0, v0, v1, v2, v3 =
                            MoveComponent<DomLoc, DomMoveCallback>::Move(i + 0x258, &var_108, 6, 1)
                else if (x10_1 == 1 && (*(i + 0x174) & 0xfffffffe) != 2)
                    if (*(i + 0x21d0) != *(gDomClient + 0x1d01c))
                        goto label_b48ca4
                    
                    int32_t x11_3 = *(i + 0x178)
                    
                    if (x11_3 == 0)
                        goto label_b48ca4
                    
                    x10_5 = zx.q(x11_3.w)
                    
                    if (x10_5.d u>= x9.d || *(i_1 + x10_5 * 0x21d8 + 0x21d0) != x11_3
                            || *(i_1 + x10_5 * 0x21d8 + 0x1f78) != 0)
                        goto label_b48ca4
                    
                    if (*(i_1 + x10_5 * 0x21d8 + 0x3b0) == 1)
                        goto label_b48d38
                i_1 = *(gDomClient + 0x205e0)
                x9 = zx.q(*(gDomClient + 0x205e8))
                
                if (i == 0)
                    i = i_1
                else
                    i += 0x21d8
                
                int64_t x10_7 = i_1 + x9 * 0x21d8
                
                if (i u>= x10_7)
                    break
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x10_7)
                        goto label_b48df4
            
            break
        
        i += 0x21d8
    while (i u< i_1 + x9 * 0x21d8)

label_b48df4:
*(gDomClient + 0x1d00c) = 0
*(gDomClient + 0x1d01c) = 0
*(gDomClient + 0x1d018) = 0
*(gDomClient + 0x1d014) = 0
*(gDomClient + 0x1f0a8) = 0
