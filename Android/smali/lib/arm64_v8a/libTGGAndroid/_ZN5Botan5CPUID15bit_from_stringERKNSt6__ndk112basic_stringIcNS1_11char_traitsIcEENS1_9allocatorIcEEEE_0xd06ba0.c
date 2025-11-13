// 函数: _ZN5Botan5CPUID15bit_from_stringERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd06ba0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x11 = zx.q(*arg1)
uint64_t x9 = *(arg1 + 8)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const
    & x20 = arg1
int32_t x10 = x11.d & 1
uint64_t x11_1 = x11 u>> 1
uint64_t x12

x12 = x10 == 0 ? x11_1 : x9

if (x12 != 4)
    goto label_d06c00

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "neon")
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >** 
    entry_x8
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x8) x8_36
void* const x9_1

if (arg1.d == 0)
label_d0707c:
    __builtin_memset(entry_x8, 0, 0x18)
    arg1 = operator new(8)
    x8_36 = arg1 + 8
    x9_1 = 1
label_d0718c:
    entry_x8[2] = x8_36
    *arg1 = x9_1
    *entry_x8 = arg1
    entry_x8[1] = x8_36
    return 

uint64_t x8 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8.d & 1
x11_1 = x8 u>> 1
label_d06c00:
uint64_t x8_1

if ((x10 & 0xff) == 0)
    x8_1 = x11_1
else
    x8_1 = x9

if (x8_1 == 4)
    arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "simd")
    
    if (arg1.d == 0)
        goto label_d0707c
    
    uint64_t x8_2 = zx.q(*x20)
    x9 = *(x20 + 8)
    x10 = x8_2.d & 1
    x11_1 = x8_2 u>> 1

uint64_t x8_3

if ((x10 & 0xff) == 0)
    x8_3 = x11_1
else
    x8_3 = x9

if (x8_3 == 7)
    arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "arm_sve")
    
    if (arg1.d == 0)
        __builtin_memset(entry_x8, 0, 0x18)
        arg1 = operator new(8)
        x8_36 = arg1 + 8
        x9_1 = 2
        goto label_d0718c
    
    uint64_t x8_4 = zx.q(*x20)
    x9 = *(x20 + 8)
    x10 = x8_4.d & 1
    x11_1 = x8_4 u>> 1

uint64_t x8_5

if ((x10 & 0xff) == 0)
    x8_5 = x11_1
else
    x8_5 = x9

if (x8_5 != 9)
    goto label_d06cc0

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "armv8sha1")

if (arg1.d == 0)
label_d07098:
    __builtin_memset(entry_x8, 0, 0x18)
    arg1 = operator new(8)
    x8_36 = arg1 + 8
    x9_1 = 0x40000
    goto label_d0718c

uint64_t x8_6 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_6.d & 1
x11_1 = x8_6 u>> 1
label_d06cc0:
uint64_t x8_7

if ((x10 & 0xff) == 0)
    x8_7 = x11_1
else
    x8_7 = x9

if (x8_7 != 8)
    goto label_d06d00

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "arm_sha1")

if (arg1.d == 0)
    goto label_d07098

uint64_t x8_8 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_8.d & 1
x11_1 = x8_8 u>> 1
label_d06d00:
uint64_t x8_9

if ((x10 & 0xff) == 0)
    x8_9 = x11_1
else
    x8_9 = x9

if (x8_9 != 9)
    goto label_d06d40

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "armv8sha2")

if (arg1.d == 0)
label_d070d0:
    __builtin_memset(entry_x8, 0, 0x18)
    arg1 = operator new(8)
    x8_36 = arg1 + 8
    x9_1 = 0x80000
    goto label_d0718c

uint64_t x8_10 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_10.d & 1
x11_1 = x8_10 u>> 1
label_d06d40:
uint64_t x8_11

if ((x10 & 0xff) == 0)
    x8_11 = x11_1
else
    x8_11 = x9

if (x8_11 != 8)
    goto label_d06d80

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "arm_sha2")

if (arg1.d == 0)
    goto label_d070d0

uint64_t x8_12 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_12.d & 1
x11_1 = x8_12 u>> 1
label_d06d80:
uint64_t x8_13

if ((x10 & 0xff) == 0)
    x8_13 = x11_1
else
    x8_13 = x9

if (x8_13 != 8)
    goto label_d06dc0

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "armv8aes")

if (arg1.d == 0)
label_d070ec:
    __builtin_memset(entry_x8, 0, 0x18)
    arg1 = operator new(8)
    x8_36 = arg1 + 8
    x9_1 = 0x10000
    goto label_d0718c

uint64_t x8_14 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_14.d & 1
x11_1 = x8_14 u>> 1
label_d06dc0:
uint64_t x8_15

if ((x10 & 0xff) == 0)
    x8_15 = x11_1
else
    x8_15 = x9

if (x8_15 != 7)
    goto label_d06e00

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "arm_aes")

if (arg1.d == 0)
    goto label_d070ec

uint64_t x8_16 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_16.d & 1
x11_1 = x8_16 u>> 1
label_d06e00:
uint64_t x8_17

if ((x10 & 0xff) == 0)
    x8_17 = x11_1
else
    x8_17 = x9

if (x8_17 != 0xa)
    goto label_d06e40

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "armv8pmull")

if (arg1.d == 0)
label_d07108:
    __builtin_memset(entry_x8, 0, 0x18)
    arg1 = operator new(8)
    x8_36 = arg1 + 8
    x9_1 = 0x20000
    goto label_d0718c

uint64_t x8_18 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_18.d & 1
x11_1 = x8_18 u>> 1
label_d06e40:
uint64_t x8_19

if ((x10 & 0xff) == 0)
    x8_19 = x11_1
else
    x8_19 = x9

if (x8_19 != 9)
    goto label_d06e80

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "arm_pmull")

if (arg1.d == 0)
    goto label_d07108

uint64_t x8_20 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_20.d & 1
x11_1 = x8_20 u>> 1
label_d06e80:
uint64_t x8_21

if ((x10 & 0xff) == 0)
    x8_21 = x11_1
else
    x8_21 = x9

if (x8_21 != 9)
    goto label_d06ec0

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "armv8sha3")

if (arg1.d == 0)
label_d07124:
    __builtin_memset(entry_x8, 0, 0x18)
    arg1 = operator new(8)
    x8_36 = arg1 + 8
    x9_1 = 0x100000
    goto label_d0718c

uint64_t x8_22 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_22.d & 1
x11_1 = x8_22 u>> 1
label_d06ec0:
uint64_t x8_23

if ((x10 & 0xff) == 0)
    x8_23 = x11_1
else
    x8_23 = x9

if (x8_23 != 8)
    goto label_d06f00

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "arm_sha3")

if (arg1.d == 0)
    goto label_d07124

uint64_t x8_24 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_24.d & 1
x11_1 = x8_24 u>> 1
label_d06f00:
uint64_t x8_25

if ((x10 & 0xff) == 0)
    x8_25 = x11_1
else
    x8_25 = x9

if (x8_25 != 0xd)
    goto label_d06f40

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "armv8sha2_512")

if (arg1.d == 0)
label_d07140:
    __builtin_memset(entry_x8, 0, 0x18)
    arg1 = operator new(8)
    x8_36 = arg1 + 8
    x9_1 = 0x200000
    goto label_d0718c

uint64_t x8_26 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_26.d & 1
x11_1 = x8_26 u>> 1
label_d06f40:
uint64_t x8_27

if ((x10 & 0xff) == 0)
    x8_27 = x11_1
else
    x8_27 = x9

if (x8_27 != 0xc)
    goto label_d06f80

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "arm_sha2_512")

if (arg1.d == 0)
    goto label_d07140

uint64_t x8_28 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_28.d & 1
x11_1 = x8_28 u>> 1
label_d06f80:
uint64_t x8_29

if ((x10 & 0xff) == 0)
    x8_29 = x11_1
else
    x8_29 = x9

if (x8_29 != 8)
    goto label_d06fc0

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "armv8sm3")

if (arg1.d == 0)
label_d0715c:
    __builtin_memset(entry_x8, 0, 0x18)
    arg1 = operator new(8)
    x8_36 = arg1 + 8
    x9_1 = &__elf_header
    goto label_d0718c

uint64_t x8_30 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_30.d & 1
x11_1 = x8_30 u>> 1
label_d06fc0:
uint64_t x8_31

if ((x10 & 0xff) == 0)
    x8_31 = x11_1
else
    x8_31 = x9

if (x8_31 != 7)
    goto label_d07000

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "arm_sm3")

if (arg1.d == 0)
    goto label_d0715c

uint64_t x8_32 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_32.d & 1
x11_1 = x8_32 u>> 1
label_d07000:
uint64_t x8_33

if ((x10 & 0xff) == 0)
    x8_33 = x11_1
else
    x8_33 = x9

if (x8_33 != 8)
    goto label_d07040

arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "armv8sm4")

if (arg1.d == 0)
label_d07178:
    __builtin_memset(entry_x8, 0, 0x18)
    arg1 = operator new(8)
    x8_36 = arg1 + 8
    x9_1 = &data_800000
    goto label_d0718c

uint64_t x8_34 = zx.q(*x20)
x9 = *(x20 + 8)
x10 = x8_34.d & 1
x11_1 = x8_34 u>> 1
label_d07040:
uint64_t x8_35

if ((x10 & 0xff) == 0)
    x8_35 = x11_1
else
    x8_35 = x9

if (x8_35 == 7)
    arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "arm_sm4")

if (x8_35 == 7 && arg1.d == 0)
    goto label_d07178

__builtin_memset(entry_x8, 0, 0x18)
