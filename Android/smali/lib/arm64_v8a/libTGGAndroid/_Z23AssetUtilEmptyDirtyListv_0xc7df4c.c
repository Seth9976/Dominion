// 函数: _Z23AssetUtilEmptyDirtyListv
// 地址: 0xc7df4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x19 = *gpAssetUtilData

while (x19[2].d != 0)
    void* x0_1 = *x19
    void* x8_1 = *(x0_1 + 8)
    *x19 = x8_1
    void* x8_2
    
    if (x8_1 == 0)
        x8_2 = &x19[1]
    else
        x8_2 = x8_1 + 0x10
    
    *x8_2 = 0
    void* x21_1 = *x0_1
    x19[2].d -= 1
    XPooledFree(x0_1, 0x18)
    *(x21_1 + 0x24) -= 1
    x19 = *gpAssetUtilData

void* result = *x19

if (result != 0)
    void* i
    
    do
        i = *(result + 8)
        XPooledFree(result, 0x18)
        result = i
    while (i != 0)

__builtin_memset(x19, 0, 0x14)
return result
