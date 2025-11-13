// 函数: _Z24ProcessMaterialOverridesP6XAssetP16TextureOverridesi
// 地址: 0xc9992c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = StructureDefGet(arg1)
int32_t* x8 = *x0

if (*x8 s>= 1 && arg3 s>= 1)
    int64_t i = 0
    
    do
        int64_t j = 0
        TextureOverrides* x27_1 = arg2
        void* x8_2 = *(x8 + 8) + i * 0x150
        int64_t x21_1 = *(x8_2 + 8)
        
        do
            if (strcmp(x21_1, *x27_1) == 0)
                *(x8_2 + 0x50) = j + 0xa
            
            j += 1
            x27_1 += 0x20
        while (zx.q(arg3) != j)
        
        x8 = *x0
        i += 1
    while (i s< sx.q(*x8))

return 1
