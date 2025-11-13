// 函数: _Z31TextureMakeDatalessFailureAssetP14DefAssetHeader
// 地址: 0xfda42c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = XMalloc(0x50)
DefinitionFillBlockWithDefaults(x0, *macro_ptr_DefTextureImportData)
int128_t v0 = data_71c0c0
*x0 = 0x2000000020
*(x0 + 0x10) = v0
*(x0 + 0x3c) = 1
int32_t x0_1 = TextureFormatLinearImageSize(0x20, 0x20, 1)
int32_t* x0_2 = XCalloc(0x10)
*(x0 + 0x48) = x0_2
*x0_2 = x0_1
int64_t result = XMalloc(x0_1)
*(*(x0 + 0x48) + 8) = result
int32_t x12 = *(x0 + 4)

if (x12 s>= 1)
    int32_t x13_1 = *x0
    int32_t x8_1 = 0
    int32_t* x9_2 = *(*(x0 + 0x48) + 8)
    
    do
        if (x13_1 s>= 1)
            int32_t x12_1 = 0
            
            do
                int32_t x13_3
                
                if ((((x8_1 u>> 2) + (x12_1 u>> 2)) & 1) == 0)
                    x13_3 = -0xff01
                else
                    x13_3 = -0xff0100
                
                *x9_2 = x13_3
                x9_2 = &x9_2[1]
                x13_1 = *x0
                x12_1 += 1
            while (x12_1 s< x13_1)
            
            x12 = *(x0 + 4)
        
        x8_1 += 1
    while (x8_1 s< x12)

**arg1 = x0
return result
