// 函数: _ZN5Botan13Threaded_ForkC1EPPNS_6FilterEm
// 地址: 0xd7e250
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Filter + 0x10
*(arg1 + 8) = zx.o(0)
__builtin_memset(&arg1[3], 0, 0x20)
std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::__append(&arg1[4])
__builtin_memset(&arg1[7], 0, 0x11)
int64_t x8_1 = arg1[4]
arg1[0xb] = 0
arg1[0xc] = 0
arg1[5] = x8_1
*arg1 = _vtable_for_Botan::Threaded_Fork + 0x10
arg1[0xa] = 0
int64_t x0_1 = operator new(0xd8)
__builtin_memset(x0_1, 0, 0xd8)
arg1[0xd] = x0_1
return Botan::Threaded_Fork::set_next(arg1, arg2)
