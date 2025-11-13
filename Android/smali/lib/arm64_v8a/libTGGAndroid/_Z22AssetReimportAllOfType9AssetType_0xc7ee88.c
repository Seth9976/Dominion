// 函数: _Z22AssetReimportAllOfType9AssetType
// 地址: 0xc7ee88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i_1
__builtin_memset(&i_1, 0, 0x14)
int64_t result = AssetCatalogGetAllAssetsOfType(arg1, &i_1)
int64_t* x8 = &i_1

while (true)
    int64_t* x8_1 = *x8
    
    if (x8_1 == 0)
        break
    
    x8 = &x8_1[1]
    
    if (*(*x8_1 + 0xc) - 3 u>= 2)
        pthread_kill(pthread_self(), 6)
        result = XNoReturn()
        break

void* i = i_1

while (i != 0)
    void* i_2 = i
    i = *(i + 8)
    result = XPooledFree(i_2, 0x18)

return result
