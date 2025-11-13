// 函数: _ZNK5Botan14Cert_Extension30CRL_Issuing_Distribution_Point11contents_toERNS_10Data_StoreES3_
// 地址: 0xeb731c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::AlternativeName::contents()
int64_t var_188 = 0
void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x40) var_180 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
int64_t (* var_110)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
int64_t (* var_190)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
std::__ndk1::ios_base::init(&var_110)
int32_t var_80 = 0xffffffff
int64_t var_88 = 0
var_110 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x68
void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) var_190_1 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_180 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
int64_t* i_1
int64_t* i = i_1
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_178 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
char var_138 = (zx.o(0)).b
int64_t var_128 = (zx.o(0)).q
int32_t var_118 = 0x18
int64_t var_70

while (i != &var_70)
    uint64_t x8_1 = zx.q(i[4].b)
    int32_t temp0_1 = x8_1.d & 1
    char* x1
    
    if (temp0_1 == 0)
        x1 = i + 0x21
    else
        x1 = i[6]
    
    uint64_t x2_1
    
    if (temp0_1 == 0)
        x2_1 = x8_1 u>> 1
    else
        x2_1 = i[5]
    
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_4 =
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_180, x1, 
            x2_1), 
        ": ", 2)
    uint64_t x8_2 = zx.q(i[7].b)
    int32_t temp1_1 = x8_2.d & 1
    void* x1_1
    
    if (temp1_1 == 0)
        x1_1 = i + 0x39
    else
        x1_1 = i[9]
    
    uint64_t x2_2
    
    if (temp1_1 == 0)
        x2_2 = x8_2 u>> 1
    else
        x2_2 = i[8]
    
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_4, x1_1, 
            x2_2), 
        " ", 1)
    int64_t* j_1 = i[1]
    
    if (j_1 == 0)
        void* x8_4 = &i[2]
        int64_t* i_2 = *x8_4
        
        if (*i_2 == i)
            i = i_2
        else
            void* j
            
            do
                j = *x8_4
                x8_4 = j + 0x10
                i = *x8_4
            while (*i != j)
    else
        do
            i = j_1
            j_1 = *j_1
        while (j_1 != 0)

void* x0_6
int128_t v0
x0_6, v0 = operator new(0x30)
int128_t var_1b0 = data_71d3f0
__builtin_strncpy(x0_6, "X509v3.CRLIssuingDistributionPoint", 0x23)
std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
char var_1c8
Botan::multimap_insert<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
    arg2, &var_1b0, &var_1c8)
void* var_1b8

if ((zx.d(var_1c8) & 1) != 0)
    operator delete(var_1b8)

if ((zx.d(var_1b0.b) & 1) != 0)
    operator delete(x0_6)

void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) var_190_2 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_110 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x68
var_180 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_178_1 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(var_138) & 1) != 0)
    operator delete(var_128)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
return std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
    &i_1)
