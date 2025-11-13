// 函数: _ZN5Botan19McEliece_PrivateKeyC2ERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xda2b78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = *entry_x1
*arg1 = x8
*(arg1 + *(x8 - 0xc8)) = entry_x1[1]
*(arg1 + *(*arg1 - 0x88)) = entry_x1[2]
*(arg1 + *(*arg1 - 0xd0)) = entry_x1[3]
__builtin_memset(arg1 + 8, 0, 0x30)
*(arg1 + 0x38) = zx.o(0)
void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 0x8) var_210 =
    arg1 + 8
__builtin_memset(arg1 + 0x48, 0, 0x20)
void* result_1
__builtin_memset(&result_1, 0, 0x18)
void var_c0
Botan::BER_Decoder::BER_Decoder(&var_c0)
Botan::BER_Decoder::start_cons(&var_c0, 0x10)
int64_t var_170
Botan::BER_Decoder::start_cons(&var_170, 0x10)
int128_t var_130
int64_t var_68
Botan::BER_Decoder::decode(&var_130, &var_68, 2)
int64_t var_70
Botan::BER_Decoder::decode(&var_130, &var_70, 2)
int64_t* x0_7 = Botan::BER_Decoder::decode(
    Botan::BER_Decoder::decode(Botan::BER_Decoder::end_cons(), arg1 + 0x80, 4, 4), &result_1, 4, 4)
int64_t var_f8 = 0
int32_t var_f0 = 0xff00
int64_t var_ec
__builtin_memset(&var_ec, 0, 0x1c)
int64_t var_c8 = 0
int64_t* x8_8 = x0_7[6]
int64_t var_d0 = x0_7[5]
x0_7[6] = 0
int64_t* var_100_1 = nullptr
var_f8 = *x0_7
int64_t* var_100

if (var_100 != 0)
    (*(*var_100 + 0x38))()

void* var_120
void* var_118
int64_t var_110

if (var_120 != 0)
    var_118 = var_120
    Botan::deallocate_memory(var_120, var_110 - var_120, 1)

int64_t var_140_1 = 0
int64_t* var_140

if (var_140 != 0)
    (*(*var_140 + 0x38))()

void* var_160
void* var_158
int64_t var_150

if (var_160 != 0)
    var_158 = var_160
    Botan::deallocate_memory(var_160, var_150 - var_160, 1)

int64_t x8_16 = var_70

if (x8_16 != 0)
    int64_t x9_5 = var_68
    
    if (x9_5 != 0)
        int32_t x10_1
        
        if ((x9_5 & 0xffffffff80000000) != 0)
            x10_1 = 0x40
        else if (x9_5 u< 2)
            x10_1 = 0
        else
            x10_1 = 0
            int64_t x11_1 = 1
            
            do
                x11_1 <<= 1
                x10_1 += 1
            while (x11_1 u< x9_5)
        
        *(arg1 + 0x98) = x8_16
        *(arg1 + 0xa0) = x9_5
        int64_t x8_17 = x8_16 * zx.q(x10_1.b)
        *(arg1 + 0x68) = x8_17
        *(arg1 + 0x70) = x9_5 - x8_17
        uint64_t x0_12 = operator new(0x20)
        Botan::GF2m_Field::GF2m_Field(x0_12)
        void** x0_14 = operator new(0x20)
        x0_14[1] = 0
        x0_14[2] = 0
        x0_14[3] = x0_12
        *x0_14 = _vtable_for_std::__ndk1::__shared_ptr_pointer<Botan::GF2m_Field*, std::__ndk1::default_delete<Botan::GF2m_Field>, std::__ndk1::allocator<Botan::GF2m_Field> >
            + 0x10
        uint64_t var_180 = x0_12
        int32_t i
        
        do
            i = __stxr(__ldxr(&x0_14[1]) + 1, &x0_14[1])
        while (i != 0)
        Botan::polyn_gf2m::polyn_gf2m(&var_130, &result_1)
        std::__ndk1::vector<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::assign<Botan::polyn_gf2m const*>(
            arg1 + 8, &var_130)
        int64_t* var_108
        void* x0_17
        
        if (var_108 == 0)
        label_da2e1c:
            x0_17 = var_130:8.q
            
            if (x0_17 != 0)
                var_120 = x0_17
                Botan::deallocate_memory(x0_17, (var_118 - x0_17) s>> 1, 2)
        else
            int64_t x9_9
            int32_t i_1
            
            do
                x9_9 = __ldaxr(&var_108[1])
                i_1 = __stlxr(x9_9 - 1, &var_108[1])
            while (i_1 != 0)
            
            if (x9_9 != 0)
                goto label_da2e1c
            
            (*(*var_108 + 0x10))(var_108)
            std::__ndk1::__shared_weak_count::__release_weak()
            x0_17 = var_130:8.q
            
            if (x0_17 != 0)
                var_120 = x0_17
                Botan::deallocate_memory(x0_17, (var_118 - x0_17) s>> 1, 2)
        
        if (x0_14 != 0)
            int64_t x9_10
            int32_t i_2
            
            do
                x9_10 = __ldaxr(&x0_14[1])
                i_2 = __stlxr(x9_10 - 1, &x0_14[1])
            while (i_2 != 0)
            
            if (x9_10 == 0)
                (*(*x0_14 + 0x10))(x0_14)
                std::__ndk1::__shared_weak_count::__release_weak()
        
        int32_t* x8_27 = *(arg1 + 8)
        int64_t x11_4 = *(x8_27 + 8)
        int64_t x9_12 = *(x8_27 + 0x10) - x11_4
        uint32_t x12 = (x9_12 u>> 1).d
        int64_t x10_4 = (x9_12 & 0x1fffffffe) << 0x1f s>> 0x20
        int32_t x9_14 = (x12 & x12 s>> 0x1f) - 1
        
        while (true)
            int64_t x12_1 = x10_4 - 1
            
            if (x10_4 s< 1)
                break
            
            uint32_t x13_1 = zx.d(*(x11_4 - 2 + (x10_4 << 1)))
            x10_4 = x12_1
            
            if (x13_1 != 0)
                x9_14 = x12_1.d
                break
        
        *x8_27 = x9_14
        int64_t x23 = var_70
        
        if (x9_14 != x23.d)
            void** x0_76 = __cxa_allocate_exception(0x20)
            int64_t x0_77
            int128_t v0_3
            x0_77, v0_3 = operator new(0x30)
            (*"ial is incorrect")[0].o
            int64_t var_120_2 = x0_77
            v0_3 = data_71c860
            __builtin_strncpy(x0_77, "degree of decoded Goppa polynomial is incorrect", 0x30)
            var_130 = v0_3
            *x0_76 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_76[1])
            *x0_76 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_76, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        Botan::BER_Decoder::start_cons(&var_f8, 0x10)
        void* var_198
        
        if (x23 u>= 2)
            uint64_t x21_3 = 0
            
            while (true)
                __builtin_memset(&var_198, 0, 0x18)
                Botan::BER_Decoder::decode(&var_130, &var_198, 4, 4)
                void* x26_4 = var_198
                char* var_190_3
                char* x25_3 = var_190_3
                int64_t x23_2 = x23 << 1
                size_t fp_6 = x25_3 - x26_4
                int64_t var_188_2
                
                while (true)
                    if (fp_6 u>= x23_2)
                        if (fp_6 == x23_2)
                            uint64_t var_1a8_1 = x0_12
                            break
                    else
                        void* var_190_4
                        void* x25_4
                        
                        if (x25_3 u>= var_188_2)
                            if (fp_6 + 1 s>= 0)
                                void* x8_62 = var_188_2 - x26_4
                                int64_t x10_16 = x8_62 << 1
                                int64_t x9_31
                                
                                if (x10_16 u> fp_6)
                                    x9_31 = x10_16
                                else
                                    x9_31 = fp_6 + 1
                                
                                int64_t x27_3
                                
                                x27_3 = x8_62 u< 0x3fffffffffffffff ? x9_31 : 0x7fffffffffffffff
                                
                                size_t x2_6
                                int64_t x28_4
                                
                                if (x27_3 == 0)
                                    x28_4 = 0
                                    x2_6 = fp_6
                                else
                                    int64_t x0_46 = Botan::allocate_memory(x27_3, 1)
                                    x26_4 = var_198
                                    x28_4 = x0_46
                                    x2_6 = var_190_3 - x26_4
                                
                                char* x25_5 = x28_4 + fp_6
                                void* fp_7 = x25_5 - x2_6
                                *x25_5 = 0
                                x25_4 = &x25_5[1]
                                
                                if (x2_6 s>= 1)
                                    memcpy(fp_7, x26_4, x2_6)
                                
                                int64_t x8_64 = var_188_2
                                var_198 = fp_7
                                var_190_4 = x25_4
                                var_188_2 = x28_4 + x27_3
                                
                                if (x26_4 != 0)
                                    Botan::deallocate_memory(x26_4, x8_64 - x26_4, 1)
                                    x25_4 = var_190_4
                                
                                goto label_da3428
                            
                            std::__ndk1::__vector_base_common<true>::__throw_length_error()
                            std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        else
                            *x25_3 = 0
                            x25_4 = &x25_3[1]
                            var_190_4 = x25_4
                        label_da3428:
                            
                            if (x25_4 u< var_188_2)
                                *x25_4 = 0
                                x25_3 = x25_4 + 1
                                var_190_3 = x25_3
                            label_da336c:
                                x26_4 = var_198
                                fp_6 = x25_3 - x26_4
                                continue
                            else
                                void* x26_5 = var_198
                                size_t x25_6 = x25_4 - x26_5
                                
                                if (x25_6 + 1 s>= 0)
                                    void* x8_66 = var_188_2 - x26_5
                                    int64_t x10_17 = x8_66 << 1
                                    int64_t x9_34
                                    
                                    if (x10_17 u< x25_6 + 1)
                                        x9_34 = x25_6 + 1
                                    else
                                        x9_34 = x10_17
                                    
                                    int64_t x27_4
                                    
                                    x27_4 = x8_66 u< 0x3fffffffffffffff ? x9_34 : 0x7fffffffffffffff
                                    
                                    size_t x2_7
                                    int64_t x28_5
                                    
                                    if (x27_4 == 0)
                                        x28_5 = 0
                                        x2_7 = x25_6
                                    else
                                        int64_t x0_50 = Botan::allocate_memory(x27_4, 1)
                                        x26_5 = var_198
                                        x28_5 = x0_50
                                        x2_7 = var_190_4 - x26_5
                                    
                                    char* x25_7 = x28_5 + x25_6
                                    void* fp_8 = x25_7 - x2_7
                                    *x25_7 = 0
                                    x25_3 = &x25_7[1]
                                    
                                    if (x2_7 s>= 1)
                                        memcpy(fp_8, x26_5, x2_7)
                                    
                                    int64_t x8_68 = var_188_2
                                    var_198 = fp_8
                                    var_190_3 = x25_3
                                    var_188_2 = x28_5 + x27_4
                                    
                                    if (x26_5 != 0)
                                        Botan::deallocate_memory(x26_5, x8_68 - x26_5, 1)
                                        x25_3 = var_190_3
                                    
                                    goto label_da336c
                                
                                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    
                    void** x0_63 = __cxa_allocate_exception(0x20)
                    int64_t x0_64
                    int128_t v1
                    x0_64, v1 = operator new(0x40)
                    int64_t var_160_1 = x0_64
                    v1 = data_71bb80
                    __builtin_strncpy(x0_64, "length of square root polynomial entry is too large", 
                        0x34)
                    var_170.o = v1
                    *x0_63 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_63[1])
                    *x0_63 = _vtable_for_Botan::Decoding_Error + 0x10
                    __cxa_throw(x0_63, _typeinfo_for_Botan::Decoding_Error, 
                        Botan::Exception::~Exception)
                    noreturn
                
                int32_t i_3
                
                do
                    i_3 = __stxr(__ldxr(&x0_14[1]) + 1, &x0_14[1])
                while (i_3 != 0)
                Botan::polyn_gf2m::polyn_gf2m(&var_170, &var_198)
                int32_t* x8_72 = *(arg1 + 0x28)
                int32_t var_168
                int64_t* var_148
                
                if (x8_72 u>= *(arg1 + 0x30))
                    std::__ndk1::vector<Botan::polyn_gf2m, std::__ndk1::allocator<Botan::polyn_gf2m> >::__push_back_slow_path<Botan::polyn_gf2m>(
                        arg1 + 0x20)
                else
                    int128_t v0_1
                    v0_1.q = 0
                    v0_1:8.q = 0
                    __builtin_memset(&x8_72[2], 0, 0x28)
                    int32_t x10_18 = *x8_72
                    *x8_72 = var_170.d
                    var_170.d = x10_18
                    *(x8_72 + 0x20) = var_150
                    *(x8_72 + 0x28) = var_148
                    var_150 = 0
                    var_148 = nullptr
                    v0_1 = *(x8_72 + 8)
                    *(x8_72 + 8) = var_168.q
                    *(x8_72 + 0x10) = var_160
                    var_168.o = v0_1
                    void* x10_19 = *(x8_72 + 0x18)
                    *(x8_72 + 0x18) = var_158
                    var_158 = x10_19
                    *(arg1 + 0x28) = &x8_72[0xc]
                
                void* x0_55
                
                if (var_148 == 0)
                label_da359c:
                    x0_55 = var_168.q
                    
                    if (x0_55 != 0)
                        var_160 = x0_55
                        Botan::deallocate_memory(x0_55, (var_158 - x0_55) s>> 1, 2)
                else
                    int64_t x9_45
                    int32_t i_4
                    
                    do
                        x9_45 = __ldaxr(&var_148[1])
                        i_4 = __stlxr(x9_45 - 1, &var_148[1])
                    while (i_4 != 0)
                    
                    if (x9_45 != 0)
                        goto label_da359c
                    
                    (*(*var_148 + 0x10))(var_148)
                    std::__ndk1::__shared_weak_count::__release_weak()
                    x0_55 = var_168.q
                    
                    if (x0_55 != 0)
                        var_160 = x0_55
                        Botan::deallocate_memory(x0_55, (var_158 - x0_55) s>> 1, 2)
                int64_t x9_46
                
                if (x0_14 != 0)
                    int32_t i_5
                    
                    do
                        x9_46 = __ldaxr(&x0_14[1])
                        i_5 = __stlxr(x9_46 - 1, &x0_14[1])
                    while (i_5 != 0)
                
                void* var_190_5
                void* x0_56
                
                if (x0_14 != 0 && x9_46 == 0)
                    (*(*x0_14 + 0x10))(x0_14)
                    std::__ndk1::__shared_weak_count::__release_weak()
                    x0_56 = var_198
                    
                    if (x0_56 != 0)
                        var_190_5 = x0_56
                        Botan::deallocate_memory(x0_56, var_188_2 - x0_56, 1)
                else
                    x0_56 = var_198
                    
                    if (x0_56 != 0)
                        var_190_5 = x0_56
                        Botan::deallocate_memory(x0_56, var_188_2 - x0_56, 1)
                x23 = var_70
                x21_3 = zx.q(x21_3.d + 1)
                
                if (x21_3 u>= x23 u>> 1)
                    break
        
        __builtin_memset(&var_198, 0, 0x18)
        int64_t* x0_22 = Botan::BER_Decoder::decode(Botan::BER_Decoder::end_cons(), &var_198, 4, 4)
        int32_t var_168_1 = 0xff00
        var_170 = 0
        int64_t var_164
        __builtin_memset(&var_164, 0, 0x1c)
        int64_t var_140_2 = 0
        int64_t* x8_28 = x0_22[6]
        int64_t var_148_1 = x0_22[5]
        x0_22[6] = 0
        void* x8_29 = var_198
        int64_t var_190_1
        void* x9_17 = var_190_1 - x8_29
        var_170 = *x0_22
        int128_t var_1c0
        
        if ((x9_17.d & 1) != 0)
            void** x0_81 = __cxa_allocate_exception(0x20)
            int64_t x0_82
            int128_t v0_4
            x0_82, v0_4 = operator new(0x20)
            int64_t var_1b0_1 = x0_82
            var_1c0 = data_71c370
            __builtin_strncpy(x0_82, "encoded support has odd length", 0x1f)
            *x0_81 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_81[1])
            *x0_81 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_81, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        if (var_68 != x9_17 u>> 1)
            void** x0_85 = __cxa_allocate_exception(0x20)
            int64_t x0_86
            int128_t v2
            x0_86, v2 = operator new(0x40)
            (*"rent from code length")[0].o
            int64_t var_1b0_2 = x0_86
            v2 = data_71c880
            __builtin_strncpy(x0_86, "encoded support has length different from code length", 0x36)
            var_1c0 = v2
            *x0_85 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_85[1])
            *x0_85 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_85, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        void* x20 = x9_17 & 0xfffffffffffffffe
        
        if (x20 != 0)
            uint64_t x9_18 = 0
            int32_t x21_2 = 2
            
            while (true)
                int16_t* x9_19 = *(arg1 + 0x40)
                int16_t x28_2 =
                    zx.w(*(x8_29 + zx.q(x21_2 - 1))) | ((0xffffff & zx.d(*(x8_29 + x9_18))) << 8).w
                
                if (x9_19 == *(arg1 + 0x48))
                    void* x25_1 = *(arg1 + 0x38)
                    void* x26_2 = x9_19 - x25_1
                    
                    if (x26_2 s<= -3)
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                    label_da3718:
                        std::__ndk1::__vector_base_common<true>::__throw_length_error()
                        sub_ef2a0c()
                        noreturn
                    
                    int64_t x22_1 = x26_2 s>> 1
                    void* x8_32
                    
                    if (x26_2 u< x22_1 + 1)
                        x8_32 = x22_1 + 1
                    else
                        x8_32 = x26_2
                    
                    void* fp_1
                    
                    fp_1 = x22_1 u< 0x3fffffffffffffff ? x8_32 : 0x7fffffffffffffff
                    
                    void* x22_3
                    int64_t x27_1
                    
                    if (fp_1 == 0)
                        x27_1 = 0
                        *(x22_1 << 1) = x28_2
                        x22_3 = (x22_1 << 1) + 2
                        
                        if (x26_2 s>= 1)
                            memcpy(x27_1, x25_1, x26_2)
                    else
                        if ((fp_1 & 0xffffffff80000000) != 0)
                            sub_ef2a0c()
                            noreturn
                        
                        x27_1 = operator new(fp_1 << 1)
                        int16_t* x22_2 = x27_1 + (x22_1 << 1)
                        *x22_2 = x28_2
                        x22_3 = &x22_2[1]
                        
                        if (x26_2 s>= 1)
                            memcpy(x27_1, x25_1, x26_2)
                    
                    *(arg1 + 0x38) = x27_1
                    *(arg1 + 0x40) = x22_3
                    *(arg1 + 0x48) = x27_1 + (fp_1 << 1)
                    
                    if (x25_1 != 0)
                        operator delete(x25_1)
                else
                    *x9_19 = x28_2
                    *(arg1 + 0x40) = &x9_19[1]
                
                x9_18 = zx.q(x21_2)
                
                if (x20 u<= x9_18)
                    break
                
                x8_29 = var_198
                x21_2 += 2
        
        __builtin_memset(&var_1c0, 0, 0x18)
        Botan::BER_Decoder::decode(&var_170, &var_1c0, 4, 4)
        Botan::BER_Decoder::end_cons()
        void* x8_34 = var_1c0.q
        void* x0_28 = var_1c0:8.q
        void* x9_21 = x0_28 - x8_34
        
        if ((x9_21 & 3) != 0)
            void** x0_90 = __cxa_allocate_exception(0x20)
            int64_t x0_91
            int128_t v0_5
            x0_91, v0_5 = operator new(0x50)
            int64_t var_1d0 = x0_91
            int128_t var_1e0 = data_71ce40
            __builtin_strncpy(x0_91, 
                "encoded parity check matrix has length which is not a multiple of four", 0x47)
            *x0_90 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_90[1])
            *x0_90 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_90, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        if ((((*(arg1 + 0x68) - 1) u>> 5) + 1) * *(arg1 + 0xa0) != x9_21 u>> 2)
            void** x0_94 = __cxa_allocate_exception(0x20)
            int64_t x0_95
            int128_t v0_6
            x0_95, v0_6 = operator new(0x30)
            (*"has wrong length")[0].o
            int64_t var_1d0_1 = x0_95
            v0_6 = data_71abd0
            __builtin_strncpy(x0_95, "encoded parity check matrix has wrong length", 0x2d)
            int128_t var_1e0_1 = v0_6
            *x0_94 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_94[1])
            *x0_94 = _vtable_for_Botan::Decoding_Error + 0x10
            __cxa_throw(x0_94, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
            noreturn
        
        if (x0_28 != x8_34)
            uint64_t i_6 = 0
            int32_t i_8 = 4
            x0_28 = x8_34
            
            do
                int32_t* x8_38 = *(arg1 + 0x58)
                int32_t x9_25 = (0xffff00ff & ((0xff00ffff & zx.d(*(x0_28 + i_6)) << 0x18)
                    | zx.d(*(x0_28 + zx.q(i_8 - 3))) << 0x10)) | zx.d(*(x0_28 + zx.q(i_8 - 2))) << 8
                int32_t x23_1 = x9_25 | zx.d(*(x0_28 + zx.q(i_8 - 1)))
                
                if (x8_38 != *(arg1 + 0x60))
                    *x8_38 = x23_1
                    *(arg1 + 0x58) = &x8_38[1]
                else
                    void* x25_2 = *(arg1 + 0x50)
                    size_t x26_3 = x8_38 - x25_2
                    int64_t fp_2 = x26_3 s>> 2
                    
                    if ((fp_2 + 1) u>> 0x3e != 0)
                        goto label_da3718
                    
                    int64_t x9_28 = x26_3 s>> 1
                    int64_t x8_40
                    
                    if (x9_28 u< fp_2 + 1)
                        x8_40 = fp_2 + 1
                    else
                        x8_40 = x9_28
                    
                    int64_t x28_3
                    
                    x28_3 = fp_2 u< 0x1fffffffffffffff ? x8_40 : 0x3fffffffffffffff
                    
                    int64_t x27_2
                    void* fp_4
                    
                    if (x28_3 == 0)
                        x27_2 = 0
                        *(fp_2 << 2) = x23_1
                        fp_4 = (fp_2 << 2) + 4
                        
                        if (x26_3 s>= 1)
                            memcpy(x27_2, x25_2, x26_3)
                    else
                        if (x28_3 u>> 0x3e != 0)
                            sub_ef2a0c()
                            noreturn
                        
                        x27_2 = operator new(x28_3 << 2)
                        int32_t* fp_3 = x27_2 + (fp_2 << 2)
                        *fp_3 = x23_1
                        fp_4 = &fp_3[1]
                        
                        if (x26_3 s>= 1)
                            memcpy(x27_2, x25_2, x26_3)
                    
                    *(arg1 + 0x50) = x27_2
                    *(arg1 + 0x58) = fp_4
                    *(arg1 + 0x60) = x27_2 + (x28_3 << 2)
                    
                    if (x25_2 != 0)
                        operator delete(x25_2)
                
                x0_28 = var_1c0.q
                i_6 = zx.q(i_8)
                i_8 += 4
            while (var_1c0:8.q - x0_28 u> i_6)
        
        if (x0_28 != 0)
            var_1c0:8.q = x0_28
            int64_t var_1b0
            Botan::deallocate_memory(x0_28, var_1b0 - x0_28, 1)
        
        int64_t var_140_4 = 0
        
        if (x8_28 != 0)
            (*(*x8_28 + 0x38))()
        
        if (var_160 != 0)
            void* var_158_1 = var_160
            Botan::deallocate_memory(var_160, var_150 - var_160, 1)
        
        void* x0_35 = var_198
        
        if (x0_35 != 0)
            void* var_190_2 = x0_35
            int64_t var_188_1
            Botan::deallocate_memory(x0_35, var_188_1 - x0_35, 1)
        
        int64_t var_100_2 = 0
        
        if (var_100_1 != 0)
            (*(*var_100_1 + 0x38))()
        
        if (var_120 != 0)
            void* var_118_1 = var_120
            Botan::deallocate_memory(var_120, var_110 - var_120, 1)
        
        int64_t x8_51
        int32_t i_7
        
        do
            x8_51 = __ldaxr(&x0_14[1])
            i_7 = __stlxr(x8_51 - 1, &x0_14[1])
        while (i_7 != 0)
        
        if (x8_51 == 0)
            (*(*x0_14 + 0x10))(x0_14)
            std::__ndk1::__shared_weak_count::__release_weak()
        
        int64_t var_c8_2 = 0
        
        if (x8_8 != 0)
            (*(*x8_8 + 0x38))()
        
        void* x0_41 = var_ec
        
        if (x0_41 != 0)
            int64_t var_e4 = x0_41
            int64_t var_dc
            Botan::deallocate_memory(x0_41, var_dc - x0_41, 1)
        
        int64_t var_90_1 = 0
        int64_t* var_90
        
        if (var_90 != 0)
            (*(*var_90 + 0x38))()
        
        void* var_b0
        
        if (var_b0 != 0)
            void* var_a8_1 = var_b0
            int64_t var_a0
            Botan::deallocate_memory(var_b0, var_a0 - var_b0, 1)
        
        void* result = result_1
        
        if (result == 0)
            return result
        
        void* result_2 = result
        int64_t var_78
        return Botan::deallocate_memory(result, var_78 - result, 1)

void** x0_72 = __cxa_allocate_exception(0x20)
int64_t x0_73
int128_t v0_2
x0_73, v0_2 = operator new(0x20)
int64_t var_120_1 = x0_73
var_130 = data_71abe0
__builtin_strncpy(x0_73, "invalid McEliece parameters", 0x1c)
*x0_72 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_72[1])
*x0_72 = _vtable_for_Botan::Decoding_Error + 0x10
__cxa_throw(x0_72, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
noreturn
