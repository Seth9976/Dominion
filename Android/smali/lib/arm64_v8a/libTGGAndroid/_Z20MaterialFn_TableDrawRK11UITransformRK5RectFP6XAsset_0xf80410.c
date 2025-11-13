// 函数: _Z20MaterialFn_TableDrawRK11UITransformRK5RectFP6XAsset
// 地址: 0xf80410
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
XAsset* x19 = arg3
UITransform const& x21 = arg1
int64_t* x8

if (arg3 == 0)
    x19 = AssetPtrGetNull(0x1d)
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19
else
    x8 = *x19
    
    if (x8 == 0)
        AssetCatalogLoadAsset(x19, false, true)
        x8 = *x19

*(x19 + 0x24) += 1
int64_t* x27 = *x8
uint64_t x8_1 = zx.q(x27[1].d)

if (x8_1.d s<= 0)
    *(x19 + 0x24) -= 1
    return 

int64_t x10_1 = *x27
int64_t x9_2 = 0
int32_t i_5 = 0
int32_t v0 = *V20
int32_t v1 = *(V20 + 4)
void var_870
uint64_t i_6

do
    void* x1_1 = x10_1 + x9_2 * 0x58
    
    if (not(*(x1_1 + 0x4c) f!= v0) && not(*(x1_1 + 0x50) f!= v1))
        if (*(x10_1 + x9_2 * 0x58 + 0x40) f== 0f)
            goto label_f80534
        
        goto label_f804e8
    
    void* x1_5 = &var_870 + (sx.q(i_5) << 4)
    i_5 += 1
    *x1_5 = 2
    *(x1_5 + 4) = x9_2.d
    *(x1_5 + 0xc) = 4
    int32_t i
    
    if (*(x10_1 + x9_2 * 0x58 + 0x40) f!= 0f)
    label_f804e8:
        i_6 = zx.q(i_5 + 1)
        void* x1_3 = &var_870 + (sx.q(i_5) << 4)
        *x1_3 = 2
        *(x1_3 + 4) = x9_2.d
        *(x1_3 + 0xc) = 5
        i = *(x10_1 + x9_2 * 0x58 + 0x28)
        
        if (i s> 0)
        label_f80548:
            uint64_t x2 = zx.q(i - 1)
            int64_t i_7 = sx.q(i_6.d)
            
            if (i == 1)
                i_6 = i_7
            label_f8059c:
                void var_868
                void* x3_2 = &var_868 + (i_6 << 4)
                
                do
                    *(x3_2 - 8) = 1
                    *(x3_2 - 4) = x9_2.d
                    *x3_2 = x2.d
                    x3_2 += 0x10
                    x2 = zx.q(x2.d + 1)
                    i_6 += 1
                while (i != x2.d)
            else
                int64_t x4_1 = x2 + 1
                x2 = x4_1 & 0x1fffffffe
                int64_t x3_1 = 0
                i_6 = x2 + i_7
                void var_860
                void* x5_1 = &var_860 + (i_7 << 4)
                
                do
                    int32_t x6_1 = x3_1.d + 1
                    *(x5_1 - 8) = x3_1.d
                    x3_1 += 2
                    *(x5_1 - 0x10) = 1
                    *(x5_1 - 0xc) = x9_2.d
                    *x5_1 = 1
                    *(x5_1 + 4) = x9_2.d
                    *(x5_1 + 8) = x6_1
                    x5_1 += 0x20
                while (x2 != x3_1)
                
                if (x4_1 != x2)
                    goto label_f8059c
    else
    label_f80534:
        i_6 = zx.q(i_5)
        i = *(x10_1 + x9_2 * 0x58 + 0x28)
        
        if (i s> 0)
            goto label_f80548
    void* x1 = &var_870 + (sx.q(i_6.d) << 4)
    *x1 = 0
    *(x1 + 4) = x9_2.d
    x9_2 += 1
    i_5 = i_6.d + 1
while (x9_2 != x8_1)

if ((i_6.d & 0x80000000) == 0)
    uint64_t i_4 = zx.q(i_5)
    v8.d = 0f
    void* x24_1 = &var_870
    uint64_t i_3 = i_4
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    uint64_t i_1
    
    do
        if (*x24_1 == 0)
            arg1, v0_1, v1_1, v2_1, v3_1 = UILayoutExtentsBG(data_24218f0)
        else
            arg1, v0_1, v1_1, v2_1, v3_1 = UILayoutExtentsBG(data_24218f8)
        
        v0_1.d = *(x21 + 0xc)
        v1_1.d = v3_1.d f- v1_1.d
        i_1 = i_3
        i_3 -= 1
        x24_1 += 0x10
        v0_1.d = v1_1.d f* v0_1.d
        v8.d = v8.d f+ v0_1.d
    while (i_1 != 1)
    
    if ((i_6.d & 0x80000000) == 0)
        int64_t i_2 = i_4 + 1
        void* x26_1 = &var_870 + (zx.q(i_5) << 4) - 0x10
        
        do
            v1_1 = *(x21 + 0x10)
            int64_t x24_2 = *x27
            int32_t x8_4 = *x26_1
            int32_t fp_1 = *(x26_1 + 4)
            int128_t var_8d0 = *x21
            int128_t var_8c0_1 = v1_1
            int64_t fp_2 = sx.q(fp_1)
            MaterialFnItem* x22_1 = x24_2 + fp_2 * 0x58
            int128_t var_890_1 = *(x21 + 0x40)
            int128_t var_880_1 = *(x21 + 0x50)
            int128_t var_8b0_1 = *(x21 + 0x20)
            int128_t var_8a0_1 = *(x21 + 0x30)
            
            if (x8_4 == 0)
                float v1_3
                float v3_3
                v1_3, v3_3 = UILayoutExtentsBG(data_24218f0)
                v8.d = v8.d f- (v3_3 - v1_3) * var_8d0:0xc.d
                var_8d0.d = *arg2
                var_8d0:4.d = v8.d f+ *(arg2 + 4)
                
                if ((zx.d(data_2421920) & 1) == 0 && __cxa_guard_acquire(&data_2421920) != 0)
                    data_24218c8 = UIStateLoad(data_24218f0)
                    __cxa_guard_release(&data_2421920)
                
                if ((zx.d(data_2421928) & 1) == 0 && __cxa_guard_acquire(&data_2421928) != 0)
                    data_24218cc = UILayoutGetElementIndex(data_24218f0, "imgTexture")
                    __cxa_guard_release(&data_2421928)
                
                if ((zx.d(data_2421930) & 1) == 0 && __cxa_guard_acquire(&data_2421930) != 0)
                    data_24218d0 = UILayoutGetElementIndex(data_24218f0, "txtLayerName")
                    __cxa_guard_release(&data_2421930)
                
                if ((zx.d(data_2421938) & 1) == 0 && __cxa_guard_acquire(&data_2421938) != 0)
                    data_24218d4 = UILayoutGetElementIndex(data_24218f0, "txtBlend")
                    __cxa_guard_release(&data_2421938)
                
                if ((zx.d(data_2421940) & 1) == 0 && __cxa_guard_acquire(&data_2421940) != 0)
                    data_24218d8 = UILayoutGetElementIndex(data_24218f0, "txtVisible")
                    __cxa_guard_release(&data_2421940)
                
                MaterialFnItem_Name(x22_1)
                UIStateOverrideText(data_24218c8, data_24218d0, XString::operator char const*(), 
                    true)
                MaterialFnItem_Blend(x22_1)
                UIStateOverrideText(data_24218c8, data_24218d4, XString::operator char const*(), 
                    true)
                UIStateOverrideClear(data_24218c8, data_24218cc)
                int32_t x8_12 = *x22_1
                
                if (x8_12 == 4)
                    if ((zx.d(data_2421950) & 1) == 0 && __cxa_guard_acquire(&data_2421950) != 0)
                        data_2421948 = AssetPtrFromPath("sys/TextureFn_Circle.materialFn", 0x1d)
                        __cxa_guard_release(&data_2421950)
                    
                    int64_t* x22_4 = data_2421948
                    int64_t* x8_16
                    
                    if (x22_4 == 0)
                        x22_4 = AssetPtrGetNull(0x1d)
                        x8_16 = *x22_4
                        
                        if (x8_16 == 0)
                            AssetCatalogLoadAsset(x22_4, false, true)
                            x8_16 = *x22_4
                    else
                        x8_16 = *x22_4
                        
                        if (x8_16 == 0)
                            AssetCatalogLoadAsset(x22_4, false, true)
                            x8_16 = *x22_4
                    
                    *(x22_4 + 0x24) += 1
                    XAsset* x0_23 = MaterialFn_EmitMaterial_Internal(*x8_16)
                    *(x22_4 + 0x24) -= 1
                    UIStateOverrideMaterial(data_24218c8, data_24218cc, x0_23)
                else if (x8_12 == 1)
                    uint32_t x22_3 = data_24218c8
                    int32_t x23_4 = data_24218cc
                    int64_t var_8e0 = SpriteColorNormal(x24_2 + fp_2 * 0x58 + 0x18)
                    UIStateOverrideDrawColor(x22_3, x23_4, &var_8e0)
                else if (x8_12 != 0)
                    UIStateOverrideElementHidden(data_24218c8, data_24218cc, true)
                else
                    UIStateOverrideImage(data_24218c8, data_24218cc, *(x24_2 + fp_2 * 0x58 + 0x10))
                
                UIStateOverrideElementHidden(data_24218c8, data_24218d8, *(x24_2 + fp_2 * 0x58 + 4))
                UIStateDraw(data_24218c8, &var_8d0, fconvert.s(1f))
                XString::~XString()
            else
                float v1_2
                float v3_2
                v1_2, v3_2 = UILayoutExtentsBG(data_24218f8)
                v8.d = v8.d f- (v3_2 - v1_2) * var_8d0:0xc.d
                var_8d0.d = *arg2
                var_8d0:4.d = v8.d f+ *(arg2 + 4)
                
                if ((zx.d(data_2421958) & 1) == 0 && __cxa_guard_acquire(&data_2421958) != 0)
                    data_24218dc = UIStateLoad(data_24218f8)
                    __cxa_guard_release(&data_2421958)
                
                if ((zx.d(data_2421960) & 1) == 0 && __cxa_guard_acquire(&data_2421960) != 0)
                    data_24218e0 = UILayoutGetElementIndex(data_24218f8, "txtLayerName")
                    __cxa_guard_release(&data_2421960)
                
                MaterialFnEntry_Text(x26_1, x22_1)
                UIStateOverrideText(data_24218dc, data_24218e0, XString::operator char const*(), 
                    true)
                UIStateDraw(data_24218dc, &var_8d0, fconvert.s(1f))
            
            arg1, v0_1, v1_1, v2_1, v3_1 = XString::~XString()
            i_2 -= 1
            x26_1 -= 0x10
        while (i_2 s> 1)

if (x19 != 0)
    *(x19 + 0x24) -= 1
