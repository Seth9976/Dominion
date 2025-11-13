// 函数: _Z30SpriteFindOrAddMaterialInCacheP6XAsset
// 地址: 0xfc8d04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8_1 = *gpSpriteAppData + 0x48

while (true)
    int64_t* x8_2 = *x8_1
    
    if (x8_2 == 0)
        break
    
    int64_t* x9_1 = *x8_2
    x8_1 = &x8_2[1]
    
    if (*x9_1 == arg1)
        return &x9_1[1]

XAsset** x0 = XPooledCalloc(0x1a28)
void* result = &x0[1]
*x0 = arg1
MaterialSimpleStateBind(result, arg1)
void* x20_1 = *gpSpriteAppData
XAsset*** x0_2 = XPooledCalloc(0x18)
*x0_2 = x0
x0_2[1] = 0
x0_2[2] = *(x20_1 + 0x50)
void* x8_4 = *(x20_1 + 0x50)
void* x8_5

if (x8_4 == 0)
    x8_5 = x20_1 + 0x48
else
    x8_5 = x8_4 + 8

*x8_5 = x0_2
int32_t x8_6 = *(x20_1 + 0x58)
*(x20_1 + 0x50) = x0_2
*(x20_1 + 0x58) = x8_6 + 1
return result
