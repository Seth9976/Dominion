// 函数: _Z13XPooledCalloci
// 地址: 0x1061910
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gAllocatorArray != 0)
    if (arg1 s< 0x11)
        goto label_1061990
    
    goto label_1061934

AllocatorInitForApp()
int64_t* x20

if (arg1 s>= 0x11)
label_1061934:
    
    if (arg1 s< 0x21)
        x20 = *gAllocatorArray + (1 << 5)
        *(x20 + 0x14) += 1
    else if (arg1 s< 0x41)
        x20 = *gAllocatorArray + (2 << 5)
        *(x20 + 0x14) += 1
    else if (arg1 s< 0x81)
        x20 = *gAllocatorArray + (3 << 5)
        *(x20 + 0x14) += 1
    else if (arg1 s< 0x101)
        x20 = *gAllocatorArray + (4 << 5)
        *(x20 + 0x14) += 1
    else if (arg1 s< 0x201)
        x20 = *gAllocatorArray + (5 << 5)
        *(x20 + 0x14) += 1
    else if (arg1 s<= 0x400)
        x20 = *gAllocatorArray + (6 << 5)
        *(x20 + 0x14) += 1
    else
        uint64_t x8_1 = *gAllocatorArray
        bool cond:0_1 = *(x8_1 + 0xf8) == 0xffffffff
        *(x8_1 + 0xf4) += 1
        
        if (cond:0_1)
            return XCalloc(arg1) __tailcall
        
        x20 = x8_1 + 0xe0
else
label_1061990:
    x20 = *gAllocatorArray + (0 << 5)
    *(x20 + 0x14) += 1

void* x0_2 = *x20

if (x0_2 == 0)
    int64_t x21_1 = sx.q(x20[3].d)
    int64_t* x0_1 = XMalloc(8 + x21_1.d * x20[2].d)
    *x0_1 = x20[1]
    int32_t x9_4 = x20[2].d
    x0_2 = *x20
    x20[1] = x0_1
    
    if (x9_4 s>= 1)
        int64_t i = 0
        void* x8_7 = &x0_1[1]
        
        do
            *x8_7 = x0_2
            i += 1
            x0_2 = x8_7
            x8_7 += x21_1
        while (i s< sx.q(x20[2].d))
        
        x0_2 = x8_7 - x21_1
    
    *x20 = x0_2

*x20 = *x0_2
return memset(x0_2, 0, sx.q(arg1)) __tailcall
