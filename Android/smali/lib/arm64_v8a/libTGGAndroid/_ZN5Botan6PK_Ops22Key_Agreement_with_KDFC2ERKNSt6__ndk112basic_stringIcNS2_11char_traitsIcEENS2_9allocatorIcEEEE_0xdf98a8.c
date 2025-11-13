// 函数: _ZN5Botan6PK_Ops22Key_Agreement_with_KDFC2ERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xdf98a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
uint64_t x20 = entry_x1
*arg1 = _vtable_for_Botan::PK_Ops::Key_Agreement_with_KDF + 0x10
*(arg1 + 8) = 0
uint64_t x8_1 = zx.q(*entry_x1)
uint64_t x8_2

if ((x8_1.d & 1) == 0)
    x8_2 = x8_1 u>> 1
else
    x8_2 = *(entry_x1 + 8)

int64_t* result

if (x8_2 == 3)
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, 0x75cb1e)

if (x8_2 != 3 || result.d != 0)
    int64_t x0_2 = Botan::get_kdf(x20)
    result = *(arg1 + 8)
    *(arg1 + 8) = x0_2
    
    if (result != 0)
        jump(*(*result + 8))

return result
