// 函数: _Z22SphereTreeRemoveSphereR10SphereTreeP14SphereTreeNode
// 地址: 0xfaa108
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x9 = *(arg2 + 0x10)

if (x9 == 0)
    void* x10_2 = nullptr
    void* __offset(SphereTree, 0x8) x12_1 = arg1 + 8
    void* x11_3
    
    do
        x11_3 = x10_2
        x10_2 = *x12_1
        x12_1 = x10_2 + 0x18
        
        if (x10_2 == 0)
            break
    while (x10_2 != arg2)
    
    int64_t x10_3 = *x12_1
    
    if (x11_3 == 0)
        *(arg1 + 8) = x10_3
    else
        *(x11_3 + 0x18) = x10_3
else
    int64_t x11_1 = *arg1
    
    if (x11_1 == arg2)
        *arg1 = 0
    else
        void* x10_1 = x9[3]
        
        if (x9 == x11_1)
            if (x10_1 == arg2)
                x10_1 = x9[4]
            
            *arg1 = x10_1
            *(x10_1 + 0x10) = 0
            int64_t* x10_4 = *(arg2 + 0x10)
            int64_t x11_4 = *gSphereTreeGlobals
            *(gSphereTreeGlobals + 0x14) -= 1
            *x10_4 = x11_4
            *gSphereTreeGlobals = x10_4
        else
            if (x10_1 == arg2)
                x10_1 = x9[4]
            
            void** x11_2 = x9[2]
            int64_t x15_1 = *gSphereTreeGlobals
            int64_t x16_1 = x11_2[3]
            *(gSphereTreeGlobals + 0x14) -= 1
            *x9 = x15_1
            *gSphereTreeGlobals = x9
            int64_t x9_1
            
            x9_1 = x16_1 == x9 ? 0x18 : 0x20
            
            *(x11_2 + x9_1) = x10_1
            *(x10_1 + 0x10) = x11_2
            *(arg2 + 0x10) = 0

int64_t x10_5 = *gSphereTreeGlobals
*(gSphereTreeGlobals + 0x14) -= 1
*arg2 = x10_5
*gSphereTreeGlobals = arg2
