// 函数: _Z11sNodeCreateP14SphereTreeNodeS0_
// 地址: 0xfa9aa4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = *gSphereTreeGlobals
*(gSphereTreeGlobals + 0x14) += 1

if (result == 0)
    int64_t* x0_1 = XMalloc(8 + *(gSphereTreeGlobals + 0x10) * 0x28)
    *x0_1 = *(gSphereTreeGlobals + 8)
    int32_t x8_4 = *(gSphereTreeGlobals + 0x10)
    result = *gSphereTreeGlobals
    *(gSphereTreeGlobals + 8) = x0_1
    
    if (x8_4 s>= 1)
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
float v0
int32_t v1
float v2
int32_t v3
v0, v1, v2, v3 = SphereUnion(arg1, arg2)
*(result + 8) = v2
*(result + 0xc) = v3
*(result + 0x18) = arg1
*result = v0 * float.s(0x3f8ccccd)
*(result + 4) = v1
*(arg1 + 0x10) = result
*(result + 0x20) = arg2
*(arg2 + 0x10) = result
return result
