// 函数: _ZN5BotanlsERNSt6__ndk113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_14GeneralSubtreeE
// 地址: 0xe9d46c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg2 + 0x40)
uint64_t x0_1 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(arg1), ",", 1)
*(arg2 + 0x48)
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_3 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0_1), ",", 1)
uint64_t x8 = zx.q(*(arg2 + 0x10))
int32_t temp0 = x8.d & 1
void* __offset(Botan::GeneralSubtree, 0x11) x1_2

if (temp0 == 0)
    x1_2 = arg2 + 0x11
else
    x1_2 = *(arg2 + 0x20)

uint64_t x2

if (temp0 == 0)
    x2 = x8 u>> 1
else
    x2 = *(arg2 + 0x18)

std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_5 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_3, x1_2, x2), 
    ":", 1)
uint64_t x8_1 = zx.q(*(arg2 + 0x28))
int32_t temp1 = x8_1.d & 1
void* __offset(Botan::GeneralSubtree, 0x29) x1_3

if (temp1 == 0)
    x1_3 = arg2 + 0x29
else
    x1_3 = *(arg2 + 0x38)

uint64_t x2_1

if (temp1 == 0)
    x2_1 = x8_1 u>> 1
else
    x2_1 = *(arg2 + 0x30)

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_5, x1_3, x2_1)
return arg1
