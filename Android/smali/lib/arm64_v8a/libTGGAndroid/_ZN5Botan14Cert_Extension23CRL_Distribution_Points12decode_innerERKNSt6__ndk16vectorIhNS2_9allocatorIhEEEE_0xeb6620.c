// 函数: _ZN5Botan14Cert_Extension23CRL_Distribution_Points12decode_innerERKNSt6__ndk16vectorIhNS2_9allocatorIhEEEE
// 地址: 0xeb6620
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* var_178)()
Botan::BER_Decoder::BER_Decoder(&var_178)
Botan::BER_Decoder::decode_list<Botan::Cert_Extension::CRL_Distribution_Points::Distribution_Point>(
    &var_178, arg1 + 8, 0x10)
Botan::BER_Decoder::verify_end()
int64_t var_148_1 = 0
int64_t* var_148

if (var_148 != 0)
    (*(*var_148 + 0x38))()

void* var_168
void* x0_3 = var_168

if (x0_3 != 0)
    void* var_160_1 = x0_3
    int64_t var_158
    Botan::deallocate_memory(x0_3, var_158 - x0_3, 1)

int64_t var_170 = 0
var_168 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
int64_t (* var_f8)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
var_178 = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
std::__ndk1::ios_base::init(&var_f8)
int32_t var_68 = 0xffffffff
int64_t var_70 = 0
var_f8 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x68
var_178 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_168 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
char var_120 = (zx.o(0)).b
int64_t var_110 = (zx.o(0)).q
int32_t var_100 = 0x18
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_160_2 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
char var_190

if (*(arg1 + 0x10) != *(arg1 + 8))
    int64_t i = 0
    
    do
        Botan::AlternativeName::contents()
        int64_t* j = var_190.q
        int64_t var_188
        
        while (j != &var_188)
            uint64_t x8_7 = zx.q(j[4].b)
            int32_t temp0_1 = x8_7.d & 1
            char* x1_3
            
            if (temp0_1 == 0)
                x1_3 = j + 0x21
            else
                x1_3 = j[6]
            
            uint64_t x2_1
            
            if (temp0_1 == 0)
                x2_1 = x8_7 u>> 1
            else
                x2_1 = j[5]
            
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_9 =
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                    &var_168, x1_3, x2_1), 
                ": ", 2)
            uint64_t x8_8 = zx.q(j[7].b)
            int32_t temp1_1 = x8_8.d & 1
            void* x1_4
            
            if (temp1_1 == 0)
                x1_4 = j + 0x39
            else
                x1_4 = j[9]
            
            uint64_t x2_2
            
            if (temp1_1 == 0)
                x2_2 = x8_8 u>> 1
            else
                x2_2 = j[8]
            
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_9, 
                    x1_4, x2_2), 
                " ", 1)
            int64_t* k_1 = j[1]
            
            if (k_1 == 0)
                void* x8_10 = &j[2]
                int64_t* j_1 = *x8_10
                
                if (*j_1 == j)
                    j = j_1
                else
                    void* k
                    
                    do
                        k = *x8_10
                        x8_10 = k + 0x10
                        j = *x8_10
                    while (*j != k)
            else
                do
                    j = k_1
                    k_1 = *k_1
                while (k_1 != 0)
        
        std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
            &var_190)
        i += 1
    while (i != (*(arg1 + 0x10) - *(arg1 + 8)) s>> 6)

std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
int128_t* x8_12 = *(arg1 + 0x28)
void* var_180

if (x8_12 u>= *(arg1 + 0x30))
    std::__ndk1::vector<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::__push_back_slow_path<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
        arg1 + 0x20)
    
    if ((zx.d(var_190) & 1) != 0)
        operator delete(var_180)
else
    x8_12[1].q = var_180
    *x8_12 = var_190.o
    *(arg1 + 0x28) = x8_12 + 0x18
var_178 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_f8 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x68
var_168 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_160_3 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(var_120) & 1) != 0)
    operator delete(var_110)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
return std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
