// 函数: _ZNK5Botan5Timer17result_string_opsEv
// 地址: 0xe90fa4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* var_168)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
int64_t (* var_f8)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::ios_base::init(&var_f8)
int64_t var_70 = 0
int32_t var_68 = 0xffffffff
var_168 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_f8 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
char var_120 = (zx.o(0)).b
int64_t var_110 = (zx.o(0)).q
int32_t var_100 = 0x10
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_160 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
char* entry_x0
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

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_168, x1, x2), 
    " ", 1)
int64_t x8_4 = *(entry_x0 + 0x38) * *(entry_x0 + 0x78)

if (x8_4 == 0)
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_168, 
        "no events\n", 0xa)
else
    double v0_1 =
        float.d(*(entry_x0 + 0x68)) / float.d(0x412e848000000000) / float.d(0x408f400000000000)
    
    if (not(v0_1 <= 0.0))
        vcvtd_u64_f64(float.d(x8_4) / v0_1)
    
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_5 =
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(&var_168)
    char var_54 = 0x20
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_6 =
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_5, &var_54, 
        1)
    uint64_t x8_5 = zx.q(entry_x0[0x18])
    int32_t temp1_1 = x8_5.d & 1
    char* x1_4
    
    if (temp1_1 == 0)
        x1_4 = &entry_x0[0x19]
    else
        x1_4 = *(entry_x0 + 0x28)
    
    uint64_t x2_1
    
    if (temp1_1 == 0)
        x2_1 = x8_5 u>> 1
    else
        x2_1 = *(entry_x0 + 0x20)
    
    int64_t* x0_8 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_6, x1_4, 
            x2_1), 
        "/sec; ", 6)
    *(x0_8 + *(*x0_8 - 0x18) + 0x10) = 2
    void* x8_11 = x0_8 + *(*x0_8 - 0x18)
    *(x8_11 + 8) = (*(x8_11 + 8) & 0xfffffeff) | 4
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(
            float.d(*(entry_x0 + 0x68)) / float.d(0x412e848000000000)
            / float.d(*(entry_x0 + 0x38) * *(entry_x0 + 0x78))), 
        " ms/op", 6)
    int64_t x8_14 = *(entry_x0 + 0x48)
    uint64_t x25_1
    
    if (x8_14 == 0)
        x25_1 = *(entry_x0 + 0x98)
        
        if (x25_1 != 0)
        label_e911d4:
            int64_t x26_1 = *(entry_x0 + 0x78)
            int64_t x27_1 = *(entry_x0 + 0x38)
            int64_t* x0_11 =
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                &var_168, " ", 1)
            void* x8_18 = x0_11 + *(*x0_11 - 0x18)
            *(x8_18 + 8) = (*(x8_18 + 8) & 0xfffffeff) | 4
            double v0_4 = float.d(x25_1) / float.d(x27_1 * x26_1)
            *(x0_11 + *(*x0_11 - 0x18) + 0x10) =
                zx.q(v0_4 < float.d(0x40c3880000000000) ? 1 : 0) << 1
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(
                    v0_4), 
                " cycles/op", 0xa)
    else
        x25_1 = vcvtd_u64_f64(float.d(*(entry_x0 + 0x68) * x8_14) / float.d(0x408f400000000000))
        
        if (x25_1 != 0)
            goto label_e911d4
    uint64_t x0_14 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        &var_168, " (", 2)
    *(entry_x0 + 0x78)
    *(entry_x0 + 0x38)
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_16 =
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0_14), " ", 
        1)
    int64_t x8_24 = *(entry_x0 + 0x38) * *(entry_x0 + 0x78)
    void* const x1_6
    
    if (x8_24 == 1)
        x1_6 = &data_73dcd8
    else
        x1_6 = &data_77cf28
    
    uint64_t x2_2
    
    x2_2 = x8_24 != 1 ? 3 : 2
    
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_16, x1_6, 
            x2_2), 
        " in ", 4)
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(
            float.d(*(entry_x0 + 0x68)) / float.d(0x412e848000000000)), 
        " ms)\n", 5)

std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
var_f8 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
var_168 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_160_1 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(var_120) & 1) != 0)
    operator delete(var_110)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
return std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
