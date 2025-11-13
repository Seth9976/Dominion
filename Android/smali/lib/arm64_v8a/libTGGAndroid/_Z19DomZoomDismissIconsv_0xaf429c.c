// 函数: _Z19DomZoomDismissIconsv
// 地址: 0xaf429c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*(gDomClient + 0x205e8))

if (x9.d == 0)
    return 

void* i_1 = *(gDomClient + 0x205e0)
void* i = i_1

do
    if (zx.d(*(i + 0x21d2)) != 0)
        while (i != 0xffffffff)
            if (*(i + 0x2c) == 2)
                int32_t x11_2 = *(i + 0x24c)
                uint64_t x10_2
                
                if (x11_2 != 0)
                    x10_2 = zx.q(x11_2.w)
                
                uint64_t x0
                int128_t v0
                int128_t v1
                int128_t v2
                int128_t v3
                
                if (x11_2 == 0 || x10_2.d u>= x9.d || *(i_1 + x10_2 * 0x21d8 + 0x21d0) != x11_2
                        || *(i_1 + x10_2 * 0x21d8 + 0x1f78) != 0)
                    UI2Free(i + 0x2148)
                    UI2Free(i + 0x214c)
                    UI2Free(i + 0x2150)
                    v0, v1, v2, v3 = UI2Free(i + 0x2154)
                    x0 = zx.q(*(i + 0x1f90))
                    
                    if (x0.d != 0)
                        x0, v0, v1, v2, v3 = SpineDestroy(x0.d)
                    
                    int32_t x9_5 = *(gDomClient + 0x205f0)
                    *(gDomClient + 0x205f0) = zx.d(*(i + 0x21d0))
                    *(i + 0x21d0) = x9_5
                    *(gDomClient + 0x205f4) -= 1
                else
                    v0.q = 0
                    v0:8.q = 0
                    int128_t var_130_1
                    __builtin_memset(&var_130_1, 0, 0x20)
                    var_130_1:8.d = 3
                    void* x8_4 = i_1 + x10_2 * 0x21d8
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
            
            i_1 = *(gDomClient + 0x205e0)
            x9 = zx.q(*(gDomClient + 0x205e8))
            
            if (i == 0)
                i = i_1
            else
                i += 0x21d8
            
            int64_t x10_4 = i_1 + x9 * 0x21d8
            
            if (i u>= x10_4)
                break
            
            while (zx.d(*(i + 0x21d2)) == 0)
                i += 0x21d8
                
                if (i u>= x10_4)
                    return 
        
        break
    
    i += 0x21d8
while (i u< i_1 + x9 * 0x21d8)
