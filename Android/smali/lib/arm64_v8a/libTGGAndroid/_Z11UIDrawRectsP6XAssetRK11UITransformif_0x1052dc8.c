// 函数: _Z11UIDrawRectsP6XAssetRK11UITransformif
// 地址: 0x1052dc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v10
int64_t var_70 = v10
int64_t v9
int64_t var_60 = v9
int64_t* x8 = *arg1
XAsset* x19 = arg1
int64_t* x25

if (x8 == 0)
    if (*(x19 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(x19, false, true)
    x25 = **x19
    
    if (x25[1].d s>= 1)
        goto label_1052e5c
    
    return 

x25 = *x8

if (x25[1].d s< 1)
    return 

label_1052e5c:
UITransform var_d0
float var_c8
int32_t var_68
int32_t var_64

if (arg3 == 0xffffffff)
    int64_t x24_2 = 0
    int64_t i = 0
    v9.d = fconvert.s(0.5f)
    v10.d = fconvert.s(-0.5f)
    
    do
        void* x26_2 = *x25
        UIElement* x23_1 = x26_2 + x24_2
        float v0_3
        arg1, v0_3 = DlgShowTransform(x19, i.d, arg2, arg4)
        
        if (zx.d(*(x23_1 + 0x44)) == 0)
            int32_t x8_15 = *(x23_1 + 4)
            
            if (x8_15 == 1)
                arg1, v0_3 = UIStateDrawImage(x23_1, &data_24b7c48, &var_d0, nullptr, nullptr, 
                    nullptr, nullptr)
                x8_15 = *(x23_1 + 4)
            
            if (x8_15 == 3)
                void* x8_16 = x26_2 + x24_2
                v0_3.b = *(x8_16 + 0xf3)
                v0_3 = var_c8 * float.s(v0_3)
                float v2_2
                
                if (v0_3 < 0f)
                    v2_2 = v10.d
                else
                    v2_2 = v9.d
                
                int32_t x10_9 = (0xffffff
                    & ((0xff00ffff & zx.d(*(x8_16 + 0xf0))) | zx.d(*(x8_16 + 0xf2)) << 0x10))
                    | zx.d(vcvts_s32_f32(v0_3 + v2_2)) << 0x18
                char* x2_5 = *(x8_16 + 0xe0)
                var_64 = x10_9
                v0_3.b = *(x8_16 + 0xf7)
                v0_3 = var_c8 * float.s(v0_3)
                float v1_2
                
                if (v0_3 < 0f)
                    v1_2 = v10.d
                else
                    v1_2 = v9.d
                
                v0_3 = v0_3 + v1_2
                var_68 = (0xffffff
                    & ((0xff00ffff & zx.d(*(x8_16 + 0xf4))) | zx.d(*(x8_16 + 0xf6)) << 0x10))
                    | zx.d(vcvts_s32_f32(v0_3)) << 0x18
                UIElementDrawText(x23_1, &var_d0, x2_5, &var_64, &var_68, false, v0_3)
        
        i += 1
        x24_2 += 0x178
    while (i s< sx.q(x25[1].d))
else
    int64_t x26_1 = 0
    int64_t i_1 = 0
    v9.d = fconvert.s(0.5f)
    v10.d = fconvert.s(-0.5f)
    
    do
        void* x27_1 = *x25
        UIElement* x24_1 = x27_1 + x26_1
        float v0
        arg1, v0 = DlgShowTransform(x19, i_1.d, arg2, arg4)
        
        if (zx.d(*(x24_1 + 0x44)) == 0)
            int32_t x8_8 = *(x24_1 + 4)
            
            if (x8_8 != 1)
                goto label_1052f80
            
            int32_t x8_10 = *(x27_1 + x26_1 + 0x40)
            
            if (x8_10 == 0 || (x8_10 & arg3) != 0)
                arg1, v0 = UIStateDrawImage(x24_1, &data_24b7c48, &var_d0, nullptr, nullptr, 
                    nullptr, nullptr)
                x8_8 = *(x24_1 + 4)
            label_1052f80:
                
                if (x8_8 == 3)
                    void* x8_12 = x27_1 + x26_1
                    int32_t x9_4 = *(x8_12 + 0x40)
                    
                    if (x9_4 == 0xffffffff || (x9_4 & arg3) != 0)
                        v0.b = *(x8_12 + 0xf3)
                        v0 = var_c8 * float.s(v0)
                        float v2_1
                        
                        if (v0 < 0f)
                            v2_1 = v10.d
                        else
                            v2_1 = v9.d
                        
                        int32_t x10_3 = (0xffffff &
                            ((0xff00ffff & zx.d(*(x8_12 + 0xf0))) | zx.d(*(x8_12 + 0xf2)) << 0x10))
                            | zx.d(vcvts_s32_f32(v0 + v2_1)) << 0x18
                        char* x2 = *(x8_12 + 0xe0)
                        var_64 = x10_3
                        v0.b = *(x8_12 + 0xf7)
                        v0 = var_c8 * float.s(v0)
                        float v1_1
                        
                        if (v0 < 0f)
                            v1_1 = v10.d
                        else
                            v1_1 = v9.d
                        
                        v0 = v0 + v1_1
                        var_68 = (0xffffff &
                            ((0xff00ffff & zx.d(*(x8_12 + 0xf4))) | zx.d(*(x8_12 + 0xf6)) << 0x10))
                            | zx.d(vcvts_s32_f32(v0)) << 0x18
                        UIElementDrawText(x24_1, &var_d0, x2, &var_64, &var_68, false, v0)
        
        i_1 += 1
        x26_1 += 0x178
    while (i_1 s< sx.q(x25[1].d))
