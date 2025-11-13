// 函数: _Z19SphereTreeAddSphereR10SphereTreeRK6Spherei
// 地址: 0xfa9c40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = *gSphereTreeGlobals
*(gSphereTreeGlobals + 0x14) += 1
int128_t v0

if (result == 0)
    int64_t* x0_1
    x0_1, v0 = XMalloc(8 + *(gSphereTreeGlobals + 0x10) * 0x28)
    *x0_1 = *(gSphereTreeGlobals + 8)
    int32_t x9_2 = *(gSphereTreeGlobals + 0x10)
    result = *gSphereTreeGlobals
    *(gSphereTreeGlobals + 8) = x0_1
    
    if (x9_2 s>= 1)
        int64_t i = 0
        void** result_2 = &x0_1[1]
        
        do
            void** result_1 = result_2
            *result_2 = result
            result_2 = &result_2[5]
            i += 1
            result = result_1
        while (i s< sx.q(*(gSphereTreeGlobals + 0x10)))
        
        result = result_2 - 0x28
    
    *gSphereTreeGlobals = result

*gSphereTreeGlobals = *result
v0 = *arg2
*(result + 0x18) = 0
*(result + 0x1c) = arg3
*result = v0
*(result + 0x18) = *(arg1 + 8)
*(arg1 + 8) = result
*(result + 0x10) = 0
return result
