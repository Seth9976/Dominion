// 函数: _ZN5Botan10RTSS_Share11reconstructERKNSt6__ndk16vectorIS0_NS1_9allocatorIS0_EEEE
// 地址: 0xe88448
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x9 = *arg1
void* x10_1 = *(arg1 + 8) - x9
int128_t var_80

if ((x10_1 s>> 3) * -0x5555555555555555 u< 2)
label_e88f74:
    void** x0_51 = __cxa_allocate_exception(0x20)
    int64_t x0_52
    int128_t v0_5
    x0_52, v0_5 = operator new(0x30)
    (*"S reconstruction")[0].o
    int64_t var_70_6 = x0_52
    v0_5 = data_71abd0
    __builtin_strncpy(x0_52, "Insufficient shares to do TSS reconstruction", 0x2d)
    var_80 = v0_5
    *x0_51 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_51[1])
    *x0_51 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_51, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t* entry_x8
int64_t* x25_1 = entry_x8
int64_t i

if (x10_1 == 0)
    i = 0
else
    int64_t x21_1 = 0
    i = 0
    
    do
        int64_t* x0 = x9 + x21_1
        
        if (x0[1] - *x0 u<= 0x14)
            void** x0_36 = __cxa_allocate_exception(0x20)
            int64_t x0_37
            int128_t v0_2
            x0_37, v0_2 = operator new(0x30)
            int64_t var_70_3 = x0_37
            v0_2 = data_71bb40
            __builtin_strncpy(x0_37, "Missing or malformed RTSS header", 0x21)
            var_80 = v0_2
            *x0_36 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_36[1])
            *x0_36 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_36, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        if (zx.d(Botan::RTSS_Share::share_id()) == 0)
            void** x0_40 = __cxa_allocate_exception(0x20)
            int64_t x0_41
            int128_t v0_3
            x0_41, v0_3 = operator new(0x30)
            v0_3 = data_71b7f0
            int64_t var_70_4 = x0_41
            __builtin_strncpy(x0_41, "Invalid (id = 0) RTSS share detected", 0x25)
            var_80 = v0_3
            *x0_40 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_40[1])
            *x0_40 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_40, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        if (i != 0)
            int64_t* x9_2 = *arg1
            int64_t* x8_6 = x9_2 + x21_1
            char* x8_7 = *x8_6
            char* x9_3 = *x9_2
            
            if (x8_6[1] - x8_7 != x9_2[1] - x9_3)
                void** x0_45 = __cxa_allocate_exception(0x20)
                int64_t x0_46
                int128_t v0_4
                x0_46, v0_4 = operator new(0x30)
                v0_4 = data_71b7f0
                int64_t var_70_5 = x0_46
                __builtin_strncpy(x0_46, "Different sized RTSS shares detected", 0x25)
                var_80 = v0_4
                *x0_45 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_45[1])
                *x0_45 = _vtable_for_Botan::Decoding_Error + 0x10
                __cxa_throw(x0_45, _typeinfo_for_Botan::Decoding_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            var_80.b = 0
            var_80.b |= *x8_7 ^ *x9_3
            var_80.b |= x8_7[1] ^ x9_3[1]
            var_80.b |= x8_7[2] ^ x9_3[2]
            var_80.b |= x8_7[3] ^ x9_3[3]
            var_80.b |= x8_7[4] ^ x9_3[4]
            var_80.b |= x8_7[5] ^ x9_3[5]
            var_80.b |= x8_7[6] ^ x9_3[6]
            var_80.b |= x8_7[7] ^ x9_3[7]
            var_80.b |= x8_7[8] ^ x9_3[8]
            var_80.b |= x8_7[9] ^ x9_3[9]
            var_80.b |= x8_7[0xa] ^ x9_3[0xa]
            var_80.b |= x8_7[0xb] ^ x9_3[0xb]
            var_80.b |= x8_7[0xc] ^ x9_3[0xc]
            var_80.b |= x8_7[0xd] ^ x9_3[0xd]
            var_80.b |= x8_7[0xe] ^ x9_3[0xe]
            var_80.b |= x8_7[0xf] ^ x9_3[0xf]
            var_80.b |= x8_7[0x10] ^ x9_3[0x10]
            var_80.b |= x8_7[0x11] ^ x9_3[0x11]
            var_80.b |= x8_7[0x12] ^ x9_3[0x12]
            var_80.b |= x8_7[0x13] ^ x9_3[0x13]
            
            if (zx.d(var_80.b) != 0)
                void** x0_2 = __cxa_allocate_exception(0x20)
                int64_t x0_3
                int128_t v0
                x0_3, v0 = operator new(0x20)
                int64_t var_70_1 = x0_3
                var_80 = data_71b7d0
                __builtin_strncpy(x0_3, "Different RTSS headers detected", 0x20)
                *x0_2 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_2[1])
                *x0_2 = _vtable_for_Botan::Decoding_Error + 0x10
                __cxa_throw(x0_2, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
                noreturn
        
        x9 = *arg1
        i += 1
        x21_1 += 0x18
    while (i != ((*(arg1 + 8) - x9) s>> 3) * -0x5555555555555555)

void* x9_6 = *x9

if (i u< zx.q(*(x9_6 + 0x11)))
    void** x0_56 = __cxa_allocate_exception(0x20)
    int64_t x0_57
    int128_t v0_6
    x0_57, v0_6 = operator new(0x30)
    (*"S reconstruction")[0].o
    int64_t var_70_7 = x0_57
    v0_6 = data_71abd0
    __builtin_strncpy(x0_57, "Insufficient shares to do TSS reconstruction", 0x2d)
    var_80 = v0_6
    *x0_56 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_56[1])
    *x0_56 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_56, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

uint32_t x8_16 = zx.d(*(x9_6 + 0x10))
uint64_t x19_2 = zx.q(*(x9_6 + 0x12))
int64_t* result
int16_t var_a0
void* var_90
int64_t* result_1

if (x8_16 == 2)
    var_80.b = 0xe
    __builtin_strncpy(&var_80:1, "SHA-256", 8)
    var_a0 = 0
    Botan::HashFunction::create_or_throw(&var_80, &var_a0)
label_e88830:
    
    if ((zx.d(var_a0.b) & 1) == 0)
        if ((zx.d(var_80.b) & 1) != 0)
            goto label_e8885c
        
        goto label_e8883c
    
    operator delete(var_90)
    
    if ((zx.d(var_80.b) & 1) == 0)
    label_e8883c:
        result_1 = result
        
        if (result_1 != 0)
            result_1 = (**result_1)()
    else
    label_e8885c:
        void* var_70
        operator delete(var_70)
        result_1 = result
        
        if (result_1 != 0)
            result_1 = (**result_1)()
else
    if (x8_16 == 1)
        __builtin_strcpy(&var_80, "\nSHA-1")
        var_a0 = 0
        Botan::HashFunction::create_or_throw(&var_80, &var_a0)
        goto label_e88830
    
    if (x8_16 != 0)
        void** x0_73 = __cxa_allocate_exception(0x20)
        int64_t x0_74
        int128_t v0_9
        x0_74, v0_9 = operator new(0x20)
        int64_t var_70_9 = x0_74
        var_80 = data_71d400
        __builtin_strncpy(x0_74, "Unknown RTSS hash identifier", 0x1d)
        *x0_73 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_73[1])
        *x0_73 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_73, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    result = nullptr
    result_1 = nullptr

int64_t* x23_1 = *arg1
uint64_t x10_63 = _byteswap(x19_2 << 0x30)
int64_t x8_23 = x23_1[1] - *x23_1

if (x8_23 != x10_63 + 0x14 && x8_23 u<= result_1 + 0x15)
    void** x0_61 = __cxa_allocate_exception(0x20)
    int64_t x0_62
    int128_t v0_7
    x0_62, v0_7 = operator new(0x20)
    int64_t var_70_8 = x0_62
    var_80 = data_71b7d0
    __builtin_strncpy(x0_62, "Bad RTSS length field in header", 0x20)
    *x0_61 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_61[1])
    *x0_61 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_61, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t x8_24 = *(arg1 + 8)
__builtin_memset(&var_80, 0, 0x18)
void* x8_25 = x8_24 - x23_1
void* x19_3
char* x21_2

if (x8_24 == x23_1)
    x21_2 = nullptr
    x19_3 = nullptr
label_e888fc:
    __builtin_memset(x25_1, 0, 0x18)
    int64_t* var_d0_1 = x25_1
    
    if (x23_1[1] - *x23_1 != 0x15)
        int64_t x22_2 = 0x15
        
        if (x19_3 != x21_2)
            goto label_e88954
        
        while (true)
            int64_t x8_34 = *(arg1 + 8)
            int32_t x22_3
            
            if (x8_34 == x23_1)
                x22_3 = 0
            else
                int64_t i_1 = 0
                x22_3 = 0
                
                do
                    uint32_t x9_12
                    char x25_2
                    
                    if (x8_34 == x23_1)
                        x25_2 = 1
                        x9_12 = 0
                    label_e88aec:
                        uint64_t x10_73 = zx.q(x21_2[i_1])
                        
                        if (x10_73.d != 0)
                            x9_12 = zx.d(*(&data_841445 + zx.q((zx.d(*(&data_841545 + zx.q(x25_2)))
                                + zx.d(*(&data_841545 + x10_73))) u% 0xff)))
                    else
                        int64_t x19_5 = 0
                        int64_t j = 0
                        x25_2 = 1
                        
                        do
                            if (i_1 != j)
                                char x0_13 = Botan::RTSS_Share::share_id()
                                *arg1
                                char x0_15 = Botan::RTSS_Share::share_id()
                                
                                if (zx.d(x0_13) == zx.d(x0_15))
                                    void** x0_31 = __cxa_allocate_exception(0x20)
                                    int64_t x0_32
                                    int128_t v0_1
                                    x0_32, v0_1 = operator new(0x30)
                                    v0_1 = data_71c500
                                    int64_t var_90_1 = x0_32
                                    __builtin_strncpy(x0_32, 
                                        "Duplicate shares found in RTSS recovery", 0x28)
                                    var_a0.o = v0_1
                                    *x0_31 = _vtable_for_Botan::Exception + 0x10
                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                        &x0_31[1])
                                    *x0_31 = _vtable_for_Botan::Decoding_Error + 0x10
                                    __cxa_throw(x0_31, _typeinfo_for_Botan::Decoding_Error, 
                                        Botan::Exception::~Exception)
                                    noreturn
                                
                                if (zx.d(x25_2) != 0)
                                    int32_t x8_38 = zx.d(*(&data_841545 + zx.q(x0_15)))
                                        - zx.d(*(&data_841545 + (zx.q(x0_15) ^ zx.q(x0_13))))
                                        + 0xff
                                    int32_t x9_18 =
                                        (muls.dp.d(x8_38, 0x80808081) u>> 0x20).d + x8_38
                                    uint32_t x9_19 = (x9_18 u>> 7) + (x9_18 u>> 0x1f)
                                    x25_2 = *(&data_841445 + zx.q((zx.d(*(&data_841545 + zx.q(*
                                        (&data_841445 + sx.q(x8_38.w + x9_19.w - (x9_19 << 8).w)))))
                                        + zx.d(*(&data_841545 + zx.q(x25_2)))) u% 0xff))
                                else
                                    x25_2 = 0
                            
                            x23_1 = *arg1
                            x8_34 = *(arg1 + 8)
                            j += 1
                            x19_5 += 0x18
                        while (j != ((x8_34 - x23_1) s>> 3) * -0x5555555555555555)
                        
                        x21_2 = var_80.q
                        x9_12 = 0
                        
                        if (zx.d(x25_2) != 0)
                            goto label_e88aec
                    i_1 += 1
                    x22_3 ^= x9_12
                while (i_1 != ((x8_34 - x23_1) s>> 3) * -0x5555555555555555)
            
            x25_1 = var_d0_1
            char* x8_47 = x25_1[1]
            int64_t x22_4
            
            if (x8_47 == x25_1[2])
                void* x21_4 = *x25_1
                void* x19_6 = x8_47 - x21_4
                
                if (x19_6 + 1 s< 0)
                    std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    goto label_e88f74
                
                uint64_t x9_33 = x19_6 << 1
                uint64_t x8_50
                
                if (x9_33 u< x19_6 + 1)
                    x8_50 = x19_6 + 1
                else
                    x8_50 = x9_33
                
                uint64_t x26_1
                
                x26_1 = x19_6 u< 0x3fffffffffffffff ? x8_50 : 0x7fffffffffffffff
                
                size_t x2_3
                void* const x23_2
                
                if (x26_1 == 0)
                    x23_2 = nullptr
                    x2_3 = x19_6
                else
                    void* x0_17 = Botan::allocate_memory(x26_1, 1)
                    x21_4 = *x25_1
                    x23_2 = x0_17
                    x2_3 = x25_1[1] - x21_4
                
                void* x19_7 = x23_2 + x19_6
                void* x24_1 = x19_7 - x2_3
                *x19_7 = x22_3.b
                
                if (x2_3 s>= 1)
                    memcpy(x24_1, x21_4, x2_3)
                
                int64_t x8_52 = x25_1[2]
                x22_4 = x22_2
                *x25_1 = x24_1
                x25_1[1] = x19_7 + 1
                x25_1[2] = x23_2 + x26_1
                
                if (x21_4 != 0)
                    Botan::deallocate_memory(x21_4, x8_52 - x21_4, 1)
            else
                *x8_47 = x22_3.b
                x22_4 = x22_2
                x25_1[1] = &x8_47[1]
            
            x23_1 = *arg1
            x22_2 = x22_4 + 1
            
            if (x22_2 == x23_1[1] - *x23_1)
                break
            
            x21_2 = var_80.q
            
            if (var_80:8.q != x21_2)
            label_e88954:
                *x21_2 = (*x23_1)[x22_2]
                x21_2 = var_80.q
                
                if (var_80:8.q - x21_2 != 1)
                    int64_t x8_33 = 0x18
                    int64_t x9_11 = 1
                label_e88974:
                    char* x10_65 = *(*arg1 + x8_33)
                    x8_33 += 0x18
                    x21_2[x9_11] = x10_65[x22_2]
                    x21_2 = var_80.q
                    x9_11 += 1
                    
                    if (x9_11 != var_80:8.q - x21_2)
                        goto label_e88974
                
                x23_1 = *arg1
    
    if (result == 0)
    label_e88cf8:
        void* x0_29 = var_80.q
        
        if (x0_29 != 0)
            var_80:8.q = x0_29
            operator delete(x0_29)
        
        int64_t var_a8 = 0
        
        if (result == 0)
            return result
        
        return (*(*result + 0x10))()
    
    if (x25_1[1] - *x25_1 u>= (**result)())
        int64_t x20_4 = x25_1[1] - *x25_1 - (**result)()
        (*(*result + 0x18))(result, *x25_1, x20_4)
        Botan::Buffered_Computation::final()
        char* x19_11 = var_a0.q
        void* x21_5 = *x25_1
        int64_t i_3 = (**result)()
        char var_c0_1 = 0
        
        if (i_3 != 0)
            char* x8_63 = x21_5 + x20_4
            int64_t i_2
            
            do
                char x9_38 = *x19_11
                x19_11 = &x19_11[1]
                char x10_80 = *x8_63
                x8_63 = &x8_63[1]
                i_2 = i_3
                i_3 -= 1
                var_c0_1 |= x10_80 ^ x9_38
            while (i_2 != 1)
        
        uint32_t x8_64 = zx.d(var_c0_1)
        
        if (((x8_64 - 1) & not.d(x8_64) & 0x80) == 0)
            void** x0_70 = __cxa_allocate_exception(0x20)
            char var_c0_2
            __builtin_strncpy(&var_c0_2, ",RTSS hash check failed", 0x18)
            *x0_70 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_70[1])
            *x0_70 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_70, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        int64_t x8_66 = *x25_1
        int64_t x9_43 = x25_1[1] - x8_66
        
        if (x20_4 u> x9_43)
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(x25_1)
        else if (x20_4 u< x9_43)
            x25_1[1] = x8_66 + x20_4
        
        void* x0_28 = var_a0.q
        
        if (x0_28 != 0)
            void* var_98_1 = x0_28
            Botan::deallocate_memory(x0_28, var_90 - x0_28, 1)
        
        goto label_e88cf8
else
    if ((x8_25 & 0xffffffff80000000) == 0)
        uint64_t x22_1 = (x8_25 s>> 3) * -0x5555555555555555
        char* x0_11 = operator new(x22_1)
        x19_3 = &x0_11[x22_1]
        x21_2 = x0_11
        var_80.q = x0_11
        void* var_70_2 = x19_3
        memset(x0_11, 0, x22_1)
        var_80:8.q = x19_3
        goto label_e888fc
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
void** x0_65 = __cxa_allocate_exception(0x20)
int64_t x0_66
int128_t v0_8
x0_66, v0_8 = operator new(0x30)
(*"hort to be valid")[0].o
int64_t var_90_2 = x0_66
v0_8 = data_71c1e0
__builtin_strncpy(x0_66, "RTSS recovered value too short to be valid", 0x2b)
var_a0.o = v0_8
*x0_65 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_65[1])
*x0_65 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_65, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
