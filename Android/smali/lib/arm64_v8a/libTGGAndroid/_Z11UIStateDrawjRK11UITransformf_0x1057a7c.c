// 函数: _Z11UIStateDrawjRK11UITransformf
// 地址: 0x1057a7c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
uint64_t x22 = zx.q(arg1) & 0xffff
int64_t x21 = *(gUISystem + 0x28)
UIState* x19 = x21 + mulu.dp.d(x22.d, 0x458)

if (zx.d(*(x19 + 0x10)) != 0)
    return 

void var_191c
int128_t v0
int128_t v1_1
int128_t v2_1
int128_t v3_1
int128_t v4_1
arg1, v0, v1_1, v2_1, v3_1, v4_1 = memset(&var_191c, 0, 0x189c)
int32_t var_80_1 = 1
int128_t var_1940_1 = *(arg2 + 0x40)
int128_t var_1930_1 = *(arg2 + 0x50)
v4_1 = *(arg2 + 0x10)
int128_t var_1960_1 = *(arg2 + 0x20)
int128_t var_1950_1 = *(arg2 + 0x30)
int32_t var_1920_1 = 0xffffffff
int128_t var_1980 = *arg2
int128_t var_1970_1 = v4_1
int64_t* x20_2 = *(x21 + x22 * 0x458 + 8)
int64_t* x8_2 = *x20_2

if (x8_2 == 0)
    if (x20_2[1].d == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x20_2, false, true)
    x8_2 = *x20_2

int64_t* x22_1 = *x8_2

if (x22_1[1].d s< 1)
    return 

int64_t i = 0

do
    int64_t x27_1 = *x22_1
    UIElement* x21_1 = x27_1 + i * 0x178
    int128_t v0_1
    int128_t v1_2
    int128_t v2_2
    int128_t v3_2
    int128_t v4_2
    int128_t v5_1
    arg1, v0_1, v1_2, v2_2, v3_2, v4_2, v5_1 = UIStateElementGet(x19, i.d, *(x21_1 + 8))
    UIStateElement* x9_2 = arg1
    int128_t var_19e0
    int128_t var_19d0
    int128_t var_19c0
    int128_t var_19b0
    int128_t var_19a0
    int128_t var_1990
    
    if (*(x21_1 + 4) == 6)
        int64_t x28_1 = sx.q(var_80_1)
        void* x8_6 = &var_1980 + muls.dp.d(x28_1.d - 1, 0x64)
        v0_1 = *(x8_6 + 0x10)
        v2_2 = *(x8_6 + 0x40)
        v3_2 = *(x8_6 + 0x50)
        v5_1 = *(x8_6 + 0x20)
        v4_2 = *(x8_6 + 0x30)
        int128_t var_1a40 = *x8_6
        int128_t var_1a30_1 = v0_1
        int128_t var_1a00_1 = v2_2
        int128_t var_19f0_1 = v3_2
        int128_t var_1a20_1 = v5_1
        int128_t var_1a10_1 = v4_2
        int128_t v0_2
        int128_t v1_3
        int128_t v2_3
        int128_t v3_3
        int128_t v4_3
        int128_t v5_2
        arg1, v0_2, v1_3, v2_3, v3_3, v4_3, v5_2 = UIElementGroupTransform(x21_1, x9_2, &var_1a40)
        v5_2 = var_1990
        int32_t x8_8 = *(x27_1 + i * 0x178 + 0x68)
        int128_t* x10_1 = &var_1980 + x28_1 * 0x64
        var_80_1 = x28_1.d + 1
        *x10_1 = var_19e0
        x10_1[1] = var_19d0
        x10_1[4] = var_19a0
        x10_1[5] = v5_2
        x10_1[2] = var_19c0
        x10_1[3] = var_19b0
        x10_1[6].d = x8_8
    else
        int32_t x8_11 = *x9_2
        void* __offset(UIStateElement, 0x14) x10_3
        
        if (*(x9_2 + 0x10) s> x8_11)
            x10_3 = x9_2 + 0x14
        else
            x10_3 = x27_1 + i * 0x178 + 0x44
        
        if (zx.d(*x10_3) != 0 || (*(x9_2 + 0x170) s> x8_11 && zx.d(*(x9_2 + 0x174)) != 0))
            goto label_1057cec
        
        void* x10_8 = &var_1980 + sx.q(var_80_1) * 0x64
        v0_1 = *(x10_8 - 0x54)
        v2_2 = *(x10_8 - 0x34)
        v3_2 = *(x10_8 - 0x24)
        v4_2 = *(x10_8 - 0x14)
        var_19e0 = *(x10_8 - 0x64)
        var_19d0 = v0_1
        v0_1.d = var_19e0:8.d
        v1_2 = *(x10_8 - 0x44)
        var_19a0 = v3_2
        var_1990 = v4_2
        var_19c0 = v1_2
        var_19b0 = v2_2
        
        if (v0_1.d f== 0f)
            goto label_1057cec
        
        v0_1.d = var_19e0:0xc.d
        
        if (v0_1.d f== 0f)
            goto label_1057cec
        
        int64_t x8_12
        
        if (*(x9_2 + 0x164) s> x8_11)
            x8_12 = *(x9_2 + 0x168)
        
        uint64_t x8_13
        
        if (*(x9_2 + 0x164) s<= x8_11 || x8_12 == 0)
            UIStateDrawElementInt(x19, i.d, &var_19e0, arg3.q.d)
            x8_13 = zx.q(var_80_1)
            
            if (x8_13.d s>= 1)
                goto label_1057cf8
        else
            x8_12(&var_19e0, x21_1, x9_2)
        label_1057cec:
            x8_13 = zx.q(var_80_1)
            
            if (x8_13.d s>= 1)
            label_1057cf8:
                int64_t j = x8_13 + 1
                int32_t* x10_10 = &var_1990:0xc + x8_13 * 0x64
                
                do
                    int32_t x11_2 = *x10_10
                    
                    if ((x11_2 & 0x80000000) == 0)
                        if (x11_2 != 1)
                            *x10_10 = x11_2 - 1
                        else
                            x8_13 = zx.q(x8_13.d - 1)
                    
                    j -= 1
                    x10_10 -= 0x64
                while (j s> 1)
                
                var_80_1 = x8_13.d
    i += 1
while (i s< sx.q(x22_1[1].d))
