// 函数: _Z36ResizableBufferEnsureAllocatedLengthR15ResizableBufferi
// 地址: 0xf832dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 0xc)

if (x8 s>= arg2)
    return 

if (x8 == 0)
    *arg1 = XPooledCalloc(arg2)
else
    int64_t x0_1 = XPooledCalloc(arg2)
    uint64_t x2_1 = zx.q(*(arg1 + 8))
    
    if (x2_1.d s>= 1)
        memcpy(x0_1, *arg1, x2_1)
    
    XPooledFree(*arg1, *(arg1 + 0xc))
    *arg1 = x0_1

*(arg1 + 0xc) = arg2
