// 函数: _ZNK5Botan19ASN1_Pretty_Printer6formatENS_8ASN1_TagES1_mmRKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
// 地址: 0xcb4e58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x5
uint64_t x9 = zx.q(*entry_x5)
int32_t x24 = arg3.d
uint32_t x25 = arg2
void* x23 = arg1
int32_t x21
uint64_t x8

if ((x9.d & 1) != 0)
    x8 = *(entry_x5 + 8)
    x21 = x8 u> *(x23 + 0x18) ? 1 : 0
    
    if (x25 - 3 u<= 1)
        x21 |= x8 u> *(x23 + 0x20) ? 1 : 0
else
    x8 = x9 u>> 1
    x21 = *(x23 + 0x18) u< x8 ? 1 : 0
    
    if (x25 - 3 u< 2)
        x21 |= x8 u> *(x23 + 0x20) ? 1 : 0
int64_t x28 = *(x23 + 0x28)
int64_t (* var_1d0)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
int64_t (* var_160)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
int64_t (** var_208)() = &var_160
std::__ndk1::ios_base::init(&var_160)
int64_t var_d8 = 0
int32_t var_d0 = 0xffffffff
var_1d0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
var_160 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
char var_188 = (zx.o(0)).b
int64_t var_178 = (zx.o(0)).q
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_1c8 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10
int32_t var_168 = 0x10
int64_t* x0_2 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    &var_1d0, "  d=", 4)
int64_t x27_1 = x28 + arg4
*(x0_2 + *(*x0_2 - 0x18) + 0x18) = 2
int64_t* x0_4 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0_2), ", l=", 4)
*(x0_4 + *(*x0_4 - 0x18) + 0x18) = 4
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_6 =
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(x0_4), ":", 1)

if (x27_1 + 1 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    int64_t var_1e8
    uint64_t var_1e0
    char* var_1d8
    char* x27_2
    
    if (x27_1 + 1 u>= 0x17)
        uint64_t fp_1 = (x27_1 + 0x11) & 0xfffffffffffffff0
        char* x0_8 = operator new(fp_1)
        x27_2 = x0_8
        var_1e0 = x27_1 + 1
        var_1d8 = x0_8
        var_1e8 = fp_1 | 1
        memset(x27_2, 0x20, x27_1 + 1)
    else
        x27_2 = &var_1e8 | 1
        var_1e8.b = ((x27_1 + 1).d << 1).b
        
        if (x27_1 != -1)
            memset(x27_2, 0x20, x27_1 + 1)
    
    x27_2[x27_1 + 1] = 0
    uint64_t x8_13 = zx.q(var_1e8.b)
    int32_t temp0_1 = x8_13.d & 1
    char* x1_2
    
    if (temp0_1 != 0)
        x1_2 = var_1d8
    else
        x1_2 = &var_1e8:1
    
    uint64_t x2_1
    
    if (temp0_1 == 0)
        x2_1 = x8_13 u>> 1
    else
        x2_1 = var_1e0
    
    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_11 =
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_6, x1_2, 
        x2_1)
    char var_200
    char* var_1f0
    int64_t var_78
    char* var_68
    
    if (x24 != 0x20)
        if (x24 != 0)
            __builtin_memset(&var_78, 0, 0x18)
            
            if ((x24 & 0x20) != 0)
                goto label_cb50c8
            
            goto label_cb50d4
        
        Botan::asn1_tag_to_string(zx.q(x25))
    else if ((x25 & 0xfffffffe) != 0x10)
        __builtin_memset(&var_78, 0, 0x18)
    label_cb50c8:
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_78)
    label_cb50d4:
        std::__ndk1::to_string(x25)
        char var_c8
        int128_t* x0_17
        int128_t v0_1
        x0_17, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_c8, nullptr)
        void* x8_15 = x0_17[1].q
        int128_t var_b0 = *x0_17
        __builtin_memset(x0_17, 0, 0x18)
        int128_t* x0_19
        int128_t v0_2
        x0_19, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_b0)
        uint64_t x8_16 = x0_19[1].q
        int128_t var_90 = *x0_19
        __builtin_memset(x0_19, 0, 0x18)
        uint64_t x1_5
        
        if ((zx.d(var_90.b) & 1) == 0)
            x1_5 = &var_90 | 1
        else
            x1_5 = x8_16
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            &var_78, x1_5)
        
        if ((zx.d(var_90.b) & 1) == 0)
            if ((zx.d(var_b0.b) & 1) != 0)
                goto label_cb5188
            
            goto label_cb5168
        
        operator delete(x8_16)
        
        if ((zx.d(var_b0.b) & 1) != 0)
        label_cb5188:
            operator delete(x8_15)
            
            if ((zx.d(var_c8) & 1) == 0)
                goto label_cb516c
            
            goto label_cb5198
        
    label_cb5168:
        
        if ((zx.d(var_c8) & 1) != 0)
        label_cb5198:
            void* var_b8
            operator delete(var_b8)
            
            if ((x24 & 0x40) != 0)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_78)
        else
        label_cb516c:
            
            if ((x24 & 0x40) != 0)
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                    &var_78)
        
        if ((x24 & 0x80) != 0)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                &var_78)
        
        var_1f0 = var_68
        var_200.o = var_78.o
    else
        Botan::asn1_tag_to_string(zx.q(x25))
    
    uint64_t x8_24 = zx.q(var_200)
    int32_t temp1_1 = x8_24.d & 1
    char* x1_8
    
    if (temp1_1 == 0)
        x1_8 = &var_200 | 1
    else
        x1_8 = var_1f0
    
    uint64_t x2_4
    uint64_t var_1f8
    
    if (temp1_1 == 0)
        x2_4 = x8_24 u>> 1
    else
        x2_4 = var_1f8
    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_11, x1_8, x2_4)
    
    if ((zx.d(var_200) & 1) != 0)
        operator delete(var_1f0)
    
    if ((zx.d(var_1e8.b) & 1) != 0)
        operator delete(var_1d8)
    
    uint64_t x8_27 = zx.q(*entry_x5)
    uint64_t x8_28
    
    if ((x8_27.d & 1) == 0)
        x8_28 = x8_27 u>> 1
    else
        x8_28 = *(entry_x5 + 8)
    
    if (x8_28 == 0)
        if (((x21 | (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            entry_x5, 0, -ffffffffffffffff, &data_793a18) == 0 ? 1 : 0)) & 1) != 0)
        label_cb537c:
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_1d0, 
                "\n", 1)
            std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
            var_160 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x40
            var_1d0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x18
            void* __offset(
                vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                0x10) var_1c8_1 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                + 0x10
            
            if ((zx.d(var_188) & 1) != 0)
                operator delete(var_178)
            
            std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
            std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
            return std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
    else if ((x21 & 1) != 0)
        goto label_cb537c
    
    void* x8_34 = &var_1d0 + *(var_1d0 - 0x18)
    int64_t x1_9
    
    if ((zx.d(*(x8_34 + 0x20)) & 5) == 0)
        int64_t* x0_31 = *(x8_34 + 0x28)
        x1_9 = (*(*x0_31 + 0x20))(x0_31, 0, 1, 0x10)
    else
        x1_9 = -1
    
    int64_t x8_37 = *(x23 + 0x30)
    uint64_t x23_1
    
    if (x8_37 u> x1_9)
        x23_1 = x8_37 - x1_9
    else
        x23_1 = 1
    
    if (x23_1 u< -0x10)
        uint64_t var_70
        char* x24_1
        
        if (x23_1 u>= 0x17)
            uint64_t x25_1 = (x23_1 + 0x10) & 0xfffffffffffffff0
            char* x0_33 = operator new(x25_1)
            x24_1 = x0_33
            var_70 = x23_1
            var_68 = x0_33
            var_78 = x25_1 | 1
            memset(x24_1, 0x20, x23_1)
        else
            x24_1 = &var_78 | 1
            var_78.b = (x23_1.d << 1).b
            
            if (x23_1 != 0)
                memset(x24_1, 0x20, x23_1)
        
        x24_1[x23_1] = 0
        uint64_t x8_42 = zx.q(var_78.b)
        int32_t temp4_1 = x8_42.d & 1
        char* x1_10
        
        if (temp4_1 != 0)
            x1_10 = var_68
        else
            x1_10 = &var_78:1
        
        uint64_t x2_6
        
        if (temp4_1 == 0)
            x2_6 = x8_42 u>> 1
        else
            x2_6 = var_70
        
        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_36 =
            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(&var_1d0, 
            x1_10, x2_6)
        uint64_t x8_43 = zx.q(*entry_x5)
        int32_t temp5_1 = x8_43.d & 1
        void* x1_11
        
        if (temp5_1 != 0)
            x1_11 = *(entry_x5 + 0x10)
        else
            x1_11 = &entry_x5[1]
        
        uint64_t x2_7
        
        if (temp5_1 == 0)
            x2_7 = x8_43 u>> 1
        else
            x2_7 = *(entry_x5 + 8)
        
        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(x0_36, x1_11, 
            x2_7)
        
        if ((zx.d(var_78.b) & 1) != 0)
            operator delete(var_68)
        
        goto label_cb537c

int64_t* x0_42 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
var_160 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x40
var_1d0 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x18
void* __offset(
    vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x10) var_1c8_2 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
    + 0x10

if ((zx.d(var_188) & 1) != 0)
    operator delete(var_178)

std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
sub_1101e04(x0_42)
noreturn
