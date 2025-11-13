// 函数: _Z10DrawLayoutRK4Mat415FancyStringDataRK10TextLayout
// 地址: 0x1027e5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v13
int64_t var_90 = v13
int64_t v12
int64_t var_88 = v12
int64_t v11
int64_t var_80 = v11
int64_t v10
int64_t var_78 = v10
int64_t v9
int64_t var_70 = v9
int64_t v8
int64_t var_68 = v8

if (*(arg3 + 0x28) s< 1)
    return 

FancyStringData* x20_1 = arg2
Mat4 const& x21_1 = arg1
int64_t x27_1 = 0
int64_t i = 0
v8.d = fconvert.s(0.5f)
v9.d = 0f

do
    void* x24_1 = *(arg3 + 0x20)
    uint64_t x8_3 = zx.q(*(x24_1 + x27_1))
    
    if (x8_3.d u> 3)
        pthread_kill(pthread_self(), 6)
        return UI2DrawText(XNoReturn()) __tailcall
    
    TextLine* entry_x3
    
    switch (x8_3)
        case 0
            if (*(x20_1 + 0x84) == 0f)
                void* x8_10 = x24_1 + x27_1
                *(x8_10 + 0x10)
                *(x8_10 + 0x14)
                arg1, entry_x3 = DrawLayoutString(x21_1, x20_1, x8_10 + 0x20, entry_x3)
            else
                *(x21_1 + 0x14)
                void* x24_2 = x24_1 + x27_1
                *(x24_2 + 0x10)
                *(x24_2 + 0x14)
                TextLine* x3 = DrawLayoutString(x21_1, x20_1, x24_2 + 0x20, entry_x3)
                *(x21_1 + 0x14)
                *(x24_2 + 0x10)
                *(x24_2 + 0x14)
                *(x20_1 + 0x84)
                arg1, entry_x3 = DrawLayoutString(x21_1, x20_1, x24_2 + 0x20, x3)
        case 1
            arg1, entry_x3 = MergeFancyFont(x20_1, *(x24_1 + x27_1 + 0x20))
        case 2
            if (zx.d(*(x20_1 + 0x50)) != 0)
                void* x8_5 = x24_1 + x27_1
                arg1, entry_x3 = DrawLayoutUI(x21_1, x8_5 + 0x10, zx.q(*(x8_5 + 0x20)))
        case 3
            int64_t x0_5
            SpriteColor* x5_1
            int128_t v2_2
            int128_t v5_1
            x0_5, x5_1, v2_2, v5_1 = SpriteColorSet(arg2 + 0x4d, arg2 + 0x28)
            int64_t var_98 = x0_5
            void* x24_3 = x24_1 + x27_1
            void* x9_2 = *(x24_3 + 0x30)
            XAsset* x26_2 = *(x24_3 + 0x20)
            float v0_2 = *(x20_1 + 0x2c)
            v10.d = *(x24_3 + 0x28)
            float v1_2 = *(x9_2 + 0x2c)
            v12.d = *(x24_3 + 0x10)
            v11.d = *(x24_3 + 0x14)
            int64_t* x8_6 = *x26_2
            v13.d = *(x9_2 + 0x18)
            v2_2.d = v0_2 * v1_2
            
            if (v1_2 != 0f)
                v5_1.d = v2_2.d
            else
                v5_1.d = v0_2
            
            if (x8_6 == 0)
                int128_t var_b0_1 = v5_1
                
                if (*(x26_2 + 8) == 0x15)
                    XString::GetString()
                    XTrace("Unpreloaded sound %s")
                
                x5_1, v2_2, v5_1 = AssetCatalogLoadAsset(x26_2, false, true)
                x8_6 = *x26_2
                x26_2 = *(x24_3 + 0x20)
                v5_1 = var_b0_1
            
            int64_t* x8_9 = **x8_6
            v2_2.q = *x8_9
            float v3_2 = *(x8_9 + 0xc) f* x8_9[1].d
            double v2_3
            v2_3.d = vcvt_f32_u32(v2_2).d f* v3_2
            v2_3:4.d = v2_3:4.d f* v3_2
            v2_3.d = v2_3.d f* v5_1.d
            v2_3:4.d = v2_3:4.d f* v5_1.d
            double var_a0 = v2_3
            arg1, entry_x3 = DrawTextImageNew(x26_2, &var_a0, &data_24b4968, x21_1, &var_98, x5_1)
    
    i += 1
    x27_1 += 0x40
while (i s< sx.q(*(arg3 + 0x28)))
