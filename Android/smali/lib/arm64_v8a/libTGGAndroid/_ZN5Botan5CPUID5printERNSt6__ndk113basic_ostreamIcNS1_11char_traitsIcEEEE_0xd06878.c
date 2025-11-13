// 函数: _ZN5Botan5CPUID5printERNSt6__ndk113basic_ostreamIcNS1_11char_traitsIcEEEE
// 地址: 0xd06878
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(arg1, 
    "CPUID flags: ", 0xd)
Botan::CPUID::to_string()
char var_38
uint64_t x8 = zx.q(var_38)
int32_t temp0 = x8.d & 1
char* var_28
char* x1

if (temp0 == 0)
    x1 = &var_38 | 1
else
    x1 = var_28

uint64_t x2
uint64_t var_30

if (temp0 == 0)
    x2 = x8 u>> 1
else
    x2 = var_30
int64_t result = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0, x1, x2), "\n", 
    1)

if ((zx.d(var_38) & 1) == 0)
    return result

return operator delete(var_28)
