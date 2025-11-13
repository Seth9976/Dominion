// 函数: _ZN5Botan4ForkC1EPNS_6FilterES2_S2_S2_
// 地址: 0xd77f04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_Botan::Filter + 0x10
*(arg1 + 8) = zx.o(0)
*(arg1 + 0x18) = zx.o(0)
*(arg1 + 0x28) = zx.o(0)
int64_t result =
    std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::__append(arg1
    + 0x20)
*(arg1 + 0x48) = 0
int64_t x8_1 = 0
*arg1 = _vtable_for_Botan::Fork + 0x10
Botan::Filter* var_70 = arg2
Botan::Filter* var_68 = arg3
Botan::Filter* var_60 = arg4
int64_t x4
int64_t var_58 = x4
int64_t x9_1 = *(arg1 + 0x20)
*(arg1 + 0x38) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x28) = x9_1
int64_t i

do
    if (x8_1 == -0x20)
        return result
    
    i = *(&var_70 + x8_1 + 0x18)
    x8_1 -= 8
while (i == 0)
return std::__ndk1::vector<Botan::Filter*, std::__ndk1::allocator<Botan::Filter*> >::assign<Botan::Filter**>(
    arg1 + 0x20, &var_70)
