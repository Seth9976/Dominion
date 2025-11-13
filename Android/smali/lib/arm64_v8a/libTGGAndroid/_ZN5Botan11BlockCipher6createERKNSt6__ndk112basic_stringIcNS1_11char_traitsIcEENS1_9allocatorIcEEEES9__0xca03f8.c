// 函数: _ZN5Botan11BlockCipher6createERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEES9_
// 地址: 0xca03f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg2)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const
    & x20 = arg1
uint64_t x9_1

if ((x9.d & 1) == 0)
    x9_1 = x9 u>> 1
else
    x9_1 = *(arg2 + 8)

if (x9_1 != 0 && x9_1 == 4)
    arg1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        arg2, 0, -ffffffffffffffff, "base")

int64_t* entry_x8

if (x9_1 != 0 && (x9_1 != 4 || arg1.d != 0))
    *entry_x8 = 0
    return 

uint64_t x10_1 = zx.q(*x20)
uint64_t x8 = *(x20 + 8)
int32_t x9_2 = x10_1.d & 1
uint64_t x10_2 = x10_1 u>> 1
uint64_t x11_1

x11_1 = x9_2 == 0 ? x10_2 : x8

if (x11_1 != 7)
    goto label_ca04ac

struct vtable_for_Botan::MISTY1* const x8_16

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "AES-128") == 0)
    arg1 = operator new(0x38)
    x8_16 = _vtable_for_Botan::AES_128
label_ca0e18:
    *(arg1 + 8) = zx.o(0)
    *(arg1 + 0x18) = zx.o(0)
    *(arg1 + 0x28) = zx.o(0)
    *arg1 = x8_16 + 0x10
    *entry_x8 = arg1
    return 

uint64_t x10_3 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_3.d & 1
x10_2 = x10_3 u>> 1
label_ca04ac:
uint64_t x11_2

if ((x9_2 & 0xff) == 0)
    x11_2 = x10_2
else
    x11_2 = x8

if (x11_2 == 7)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "AES-192") == 0)
        arg1 = operator new(0x38)
        x8_16 = _vtable_for_Botan::AES_192
        goto label_ca0e18
    
    uint64_t x10_4 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_4.d & 1
    x10_2 = x10_4 u>> 1

uint64_t x11_3

if ((x9_2 & 0xff) == 0)
    x11_3 = x10_2
else
    x11_3 = x8

if (x11_3 == 7)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "AES-256") == 0)
        arg1 = operator new(0x38)
        x8_16 = _vtable_for_Botan::AES_256
        goto label_ca0e18
    
    uint64_t x10_5 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_5.d & 1
    x10_2 = x10_5 u>> 1

uint64_t x11_4

if ((x9_2 & 0xff) == 0)
    x11_4 = x10_2
else
    x11_4 = x8

if (x11_4 == 8)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "ARIA-128") == 0)
        arg1 = operator new(0x38)
        x8_16 = _vtable_for_Botan::ARIA_128
        goto label_ca0e18
    
    uint64_t x10_6 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_6.d & 1
    x10_2 = x10_6 u>> 1

uint64_t x11_5

if ((x9_2 & 0xff) == 0)
    x11_5 = x10_2
else
    x11_5 = x8

if (x11_5 == 8)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "ARIA-192") == 0)
        arg1 = operator new(0x38)
        x8_16 = _vtable_for_Botan::ARIA_192
        goto label_ca0e18
    
    uint64_t x10_7 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_7.d & 1
    x10_2 = x10_7 u>> 1

uint64_t x11_6

if ((x9_2 & 0xff) == 0)
    x11_6 = x10_2
else
    x11_6 = x8

if (x11_6 == 8)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "ARIA-256") == 0)
        arg1 = operator new(0x38)
        x8_16 = _vtable_for_Botan::ARIA_256
        goto label_ca0e18
    
    uint64_t x10_8 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_8.d & 1
    x10_2 = x10_8 u>> 1

uint64_t x11_7

if ((x9_2 & 0xff) == 0)
    x11_7 = x10_2
else
    x11_7 = x8

if (x11_7 != 7)
    goto label_ca062c

struct vtable_for_Botan::XTEA* const x8_17

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "Serpent") == 0)
    arg1 = operator new(0x20)
    x8_17 = _vtable_for_Botan::Serpent
label_ca0ea8:
    *(arg1 + 0x10) = 0
    *(arg1 + 0x18) = 0
    *arg1 = x8_17 + 0x10
    *(arg1 + 8) = 0
    *entry_x8 = arg1
    return 

uint64_t x10_9 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_9.d & 1
x10_2 = x10_9 u>> 1
label_ca062c:
uint64_t x11_8

if ((x9_2 & 0xff) == 0)
    x11_8 = x10_2
else
    x11_8 = x8

if (x11_8 != 7)
    goto label_ca066c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "SHACAL2") == 0)
    arg1 = operator new(0x20)
    x8_17 = _vtable_for_Botan::SHACAL2
    goto label_ca0ea8

uint64_t x10_10 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_10.d & 1
x10_2 = x10_10 u>> 1
label_ca066c:
uint64_t x11_9

if ((x9_2 & 0xff) == 0)
    x11_9 = x10_2
else
    x11_9 = x8

if (x11_9 == 7)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "Twofish") == 0)
        arg1 = operator new(0x38)
        x8_16 = _vtable_for_Botan::Twofish
        goto label_ca0e18
    
    uint64_t x10_11 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_11.d & 1
    x10_2 = x10_11 u>> 1

uint64_t x11_10

if ((x9_2 & 0xff) == 0)
    x11_10 = x10_2
else
    x11_10 = x8

if (x11_10 == 0xd)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "Threefish-512") == 0)
        arg1 = operator new(0x38)
        x8_16 = _vtable_for_Botan::Threefish_512
        goto label_ca0e18
    
    uint64_t x10_12 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_12.d & 1
    x10_2 = x10_12 u>> 1

uint64_t x11_11

if ((x9_2 & 0xff) == 0)
    x11_11 = x10_2
else
    x11_11 = x8

if (x11_11 == 8)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "Blowfish") == 0)
        arg1 = operator new(0x38)
        x8_16 = _vtable_for_Botan::Blowfish
        goto label_ca0e18
    
    uint64_t x10_13 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_13.d & 1
    x10_2 = x10_13 u>> 1

uint64_t x11_12

if ((x9_2 & 0xff) == 0)
    x11_12 = x10_2
else
    x11_12 = x8

if (x11_12 != 0xc)
    goto label_ca076c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "Camellia-128") == 0)
    arg1 = operator new(0x20)
    x8_17 = _vtable_for_Botan::Camellia_128
    goto label_ca0ea8

uint64_t x10_14 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_14.d & 1
x10_2 = x10_14 u>> 1
label_ca076c:
uint64_t x11_13

if ((x9_2 & 0xff) == 0)
    x11_13 = x10_2
else
    x11_13 = x8

if (x11_13 != 0xc)
    goto label_ca07ac

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "Camellia-192") == 0)
    arg1 = operator new(0x20)
    x8_17 = _vtable_for_Botan::Camellia_192
    goto label_ca0ea8

uint64_t x10_15 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_15.d & 1
x10_2 = x10_15 u>> 1
label_ca07ac:
uint64_t x11_14

if ((x9_2 & 0xff) == 0)
    x11_14 = x10_2
else
    x11_14 = x8

if (x11_14 != 0xc)
    goto label_ca07ec

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "Camellia-256") == 0)
    arg1 = operator new(0x20)
    x8_17 = _vtable_for_Botan::Camellia_256
    goto label_ca0ea8

uint64_t x10_16 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_16.d & 1
x10_2 = x10_16 u>> 1
label_ca07ec:
uint64_t x11_15

if ((x9_2 & 0xff) == 0)
    x11_15 = x10_2
else
    x11_15 = x8

if (x11_15 != 3)
    goto label_ca082c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, 0x778c83) == 0)
    arg1 = operator new(0x20)
    x8_17 = _vtable_for_Botan::DES
    goto label_ca0ea8

uint64_t x10_17 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_17.d & 1
x10_2 = x10_17 u>> 1
label_ca082c:
uint64_t x11_16

if ((x9_2 & 0xff) == 0)
    x11_16 = x10_2
else
    x11_16 = x8

if (x11_16 != 4)
    goto label_ca086c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "DESX") == 0)
    arg1 = operator new(0x58)
    *(arg1 + 0x48) = 0
    *(arg1 + 0x50) = 0
    *(arg1 + 8) = zx.o(0)
    *(arg1 + 0x18) = zx.o(0)
    *(arg1 + 0x28) = zx.o(0)
    *arg1 = _vtable_for_Botan::DESX + 0x10
    *(arg1 + 0x38) = _vtable_for_Botan::DES + 0x10
    *(arg1 + 0x40) = 0
    *entry_x8 = arg1
    return 

uint64_t x10_18 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_18.d & 1
x10_2 = x10_18 u>> 1
label_ca086c:
uint64_t x11_17

if ((x9_2 & 0xff) == 0)
    x11_17 = x10_2
else
    x11_17 = x8

if (x11_17 != 9)
    goto label_ca08ac

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "TripleDES") == 0)
label_ca0e5c:
    arg1 = operator new(0x20)
    x8_17 = _vtable_for_Botan::TripleDES
    goto label_ca0ea8

uint64_t x10_19 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_19.d & 1
x10_2 = x10_19 u>> 1
label_ca08ac:
uint64_t x11_18

if ((x9_2 & 0xff) == 0)
    x11_18 = x10_2
else
    x11_18 = x8

if (x11_18 == 4)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "3DES") == 0)
        goto label_ca0e5c
    
    uint64_t x10_20 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_20.d & 1
    x10_2 = x10_20 u>> 1

uint64_t x11_19

if ((x9_2 & 0xff) == 0)
    x11_19 = x10_2
else
    x11_19 = x8

if (x11_19 == 7)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "DES-EDE") == 0)
        goto label_ca0e5c
    
    uint64_t x10_21 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_21.d & 1
    x10_2 = x10_21 u>> 1

uint64_t x11_20

if ((x9_2 & 0xff) == 0)
    x11_20 = x10_2
else
    x11_20 = x8

if (x11_20 == 7)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "Noekeon") == 0)
        arg1 = operator new(0x38)
        x8_16 = _vtable_for_Botan::Noekeon
        goto label_ca0e18
    
    uint64_t x10_22 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_22.d & 1
    x10_2 = x10_22 u>> 1

uint64_t x11_21

if ((x9_2 & 0xff) == 0)
    x11_21 = x10_2
else
    x11_21 = x8

if (x11_21 != 8)
    goto label_ca09ac

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x20, 0, -ffffffffffffffff, "CAST-128") == 0)
label_ca0ef8:
    arg1 = operator new(0x38)
    x8_16 = _vtable_for_Botan::CAST_128
    goto label_ca0e18

uint64_t x10_23 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_23.d & 1
x10_2 = x10_23 u>> 1
label_ca09ac:
uint64_t x11_22

if ((x9_2 & 0xff) == 0)
    x11_22 = x10_2
else
    x11_22 = x8

if (x11_22 != 5)
    goto label_ca09ec

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "CAST5") == 0)
    goto label_ca0ef8

uint64_t x10_24 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_24.d & 1
x10_2 = x10_24 u>> 1
label_ca09ec:
uint64_t x11_23

if ((x9_2 & 0xff) == 0)
    x11_23 = x10_2
else
    x11_23 = x8

if (x11_23 == 8)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "CAST-256") == 0)
        arg1 = operator new(0x38)
        x8_16 = _vtable_for_Botan::CAST_256
        goto label_ca0e18
    
    uint64_t x10_25 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_25.d & 1
    x10_2 = x10_25 u>> 1

uint64_t x11_24

if ((x9_2 & 0xff) == 0)
    x11_24 = x10_2
else
    x11_24 = x8

if (x11_24 == 4)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "IDEA") == 0)
        arg1 = operator new(0x38)
        x8_16 = _vtable_for_Botan::IDEA
        goto label_ca0e18
    
    uint64_t x10_26 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_26.d & 1
    x10_2 = x10_26 u>> 1

uint64_t x11_25

if ((x9_2 & 0xff) == 0)
    x11_25 = x10_2
else
    x11_25 = x8

if (x11_25 != 6)
    goto label_ca0aac

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "KASUMI") == 0)
    arg1 = operator new(0x20)
    x8_17 = _vtable_for_Botan::KASUMI
    goto label_ca0ea8

uint64_t x10_27 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_27.d & 1
x10_2 = x10_27 u>> 1
label_ca0aac:
uint64_t x11_26

if ((x9_2 & 0xff) == 0)
    x11_26 = x10_2
else
    x11_26 = x8

if (x11_26 == 6)
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            x20, 0, -ffffffffffffffff, "MISTY1") == 0)
        arg1 = operator new(0x38)
        x8_16 = _vtable_for_Botan::MISTY1
        goto label_ca0e18
    
    uint64_t x10_28 = zx.q(*x20)
    x8 = *(x20 + 8)
    x9_2 = x10_28.d & 1
    x10_2 = x10_28 u>> 1

uint64_t x11_27

if ((x9_2 & 0xff) == 0)
    x11_27 = x10_2
else
    x11_27 = x8

if (x11_27 != 4)
    goto label_ca0b2c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "SEED") == 0)
    arg1 = operator new(0x20)
    x8_17 = _vtable_for_Botan::SEED
    goto label_ca0ea8

uint64_t x10_29 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_29.d & 1
x10_2 = x10_29 u>> 1
label_ca0b2c:
uint64_t x11_28

if ((x9_2 & 0xff) == 0)
    x11_28 = x10_2
else
    x11_28 = x8

if (x11_28 != 3)
    goto label_ca0b6c

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, 0x724d45) == 0)
    arg1 = operator new(0x20)
    x8_17 = _vtable_for_Botan::SM4
    goto label_ca0ea8

uint64_t x10_30 = zx.q(*x20)
x8 = *(x20 + 8)
x9_2 = x10_30.d & 1
x10_2 = x10_30 u>> 1
label_ca0b6c:
uint64_t x8_1

if ((x9_2 & 0xff) == 0)
    x8_1 = x10_2
else
    x8_1 = x8

int32_t x0_58

if (x8_1 == 4)
    x0_58 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        x20, 0, -ffffffffffffffff, "XTEA")

if (x8_1 == 4 && x0_58 == 0)
    arg1 = operator new(0x20)
    x8_17 = _vtable_for_Botan::XTEA
    goto label_ca0ea8

char var_d8
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_d8)
char var_c0
Botan::SCAN_Name::SCAN_Name(&var_c0)
void* var_c8

if ((zx.d(var_d8) & 1) != 0)
    operator delete(var_c8)
char var_a8
uint64_t x10_31 = zx.q(var_a8)
uint64_t var_a0
uint64_t x8_3 = var_a0
int32_t x9_3 = x10_31.d & 1
uint64_t x10_32 = x10_31 u>> 1
uint64_t x12_1

x12_1 = x9_3 == 0 ? x10_32 : x8_3

if (x12_1 != 0xd)
    goto label_ca0c18

void* var_90
char* var_88
int16_t var_f0
void* var_e0
void* var_60

if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_a8, 0, -ffffffffffffffff, "GOST-28147-89").d == 0)
    void** x0_72 = operator new(0x38)
    char var_108_1
    __builtin_strncpy(&var_108_1, "$R3411_94_TestParam", 0x14)
    
    if (var_88 == var_90)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_f0)
    else
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &var_f0)
    
    Botan::GOST_28147_89_Params::GOST_28147_89_Params(&var_60)
    x0_72[2] = 0
    x0_72[3] = 0
    *x0_72 = _vtable_for_Botan::GOST_28147_89 + 0x10
    x0_72[1] = 0
    int64_t x0_76 = operator new(0x1000)
    int64_t x21_2 = x0_76
    x0_72[1] = x0_76
    x0_72[3] = x0_76 + 0x1000
    memset(x0_76, 0, 0x1000)
    int64_t x8_22 = 0
    int64_t x9_6 = 0xc00
    x0_72[2] = x0_76 + 0x1000
    __builtin_memset(&x0_72[4], 0, 0x18)
    
    while (true)
        void* x10_34 = var_60
        uint64_t x12_2 = x8_22 u>> 2
        int64_t x11_31 = zx.q(x9_6.d - 0xc00) & 0x3c
        int64_t x13_1 = x12_2 & 0x1ffffffffffffffc
        *(x21_2 + x9_6 - 0xc00) =
            zx.d(((zx.d(*(x10_34 + x13_1)) << 0x20 | zx.d(*(x10_34 + x11_31)) << 0x18) u>> 0x1c).b)
            << 0xb
        void* x10_39 = var_60
        *(x0_72[1] + x9_6 - 0x800) = zx.d(((zx.d(*(x10_39 + (x13_1 | 1))) << 0x20
            | zx.d(*(x10_39 + (x11_31 | 1))) << 0x18) u>> 0x1c).b) << 0x13
        void* x10_44 = var_60
        *(x0_72[1] + x9_6 - 0x400) = ror.d(
            zx.d(((zx.d(*(x10_44 + (x13_1 | 2))) << 0x20 | zx.d(*(x10_44 + (x11_31 | 2))) << 0x18)
                u>> 0x1c).b), 
            5)
        void* x10_49 = var_60
        *(x0_72[1] + x9_6) = zx.d(((zx.d(*(x10_49 + (x12_2 | 3))) << 0x20
            | zx.d(*(x10_49 + (x11_31 | 3))) << 0x18) u>> 0x1c).b) << 3
        
        if (x9_6 == 0xffc)
            break
        
        x21_2 = x0_72[1]
        x8_22 += 1
        x9_6 += 4
    
    char var_58
    
    if ((zx.d(var_58) & 1) != 0)
        void* var_48
        operator delete(var_48)
        uint32_t x8_25 = zx.d(var_f0.b)
        *entry_x8 = x0_72
        
        if ((x8_25 & 1) != 0)
            operator delete(var_e0)
    else
        uint32_t x8_24 = zx.d(var_f0.b)
        *entry_x8 = x0_72
        
        if ((x8_24 & 1) != 0)
            operator delete(var_e0)
else
    uint64_t x10_33 = zx.q(var_a8)
    x8_3 = var_a0
    x9_3 = x10_33.d & 1
    x10_32 = x10_33 u>> 1
label_ca0c18:
    uint64_t x8_4
    
    if ((x9_3 & 0xff) == 0)
        x8_4 = x10_32
    else
        x8_4 = x8_3
    
    if (x8_4 != 7)
        goto label_ca11f0
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &var_a8, 0, -ffffffffffffffff, "Cascade").d != 0 || var_88 - var_90 != 0x30)
        goto label_ca11f0
    
    Botan::SCAN_Name::arg(&var_c0)
    var_f0 = 0
    Botan::BlockCipher::create(&var_60, &var_f0)
    
    if ((zx.d(var_f0.b) & 1) != 0)
        operator delete(var_e0)
    
    void* var_50
    
    if ((zx.d(var_60.b) & 1) != 0)
        operator delete(var_50)
    
    Botan::SCAN_Name::arg(&var_c0)
    var_f0 = 0
    Botan::BlockCipher::create(&var_60, &var_f0)
    
    if ((zx.d(var_f0.b) & 1) == 0)
        if ((zx.d(var_60.b) & 1) != 0)
            goto label_ca11a4
        
        goto label_ca0ccc
    
    operator delete(var_e0)
    char var_108
    uint64_t var_38
    uint64_t x8_11
    Botan::BlockCipher* x21_1
    
    if ((zx.d(var_60.b) & 1) != 0)
    label_ca11a4:
        operator delete(var_50)
        x21_1 = var_108.q
        x8_11 = var_38
        
        if (x21_1 != 0)
            goto label_ca0cd8
        
        goto label_ca11b4
    
label_ca0ccc:
    x21_1 = var_108.q
    x8_11 = var_38
    
    if (x21_1 == 0)
    label_ca11b4:
        var_38 = 0
        
        if (x8_11 == 0)
            goto label_ca11f0
        
        (*(*x8_11 + 8))(x8_11)
        x21_1 = var_108.q
        var_108.q = 0
        
        if (x21_1 != 0)
            goto label_ca11ec
        
        goto label_ca11f0
    
label_ca0cd8:
    uint64_t var_110_1 = x8_11
    
    if (x8_11 == 0)
        var_108.q = 0
    label_ca11ec:
        (*(*x21_1 + 8))(x21_1)
    label_ca11f0:
        uint64_t x8_31 = zx.q(var_a8)
        uint64_t x8_32
        
        if ((x8_31.d & 1) == 0)
            x8_32 = x8_31 u>> 1
        else
            x8_32 = var_a0
        
        if (x8_32 != 4)
            *entry_x8 = 0
        else if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_a8, 0, -ffffffffffffffff, "Lion").d != 0
                || ((((var_88 - var_90) s>> 3) * -0x5555555555555555) & 0xfffffffffffffffe) != 2)
            *entry_x8 = 0
        else
            Botan::SCAN_Name::arg(&var_c0)
            var_f0 = 0
            Botan::HashFunction::create(&var_60, &var_f0)
            
            if ((zx.d(var_f0.b) & 1) != 0)
                operator delete(var_e0)
            
            if ((zx.d(var_60.b) & 1) != 0)
                operator delete(var_50)
            
            Botan::SCAN_Name::arg(&var_c0)
            var_f0 = 0
            Botan::StreamCipher::create(&var_60, &var_f0)
            
            if ((zx.d(var_f0.b) & 1) == 0)
                if ((zx.d(var_60.b) & 1) != 0)
                    goto label_ca131c
                
                goto label_ca12c8
            
            operator delete(var_e0)
            uint64_t x20_3
            
            if ((zx.d(var_60.b) & 1) != 0)
            label_ca131c:
                operator delete(var_50)
                arg1 = var_108.q
                x20_3 = var_38
                
                if (arg1 != 0)
                    goto label_ca12d4
                
                goto label_ca132c
            
        label_ca12c8:
            arg1 = var_108.q
            x20_3 = var_38
            
            if (arg1 == 0)
            label_ca132c:
                
                if (x20_3 == 0)
                    *entry_x8 = 0
                else
                    (*(*x20_3 + 8))(x20_3)
                    arg1 = var_108.q
                    var_108.q = 0
                    
                    if (arg1 != 0)
                        (*(*arg1 + 0x10))()
                        *entry_x8 = 0
                    else
                        *entry_x8 = 0
            else
            label_ca12d4:
                
                if (x20_3 == 0)
                    var_108.q = 0
                    (*(*arg1 + 0x10))()
                    *entry_x8 = 0
                else
                    if (((var_88 - var_90) s>> 3) * -0x5555555555555555 u>= 3)
                        Botan::to_u32bit(var_90 + 0x30)
                    
                    Botan::HashFunction* x0_102 = operator new(0x50)
                    Botan::StreamCipher* x1_11 = var_108.q
                    var_108.q = 0
                    Botan::Lion::Lion(x0_102, x1_11, x20_3)
                    *entry_x8 = x0_102
                    var_108.q = 0
    else
        Botan::BlockCipher* x0_70 = operator new(0x20)
        var_108.q = 0
        int64_t* var_38_1 = nullptr
        Botan::Cascade_Cipher::Cascade_Cipher(x0_70, x21_1)
        *entry_x8 = x0_70
        int64_t var_38_2 = 0
        
        if (var_38_1 != 0)
            (*(*var_38_1 + 8))()
        
        var_108.q = 0
void* var_78

if (var_78 != 0)
    char* var_70
    char* x8_48 = var_70
    void* x0_97
    
    if (x8_48 == var_78)
        x0_97 = var_78
    else
        char* x20_4 = x8_48
        
        do
            x20_4 = &x20_4[-0x18]
            
            if ((zx.d(*x20_4) & 1) != 0)
                operator delete(*(x8_48 - 8))
            
            x8_48 = x20_4
        while (var_78 != x20_4)
        
        x0_97 = var_78
    
    void* var_70_1 = var_78
    operator delete(x0_97)

if (var_90 != 0)
    char* x8_49 = var_88
    void* x0_99
    
    if (x8_49 == var_90)
        x0_99 = var_90
    else
        char* x20_5 = x8_49
        
        do
            x20_5 = &x20_5[-0x18]
            
            if ((zx.d(*x20_5) & 1) != 0)
                operator delete(*(x8_49 - 8))
            
            x8_49 = x20_5
        while (var_90 != x20_5)
        
        x0_99 = var_90
    
    void* var_88_1 = var_90
    operator delete(x0_99)

void* var_98

if ((zx.d(var_a8) & 1) != 0)
    operator delete(var_98)
void* var_b0

if ((zx.d(var_c0) & 1) != 0)
    operator delete(var_b0)
