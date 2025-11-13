// 函数: _Z22SphereTreeUpdateSphereR10SphereTreeP14SphereTreeNodeRK6Sphere
// 地址: 0xfaa20c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg2 = *arg3
void* __offset(SphereTreeNode, 0x10) x22_1 = arg2 + 0x10
Sphere* x21 = *x22_1

if (x21 == 0 || (SphereContainsSphere(x21, arg2).d & 1) != 0)
    return 

int64_t* x8_1 = *(arg2 + 0x10)
void* x9_1 = x8_1[3]

if (x21 == *arg1)
    if (x9_1 == arg2)
        x9_1 = x8_1[4]
    
    x22_1 = x9_1 + 0x10
    int64_t x12_1 = *gSphereTreeGlobals
    *(gSphereTreeGlobals + 0x14) -= 1
    *x8_1 = x12_1
    *gSphereTreeGlobals = x8_1
    *arg1 = x9_1
else
    if (x9_1 == arg2)
        x9_1 = x8_1[4]
    
    void** x10_2 = x8_1[2]
    int64_t x15_1 = *gSphereTreeGlobals
    bool cond:0_1 = x10_2[3] == x8_1
    *(gSphereTreeGlobals + 0x14) -= 1
    *x8_1 = x15_1
    *gSphereTreeGlobals = x8_1
    int64_t x8_2
    
    x8_2 = cond:0_1 ? 0x18 : 0x20
    
    *(x10_2 + x8_2) = x9_1
    *(x9_1 + 0x10) = x10_2

*x22_1 = 0
*(arg2 + 0x18) = *(arg1 + 8)
*(arg1 + 8) = arg2
*(arg2 + 0x10) = 0
