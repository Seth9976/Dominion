// 函数: _ZN5Botan15RSA_Public_DataC2EONS_6BigIntES2_
// 地址: 0xf49564
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x20) = *(arg2 + 0x20)
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(arg1 + 0x28)
void* entry_x2
*(arg1 + 0x40) = *(entry_x2 + 0x18)
*(arg1 + 0x48) = *(entry_x2 + 0x20)
void** x0_1 = operator new(0xc8)
x0_1[2] = 0
*x0_1 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Params, std::__ndk1::allocator<Botan::Montgomery_Params> >
    + 0x10
x0_1[1] = 0
Botan::Montgomery_Params::Montgomery_Params(&x0_1[3])
*(arg1 + 0x50) = &x0_1[3]
*(arg1 + 0x58) = x0_1
*(arg1 + 0x60) = Botan::BigInt::bits()
int64_t result = Botan::BigInt::bits()
int64_t x8_7

if ((result & 7) == 0)
    x8_7 = 0
else
    x8_7 = 8 - (result & 7)

*(arg1 + 0x68) = (x8_7 + result) u>> 3
return result
