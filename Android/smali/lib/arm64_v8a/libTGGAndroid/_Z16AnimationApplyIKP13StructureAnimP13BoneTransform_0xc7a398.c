// 函数: _Z16AnimationApplyIKP13StructureAnimP13BoneTransform
// 地址: 0xc7a398
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *arg1
StructureAnim* x20 = arg1
void*** x10

if (x19 == 0)
    arg1 = AssetPtrGetNull(2)
    x19 = arg1
    x10 = *x19
    
    if (x10 == 0)
        arg1 = AssetCatalogLoadAsset(x19, false, true)
        x10 = *x19
else
    x10 = *x19
    
    if (x10 == 0)
        arg1 = AssetCatalogLoadAsset(x19, false, true)
        x10 = *x19

*(x19 + 0x24) += 1
int32_t x9 = *(x20 + 0x348)
int32_t x8_2

if (x9 s< 1)
    x8_2 = 0
    *(x19 + 0x24) -= 1
else
    int64_t i = 0
    x8_2 = 0
    Vec3* x22_1 = x20 + 0x20c
    void* x24_1 = **x10
    
    do
        if (zx.d(*(x22_1 - 0x124)) != 0)
            arg1 = IK2(arg1, x22_1 - 0x1c, x22_1, x22_1 - 0x120, *(x22_1 - 0x20), *(x24_1 + 0x18), 
                arg2, *(x20 + 0x20))
            x9 = *(x20 + 0x348)
            x8_2 = 1
        
        i += 1
        x22_1 += 0x130
    while (i s< sx.q(x9))
    
    if (x19 != 0)
        *(x19 + 0x24) -= 1

return zx.q(x8_2) & 1
