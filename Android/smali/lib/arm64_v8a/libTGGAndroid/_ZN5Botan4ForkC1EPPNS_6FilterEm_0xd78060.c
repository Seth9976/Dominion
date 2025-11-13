// 函数: _ZN5Botan4ForkC1EPPNS_6FilterEm
// 地址: 0xd78060
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_i
int64_t i = entry_i
*arg1 = _vtable_for_Botan::Filter + 0x10
*(arg1 + 8) = zx.o(0)
__builtin_memset(&arg1[3], 0, 0x20)
int64_t result =
    std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::__append(&arg1[4])
int64_t x8_1 = arg1[4]
__builtin_memset(&arg1[7], 0, 0x11)
arg1[5] = x8_1
*arg1 = _vtable_for_Botan::Fork + 0x10

if (arg2 != 0)
    void* x2 = arg2 + (i << 3) + 8
    
    while (i != 0)
        int64_t x8_3 = *(x2 - 0x10)
        i -= 1
        x2 -= 8
        
        if (x8_3 != 0)
            return std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::assign<Botan::Filter**>(
                &arg1[4], arg2)

return result
