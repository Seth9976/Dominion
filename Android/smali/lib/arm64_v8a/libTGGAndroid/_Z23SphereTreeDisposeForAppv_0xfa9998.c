// 函数: _Z23SphereTreeDisposeForAppv
// 地址: 0xfa9998
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = *(gSphereTreeGlobals + 8)

if (result != 0)
    int64_t* i
    
    do
        i = *result
        XFree(result)
        result = i
    while (i != 0)

*(gSphereTreeGlobals + 0x14) = 0
*gSphereTreeGlobals = 0
*(gSphereTreeGlobals + 8) = 0
return result
