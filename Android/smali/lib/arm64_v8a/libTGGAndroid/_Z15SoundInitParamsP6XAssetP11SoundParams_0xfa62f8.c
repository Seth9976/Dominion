// 函数: _Z15SoundInitParamsP6XAssetP11SoundParams
// 地址: 0xfa62f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg2 + 0x18) = arg1
*(arg2 + 0x22) = 0
*(arg2 + 0x20) = 0
*(arg2 + 0xc) = 0x3f800000
int32_t x8 = *(V0 + 8)
int64_t x9 = *V0
*(arg2 + 0x23) = 0
*(arg2 + 0x30) = 0x4248000040a00000
*(arg2 + 0x2c) = x8
*(arg2 + 0x24) = x9
*(arg2 + 0x38) = 0
int64_t* x8_1 = *arg1
int32_t x8_2
int32_t* x21

if (x8_1 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    AssetCatalogLoadAsset(arg1, false, true)
    x21 = **arg1
    x8_2 = x21[0xc]
    
    if (x8_2 == 0)
        goto label_fa63dc
    
    goto label_fa63ac

x21 = *x8_1
x8_2 = x21[0xc]
float v0
float v1

if (x8_2 != 0)
label_fa63ac:
    int32_t x9_1 = x21[6]
    
    if (x9_1 == 1 || x9_1 != 0)
        goto label_fa63dc
    
    XAsset* var_230
    int32_t x1_1
    
    if (*(x21 + 0x38) == 0)
        x1_1 = 0
        
        if (x8_2 s>= 1)
        label_fa6414:
            int64_t i = 0
            void* x10_2 = &(&var_230)[zx.q(x1_1) * 2 + 1]
            
            do
                *x10_2 = 1
                int64_t x12_2 = *(*(x21 + 0x20) + (i << 3))
                i += 1
                *(x10_2 - 8) = x12_2
                x10_2 += 0x10
            while (i s< sx.q(x21[0xc]))
            
            x1_1 += i.d
    else
        x1_1 = 1
        int32_t var_228_1 = 1
        var_230 = arg1
        
        if (x8_2 s>= 1)
            goto label_fa6414
    
    *arg2 = *XWeightedArrayPick(&var_230, x1_1)
    v1 = *x21
    
    if (v1 != 0f)
        arg1, v0 = RandomRange(gRNG, 0f, v1)
    else
        v0 = 0f
else
label_fa63dc:
    *arg2 = arg1
    v1 = *x21
    
    if (v1 == 0f)
        v0 = 0f
    else
        arg1, v0 = RandomRange(gRNG, 0f, v1)
*(arg2 + 8) = v0
