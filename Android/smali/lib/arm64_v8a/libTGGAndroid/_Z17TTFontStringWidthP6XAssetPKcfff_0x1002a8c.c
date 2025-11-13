// 函数: _Z17TTFontStringWidthP6XAssetPKcfff
// 地址: 0x1002a8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v13
int64_t var_60 = v13
int64_t v12
int64_t var_58 = v12
int64_t v11
int64_t var_50 = v11
int64_t* x9 = *arg1
XAsset* x19 = arg1
char const* x20 = arg2
uint32_t i
int128_t v9

if (x9 == 0)
    if (*(x19 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x19, false, true)
    x9 = *x19
    i = zx.d(*x20)
    
    if (i != 0)
        goto label_1002ac4
    
    v9.d = 0f
    return 

i = zx.d(*x20)

if (i == 0)
    v9.d = 0f
    return 

label_1002ac4:
void* x21_1 = *x9

if (arg4 == 0f)
    v9.d = 0f
    
    do
        int32_t x1_2 = i & 0xff
        
        if ((i & 0x80) != 0)
            if ((x1_2 & 0xe0) == 0xc0)
                x20 = &x20[1]
                x1_2 = (zx.d(*x20) & 0x3f) | (0x1f & x1_2) << 6
            else if ((i & 0xf0) != 0xe0)
                int32_t x8_13 = x1_2 & 0xf8
                
                if (x8_13 == 0xf0)
                    x1_2 = (((0xfffff03f
                        & ((0xfffc0fff & (x1_2 & 7) << 0x12) | (0x3f & zx.d(x20[1])) << 0xc))
                        | (0x3f & zx.d(x20[2])) << 6) & 0xffffffc0) | (zx.d(x20[3]) & 0x3f)
                
                if (x8_13 == 0xf0)
                    x20 = &x20[3]
            else
                x20 = &x20[2]
                x1_2 = (((0xfffff03f & (x1_2 & 0xf) << 0xc) | (0x3f & zx.d(x20[-1])) << 6)
                    & 0xffffffc0) | (zx.d(*x20) & 0x3f)
        
        arg1 = TTFontUnicodeToGlyph(x19, x1_2, false, arg3)
        x20 = &x20[1]
        i = zx.d(*x20)
        v9.d = v9.d f+ (*(arg1 + 0x40) + 0f + *(x21_1 + 0x44)) * arg3
    while (i != 0)
else
    v11.d = 0f
    v12.d = fconvert.s(1f)
    v9.d = 0f
    
    do
        int32_t x9_1 = i & 0xff
        
        if ((i & 0x80) != 0)
            if ((x9_1 & 0xe0) == 0xc0)
                x20 = &x20[1]
                x9_1 = (zx.d(*x20) & 0x3f) | (0x1f & x9_1) << 6
            else if ((i & 0xf0) != 0xe0)
                int32_t x8_6 = x9_1 & 0xf8
                
                if (x8_6 == 0xf0)
                    x9_1 = (((0xfffff03f
                        & ((0xfffc0fff & (x9_1 & 7) << 0x12) | (0x3f & zx.d(x20[1])) << 0xc))
                        | (0x3f & zx.d(x20[2])) << 6) & 0xffffffc0) | (zx.d(x20[3]) & 0x3f)
                
                if (x8_6 == 0xf0)
                    x20 = &x20[3]
            else
                x20 = &x20[2]
                x9_1 = (((0xfffff03f & (x9_1 & 0xf) << 0xc) | (0x3f & zx.d(x20[-1])) << 6)
                    & 0xffffffc0) | (zx.d(*x20) & 0x3f)
        
        int32_t x1
        
        if (x9_1 - 0x61 u< 0x1a)
            x1 = x9_1 ^ 0x20
        else
            x1 = x9_1
        
        bool z_1
        
        if (x9_1 - 0x61 u>= 0x1a)
            z_1 = x9_1 == 0x20
        else
            z_1 = true
        
        if (z_1)
            v13.d = arg4
        else
            v13.d = v12.d
        
        arg1 = TTFontUnicodeToGlyph(x19, x1, false, v13.d f* arg3)
        x20 = &x20[1]
        i = zx.d(*x20)
        v9.d = v9.d f+ v13.d f* (*(arg1 + 0x40) f+ v11.d + *(x21_1 + 0x44)) * arg3
    while (i != 0)
