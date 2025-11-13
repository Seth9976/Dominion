// 函数: _Z26sNodeDeleteSelfAndChildrenP14SphereTreeNode
// 地址: 0xfa9a00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 == 0)
    return 

if (*(arg1 + 0x18) != 0)
    sNodeDeleteSelfAndChildren(*(arg1 + 0x18))
    sNodeDeleteSelfAndChildren(*(arg1 + 0x20))

int64_t x10_1 = *gSphereTreeGlobals
*(gSphereTreeGlobals + 0x14) -= 1
*arg1 = x10_1
*gSphereTreeGlobals = arg1
