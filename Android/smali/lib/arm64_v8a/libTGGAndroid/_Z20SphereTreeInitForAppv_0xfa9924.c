// 函数: _Z20SphereTreeInitForAppv
// 地址: 0xfa9924
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*gSphereTreeGlobals = 0
*(gSphereTreeGlobals + 8) = 0
*(gSphereTreeGlobals + 0x10) = 0x400
int64_t* result = XMalloc(0xa008)
*result = *(gSphereTreeGlobals + 8)
int32_t x9 = *(gSphereTreeGlobals + 0x10)
void* x8_1 = *gSphereTreeGlobals
*(gSphereTreeGlobals + 8) = result

if (x9 s>= 1)
    int64_t i = 0
    void* x9_1 = &result[1]
    
    do
        void* x11_1 = x9_1
        *x9_1 = x8_1
        x9_1 += 0x28
        i += 1
        x8_1 = x11_1
    while (i s< sx.q(*(gSphereTreeGlobals + 0x10)))
    
    x8_1 = x9_1 - 0x28

*gSphereTreeGlobals = x8_1
return result
