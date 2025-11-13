// 函数: _Z22AssetUtilDisposeForAppv
// 地址: 0xc7de54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *gpAssetUtilData

while (x20[2].d != 0)
    void* x0_1 = *x20
    void* x8_1 = *(x0_1 + 8)
    *x20 = x8_1
    void* x8_2
    
    if (x8_1 == 0)
        x8_2 = &x20[1]
    else
        x8_2 = x8_1 + 0x10
    
    *x8_2 = 0
    void* x21_1 = *x0_1
    x20[2].d -= 1
    XPooledFree(x0_1, 0x18)
    *(x21_1 + 0x24) -= 1
    x20 = *gpAssetUtilData

void* result = *x20
void* i

if (result == 0)
    __builtin_memset(x20, 0, 0x14)
    i = *x20
    int64_t* x0_2
    
    if (i != 0)
    label_c7df08:
        
        do
            void* i_2 = i
            i = *(i + 8)
            XPooledFree(i_2, 0x18)
        while (i != 0)
        
        x0_2 = *gpAssetUtilData
    else
    label_c7df24:
        x0_2 = x20
    
    __builtin_memset(x20, 0, 0x14)
    result = XPooledFree(x0_2, 0x18)
    *gpAssetUtilData = 0
else
    void* i_1
    
    do
        i_1 = *(result + 8)
        XPooledFree(result, 0x18)
        result = i_1
    while (i_1 != 0)
    int64_t* x8_8 = *gpAssetUtilData
    __builtin_memset(x20, 0, 0x14)
    x20 = x8_8
    
    if (x8_8 != 0)
        i = *x20
        
        if (i == 0)
            goto label_c7df24
        
        goto label_c7df08
return result
