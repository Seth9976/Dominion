// 函数: _Z19UIElementButtonDrawP6XAssetiRK11UITransform15ButtonDrawStatefPKc
// 地址: 0x10534c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x19 = arg6
int32_t x20 = arg4
int64_t result
float v0
result, v0 = DlgShowTransform(arg1, arg2, arg3, arg5)
int64_t* x8 = *arg1

if (x8 == 0)
    if (*(arg1 + 8) == 0x15)
        XString::GetString()
        XTrace("Unpreloaded sound %s")
    
    result, v0 = AssetCatalogLoadAsset(arg1, false, true)
    x8 = *arg1

int64_t x23 = sx.q(arg2)
int64_t x22_1 = **x8
UIElement* x21_1 = x22_1 + muls.dp.d(arg2, 0x178)
UITransform var_90
XAsset* x3

if (x20 == 1)
    x3 = *(x22_1 + x23 * 0x178 + 0x128)
    
    if (x3 != 0)
        result, v0 = UIStateDrawImage(x21_1, &data_24b7c48, &var_90, x3, nullptr, nullptr, nullptr)
    else
    label_10535a0:
        x3 = *(x22_1 + x23 * 0x178 + 0x88)
        
        if (x3 != 0)
            result, v0 =
                UIStateDrawImage(x21_1, &data_24b7c48, &var_90, x3, nullptr, nullptr, nullptr)
else if (x20 == 2)
    x3 = *(x22_1 + x23 * 0x178 + 0x130)
    
    if (x3 == 0)
        goto label_10535a0
    
    result, v0 = UIStateDrawImage(x21_1, &data_24b7c48, &var_90, x3, nullptr, nullptr, nullptr)
else
    if (x20 != 3)
        goto label_10535a0
    
    x3 = *(x22_1 + x23 * 0x178 + 0x138)
    
    if (x3 == 0)
        goto label_10535a0
    
    result, v0 = UIStateDrawImage(x21_1, &data_24b7c48, &var_90, x3, nullptr, nullptr, nullptr)

if (x19 != 0)
label_10535e0:
    
    if (zx.d(*x19) != 0)
        void* x8_12 = x22_1 + x23 * 0x178
        int32_t* x9_2
        
        if (x20 == 3)
            x9_2 = x8_12 + 0x140
        else
            x9_2 = x8_12 + 0xf0
        
        int32_t* x8_14
        
        if (x20 == 3)
            x8_14 = x8_12 + 0x144
        else
            x8_14 = x8_12 + 0xf4
        
        int32_t x9_3 = *x9_2
        int32_t var_98 = *x8_14
        int32_t var_94 = x9_3
        return UIElementDrawText(x21_1, &var_90, x19, &var_94, &var_98, false, v0)
else
    x19 = *(x22_1 + x23 * 0x178 + 0x120)
    
    if (x19 != 0)
        goto label_10535e0

return result
