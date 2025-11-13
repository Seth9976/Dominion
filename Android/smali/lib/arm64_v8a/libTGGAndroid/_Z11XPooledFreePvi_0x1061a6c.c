// 函数: _Z11XPooledFreePvi
// 地址: 0x1061a6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gAllocatorArray != 0)
    if (arg2 s< 0x11)
        goto label_1061af0
    
    goto label_1061a94

AllocatorInitForApp()
void** x8_2

if (arg2 s>= 0x11)
label_1061a94:
    
    if (arg2 s< 0x21)
        x8_2 = *gAllocatorArray + (1 << 5)
        *(x8_2 + 0x14) -= 1
    else if (arg2 s< 0x41)
        x8_2 = *gAllocatorArray + (2 << 5)
        *(x8_2 + 0x14) -= 1
    else if (arg2 s< 0x81)
        x8_2 = *gAllocatorArray + (3 << 5)
        *(x8_2 + 0x14) -= 1
    else if (arg2 s< 0x101)
        x8_2 = *gAllocatorArray + (4 << 5)
        *(x8_2 + 0x14) -= 1
    else if (arg2 s< 0x201)
        x8_2 = *gAllocatorArray + (5 << 5)
        *(x8_2 + 0x14) -= 1
    else if (arg2 s<= 0x400)
        x8_2 = *gAllocatorArray + (6 << 5)
        *(x8_2 + 0x14) -= 1
    else
        void* x8_1 = *gAllocatorArray
        bool cond:0_1 = *(x8_1 + 0xf8) == 0xffffffff
        *(x8_1 + 0xf4) -= 1
        
        if (cond:0_1)
            return XFree(arg1) __tailcall
        
        x8_2 = x8_1 + 0xe0
else
label_1061af0:
    x8_2 = *gAllocatorArray + (0 << 5)
    *(x8_2 + 0x14) -= 1

*arg1 = *x8_2
*x8_2 = arg1
