// 函数: _ZN5Botan26Flatfile_Certificate_StoreC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEb
// 地址: 0xcf6710
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
*arg1 = _vtable_for_Botan::Flatfile_Certificate_Store + 0x10
*(arg1 + 8) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x20) = arg1 + 0x28
*(arg1 + 0x30) = 0
*(arg1 + 0x40) = 0
*(arg1 + 0x38) = arg1 + 0x40
*(arg1 + 0x48) = 0
*(arg1 + 0x58) = 0
*(arg1 + 0x50) = arg1 + 0x58
*(arg1 + 0x60) = 0
uint64_t x8_1 = zx.q(*arg2)
uint64_t x8_2

if ((x8_1.d & 1) == 0)
    x8_2 = x8_1 u>> 1
else
    x8_2 = *(arg2 + 8)

int128_t var_100

if (x8_2 == 0)
    void** x0_60 = __cxa_allocate_exception(0x20)
    int64_t x0_61
    int128_t v0_3
    x0_61, v0_3 = operator new(0x50)
    int64_t var_f0 = x0_61
    var_100 = data_71bfe0
    __builtin_strncpy(x0_61, 
        "Flatfile_Certificate_Store::Flatfile_Certificate_Store invalid file path", 0x49)
    *x0_60 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_60[1])
    *x0_60 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_60, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

Botan::DataSource_Stream::DataSource_Stream(&var_100, arg2)
void* var_118
__builtin_memset(&var_118, 0, 0x18)
void* var_110_1
void* var_e8
int64_t* result_1
std::__ndk1::piecewise_construct_t** var_80
void* var_70
int64_t* x0_20
void* x0_68

while (true)
    void* var_98
    
    if (((*(var_100.q + 0x18))(&var_100) & 1) != 0)
        void* x28 = var_118
        
        if (x28 != var_110_1)
            do
                uint64_t x27_1 = *x28
                *(x28 + 8)
                void** x0_22 = operator new(0xa0)
                x0_22[1] = 0
                x0_22[2] = 0
                *x0_22 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::X509_Certificate const, std::__ndk1::allocator<Botan::X509_Certificate const> >
                    + 0x10
                Botan::X509_Certificate::X509_Certificate(&x0_22[3], x27_1)
                uint32_t x8_18 = zx.d(*(Botan::X509_Certificate::data() + 0x43c))
                int64_t x8_19
                uint32_t x8_20
                uint32_t x8_21
                
                if (x8_18 != 0)
                    x8_19 = *(Botan::X509_Certificate::data() + 0x428)
                    
                    if (x8_19 u<= 2)
                        x8_20 = zx.d(*(Botan::X509_Certificate::data() + 0x43c))
                    
                    if (x8_19 u> 2 || x8_20 == 0)
                        x8_21 = zx.d(*(Botan::X509_Certificate::data() + 0x43d))
                
                int32_t entry_x2
                
                if (x8_18 != 0 && ((x8_19 u<= 2 && x8_20 != 0) || x8_21 != 0))
                    Botan::X509_Certificate::data()
                    Botan::X509_DN* x26_3 = *(arg1 + 0x10)
                    
                    if (x26_3 == *(arg1 + 0x18))
                        std::__ndk1::vector<Botan::X509_DN, std::__ndk1::allocator<Botan::X509_DN> >::__push_back_slow_path<Botan::X509_DN const&>(
                            arg1 + 8)
                    else
                        Botan::X509_DN::X509_DN(x26_3)
                        *(arg1 + 0x10) = x26_3 + 0x38
                    
                    std::__ndk1::piecewise_construct_t** x1_5 =
                        Botan::X509_Certificate::data() + 0x90
                    var_80 = x1_5
                    void* x0_39 = std::__ndk1::__tree<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >, std::__ndk1::__map_value_compare<Botan::X509_DN, std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >, std::__ndk1::less<Botan::X509_DN>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > > > >::__emplace_unique_key_args<Botan::X509_DN, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<Botan::X509_DN const&>, std::__ndk1::tuple<> >(
                        arg1 + 0x20, x1_5)
                    void** x8_24 = *(x0_39 + 0x60)
                    
                    if (x8_24 == *(x0_39 + 0x68))
                        std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::X509_Certificate const> const&>(
                            x0_39 + 0x58)
                    else
                        *x8_24 = &x0_22[3]
                        x8_24[1] = x0_22
                        
                        if (x0_22 != 0)
                            int32_t i
                            
                            do
                                i = __stxr(__ldxr(&x0_22[1]) + 1, &x0_22[1])
                            while (i != 0)
                        
                        *(x0_39 + 0x60) = &x8_24[2]
                    
                    std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::__map_value_compare<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::less<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >::__emplace_unique_key_args<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > const&, std::__ndk1::shared_ptr<Botan::X509_Certificate const>&>(
                        arg1 + 0x38, Botan::X509_Certificate::subject_public_key_bitstring_sha1())
                    Botan::X509_Certificate::raw_subject_dn_sha256()
                    std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::__map_value_compare<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::less<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >::__emplace_unique_key_args<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const>&>(
                        arg1 + 0x50, &var_80)
                    std::__ndk1::piecewise_construct_t** x0_46 = var_80
                    
                    if (x0_46 != 0)
                        std::__ndk1::piecewise_construct_t** var_78_1 = x0_46
                        operator delete(x0_46)
                else if ((entry_x2 & 1) == 0)
                    void** x0_52 = __cxa_allocate_exception(0x20)
                    Botan::X509_Certificate::data()
                    Botan::X509_DN::to_string()
                    int128_t* x0_57
                    int128_t v0_2
                    x0_57, v0_2 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                        &var_98, nullptr)
                    int64_t var_70_1 = x0_57[1].q
                    var_80.o = *x0_57
                    __builtin_memset(x0_57, 0, 0x18)
                    *x0_52 = _vtable_for_Botan::Exception + 0x10
                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                        &x0_52[1])
                    *x0_52 = _vtable_for_Botan::Invalid_Argument + 0x10
                    __cxa_throw(x0_52, _typeinfo_for_Botan::Invalid_Argument, 
                        Botan::Exception::~Exception)
                    noreturn
                
                if (x0_22 != 0)
                    int64_t x9_10
                    int32_t i_1
                    
                    do
                        x9_10 = __ldaxr(&x0_22[1])
                        i_1 = __stlxr(x9_10 - 1, &x0_22[1])
                    while (i_1 != 0)
                    
                    if (x9_10 == 0)
                        (*(*x0_22 + 0x10))(x0_22)
                        std::__ndk1::__shared_weak_count::__release_weak()
                
                x28 += 0x18
            while (x28 != var_110_1)
            
            x28 = var_118
        
        if (x28 != 0)
            void* x8_29 = var_110_1
            void* x0_50
            
            if (x8_29 == x28)
                x0_50 = x28
            else
                void* x20_6 = x8_29
                
                do
                    x20_6 -= 0x18
                    void* x0_49 = *x20_6
                    
                    if (x0_49 != 0)
                        *(x8_29 - 0x10) = x0_49
                        operator delete(x0_49)
                    
                    x8_29 = x20_6
                while (x28 != x20_6)
                
                x0_50 = var_118
            
            void* var_110_2 = x28
            operator delete(x0_50)
        
        if (*(arg1 + 8) == *(arg1 + 0x10))
            void** x0_64 = __cxa_allocate_exception(0x20)
            int64_t x0_65
            int128_t v0_4
            x0_65, v0_4 = operator new(0x50)
            int64_t var_70_2 = x0_65
            var_80.o = data_71b700
            __builtin_strncpy(x0_65, 
                "Flatfile_Certificate_Store::Flatfile_Certificate_Store cert file is empty", 0x4a)
            *x0_64 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_64[1])
            *x0_64 = _vtable_for_Botan::Invalid_Argument + 0x10
            __cxa_throw(x0_64, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
            noreturn
        
        int64_t* result = result_1
        int64_t var_e0 = 0
        var_100.q = _vtable_for_Botan::DataSource_Stream + 0x10
        
        if (result != 0)
            result = (*(*result + 8))()
        
        if ((zx.d(var_100:8.b) & 1) == 0)
            return result
        
        return operator delete(var_e8)
    
    __builtin_memset(&var_98, 0, 0x30)
    Botan::PEM_Code::decode(&var_100, &var_80)
    char* var_c8
    char* x25_1 = var_c8
    void* var_b0_1
    __builtin_memset(&var_b0_1, 0, 0x18)
    char* var_c0
    uint64_t fp_1 = var_c0 - x25_1
    void* var_a8_1
    void* var_a0_1
    void* x0_5
    void* x8_8
    void* x9_3
    void* x10_3
    
    if (var_c0 == x25_1)
        x9_3 = nullptr
        x10_3 = nullptr
        x0_5 = nullptr
        x8_8 = var_98
        
        if (x8_8 == 0)
            goto label_cf68e4
        
    label_cf68d0:
        void* var_90_1 = x8_8
        operator delete(x8_8)
        x0_5 = var_b0_1
        x10_3 = var_a8_1
        x9_3 = var_a0_1
        x25_1 = var_c8
    label_cf68e4:
        var_98 = x0_5
        void* var_88_1 = x9_3
        int64_t var_b0_2
        __builtin_memset(&var_b0_2, 0, 0x18)
        
        if (x25_1 != 0)
            var_c0 = x25_1
            int64_t var_b8
            Botan::deallocate_memory(x25_1, var_b8 - x25_1, 1)
        
        uint64_t x10_4 = zx.q(var_80.b)
        uint64_t var_78
        uint64_t x8_10 = var_78
        int32_t x9_4 = x10_4.d & 1
        uint64_t x10_5 = x10_4 u>> 1
        uint64_t x11_3
        
        x11_3 = x9_4 == 0 ? x10_5 : x8_10
        
        if (x11_3 != 0xb)
            goto label_cf695c
        
        if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                &var_80, 0, -ffffffffffffffff, "CERTIFICATE") != 0)
            uint64_t x10_6 = zx.q(var_80.b)
            x8_10 = var_78
            x9_4 = x10_6.d & 1
            x10_5 = x10_6 u>> 1
        label_cf695c:
            uint64_t x11_4
            
            if ((x9_4 & 0xff) == 0)
                x11_4 = x10_5
            else
                x11_4 = x8_10
            
            if (x11_4 == 0x10)
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &var_80, 0, -ffffffffffffffff, "X509 CERTIFICATE") == 0)
                    goto label_cf69c0
                
                uint64_t x10_7 = zx.q(var_80.b)
                x8_10 = var_78
                x9_4 = x10_7.d & 1
                x10_5 = x10_7 u>> 1
            
            uint64_t x8_11
            
            if ((x9_4 & 0xff) == 0)
                x8_11 = x10_5
            else
                x8_11 = x8_10
            
            if (x8_11 != 0x13)
                goto label_cf6a50
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &var_80, 0, -ffffffffffffffff, "TRUSTED CERTIFICATE") != 0)
                goto label_cf6a50
            
            goto label_cf69c0
        
    label_cf69c0:
        void** x25_2 = var_110_1
        int64_t var_108
        
        if (x25_2 == var_108)
            std::__ndk1::vector<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > >::__push_back_slow_path<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > const&>(
                &var_118)
        label_cf6a50:
            void* x0_18 = var_98
            
            if (x0_18 != 0)
                void* var_90_3 = x0_18
                operator delete(x0_18)
            
            if ((zx.d(var_80.b) & 1) == 0)
                continue
            else
                operator delete(var_70)
                continue
        else
            __builtin_memset(x25_2, 0, 0x18)
            void* x9_5 = var_98
            void* x20_2 = x10_3 - x9_5
            
            if (x10_3 == x9_5)
            label_cf6a24:
                var_110_1 = &x25_2[3]
                goto label_cf6a50
            
            if ((x20_2 & 0xffffffff80000000) == 0)
                void* x0_15 = operator new(x20_2)
                *x25_2 = x0_15
                x25_2[1] = x0_15
                x25_2[2] = x0_15 + x20_2
                void* x1_2 = var_98
                void* fp_2 = x0_15
                void* x20_3 = x10_3 - x1_2
                
                if (x20_3 s>= 1)
                    memcpy(fp_2, x1_2, x20_3)
                    fp_2 += x20_3
                
                x25_2[1] = fp_2
                goto label_cf6a24
            
            x0_20 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        if ((fp_1 & 0xffffffff80000000) == 0)
            int128_t v0_1
            int128_t v1_1
            x0_5, v0_1, v1_1 = operator new(fp_1)
            x9_3 = x0_5 + fp_1
            x10_3 = x0_5
            var_b0_1 = x0_5
            void* var_a8_2 = x0_5
            var_a0_1 = x9_3
            
            if (x25_1 != var_c0)
                x10_3 = x0_5
                char* x8_5 = x25_1
                
                if (fp_1 u< 0x20)
                label_cf68bc:
                    
                    do
                        char x11_2 = *x8_5
                        x8_5 = &x8_5[1]
                        *x10_3 = x11_2
                        x10_3 += 1
                    while (var_c0 != x8_5)
                else
                    if (x0_5 u< var_c0)
                        x10_3 = x0_5
                        x8_5 = x25_1
                    
                    if (x0_5 u< var_c0 && x25_1 u< &var_c0[x0_5 - x25_1])
                        goto label_cf68bc
                    
                    int64_t i_4 = fp_1 & 0xffffffffffffffe0
                    void* x12_2 = &x25_1[0x10]
                    x10_3 = x0_5 + i_4
                    x8_5 = &x25_1[i_4]
                    void* x13_2 = x0_5 + 0x10
                    int64_t i_3 = i_4
                    int32_t i_2
                    
                    do
                        v0_1 = *(x12_2 - 0x10)
                        v1_1 = *x12_2
                        x12_2 += 0x20
                        i_2 = i_3
                        i_3 -= 0x20
                        *(x13_2 - 0x10) = v0_1
                        *x13_2 = v1_1
                        x13_2 += 0x20
                    while (i_2 != 0x20)
                    
                    if (fp_1 != i_4)
                        goto label_cf68bc
            
            var_a8_1 = x10_3
            x8_8 = var_98
            
            if (x8_8 == 0)
                goto label_cf68e4
            
            goto label_cf68d0
        
        x0_20 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
    x0_68 = var_98
    break

if (x0_68 == 0)
    if ((zx.d(var_80.b) & 1) != 0)
        goto label_cf6fa0
    
    goto label_cf6f80

void* var_90_4 = x0_68
operator delete(x0_68)
void* x20_7

if ((zx.d(var_80.b) & 1) == 0)
label_cf6f80:
    x20_7 = var_118
    
    if (x20_7 != 0)
    label_cf7124:
        void* x8_47 = var_110_1
        void* x0_70 = x20_7
        
        if (x8_47 != x20_7)
            void* x21_2 = x8_47
            
            do
                x21_2 -= 0x18
                void* x0_71 = *x21_2
                
                if (x0_71 != 0)
                    *(x8_47 - 0x10) = x0_71
                    operator delete(x0_71)
                
                x8_47 = x21_2
            while (x20_7 != x21_2)
            
            x0_70 = var_118
        
        void* var_110_3 = x20_7
        operator delete(x0_70)
else
label_cf6fa0:
    operator delete(var_70)
    x20_7 = var_118
    
    if (x20_7 != 0)
        goto label_cf7124
int64_t var_e0_1 = 0
var_100.q = _vtable_for_Botan::DataSource_Stream + 0x10

if (result_1 != 0)
    (*(*result_1 + 8))()

if ((zx.d(var_100:8.b) & 1) != 0)
    operator delete(var_e8)

*(arg1 + 0x58)
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::__map_value_compare<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::less<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >::destroy(
    arg1 + 0x50)
*(arg1 + 0x40)
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::__map_value_compare<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::less<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >::destroy(
    arg1 + 0x38)
*(arg1 + 0x28)
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >, std::__ndk1::__map_value_compare<Botan::X509_DN, std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >, std::__ndk1::less<Botan::X509_DN>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > > > >::destroy(
    arg1 + 0x20)
void* x22_2 = *(arg1 + 8)

if (x22_2 != 0)
    void** x21_3 = *(arg1 + 0x10)
    void* x0_77 = x22_2
    
    if (x21_3 != x22_2)
        do
            x21_3 -= 0x38
            sub_f276a8(arg1 + 0x18, x21_3)
        while (x22_2 != x21_3)
        
        x0_77 = *(arg1 + 8)
    
    *(arg1 + 0x10) = x22_2
    operator delete(x0_77)

sub_1101e04(x0_20)
noreturn
