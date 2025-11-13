// 函数: _ZN5Botan11Memory_PoolC1ERKNSt6__ndk16vectorIPvNS1_9allocatorIS3_EEEEm
// 地址: 0xdacf3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v1 = data_71b8c0
size_t entry_x2
*arg1 = entry_x2
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x68) = 0
*(arg1 + 0x60) = arg1 + 0x68
*(arg1 + 0x48) = zx.o(0)
*(arg1 + 0x38) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x70) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x78) = v1
int64_t x9 = *arg2
int64_t x8_7

if (*(arg2 + 8) == x9)
    x8_7 = 0
else
    int64_t x8_1 = 0
    int64_t x10_1 = 0
    int64_t x26_1 = 0
    int64_t x11_1 = -1
    size_t x2 = entry_x2
    
    while (true)
        int64_t x9_1 = *(x9 + (x26_1 << 3))
        int64_t x11_2
        
        x11_2 = x11_1 u< x9_1 ? x11_1 : x9_1
        
        int64_t x9_2
        
        x9_2 = x10_1 u> x9_1 ? x10_1 : x9_1
        
        *(arg1 + 0x78) = x11_2
        *(arg1 + 0x80) = x9_2
        
        if (x2 != 0)
            memset(*(*arg2 + (x26_1 << 3)), 0, x2)
            x8_1 = *(arg1 + 0x58)
        
        int64_t* x9_3 = *(arg1 + 0x38)
        int64_t x11_3 = *(arg1 + 0x40)
        int64_t x27_1 = *(*arg2 + (x26_1 << 3))
        int64_t x10_6
        
        if (x11_3 == x9_3)
            x10_6 = 0
        else
            x10_6 = ((x11_3 - x9_3) << 6) - 1
        
        int64_t x8_3 = x8_1 + *(arg1 + 0x50)
        
        if (x10_6 == x8_3)
            std::__ndk1::deque<uint8_t*, std::__ndk1::allocator<uint8_t*> >::__add_back_capacity()
            x9_3 = *(arg1 + 0x38)
            x8_3 = *(arg1 + 0x50) + *(arg1 + 0x58)
        
        x26_1 += 1
        *(*(x9_3 + (x8_3 u>> 6 & 0x3fffffffffffff8)) + ((x8_3 & 0x1ff) << 3)) = x27_1
        x8_1 = *(arg1 + 0x58) + 1
        *(arg1 + 0x58) = x8_1
        x9 = *arg2
        
        if (x26_1 == (*(arg2 + 8) - x9) s>> 3)
            break
        
        x11_1 = *(arg1 + 0x78)
        x10_1 = *(arg1 + 0x80)
        x2 = *arg1
    
    x8_7 = *(arg1 + 0x80)

*(arg1 + 0x80) = x8_7 + entry_x2
