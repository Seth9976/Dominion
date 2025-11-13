// 函数: _ZN5Botan4HTTP10url_encodeERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd8bf30
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
uint64_t x8_2 = zx.q(*arg1)
int32_t temp0 = x8_2.d & 1
uint64_t i_1

if (temp0 == 0)
    i_1 = x8_2 u>> 1
else
    i_1 = *(arg1 + 8)

void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x26

if (temp0 != 0)
    x26 = *(arg1 + 0x10)
else
    x26 = arg1 + 1

if (i_1 != 0)
    uint64_t i
    
    do
        uint32_t fp_1 = zx.d(*x26)
        char var_180
        
        if (fp_1 - 0x41 u<= 0x19)
            var_180 = fp_1.b
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_168, 
                &var_180, 1)
        else if (fp_1 - 0x61 u<= 0x19)
            var_180 = fp_1.b
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_168, 
                &var_180, 1)
        else if (fp_1 - 0x30 u<= 9)
            var_180 = fp_1.b
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_168, 
                &var_180, 1)
        else if (fp_1 - 0x2d u< 2 || fp_1 == 0x7e || fp_1 == 0x5f)
            var_180 = fp_1.b
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_168, 
                &var_180, 1)
        else
            var_180 = 0x25
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_6 =
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                &var_168, &var_180, 1)
            uint32_t x8_7 = fp_1 u>> 4
            int32_t x9_4 = fp_1 & 0xf
            int32_t x11_2 = (x8_7 - 0xa) s>> 7
            int32_t x12_3 = (x9_4 - 0xa) s>> 7
            var_180 = 4
            char var_17d_1 = 0
            char var_17f_1 = ((x8_7.b | 0x30) & x11_2.b) | ((x8_7.b + 0x37) & (not.d(x11_2)).b)
            char var_17e_1 =
                ((0x30 | (fp_1 & 0xf).b) & x12_3.b) | ((x9_4.b + 0x37) & (not.d(x12_3)).b)
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_6, 
                &var_180 | 1, 2)
            void* var_170
            
            if ((zx.d(var_180) & 1) != 0)
                operator delete(var_170)
        i = i_1
        i_1 -= 1
        x26 += 1
    while (i != 1)

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
