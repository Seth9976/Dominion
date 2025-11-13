// 函数: _ZNK5Botan10BER_Object11assert_is_aENS_8ASN1_TagES1_RKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xcaefd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*arg1 == arg2 && *(arg1 + 4) == arg3.d)
    return 

int32_t var_19c = arg3.d
int32_t* x23 = arg1
uint32_t x21 = arg2
int64_t var_178 = 0
void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x40) var_170 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
int64_t (* var_100)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
int64_t (* var_180)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
std::__ndk1::ios_base::init(&var_100)
int32_t var_70 = 0xffffffff
int64_t var_78 = 0
var_100 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x68
void* __offset(
    vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x18) var_180_1 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_170 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
int128_t var_128
__builtin_memset(&var_128, 0, 0x20)
int32_t var_108 = 0x18
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_168 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_2 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
    "Tag mismatch when decoding ", 0x1b)
char* entry_x3
uint64_t x8_3 = zx.q(*entry_x3)
int32_t temp0 = x8_3.d & 1
void* x1

if (temp0 != 0)
    x1 = *(entry_x3 + 0x10)
else
    x1 = &entry_x3[1]

uint64_t x2

if (temp0 == 0)
    x2 = x8_3 u>> 1
else
    x2 = *(entry_x3 + 8)

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_2, x1, x2), 
    " got ", 5)
int32_t x8_4 = x23[1]
char var_68
uint64_t var_60
char* var_58

if (x8_4 == 0 || x8_4 == 0x20)
    Botan::asn1_tag_to_string(zx.q(*x23))
    uint64_t x8_7 = zx.q(var_68)
    int32_t temp1_1 = x8_7.d & 1
    char* x1_2
    
    if (temp1_1 == 0)
        x1_2 = &var_68 | 1
    else
        x1_2 = var_58
    
    uint64_t x2_2
    
    if (temp1_1 == 0)
        x2_2 = x8_7 u>> 1
    else
        x2_2 = var_60
    
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, x1_2, 
        x2_2)
label_caf20c:
    
    if ((zx.d(var_68) & 1) != 0)
        operator delete(var_58)
    
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_14 =
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, "/", 
        1)
    Botan::asn1_class_to_string(zx.q(x23[1]))
    uint64_t x8_10 = zx.q(var_68)
    int32_t temp5_1 = x8_10.d & 1
    char* x1_4
    
    if (temp5_1 == 0)
        x1_4 = &var_68 | 1
    else
        x1_4 = var_58
    
    uint64_t x2_4
    
    if (temp5_1 == 0)
        x2_4 = x8_10 u>> 1
    else
        x2_4 = var_60
    
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_14, x1_4, x2_4)
    
    if ((zx.d(var_68) & 1) != 0)
        operator delete(var_58)
else
    uint32_t x0_4
    
    if (x8_4 != 0xff00)
        x0_4 = *x23
    label_caf1e0:
        std::__ndk1::to_string(x0_4)
        uint64_t x8_8 = zx.q(var_68)
        int32_t temp2_1 = x8_8.d & 1
        char* x1_3
        
        if (temp2_1 == 0)
            x1_3 = &var_68 | 1
        else
            x1_3 = var_58
        
        uint64_t x2_3
        
        if (temp2_1 == 0)
            x2_3 = x8_8 u>> 1
        else
            x2_3 = var_60
        
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
            x1_3, x2_3)
        goto label_caf20c
    
    x0_4 = *x23
    
    if (x0_4 != 0xff00)
        goto label_caf1e0
    
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, "EOF", 3)

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, 
    " expected ", 0xa)

if ((var_19c & 0xffffffdf) != 0)
    std::__ndk1::to_string(x21)
    uint64_t x8_12 = zx.q(var_68)
    int32_t temp3_1 = x8_12.d & 1
    char* x1_5
    
    if (temp3_1 == 0)
        x1_5 = &var_68 | 1
    else
        x1_5 = var_58
    
    uint64_t x2_5
    
    if (temp3_1 == 0)
        x2_5 = x8_12 u>> 1
    else
        x2_5 = var_60
    
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, x1_5, 
        x2_5)
else
    Botan::asn1_tag_to_string(zx.q(x21))
    uint64_t x8_6 = zx.q(var_68)
    int32_t temp4_1 = x8_6.d & 1
    char* x1_1
    
    if (temp4_1 == 0)
        x1_1 = &var_68 | 1
    else
        x1_1 = var_58
    
    uint64_t x2_1
    
    if (temp4_1 == 0)
        x2_1 = x8_6 u>> 1
    else
        x2_1 = var_60
    
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, x1_1, 
        x2_1)

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_22 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_170, "/", 1)
Botan::asn1_class_to_string(zx.q(var_19c))
uint64_t x8_14 = zx.q(var_68)
int32_t temp6 = x8_14.d & 1
char* x1_6

if (temp6 == 0)
    x1_6 = &var_68 | 1
else
    x1_6 = var_58

uint64_t x2_6

if (temp6 == 0)
    x2_6 = x8_14 u>> 1
else
    x2_6 = var_60

std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_22, x1_6, x2_6)

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

void** x0_26 = __cxa_allocate_exception(0x20)
std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
void var_198
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "BER: ", &var_198)
*x0_26 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_26[1])
*x0_26 = _vtable_for_Botan::Decoding_Error + 0x10

if ((zx.d(var_68) & 1) != 0)
    operator delete(var_58)

*x0_26 = _vtable_for_Botan::BER_Decoding_Error + 0x10
__cxa_throw(x0_26, _typeinfo_for_Botan::BER_Decoding_Error, Botan::Exception::~Exception)
noreturn
