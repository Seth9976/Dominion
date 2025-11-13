// 函数: _ZN5Botan13Threaded_ForkC1EPNS_6FilterES2_S2_S2_
// 地址: 0xd7dcf4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Filter + 0x10
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::__append(arg1 + 0x20)
__builtin_memset(arg1 + 0x38, 0, 0x11)
int64_t x8_1 = *(arg1 + 0x20)
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x28) = x8_1
*arg1 = _vtable_for_Botan::Threaded_Fork + 0x10
*(arg1 + 0x50) = 0
int64_t x0_1 = operator new(0xd8)
__builtin_memset(x0_1, 0, 0xd8)
*(arg1 + 0x68) = x0_1
Botan::Filter* var_70 = arg2
Botan::Filter* var_68 = arg3
Botan::Filter* var_60 = arg4
int64_t x4
int64_t var_58 = x4
return Botan::Threaded_Fork::set_next(arg1, &var_70)
