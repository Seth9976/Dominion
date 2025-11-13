// 函数: _ZN5Botan6Filter8set_nextEPPS0_m
// 地址: 0xd79830
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg1[5] = arg1[4]
arg1[7] = 0
arg1[8] = 0

if (arg2 != 0)
    int64_t entry_i
    void* x8_1 = arg2 + (entry_i << 3) + 8
    
    while (entry_i != 0)
        int64_t x9_1 = *(x8_1 - 0x10)
        entry_i -= 1
        x8_1 -= 8
        
        if (x9_1 != 0)
            return std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::assign<Botan::Filter**>(
                &arg1[4], arg2) __tailcall

return &arg1[4]
