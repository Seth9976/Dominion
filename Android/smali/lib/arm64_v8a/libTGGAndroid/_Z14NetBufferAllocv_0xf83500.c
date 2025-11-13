// 函数: _Z14NetBufferAllocv
// 地址: 0xf83500
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *gNetwork
int32_t x9 = *(x8 + 0x78)
int64_t result

if (x9 == 0)
    result = XMalloc(0xfe20)
else
    void* x0 = *(x8 + 0x70)
    void* x10_1 = *(x0 + 0x10)
    *(x8 + 0x70) = x10_1
    
    if (x10_1 == 0)
        *(x8 + 0x68) = 0
    else
        *(x10_1 + 8) = 0
        x9 = *(x8 + 0x78)
    
    result = *x0
    *(x8 + 0x78) = x9 - 1
    XPooledFree(x0, 0x18)

__builtin_memset(result + 0xfde8, 0, 0x14)
return result
