// 函数: _Z15RTreeRemoveNodeR5RTreeP9RTreeNode
// 地址: 0xfa3edc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x10_5 = *arg1

if (x10_5 == arg2)
    *arg1 = 0
else
    int64_t* x9_1 = *(arg2 + 0x18)
    
    if (x9_1 == 0)
        void* x10_1 = nullptr
        void* __offset(RTree, 0x8) x12_1 = arg1 + 8
        void* x11_2
        
        do
            x11_2 = x10_1
            x10_1 = *x12_1
            x12_1 = x10_1 + 0x20
            
            if (x10_1 == 0)
                break
        while (x10_1 != arg2)
        
        int64_t x10_2 = *x12_1
        
        if (x11_2 == 0)
            *(arg1 + 8) = x10_2
        else
            *(x11_2 + 0x20) = x10_2
    else
        if (x9_1 == x10_5)
            void* x9_4 = *(x10_5 + 0x20)
            
            if (x9_4 == arg2)
                x9_4 = *(x10_5 + 0x28)
            
            *arg1 = x9_4
            *(x9_4 + 0x18) = 0
            int64_t* x10_3 = *(arg2 + 0x18)
            int64_t x11_3 = *gRTreeGlobals
            *(gRTreeGlobals + 0x14) -= 1
            *x10_3 = x11_3
            *gRTreeGlobals = x10_3
        else
            void* x10 = x9_1[4]
            
            if (x10 == arg2)
                x10 = x9_1[5]
            
            void** x11_1 = x9_1[3]
            int64_t x15_1 = *gRTreeGlobals
            int64_t x16_1 = x11_1[4]
            *(gRTreeGlobals + 0x14) -= 1
            *x9_1 = x15_1
            *gRTreeGlobals = x9_1
            int64_t x9_2
            
            x9_2 = x16_1 == x9_1 ? 0x20 : 0x28
            
            *(x11_1 + x9_2) = x10
            *(x10 + 0x18) = x11_1
        
        *(arg2 + 0x18) = 0

int64_t x10_4 = *gRTreeGlobals
*(gRTreeGlobals + 0x14) -= 1
*arg2 = x10_4
*gRTreeGlobals = arg2
