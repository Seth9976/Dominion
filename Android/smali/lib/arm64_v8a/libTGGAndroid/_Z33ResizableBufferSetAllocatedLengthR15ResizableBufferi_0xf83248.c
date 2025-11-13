// 函数: _Z33ResizableBufferSetAllocatedLengthR15ResizableBufferi
// 地址: 0xf83248
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg1 + 0xc)

if (x22 == arg2)
    return 

ResizableBuffer& x21_1 = XPooledCalloc(arg2)

if (x22 != 0)
    size_t x2_1 = zx.q(*(arg1 + 8))
    
    if (x2_1.d s>= 1)
        memcpy(x21_1, *arg1, x2_1)
    
    XPooledFree(*arg1, *(arg1 + 0xc))

*arg1 = x21_1
*(arg1 + 0xc) = arg2
