// 函数: _Z17SphereTreeDisposeR10SphereTree
// 地址: 0xfa9a4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = sNodeDeleteSelfAndChildren(*arg1)
void** i_1 = *(arg1 + 8)

if (i_1 != 0)
    void** i_2 = *gSphereTreeGlobals
    void** i
    
    do
        i_1[3] = i_1
        *(gSphereTreeGlobals + 0x14) -= 1
        *i_1 = i_2
        *gSphereTreeGlobals = i_1
        i = *(arg1 + 8)
        i_2 = i_1
        i_1 = i
    while (i != 0)

*arg1 = 0
*(arg1 + 8) = 0
return result
