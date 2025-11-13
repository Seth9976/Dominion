// 函数: _ZNK5Botan5Timer17result_string_bpsEv
// 地址: 0xe913dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x0
int64_t x25 = *(entry_x0 + 0x78)
int64_t x26 = *(entry_x0 + 0x38)
int64_t v9 = *(entry_x0 + 0x68)
int64_t (* var_178)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
int64_t (* var_108)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::ios_base::init(&var_108)
int64_t var_80 = 0
int32_t var_78 = 0xffffffff
var_178 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_108 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
char var_130 = (zx.o(0)).b
int64_t var_120 = (zx.o(0)).q
int32_t var_110 = 0x10
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_170 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
uint64_t x8_2 = zx.q(*entry_x0)
int32_t temp0 = x8_2.d & 1
char* x1

if (temp0 != 0)
    x1 = *(entry_x0 + 0x10)
else
    x1 = &entry_x0[1]

uint64_t x2

if (temp0 == 0)
    x2 = x8_2 u>> 1
else
    x2 = *(entry_x0 + 8)

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_178, x1, x2)
uint64_t x8_3 = zx.q(entry_x0[0x18])

if ((x8_3.d & 1) != 0)
    if (*(entry_x0 + 0x20) != 0)
    label_e914dc:
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_3 =
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_178, 
            " ", 1)
        uint64_t x8_6 = zx.q(entry_x0[0x18])
        int32_t temp1_1 = x8_6.d & 1
        void* x1_1
        
        if (temp1_1 != 0)
            x1_1 = *(entry_x0 + 0x28)
        else
            x1_1 = &entry_x0[0x19]
        
        uint64_t x2_1
        
        if (temp1_1 == 0)
            x2_1 = x8_6 u>> 1
        else
            x2_1 = *(entry_x0 + 0x20)
        
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_3, x1_1, 
            x2_1)
else if (x8_3 u>> 1 != 0)
    goto label_e914dc

if (*(entry_x0 + 0x30) != 0)
    uint64_t x0_5 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        &var_178, " buffer size ", 0xd)
    *(entry_x0 + 0x30)
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0_5), 
        " bytes:", 7)

double v8 = float.d(x26 * x25) * float.d(0x3eb0000000000000)

if (*(entry_x0 + 0x38) * *(entry_x0 + 0x78) == 0)
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_178, " ", 
            1), 
        "N/A", 3)
else
    int64_t* x0_8 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        &var_178, " ", 1)
    void* x8_12 = x0_8 + *(*x0_8 - 0x18)
    *(x8_12 + 8) = (*(x8_12 + 8) & 0xfffffeff) | 4
    *(x0_8 + *(*x0_8 - 0x18) + 0x10) = 3
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(v8
            / (float.d(v9) / float.d(0x412e848000000000) / float.d(0x408f400000000000))), 
        " MiB/sec", 8)

int64_t x8_16 = *(entry_x0 + 0x48)
uint64_t x25_1

if (x8_16 == 0)
    x25_1 = *(entry_x0 + 0x98)
    
    if (x25_1 != 0)
    label_e91634:
        int64_t x26_1 = *(entry_x0 + 0x78)
        int64_t x27_2 = *(entry_x0 + 0x38)
        int64_t* x0_13 =
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_178, 
            " ", 1)
        void* x8_20 = x0_13 + *(*x0_13 - 0x18)
        *(x8_20 + 8) = (*(x8_20 + 8) & 0xfffffeff) | 4
        *(x0_13 + *(*x0_13 - 0x18) + 0x10) = 2
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(
                float.d(x25_1) / float.d(x27_2 * x26_1)), 
            " cycles/byte", 0xc)
else
    x25_1 = vcvtd_u64_f64(float.d(*(entry_x0 + 0x68) * x8_16) / float.d(0x408f400000000000))
    
    if (x25_1 != 0)
        goto label_e91634
std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_178, " (", 2)
std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(v8), " MiB in ", 
    8)
std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(
        float.d(*(entry_x0 + 0x68)) / float.d(0x412e848000000000)), 
    " ms)\n", 5)
std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
var_108 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
var_178 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_170_1 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(var_130) & 1) != 0)
    operator delete(var_120)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
return std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
