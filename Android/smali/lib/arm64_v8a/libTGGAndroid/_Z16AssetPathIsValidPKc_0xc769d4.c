// 函数: _Z16AssetPathIsValidPKc
// 地址: 0xc769d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*arg1) != 0)
    char* x0 = strstr(arg1, "./")
    char* x0_2
    
    if (x0 == 0)
        x0_2 = strstr(arg1, ".\")
    
    if (x0 != 0 || x0_2 != 0)
        return 0
    
    char* s1 = strrchr(arg1, 0x2e)
    int32_t x0_5
    
    if (s1 != 0)
        x0_5 = strcasecmp(s1, ".xpack")
    
    if (s1 == 0 || x0_5 != 0)
        return zx.q(AssetTypeFromPath(arg1) != 0 ? 1 : 0)

return 1
