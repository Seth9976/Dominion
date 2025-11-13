// 函数: _ZN5Botan4HTTP9http_syncENSt6__ndk18functionIFNS1_12basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKS8_SA_SA_EEESA_SA_SA_RKNS1_6vectorIhNS6_IhEEEEm
// 地址: 0xd8c4f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg3)
char var_420[0x8]
void* var_410
char var_2f0
uint64_t i
void* __offset(
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
    0x1) x19

if ((x9.d & 1) != 0)
    i = *(arg3 + 8)
    
    if (i == 0)
    label_d8d6e4:
        void** x0_144 = __cxa_allocate_exception(0x20)
        var_2f0 = 0x12
        int64_t var_2ef_1
        __builtin_strcpy(&var_2ef_1, "URL empty")
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "HTTP error ", &var_2f0)
        *x0_144 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_144[1])
        
        if ((zx.d(var_420[0]) & 1) != 0)
            operator delete(var_410)
        
        *x0_144 = _vtable_for_Botan::HTTP::HTTP_Error + 0x10
        __cxa_throw(x0_144, _typeinfo_for_Botan::HTTP::HTTP_Error, Botan::Exception::~Exception)
        noreturn
    
    x19 = *(arg3 + 0x10)
else
    if (x9.d u< 2)
        goto label_d8d6e4
    
    x19 = arg3 + 1
    i = x9 u>> 1

void* var_2e0
int64_t (* var_1d8)()

if (i s>= 3)
    void* x26_1 = x19 + i
    void* __offset(
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
        0x1) x0 = x19
    
    do
        int16_t* x0_1 = memchr(x0, 0x3a, i - 2)
        
        if (x0_1 == 0)
            break
        
        if (((zx.d(*x0_1) ^ 0x2f3a) | (zx.d(x0_1[1].b) ^ 0x2f)) == 0)
            if (x0_1 != x26_1)
                void* x28_1 = x0_1 - x19
                
                if (x28_1 != -1)
                    uint64_t x0_10 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::find(
                        arg3.b, 0x2f)
                    int64_t var_90
                    __builtin_memset(&var_90, 0, 0x18)
                    int64_t var_b0
                    __builtin_memset(&var_b0, 0, 0x18)
                    int64_t var_d0
                    __builtin_memset(&var_d0, 0, 0x18)
                    void* var_a0
                    void* var_80_1
                    void* var_80
                    
                    if (x0_10 == -1)
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &var_420, arg3, x28_1 + 3, -ffffffffffffffff)
                        
                        if ((zx.d(var_90.b) & 1) != 0)
                            operator delete(var_80)
                        
                        var_90.o = var_420.o
                        var_80_1 = var_410
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                            &var_b0)
                    else
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &var_420, arg3, x28_1 + 3, x0_10 - x28_1 - 3)
                        
                        if ((zx.d(var_90.b) & 1) != 0)
                            operator delete(var_80)
                        
                        var_90.o = var_420.o
                        var_80_1 = var_410
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &var_420, arg3, x0_10, -ffffffffffffffff)
                        
                        if ((zx.d(var_b0.b) & 1) != 0)
                            operator delete(var_a0)
                        
                        var_b0.o = var_420.o
                        var_a0 = var_410
                    uint64_t x8_14 = zx.q(var_90.b)
                    int32_t temp0 = x8_14.d & 1
                    void* x20_3 = &var_90 | 1
                    uint64_t var_88
                    uint64_t x2_6
                    
                    if (temp0 == 0)
                        x2_6 = x8_14 u>> 1
                    else
                        x2_6 = var_88
                    
                    void* x19_3
                    
                    x19_3 = temp0 == 0 ? x20_3 : var_80_1
                    
                    void* var_c0
                    
                    if (x2_6 s< 1)
                    label_d8c878:
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::assign(
                            &var_d0)
                    else
                        void* x26_3 = x19_3 + x2_6
                        void* x0_18 = x19_3
                        
                        while (true)
                            char* x0_19 = memchr(x0_18, 0x3a, x2_6)
                            
                            if (x0_19 == 0)
                                goto label_d8c878
                            
                            if (zx.d(*x0_19) == 0x3a)
                                if (x0_19 == x26_3)
                                    goto label_d8c878
                                
                                void* x19_4 = x0_19 - x19_3
                                
                                if (x19_4 == -1)
                                    goto label_d8c878
                                
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &var_420, &var_90, x19_4 + 1, -ffffffffffffffff)
                                
                                if ((zx.d(var_d0.b) & 1) != 0)
                                    operator delete(var_c0)
                                
                                var_d0.o = var_420.o
                                var_c0 = var_410
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &var_420, &var_90, 0, x19_4)
                                
                                if ((zx.d(var_90.b) & 1) != 0)
                                    operator delete(var_80_1)
                                
                                var_90.o = var_420.o
                                var_80_1 = var_410
                                break
                            
                            x0_18 = &x0_19[1]
                            x2_6 = x26_3 - x0_18
                            
                            if (x2_6 s< 1)
                                goto label_d8c878
                    
                    var_1d8 = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x18
                    int64_t (* var_168)() = construction_vtable_for_std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x40
                    std::__ndk1::ios_base::init(&var_168)
                    int64_t var_e0 = 0
                    int32_t var_d8 = 0xffffffff
                    var_1d8 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x18
                    var_168 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x40
                    void* __offset(
                        vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                        0x10) var_1d0
                    int64_t* var_528 = &var_1d0
                    std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
                    var_1d0 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x10
                    char var_190 = (zx.o(0)).b
                    int64_t var_180 = (zx.o(0)).q
                    int32_t var_170 = 0x10
                    uint64_t x8_23 = zx.q(*arg2)
                    int32_t temp1 = x8_23.d & 1
                    char* x1_11
                    
                    if (temp1 != 0)
                        x1_11 = *(arg2 + 0x10)
                    else
                        x1_11 = arg2 + 1
                    
                    uint64_t x2_8
                    
                    if (temp1 == 0)
                        x2_8 = x8_23 u>> 1
                    else
                        x2_8 = *(arg2 + 8)
                    
                    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_28 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            &var_1d8, x1_11, x2_8), 
                        " ", 1)
                    uint64_t x8_24 = zx.q(var_b0.b)
                    int32_t temp2 = x8_24.d & 1
                    void* x1_12
                    
                    if (temp2 == 0)
                        x1_12 = &var_b0 | 1
                    else
                        x1_12 = var_a0
                    
                    uint64_t x2_9
                    uint64_t var_a8
                    
                    if (temp2 == 0)
                        x2_9 = x8_24 u>> 1
                    else
                        x2_9 = var_a8
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            x0_28, x1_12, x2_9), 
                        " HTTP/1.0\r\n", 0xb)
                    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_31 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        &var_1d8, "Host: ", 6)
                    uint64_t x8_25 = zx.q(var_90.b)
                    int32_t temp3 = x8_25.d & 1
                    void* x1_13
                    
                    x1_13 = temp3 == 0 ? x20_3 : var_80_1
                    
                    uint64_t x2_10
                    
                    if (temp3 == 0)
                        x2_10 = x8_25 u>> 1
                    else
                        x2_10 = var_88
                    
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            x0_31, x1_13, x2_10), 
                        "\r\n", 2)
                    uint64_t x10_4 = zx.q(*arg2)
                    uint64_t x8_26 = *(arg2 + 8)
                    int32_t x9_9 = x10_4.d & 1
                    uint64_t x10_5 = x10_4 u>> 1
                    uint64_t x11_4
                    
                    x11_4 = x9_9 == 0 ? x10_5 : x8_26
                    
                    if (x11_4 != 3)
                        goto label_d8c9fc
                    
                    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            arg2, 0, -ffffffffffffffff, 0x769787) == 0)
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            &var_1d8, "Accept: */*\r\n", 0xd)
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            &var_1d8, "Cache-Control: no-cache\r\n", 0x19)
                    else
                        uint64_t x10_6 = zx.q(*arg2)
                        x8_26 = *(arg2 + 8)
                        x9_9 = x10_6.d & 1
                        x10_5 = x10_6 u>> 1
                    label_d8c9fc:
                        uint64_t x8_27
                        
                        if ((x9_9 & 0xff) == 0)
                            x8_27 = x10_5
                        else
                            x8_27 = x8_26
                        
                        if (x8_27 == 4 && std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                arg2, 0, -ffffffffffffffff, "POST") == 0)
                            uint64_t x0_38 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                &var_1d8, "Content-Length: ", 0x10)
                            *arg5
                            *(arg5 + 8)
                            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::operator<<(
                                    x0_38), 
                                "\r\n", 2)
                    
                    uint64_t x8_29 = zx.q(*arg4)
                    uint64_t x8_30
                    
                    if ((x8_29.d & 1) == 0)
                        x8_30 = x8_29 u>> 1
                    else
                        x8_30 = *(arg4 + 8)
                    
                    if (x8_30 != 0)
                        std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >* x0_43 = std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            &var_1d8, "Content-Type: ", 0xe)
                        uint64_t x8_31 = zx.q(*arg4)
                        int32_t temp4_1 = x8_31.d & 1
                        void* __offset(
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                            0x1) x1_15
                        
                        if (temp4_1 != 0)
                            x1_15 = *(arg4 + 0x10)
                        else
                            x1_15 = arg4 + 1
                        
                        uint64_t x2_11
                        
                        if (temp4_1 == 0)
                            x2_11 = x8_31 u>> 1
                        else
                            x2_11 = *(arg4 + 8)
                        
                        std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                            std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                                x0_43, x1_15, x2_11), 
                            "\r\n", 2)
                    
                    std::__ndk1::__put_character_sequence<char, std::__ndk1::char_traits<char> >(
                        &var_1d8, "Connection: close\r\n\r\n", 0x15)
                    *(arg5 + 8)
                    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::write(
                        &var_1d8, *arg5)
                    std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str()
                    int64_t* x0_48 = *(arg1 + 0x20)
                    
                    if (x0_48 == 0)
                        sub_a58ab4()
                        noreturn
                    
                    char var_78
                    (*(*x0_48 + 0x30))(x0_48, &var_90, &var_d0, &var_78)
                    int64_t (* var_278)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x40
                    var_2f0.q = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x18
                    int64_t var_2ef = 0
                    int64_t (** var_538)() = &var_278
                    std::__ndk1::ios_base::init(&var_278)
                    int64_t var_1f0 = 0
                    int32_t var_1e8 = 0xffffffff
                    var_2f0.q = _vtable_for_std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x18
                    var_278 = _vtable_for_std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x40
                    std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
                    char var_2a0 = (zx.o(0)).b
                    int64_t var_290 = (zx.o(0)).q
                    var_2e0 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                        + 0x10
                    int32_t var_280 = 8
                    std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str(
                        &var_2e0)
                    
                    if ((zx.d(var_420[0]) & 1) != 0)
                        operator delete(var_410)
                    
                    int64_t (** var_540)() = &var_168
                    void* var_68
                    
                    if ((zx.d(var_78) & 1) != 0)
                        operator delete(var_68)
                    
                    void* x8_39 = var_2f0.q
                    int64_t var_308
                    __builtin_memset(&var_308, 0, 0x18)
                    *(x8_39 - 0x18)
                    std::__ndk1::ios_base::getloc()
                    int64_t* x0_55 = std::__ndk1::locale::use_facet(&var_420)
                    char x0_56 = (*(*x0_55 + 0x38))(x0_55, 0xa)
                    std::__ndk1::locale::~locale()
                    std::__ndk1::getline<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                        &var_2f0, &var_308, x0_56)
                    
                    if ((zx.d((&var_2f0)[*(var_2f0.q - 0x18) + 0x20]) & 5) == 0)
                        uint64_t x8_47 = zx.q(var_308.b)
                        uint64_t x8_48
                        uint64_t var_300
                        
                        if ((x8_47.d & 1) == 0)
                            x8_48 = x8_47 u>> 1
                        else
                            x8_48 = var_300
                        
                        if (x8_48 != 0)
                            int64_t var_418 = 0
                            void* __offset(
                                vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                                0x40) var_410_1 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                + 0x40
                            int64_t (* var_3a0)() = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                + 0x40
                            var_420 = construction_vtable_for_std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >-in-std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                + 0x18
                            int64_t (** var_548)() = &var_3a0
                            std::__ndk1::ios_base::init(&var_3a0)
                            int32_t var_310 = 0xffffffff
                            int64_t var_318 = 0
                            var_3a0 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                + 0x68
                            var_420 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                + 0x18
                            void* __offset(
                                vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                                0x40) var_410_2 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                + 0x40
                            std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::basic_streambuf()
                            void* __offset(
                                vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                                0x10) var_408 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                + 0x10
                            char var_3c8 = (zx.o(0)).b
                            int64_t var_3b8 = (zx.o(0)).q
                            int32_t var_3a8 = 0x18
                            void* __offset(
                                vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                                0x10)* var_550 = &var_408
                            std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::str(
                                &var_408)
                            int64_t var_438
                            __builtin_memset(&var_438, 0, 0x18)
                            int64_t var_458
                            __builtin_memset(&var_458, 0, 0x18)
                            std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::operator>>(std::__ndk1::operator>><char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                &var_420, &var_438))
                            *(var_420 - 0x18)
                            std::__ndk1::ios_base::getloc()
                            int64_t* x0_64 = std::__ndk1::locale::use_facet(&var_78)
                            char x0_65 = (*(*x0_64 + 0x38))(x0_64, 0xa)
                            std::__ndk1::locale::~locale()
                            std::__ndk1::getline<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                &var_420, &var_458, x0_65)
                            char var_470
                            
                            if ((zx.d(var_420[*(var_420 - 0x18) + 0x20]) & 5) == 0)
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &var_78, &var_438, 0, 5)
                                uint64_t x9_19 = zx.q(var_78)
                                int32_t x8_59 = x9_19.d & 1
                                uint64_t x9_21
                                int32_t var_70
                                
                                if (x8_59 == 0)
                                    x9_21 = x9_19 u>> 1
                                else
                                    x9_21 = var_70.q
                                int32_t x19_6
                                
                                if (x9_21 != 5)
                                    x19_6 = 1
                                    
                                    if ((x8_59 & 0xff) != 0)
                                        operator delete(var_68)
                                else
                                    x19_6 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        &var_78, 0, -ffffffffffffffff, "HTTP/") != 0 ? 1 : 0
                                    
                                    if ((zx.d(var_78) & 1) != 0)
                                        operator delete(var_68)
                                
                                if (x19_6 == 0)
                                    int128_t var_46f
                                    var_46f:0xf.q = 0
                                    int64_t var_488
                                    __builtin_memset(&var_488, 0, 0x18)
                                    var_470.q = &var_46f:7
                                    var_46f:7.q = 0
                                label_d8ce84:
                                    *(var_2f0.q - 0x18)
                                    std::__ndk1::ios_base::getloc()
                                    int64_t* x0_73 = std::__ndk1::locale::use_facet(&var_78)
                                    char x0_74 = (*(*x0_73 + 0x38))(x0_73, 0xa)
                                    std::__ndk1::locale::~locale()
                                    int64_t* x0_76 = std::__ndk1::getline<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                        &var_2f0, &var_488, x0_74)
                                    char var_4b8
                                    void* var_4a0
                                    void* var_478
                                    
                                    if ((zx.d(*(x0_76 + *(*x0_76 - 0x18) + 0x20)) & 5) == 0)
                                        uint64_t x10_12 = zx.q(var_488.b)
                                        uint64_t var_480
                                        uint64_t x8_70 = var_480
                                        int32_t x9_22 = x10_12.d & 1
                                        uint64_t x10_13 = x10_12 u>> 1
                                        uint64_t x11_6
                                        
                                        x11_6 = x9_22 == 0 ? x10_13 : x8_70
                                        
                                        if (x11_6 != 1)
                                            goto label_d8cf30
                                        
                                        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                                &var_488, 0, -ffffffffffffffff, 0x785d6f) != 0)
                                            uint64_t x10_14 = zx.q(var_488.b)
                                            x8_70 = var_480
                                            x9_22 = x10_14.d & 1
                                            x10_13 = x10_14 u>> 1
                                        label_d8cf30:
                                            int32_t temp5_1 = x9_22 & 0xff
                                            uint64_t x8_71
                                            
                                            x8_71 = temp5_1 == 0 ? x10_13 : x8_70
                                            
                                            void* x26_6
                                            
                                            if (temp5_1 == 0)
                                                x26_6 = &var_488 | 1
                                            else
                                                x26_6 = var_478
                                            
                                            int64_t x24_1 = x8_71 - 2
                                            
                                            if (x8_71 s>= 2)
                                                void* x25_1 = x26_6 + x8_71
                                                void* x0_79 = x26_6
                                                
                                                while (true)
                                                    int16_t* x0_80 = memchr(x0_79, 0x3a, x8_71 - 1)
                                                    
                                                    if (x0_80 == 0)
                                                        goto label_d8d4f0
                                                    
                                                    if (zx.d(*x0_80) == 0x203a)
                                                        if (x0_80 == x25_1)
                                                            break
                                                        
                                                        void* x26_7 = x0_80 - x26_6
                                                        
                                                        if (x26_7 == -1)
                                                            break
                                                        
                                                        if (x26_7 u> x24_1)
                                                            break
                                                        
                                                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                            &var_78, &var_488, 0, x26_7)
                                                        uint64_t x8_73 = zx.q(var_488.b)
                                                        uint64_t x8_74
                                                        
                                                        if ((x8_73.d & 1) != 0)
                                                            x8_74 = var_480
                                                        else
                                                            x8_74 = x8_73 u>> 1
                                                        
                                                        if (x26_7 + 2 u< x8_74 - 1)
                                                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                                &var_4a0, &var_488, x26_7 + 2, 
                                                                x8_74 - x26_7 - 3)
                                                            var_4b8.q = &var_78
                                                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::operator=(std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(
                                                                &var_470, &var_78) + 0x38)
                                                            void* var_490
                                                            
                                                            if ((zx.d(var_4a0.b) & 1) != 0)
                                                                operator delete(var_490)
                                                        
                                                        if ((zx.d(var_78) & 1) == 0)
                                                            goto label_d8ce84
                                                        
                                                        operator delete(var_68)
                                                        goto label_d8ce84
                                                    
                                                    x0_79 = x0_80 + 1
                                                    x8_71 = x25_1 - x0_79
                                                    
                                                    if (x8_71 s< 2)
                                                        goto label_d8d4f0
                                            
                                        label_d8d4f0:
                                            void** x0_129 = __cxa_allocate_exception(0x20)
                                            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                                "Invalid HTTP header ", &var_488)
                                            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                                "HTTP error ", &var_4a0)
                                            *x0_129 = _vtable_for_Botan::Exception + 0x10
                                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                &x0_129[1])
                                            
                                            if ((zx.d(var_78) & 1) != 0)
                                                operator delete(var_68)
                                            
                                            *x0_129 = _vtable_for_Botan::HTTP::HTTP_Error + 0x10
                                            __cxa_throw(x0_129, 
                                                _typeinfo_for_Botan::HTTP::HTTP_Error, 
                                                Botan::Exception::~Exception)
                                            noreturn
                                    
                                    int32_t var_43c
                                    
                                    if (var_43c != 0x12d)
                                    label_d8d1a0:
                                        __builtin_memset(&var_4a0, 0, 0x18)
                                        uint8_t* x0_95 = operator new(0x1000)
                                        memset(x0_95, 0, 0x1000)
                                        uint8_t* var_498
                                        void var_2d0
                                        
                                        while (*(&var_2d0 + *(var_2f0.q - 0x18)) == 0)
                                            std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::read(
                                                &var_2f0, x0_95)
                                            std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<uint8_t*>(
                                                &var_4a0, var_498, x0_95)
                                        
                                        int64_t var_4d0
                                        __builtin_memset(&var_4d0, 0, 0x18)
                                        var_78 = 0x1c
                                        int64_t var_77_2
                                        __builtin_strncpy(&var_77_2, "Content-Length", 0xf)
                                        int64_t x0_99 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::find<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                                            &var_470)
                                        
                                        if (&var_46f:7 == x0_99)
                                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                &var_4b8)
                                        else
                                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                &var_4b8)
                                        
                                        void* var_4c0
                                        
                                        if ((zx.d(var_4d0.b) & 1) != 0)
                                            operator delete(var_4c0)
                                        
                                        if ((zx.d(var_78) & 1) != 0)
                                            operator delete(var_68)
                                        
                                        uint64_t x8_91 = zx.q(var_4b8)
                                        uint64_t x8_92
                                        uint64_t var_4b0
                                        
                                        if ((x8_91.d & 1) == 0)
                                            x8_92 = x8_91 u>> 1
                                        else
                                            x8_92 = var_4b0
                                        
                                        if (x8_92 != 0 && var_498 - var_4a0
                                                != zx.q(Botan::to_u32bit(&var_4b8)))
                                            void** x0_149 = __cxa_allocate_exception(0x20)
                                            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                                "Content-Length disagreement, header says ", 
                                                &var_4b8)
                                            char var_508[0x18]
                                            int128_t* x0_151
                                            int128_t v0_7
                                            x0_151, v0_7 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                                &var_508)
                                            int64_t var_4e0 = x0_151[1].q
                                            int128_t var_4f0 = *x0_151
                                            __builtin_memset(x0_151, 0, 0x18)
                                            std::__ndk1::to_string(var_498 - var_4a0)
                                            char var_520
                                            uint64_t x1_53
                                            uint64_t var_510
                                            
                                            if ((zx.d(var_520) & 1) == 0)
                                                x1_53 = &var_520 | 1
                                            else
                                                x1_53 = var_510
                                            int128_t* x0_154
                                            int128_t v0_8
                                            x0_154, v0_8 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                                                &var_4f0, x1_53)
                                            int64_t var_4c0_1 = x0_154[1].q
                                            var_4d0.o = *x0_154
                                            __builtin_memset(x0_154, 0, 0x18)
                                            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                                "HTTP error ", &var_4d0)
                                            *x0_149 = _vtable_for_Botan::Exception + 0x10
                                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                &x0_149[1])
                                            
                                            if ((zx.d(var_78) & 1) != 0)
                                                operator delete(var_68)
                                            
                                            *x0_149 = _vtable_for_Botan::HTTP::HTTP_Error + 0x10
                                            __cxa_throw(x0_149, 
                                                _typeinfo_for_Botan::HTTP::HTTP_Error, 
                                                Botan::Exception::~Exception)
                                            noreturn
                                        
                                        int64_t entry_x8
                                        Botan::HTTP::Response::Response(entry_x8.d, zx.q(var_43c), 
                                            &var_458, &var_4a0)
                                        void* var_4a8
                                        
                                        if ((zx.d(var_4b8) & 1) != 0)
                                            operator delete(var_4a8)
                                        operator delete(x0_95)
                                        void* x0_109 = var_4a0
                                        
                                        if (x0_109 != 0)
                                            void* var_498_1 = x0_109
                                            operator delete(x0_109)
                                    else
                                        void* x20_4 = var_46f:7.q
                                        var_78 = 0x10
                                        int64_t var_77
                                        __builtin_strncpy(&var_77, "Location", 9)
                                        
                                        if (x20_4 == 0)
                                            goto label_d8d1a0
                                        
                                        int64_t x27_1 = &var_78 | 1
                                        
                                        while (true)
                                            uint64_t x9_24 = zx.q(*(x20_4 + 0x20))
                                            uint64_t x22_2
                                            
                                            if ((x9_24.d & 1) == 0)
                                                x22_2 = x9_24 u>> 1
                                            else
                                                x22_2 = *(x20_4 + 0x28)
                                            
                                            uint64_t x26_8
                                            
                                            x26_8 = x22_2 u< 8 ? x22_2 : 8
                                            
                                            if (x26_8 != 0)
                                                void* x28_2
                                                
                                                if ((x9_24.d & 1) != 0)
                                                    x28_2 = *(x20_4 + 0x30)
                                                else
                                                    x28_2 = x20_4 + 0x21
                                                
                                                int32_t x0_89 = memcmp(x27_1, x28_2, x26_8)
                                                
                                                if (x0_89 == 0)
                                                    if (x22_2 u<= 8)
                                                    label_d8d104:
                                                        int32_t x0_91 = memcmp(x28_2, x27_1, x26_8)
                                                        
                                                        if (x0_91 == 0)
                                                            goto label_d8d10c
                                                        
                                                        if ((x0_91 & 0x80000000) == 0)
                                                            break
                                                        
                                                        x20_4 += 8
                                                else if ((x0_89 & 0x80000000) == 0)
                                                    goto label_d8d104
                                            else if (x22_2 u<= 8)
                                            label_d8d10c:
                                                
                                                if (x22_2 u>= 8)
                                                    break
                                                
                                                x20_4 += 8
                                            
                                            x20_4 = *x20_4
                                            
                                            if (x20_4 == 0)
                                                goto label_d8d1a0
                                        
                                        if (arg6 == 0)
                                            void** x0_159 = __cxa_allocate_exception(0x20)
                                            int64_t x0_160
                                            int128_t v0_9
                                            x0_160, v0_9 = operator new(0x20)
                                            int64_t var_490_1 = x0_160
                                            var_4a0.o = data_71b7d0
                                            __builtin_strncpy(x0_160, 
                                                "HTTP redirection count exceeded", 0x20)
                                            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                                "HTTP error ", &var_4a0)
                                            *x0_159 = _vtable_for_Botan::Exception + 0x10
                                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                &x0_159[1])
                                            
                                            if ((zx.d(var_78) & 1) != 0)
                                                operator delete(var_68)
                                            
                                            *x0_159 = _vtable_for_Botan::HTTP::HTTP_Error + 0x10
                                            __cxa_throw(x0_159, 
                                                _typeinfo_for_Botan::HTTP::HTTP_Error, 
                                                Botan::Exception::~Exception)
                                            noreturn
                                        
                                        var_78 = 0x10
                                        int64_t var_77_1
                                        __builtin_strncpy(&var_77_1, "Location", 9)
                                        std::__ndk1::__tree_node_base<void*>** x0_93 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::__find_equal<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >(
                                            &var_470, &var_4a0)
                                        std::__ndk1::__tree_node_base<void*>* x27_2 = *x0_93
                                        
                                        if (x27_2 == 0)
                                            std::__ndk1::__tree_node_base<void*>* x0_94
                                            int128_t v0_6
                                            x0_94, v0_6 = operator new(0x50)
                                            v0_6 = var_78.o
                                            void* x9_25 = var_4a0
                                            __builtin_memset(&var_78, 0, 0x18)
                                            *x0_94 = 0
                                            *(x0_94 + 8) = 0
                                            *(x0_94 + 0x20) = v0_6
                                            *(x0_94 + 0x30) = var_68
                                            __builtin_memset(x0_94 + 0x38, 0, 0x18)
                                            *(x0_94 + 0x10) = x9_25
                                            *x0_93 = x0_94
                                            x27_2 = x0_94
                                            int64_t x8_83 = *var_470.q
                                            std::__ndk1::__tree_node_base<void*>* x1_32
                                            
                                            if (x8_83 == 0)
                                                x1_32 = x27_2
                                            else
                                                var_470.q = x8_83
                                                x1_32 = *x0_93
                                            
                                            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
                                                var_46f:7.q, x1_32)
                                            var_46f:0xf.q += 1
                                        
                                        Botan::HTTP::GET_sync(x27_2 + 0x38, arg6 - 1, 0xbb8)
                                        
                                        if ((zx.d(var_78) & 1) != 0)
                                            operator delete(var_68)
                                    
                                    if ((zx.d(var_488.b) & 1) != 0)
                                        operator delete(var_478)
                                    
                                    std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > > >::destroy(
                                        &var_470)
                                    void* var_448
                                    
                                    if ((zx.d(var_458.b) & 1) != 0)
                                        operator delete(var_448)
                                    void* var_428
                                    
                                    if ((zx.d(var_438.b) & 1) != 0)
                                        operator delete(var_428)
                                    var_420 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                        + 0x18
                                    void* __offset(
                                        vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, 
                                        0x40) var_410_3 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                        + 0x40
                                    var_3a0 = _vtable_for_std::__ndk1::basic_stringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                        + 0x68
                                    var_408 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                        + 0x10
                                    
                                    if ((zx.d(var_3c8) & 1) != 0)
                                        operator delete(var_3b8)
                                    
                                    std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
                                    std::__ndk1::basic_iostream<char, std::__ndk1::char_traits<char> >::~basic_iostream()
                                    std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
                                    void* var_2f8
                                    
                                    if ((zx.d(var_308.b) & 1) != 0)
                                        operator delete(var_2f8)
                                    var_278 = _vtable_for_std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                        + 0x40
                                    var_2f0.q = _vtable_for_std::__ndk1::basic_istringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                        + 0x18
                                    var_2e0 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                        + 0x10
                                    
                                    if ((zx.d(var_2a0) & 1) != 0)
                                        operator delete(var_290)
                                    
                                    std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
                                    std::__ndk1::basic_istream<char, std::__ndk1::char_traits<char> >::~basic_istream()
                                    std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
                                    var_1d0 = _vtable_for_std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                        + 0x10
                                    var_168 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                        + 0x40
                                    var_1d8 = _vtable_for_std::__ndk1::basic_ostringstream<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
                                        + 0x18
                                    
                                    if ((zx.d(var_190) & 1) != 0)
                                        operator delete(var_180)
                                    
                                    std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::~basic_streambuf()
                                    std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::~basic_ostream()
                                    int64_t result = std::__ndk1::basic_ios<char, std::__ndk1::char_traits<char> >::~basic_ios()
                                    
                                    if ((zx.d(var_d0.b) & 1) == 0)
                                        if ((zx.d(var_b0.b) & 1) != 0)
                                            goto label_d8d4a0
                                        
                                        goto label_d8d460
                                    
                                    result = operator delete(var_c0)
                                    
                                    if ((zx.d(var_b0.b) & 1) == 0)
                                    label_d8d460:
                                        
                                        if ((zx.d(var_90.b) & 1) != 0)
                                            return operator delete(var_80_1)
                                    else
                                    label_d8d4a0:
                                        result = operator delete(var_a0)
                                        
                                        if ((zx.d(var_90.b) & 1) != 0)
                                            return operator delete(var_80_1)
                                    
                                    return result
                            
                            void** x0_139 = __cxa_allocate_exception(0x20)
                            __builtin_strncpy(&var_470, "(Not an HTTP response", 0x16)
                            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                "HTTP error ", &var_470)
                            *x0_139 = _vtable_for_Botan::Exception + 0x10
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &x0_139[1])
                            
                            if ((zx.d(var_78) & 1) != 0)
                                operator delete(var_68)
                            
                            *x0_139 = _vtable_for_Botan::HTTP::HTTP_Error + 0x10
                            __cxa_throw(x0_139, _typeinfo_for_Botan::HTTP::HTTP_Error, 
                                Botan::Exception::~Exception)
                            noreturn
                    
                    void** x0_134 = __cxa_allocate_exception(0x20)
                    var_78 = 0x16
                    int64_t var_77_3
                    __builtin_strncpy(&var_77_3, "No response", 0xc)
                    std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                        "HTTP error ", &var_78)
                    *x0_134 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_134[1])
                    
                    if ((zx.d(var_420[0]) & 1) != 0)
                        operator delete(var_410)
                    
                    *x0_134 = _vtable_for_Botan::HTTP::HTTP_Error + 0x10
                    __cxa_throw(x0_134, _typeinfo_for_Botan::HTTP::HTTP_Error, 
                        Botan::Exception::~Exception)
                    noreturn
            
            break
        
        x0 = x0_1 + 1
        i = x26_1 - x0
    while (i s>= 3)

void** x0_2 = __cxa_allocate_exception(0x20)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "Invalid URL '", arg3)
int128_t* x0_4
int128_t v0
x0_4, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_1d8)
v0 = *x0_4
var_2e0 = x0_4[1].q
var_2f0.o = v0
__builtin_memset(x0_4, 0, 0x18)
std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
    "HTTP error ", &var_2f0)
*x0_2 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_2[1])

if ((zx.d(var_420[0]) & 1) != 0)
    operator delete(var_410)

*x0_2 = _vtable_for_Botan::HTTP::HTTP_Error + 0x10
__cxa_throw(x0_2, _typeinfo_for_Botan::HTTP::HTTP_Error, Botan::Exception::~Exception)
noreturn
