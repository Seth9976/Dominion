// 函数: _Z25DefTypeRegistryInitForAppv
// 地址: 0xc90b50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gDefTypeLookupCount s< 1)
    return 

int64_t i = 0

do
    int64_t x22_1 = i << 3
    DefTypeInitializeFields(*(gDefTypeFastLookupArray + x22_1))
    DefMap* x1_1 = *(gDefTypeFastLookupArray + x22_1)
    uint64_t x0 = zx.q(*(x1_1 + 0x2c))
    
    if (x0.d != 0)
        AssetRegistrySetDefMap(x0, x1_1)
    
    i += 1
while (i s< sx.q(*gDefTypeLookupCount))
