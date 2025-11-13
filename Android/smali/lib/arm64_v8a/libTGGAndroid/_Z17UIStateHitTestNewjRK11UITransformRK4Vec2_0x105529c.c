// 函数: _Z17UIStateHitTestNewjRK11UITransformRK4Vec2
// 地址: 0x105529c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v12
int64_t var_90 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8
int64_t x8
uint64_t x9_1
uint32_t x10_1
uint32_t x21_1
UIState* x25_1

if (arg1 != 0)
    x9_1 = zx.q(arg1) & 0xffff
    x21_1 = arg1
    x8 = *(gUISystem + 0x28)
    x25_1 = x8 + mulu.dp.d(x9_1.d, 0x458)
    x10_1 = zx.d(*(x25_1 + 0x10))
    *(x25_1 + 0x2c) = 1

void* entry_x8

if (arg1 == 0 || x10_1 != 0)
    __builtin_memset(entry_x8, 0, 0xa0)
    return 

int64_t* x24_1 = *(x8 + x9_1 * 0x458 + 8)
int64_t* x8_2 = *x24_1

if (x8_2 == 0)
    if (x24_1[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x24_1, false, true)
    x8_2 = *x24_1

int64_t* x24_2 = *x8_2
void var_193c
int128_t v0_1
int128_t v1_1
int128_t v2_1
int128_t v3_1
int128_t v4_1
arg1, v0_1, v1_1, v2_1, v3_1, v4_1 = memset(&var_193c, 0, 0x189c)
int32_t var_a0_1 = 1
v0_1 = *(arg2 + 0x10)
v2_1.q = 0
v2_1:8.q = 0
int128_t var_19a0 = *arg2
int128_t var_1990_1 = v0_1
int128_t var_1980_1 = *(arg2 + 0x20)
int128_t var_1970_1 = *(arg2 + 0x30)
int128_t var_1960_1 = *(arg2 + 0x40)
int128_t var_1950_1 = *(arg2 + 0x50)
int32_t var_1940_1 = 0xffffffff
int128_t var_1a00_1
__builtin_memset(&var_1a00_1, 0, 0x60)
int128_t var_19f0_1
int128_t var_19e0_1
int128_t var_19d0_1
int128_t var_19c0_1
int128_t var_19b0
int32_t var_1b8c_1
int64_t var_88_1

if (x24_2[1].d s< 1)
    int64_t var_1bb0_2
    __builtin_memset(&var_1bb0_2, 0, 0x20)
    var_88_1 = 0
    __builtin_memset(&var_1b8c_1, 0, 0x14)
else
    void* var_1bd0_1 = &var_19b0:0xc
    int64_t* x11_1 = x24_2
    int64_t i = 0
    int32_t fp_1 = 0
    UIState* x21_2 = x25_1
    int64_t var_1bb0_1
    __builtin_memset(&var_1bb0_1, 0, 0x20)
    __builtin_memset(&var_1b8c_1, 0, 0x14)
    var_88_1 = 0
    
    do
        int64_t x23_2 = *x11_1
        UIElement* x24_3 = x23_2 + i * 0x178
        int128_t v4_2
        int128_t v5_1
        arg1, v0_1, v1_1, v2_1, v3_1, v4_2, v5_1 = UIStateElementGet(x21_2, i.d, *(x24_3 + 8))
        UIStateElement* x25_2 = arg1
        int128_t var_1b78
        int128_t var_1b68
        int128_t var_1b58
        int128_t var_1b48
        int128_t var_1b38
        int128_t var_1b28
        int128_t var_1a60
        
        if (*(x24_3 + 4) == 6)
            int64_t x19_1 = sx.q(var_a0_1)
            void* x8_6 = &var_19a0 + muls.dp.d(x19_1.d - 1, 0x64)
            v0_1 = *(x8_6 + 0x10)
            v2_1 = *(x8_6 + 0x40)
            v3_1 = *(x8_6 + 0x50)
            v5_1 = *(x8_6 + 0x20)
            v4_2 = *(x8_6 + 0x30)
            var_1a60 = *x8_6
            int128_t var_1a50_1 = v0_1
            int128_t var_1a20_1 = v2_1
            int128_t var_1a10_1 = v3_1
            int128_t var_1a40_1 = v5_1
            int128_t var_1a30_1 = v4_2
            int128_t v4_3
            int128_t v5_2
            arg1, v0_1, v1_1, v2_1, v3_1, v4_3, v5_2 =
                UIElementGroupTransform(x24_3, x25_2, &var_1a60)
            int32_t x8_8 = *(x23_2 + i * 0x178 + 0x68)
            x11_1 = x24_2
            int128_t* x10_2 = &var_19a0 + x19_1 * 0x64
            var_a0_1 = x19_1.d + 1
            *x10_2 = var_1b78
            x10_2[1] = var_1b68
            x10_2[4] = var_1b38
            x10_2[5] = var_1b28
            x10_2[2] = var_1b58
            x10_2[3] = var_1b48
            x10_2[6].d = x8_8
        else
            uint64_t x28_1 = zx.q(var_a0_1)
            void* x9_5 = &var_19a0 + muls.dp.d(x28_1.d - 1, 0x64)
            v0_1 = *(x9_5 + 0x10)
            v2_1 = *(x9_5 + 0x40)
            v3_1 = *(x9_5 + 0x50)
            v5_1 = *(x9_5 + 0x20)
            v4_2 = *(x9_5 + 0x30)
            var_1a60 = *x9_5
            int128_t var_1a50_2 = v0_1
            int128_t var_1a20_2 = v2_1
            int128_t var_1a10_2 = v3_1
            v0_1.d = *(x25_2 + 0x18)
            void* __offset(UIStateElement, 0x14) x9_7
            
            if (not(v0_1.d f!= 0f))
                if (*(x25_2 + 0x10) s> *x25_2)
                    x9_7 = x25_2 + 0x14
                else
                    x9_7 = x23_2 + i * 0x178 + 0x44
            
            if (v0_1.d f!= 0f || zx.d(*x9_7) == 0)
                int32_t x8_12 = *(x24_3 + 4)
                
                if (x8_12 == 5)
                    arg1, v0_1, v1_1, v2_1, v3_1 = UIRectContains(x24_3, &var_1a60, arg3)
                    
                    if ((arg1 & 1) == 0 || zx.d(*(x25_2 + 0x2d)) != 0)
                        x11_1 = x24_2
                    else
                        void* __offset(UIStateElement, 0x14) x8_19
                        
                        if (*(x25_2 + 0x10) s> *x25_2)
                            x8_19 = x25_2 + 0x14
                        else
                            x8_19 = x23_2 + i * 0x178 + 0x44
                        
                        x11_1 = x24_2
                        
                        if (zx.d(*x8_19) == 0)
                            var_88_1 = 0
                            goto label_10556a4
                else
                    UIState* var_1ba8_1
                    UIStateElement* var_1ba0_1
                    UIElement* var_1b98_1
                    uint64_t var_1b88_1
                    int64_t var_1b80_1
                    
                    if (x8_12 == 3)
                        arg1, v0_1, v1_1, v2_1, v3_1 = UIRectContains(x24_3, &var_1a60, arg3)
                        
                        if ((arg1 & 1) == 0)
                            x11_1 = x24_2
                        else
                            x11_1 = x24_2
                            
                            if (zx.d(*(x23_2 + i * 0x178 + 0x110)) != 0)
                                var_88_1 = 0
                                var_1a00_1 = var_1a60
                                var_19f0_1 = var_1a50_2
                                var_19c0_1 = var_1a20_2
                                var_19b0 = var_1a10_2
                                var_19e0_1 = v5_1
                                var_19d0_1 = v4_2
                            label_10556a4:
                                fp_1 = 1
                                var_1b88_1 = *V2I0
                                var_1b80_1 = *arg3
                            label_10556b0:
                                var_1b8c_1 = 0xffffffff
                                var_1ba0_1 = x25_2
                                var_1b98_1 = x24_3
                                var_1ba8_1 = x21_2
                                var_1bb0_1.d = x21_1
                                var_1bb0_1:4.d = i.d
                    else if (x8_12 != 2)
                        arg1, v0_1, v1_1, v2_1, v3_1 = UIRectContains(x24_3, &var_1a60, arg3)
                        
                        if ((arg1 & 1) == 0 || zx.d(*(x25_2 + 0x2d)) != 0)
                            x11_1 = x24_2
                        else
                            void* __offset(UIStateElement, 0x14) x8_27
                            
                            if (*(x25_2 + 0x10) s> *x25_2)
                                x8_27 = x25_2 + 0x14
                            else
                                x8_27 = x23_2 + i * 0x178 + 0x44
                            
                            if (zx.d(*x8_27) == 0)
                                x11_1 = x24_2
                                
                                if (fp_1 != 1)
                                    var_88_1 = 0
                                    fp_1 = 2
                                    var_1b88_1 = *V2I0
                                    var_1b80_1 = *arg3
                                    goto label_10556b0
                            else
                                x11_1 = x24_2
                    else
                        int32_t x8_13 = *(x25_2 + 0x148)
                        int32_t x9_11 = *x25_2
                        int64_t x8_16
                        int64_t x19_2
                        uint64_t x9_14
                        
                        if (x8_13 s<= x9_11)
                            uint64_t x10_9 = zx.q(*(x23_2 + i * 0x178 + 0xac))
                            x19_2 = zx.q(*(x10_9 + 0xb0)) | (0xffffffff & x10_9) << 0x20
                            
                            if (x8_13 s<= x9_11)
                                x9_14 = zx.q(*(x23_2 + i * 0x178 + 0xac))
                                x8_16 = zx.q(*(x9_14 + 0xb0)) | (0xffffffff & x9_14) << 0x20
                            else
                                XString::operator char const*()
                                x8_16 = *(x25_2 + 0x14c)
                        else
                            XString::operator char const*()
                            x19_2 = *(x25_2 + 0x154)
                            
                            if (*(x25_2 + 0x148) s> *x25_2)
                                XString::operator char const*()
                                x8_16 = *(x25_2 + 0x14c)
                            else
                                x9_14 = zx.q(*(x23_2 + i * 0x178 + 0xac))
                                x8_16 = zx.q(*(x9_14 + 0xb0)) | (0xffffffff & x9_14) << 0x20
                        uint64_t x21_4 = x19_2 u>> 0x20
                        int64_t var_1a68 = x8_16
                        arg1, v0_1, v1_1, v2_1, v3_1 = UIStateRect(x21_1, i.d, &var_1a60)
                        
                        if (x21_4.d s>= 1 && x19_2.d s>= 1)
                            v8 = v0_1.q
                            v9 = v1_1.q
                            v10 = v2_1.q
                            v11 = v3_1.q
                            int64_t x9_18 = 0
                            
                            do
                                int64_t j = 0
                                
                                do
                                    uint64_t x27_1 = x9_18 << 0x20 | j
                                    uint64_t var_1a70 = x27_1
                                    void* x0_13 = UIStateSubstate(x24_3, x25_2, &var_1a70)
                                    
                                    if (*(x0_13 + 0x30) != 0)
                                        x27_1 = *(x0_13 + 0x34)
                                        var_1a70 = x27_1
                                    
                                    int128_t v0_2
                                    int128_t v1_2
                                    v0_2, v1_2 = UIStateTableTransform(x24_3, x25_2, &var_1a60, 
                                        &var_1a70, &var_1a68, nullptr)
                                    v0_2.q = *(x25_2 + 0x180)
                                    double var_1ad0
                                    v1_2.q = var_1ad0
                                    var_1ad0 = vadd_f32(v0_2, v1_2)
                                    int64_t x8_32 = *arg3
                                    double v0_3
                                    v0_3.d = float.s(x8_32.d)
                                    int64_t var_1ad8 = x8_32
                                    
                                    if (v8.d f<= v0_3.d)
                                        v1_2.d = *(arg3 + 4)
                                    
                                    if ((not(v8.d f<= v0_3.d) || v11.d f< v1_2.d || v10.d f< v0_3.d
                                            || v9.d f> v1_2.d) && zx.d(*(x23_2 + i * 0x178 + 0xda)) != 0)
                                        var_1ad8 = -0x39e3bfff39e3c000
                                    
                                    arg1, v0_1, v1_1, v2_1, v3_1 =
                                        UIStateHitTestNew(*(x0_13 + 0x450), &var_1ad0, &var_1ad8)
                                    int32_t x8_34 = var_1b78.d
                                    
                                    if (fp_1 == 1 && x8_34 == 2)
                                        fp_1 = 1
                                    else if (x8_34 != 0)
                                        int64_t x9_20 = *(x25_2 + 0x140)
                                        fp_1 = x8_34
                                        var_1bb0_1.d = var_1b78:4.d
                                        var_1bb0_1:4.d = var_1b78:8.d
                                        var_1b68:8.q = x27_1
                                        var_1b58.q = x9_20
                                        var_88_1 = x9_20
                                        var_1b88_1 = x27_1
                                        var_1b80_1 = var_1b78:0xc.q
                                        var_1b8c_1 = *(x0_13 + 0x450)
                                        var_1b98_1 = var_1b48.q
                                        var_1a00_1 = var_1b38
                                        var_19f0_1 = var_1b28
                                        int128_t var_1af8
                                        var_19c0_1 = var_1af8
                                        int128_t var_1ae8
                                        var_19b0 = var_1ae8
                                        int128_t var_1b18
                                        var_19e0_1 = var_1b18
                                        int128_t var_1b08
                                        var_19d0_1 = var_1b08
                                        var_1ba8_1 = var_1b58:8.q
                                        var_1ba0_1 = var_1b48:8.q
                                    
                                    j += 1
                                while ((x19_2 & 0xffffffff) != j)
                                
                                x9_18 += 1
                            while (x9_18 != x21_4)
                        
                        x21_2 = x25_1
                        x11_1 = x24_2
                
                if (x28_1.d s>= 1)
                    int64_t j_1 = x28_1 + 1
                    int32_t* x9_23 = var_1bd0_1 + x28_1 * 0x64
                    
                    do
                        int32_t x10_14 = *x9_23
                        
                        if ((x10_14 & 0x80000000) == 0)
                            if (x10_14 != 1)
                                *x9_23 = x10_14 - 1
                            else
                                x28_1 = zx.q(x28_1.d - 1)
                        
                        j_1 -= 1
                        x9_23 -= 0x64
                    while (j_1 s> 1)
                    
                    var_a0_1 = x28_1.d
            else if (x28_1.d s< 1)
                x11_1 = x24_2
            else
                x11_1 = x24_2
                int64_t j_2 = x28_1 + 1
                int32_t* x9_10 = var_1bd0_1 + x28_1 * 0x64
                
                do
                    int32_t x10_4 = *x9_10
                    
                    if ((x10_4 & 0x80000000) == 0)
                        if (x10_4 != 1)
                            *x9_10 = x10_4 - 1
                        else
                            x28_1 = zx.q(x28_1.d - 1)
                    
                    j_2 -= 1
                    x9_10 -= 0x64
                while (j_2 s> 1)
                
                var_a0_1 = x28_1.d
        i += 1
    while (i s< sx.q(x11_1[1].d))
__builtin_memset(entry_x8, 0, 0x40)
v3_1 = var_19b0
*(entry_x8 + 0x40) = var_1a00_1
*(entry_x8 + 0x50) = var_19f0_1
*(entry_x8 + 0x80) = var_19c0_1
*(entry_x8 + 0x90) = v3_1
*(entry_x8 + 0x60) = var_19e0_1
*(entry_x8 + 0x70) = var_19d0_1
