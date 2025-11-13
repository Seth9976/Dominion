// 函数: _Z13XPooledMalloci
// 地址: 0x10617bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*gAllocatorArray != 0)
    if (arg1 s< 0x11)
        goto label_106183c
    
    goto label_10617e0

AllocatorInitForApp()
int64_t* x19_1

if (arg1 s>= 0x11)
label_10617e0:
    
    if (arg1 s< 0x21)
        x19_1 = *gAllocatorArray + (1 << 5)
        *(x19_1 + 0x14) += 1
    else if (arg1 s< 0x41)
        x19_1 = *gAllocatorArray + (2 << 5)
        *(x19_1 + 0x14) += 1
    else if (arg1 s< 0x81)
        x19_1 = *gAllocatorArray + (3 << 5)
        *(x19_1 + 0x14) += 1
    else if (arg1 s< 0x101)
        x19_1 = *gAllocatorArray + (4 << 5)
        *(x19_1 + 0x14) += 1
    else if (arg1 s< 0x201)
        x19_1 = *gAllocatorArray + (5 << 5)
        *(x19_1 + 0x14) += 1
    else if (arg1 s<= 0x400)
        x19_1 = *gAllocatorArray + (6 << 5)
        *(x19_1 + 0x14) += 1
    else
        uint64_t x8_1 = *gAllocatorArray
        bool cond:0_1 = *(x8_1 + 0xf8) == 0xffffffff
        *(x8_1 + 0xf4) += 1
        
        if (cond:0_1)
            return XMalloc(arg1) __tailcall
        
        x19_1 = x8_1 + 0xe0
else
label_106183c:
    x19_1 = *gAllocatorArray + (0 << 5)
    *(x19_1 + 0x14) += 1

void* result = *x19_1

if (result == 0)
    int64_t x20_1 = sx.q(x19_1[3].d)
    int64_t* x0_1 = XMalloc(8 + x20_1.d * x19_1[2].d)
    *x0_1 = x19_1[1]
    int32_t x9_4 = x19_1[2].d
    result = *x19_1
    x19_1[1] = x0_1
    
    if (x9_4 s>= 1)
        int64_t i = 0
        void* result_1 = &x0_1[1]
        
        do
            *result_1 = result
            i += 1
            result = result_1
            result_1 += x20_1
        while (i s< sx.q(x19_1[2].d))
        
        result = result_1 - x20_1
    
    *x19_1 = result

*x19_1 = *result
return result
