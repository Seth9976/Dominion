// 函数: _ZN5BotanlsERNSt6__ndk113basic_ostreamIcNS0_11char_traitsIcEEEERKNS_11GeneralNameE
// 地址: 0xe9cc70
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg2 + 8))
int32_t temp0 = x8.d & 1
void* __offset(Botan::GeneralName, 0x9) x1

if (temp0 == 0)
    x1 = arg2 + 9
else
    x1 = *(arg2 + 0x18)

uint64_t x2

if (temp0 == 0)
    x2 = x8 u>> 1
else
    x2 = *(arg2 + 0x10)

std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_1 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg1, x1, x2), 
    ":", 1)
uint64_t x8_1 = zx.q(*(arg2 + 0x20))
int32_t temp1 = x8_1.d & 1
void* __offset(Botan::GeneralName, 0x21) x1_1

if (temp1 == 0)
    x1_1 = arg2 + 0x21
else
    x1_1 = *(arg2 + 0x30)

uint64_t x2_1

if (temp1 == 0)
    x2_1 = x8_1 u>> 1
else
    x2_1 = *(arg2 + 0x28)

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_1, x1_1, x2_1)
return arg1
