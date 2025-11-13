// 函数: _Z26AssetCatalogForceReloadAllv
// 地址: 0xc761bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x9 = 0
int64_t* x23 = *gpAssetAppData
XString* i_1

while (true)
    i_1 = *(*x23 + (zx.q(x9) << 3))
    
    if (i_1 != 0)
        break
    
    x9 += 1
    
    if (x9 u> x23[1].d)
        return 

int64_t* x20_1

for (XString* i = *(i_1 + 0x10); i == 0; i = *(i_1 + 0x10))
    int64_t x0 = XHashKey(i_1)
    int32_t x8_1 = x23[1].d
    int32_t x9_2 = (x8_1 & x0.d) + 1
    
    while (x9_2 u<= x8_1)
        i = *(*x23 + (zx.q(x9_2) << 3))
        x9_2 += 1
        
        if (i != 0)
            goto label_c76240
    
    i = nullptr
    x20_1 = *(i_1 + 8)
    
    if (*(x20_1 + 0x24) s<= 0)
    label_c76254:
        
        if (*(x20_1 + 0xc) != 3 && *x20_1 != 0 && (AssetRequiresReimport(x20_1).d & 1) != 0)
            if (*x20_1 != 0)
                DefinitionPurgeAsset(x20_1)
                *x20_1 = 0
            
            *(x20_1 + 0xc) = 0
            XString::operator=(&x20_1[2])
            x20_1[3] = 0
            x20_1[4].d = 0
    
label_c762b4:
    
    if (i == 0)
        return 
    
    x23 = *gpAssetAppData
    i_1 = i

label_c76240:
x20_1 = *(i_1 + 8)

if (*(x20_1 + 0x24) s> 0)
    goto label_c762b4

goto label_c76254
