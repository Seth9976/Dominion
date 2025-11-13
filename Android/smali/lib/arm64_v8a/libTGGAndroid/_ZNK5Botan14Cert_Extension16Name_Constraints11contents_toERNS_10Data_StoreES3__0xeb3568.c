// 函数: _ZNK5Botan14Cert_Extension16Name_Constraints11contents_toERNS_10Data_StoreES3_
// 地址: 0xeb3568
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_170 = 0
void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x40) var_168 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
int64_t (* var_f8)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
int64_t (* var_178)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
int64_t (** var_1c8)() = &var_f8
std::__ndk1::ios_base::init(&var_f8)
int32_t var_68 = 0xffffffff
int64_t var_70 = 0
var_f8 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x68
void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) var_178_1 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_168 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
int128_t v0
v0.q = 0
v0:8.q = 0
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_160 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
char var_120 = (zx.o(0)).b
int64_t var_110 = (zx.o(0)).q
int32_t var_100 = 0x18
void* x28 = *(arg1 + 8)
int64_t x8_1 = *(arg1 + 0x10)
char var_1a8
void* var_198
int128_t var_190

if (x28 != x8_1)
    int64_t i = 0
    int128_t var_1c0_1 = data_71bb40
    
    do
        *(x28 + i + 0x40)
        uint64_t x0_3 =
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(
                &var_168), 
            ",", 1)
        *(x28 + i + 0x48)
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_5 =
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0_3), 
            ",", 1)
        void* x8_4 = x28 + i
        uint64_t x9_3 = zx.q(*(x8_4 + 0x10))
        int32_t temp0_1 = x9_3.d & 1
        char* x1_2
        
        if (temp0_1 == 0)
            x1_2 = x8_4 + 0x11
        else
            x1_2 = *(x8_4 + 0x20)
        
        uint64_t x2_1
        
        if (temp0_1 == 0)
            x2_1 = x9_3 u>> 1
        else
            x2_1 = *(x8_4 + 0x18)
        
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_7 =
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_5, 
                x1_2, x2_1), 
            ":", 1)
        void* x8_6 = x28 + i
        uint64_t x9_4 = zx.q(*(x8_6 + 0x28))
        int32_t temp2_1 = x9_4.d & 1
        char* x1_3
        
        if (temp2_1 == 0)
            x1_3 = x8_6 + 0x29
        else
            x1_3 = *(x8_6 + 0x38)
        
        uint64_t x2_2
        
        if (temp2_1 == 0)
            x2_2 = x9_4 u>> 1
        else
            x2_2 = *(x8_6 + 0x30)
        
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_7, x1_3, 
            x2_2)
        void* x0_8
        int128_t v2_1
        x0_8, v2_1 = operator new(0x30)
        __builtin_strncpy(x0_8, "X509v3.NameConstraints.permitted", 0x21)
        var_190 = var_1c0_1
        std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
        Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            arg2, &var_190, &var_1a8)
        
        if ((zx.d(var_1a8) & 1) != 0)
            operator delete(var_198)
        
        if ((zx.d(var_190.b) & 1) != 0)
            operator delete(x0_8)
        
        __builtin_memset(&var_190, 0, 0x18)
        std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str(
            &var_160)
        void* var_180_2
        
        if ((zx.d(var_190.b) & 1) != 0)
            operator delete(var_180_2)
        i += 0x50
    while (x8_1 - x28 != i)

void* x25 = *(arg1 + 0x20)
int64_t x8_11 = *(arg1 + 0x28)

if (x25 != x8_11)
    v0 = data_71b7d0
    int64_t i_1 = 0
    
    do
        *(x25 + i_1 + 0x40)
        uint64_t x0_16 =
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(
                &var_168), 
            ",", 1)
        *(x25 + i_1 + 0x48)
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_18 =
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0_16), 
            ",", 1)
        void* x8_14 = x25 + i_1
        uint64_t x9_5 = zx.q(*(x8_14 + 0x10))
        int32_t temp1_1 = x9_5.d & 1
        char* x1_7
        
        if (temp1_1 == 0)
            x1_7 = x8_14 + 0x11
        else
            x1_7 = *(x8_14 + 0x20)
        
        uint64_t x2_4
        
        if (temp1_1 == 0)
            x2_4 = x9_5 u>> 1
        else
            x2_4 = *(x8_14 + 0x18)
        
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_20 =
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_18, 
                x1_7, x2_4), 
            ":", 1)
        void* x8_16 = x25 + i_1
        uint64_t x9_6 = zx.q(*(x8_16 + 0x28))
        int32_t temp3_1 = x9_6.d & 1
        char* x1_8
        
        if (temp3_1 == 0)
            x1_8 = x8_16 + 0x29
        else
            x1_8 = *(x8_16 + 0x38)
        
        uint64_t x2_5
        
        if (temp3_1 == 0)
            x2_5 = x9_6 u>> 1
        else
            x2_5 = *(x8_16 + 0x30)
        
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_20, x1_8, 
            x2_5)
        void* x0_21
        int128_t v2_2
        x0_21, v2_2 = operator new(0x20)
        __builtin_strncpy(x0_21, "X509v3.NameConstraints.excluded", 0x20)
        var_190 = v0
        std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
        Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
            arg2, &var_190, &var_1a8)
        
        if ((zx.d(var_1a8) & 1) != 0)
            operator delete(var_198)
        
        if ((zx.d(var_190.b) & 1) != 0)
            operator delete(x0_21)
        
        __builtin_memset(&var_190, 0, 0x18)
        std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str(
            &var_160)
        void* var_180_4
        
        if ((zx.d(var_190.b) & 1) != 0)
            operator delete(var_180_4)
        i_1 += 0x50
    while (x8_11 - x25 != i_1)

void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) var_178_2 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_168 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
var_f8 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x68
var_160 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(var_120) & 1) != 0)
    operator delete(var_110)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
return std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
