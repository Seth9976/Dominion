// 函数: _ZN5Botan5TimerC2ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_S9_mmdm
// 地址: 0xef201c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*arg3)
uint64_t x8_1

if ((x8.d & 1) == 0)
    x8_1 = x8 u>> 1
else
    x8_1 = *(arg3 + 8)

int32_t x0_1

if (x8_1 != 0 && x8_1 == 4)
    x0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg3, 0, -ffffffffffffffff, "base")

char var_88[0x10]
int16_t var_70
void* var_60
int32_t x25_2

if (x8_1 == 0 || (x8_1 == 4 && x0_1 == 0))
    x25_2 = 0
    var_70 = 0
else
    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
        " [", arg3)
    int128_t* x0_3
    int128_t v0
    x0_3, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        &var_88)
    x25_2 = 1
    var_60 = x0_3[1].q
    var_70.o = *x0_3
    __builtin_memset(x0_3, 0, 0x18)

*(arg2 + 8)
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x2

if ((zx.d(*arg2) & 1) != 0)
    x2 = *(arg2 + 0x10)
else
    x2 = arg2 + 1

int128_t* x0_5
int128_t v0_1
x0_5, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_70, nullptr, x2)
v0_1 = *x0_5
*(arg1 + 0x10) = x0_5[1].q
*arg1 = v0_1
__builtin_memset(x0_5, 0, 0x18)

if ((zx.d(var_70.b) & 1) != 0)
    operator delete(var_60)

void* var_78

if (x25_2 != 0 && (zx.d(var_88[0]) & 1) != 0)
    operator delete(var_78)
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    arg1 + 0x18)
*(arg1 + 0x30) = arg7
*(arg1 + 0x38) = arg5
*(arg1 + 0x40) = arg6
int64_t entry_x6
*(arg1 + 0x48) = entry_x6
__builtin_memset(arg1 + 0x50, 0, 0x50)
return result
