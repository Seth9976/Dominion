// 函数: sub_cf6a8c
// 地址: 0xcf6a8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x25 = arg1
uint64_t* arg_38
void* __offset(vtable_for_Botan::DataSource_Stream, 0x10) arg_50
void* arg_b8
void* arg_c0
char arg_d0

if (arg2 == 1)
    __cxa_begin_catch(x25)
    __cxa_end_catch()
    
    while (true)
        void* x0_73 = arg_b8
        
        if (x0_73 != 0)
            arg_c0 = x0_73
            operator delete(x0_73)
        
        if ((zx.d(arg_d0) & 1) != 0)
            operator delete(arg27)
        
        if (((*(arg_50 + 0x18))(&arg_50) & 1) != 0)
            uint64_t* x28 = arg_38
            
            if (x28 != arg15)
                do
                    uint64_t x27 = *x28
                    x28[1]
                    int64_t* x0_1 = operator new(0xa0)
                    x0_1[1] = 0
                    x0_1[2] = 0
                    *x0_1 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::X509_Certificate const, std::__ndk1::allocator<Botan::X509_Certificate const> >
                        + 0x10
                    Botan::X509_Certificate::X509_Certificate(&x0_1[3], x27)
                    arg23 = &x0_1[3]
                    arg24 = x0_1
                    uint32_t x8_1 = zx.d(*(Botan::X509_Certificate::data() + 0x43c))
                    int64_t x8_2
                    uint32_t x8_3
                    uint32_t x8_4
                    
                    if (x8_1 != 0)
                        x8_2 = *(Botan::X509_Certificate::data() + 0x428)
                        
                        if (x8_2 u<= 2)
                            x8_3 = zx.d(*(Botan::X509_Certificate::data() + 0x43c))
                        
                        if (x8_2 u> 2 || x8_3 == 0)
                            x8_4 = zx.d(*(Botan::X509_Certificate::data() + 0x43d))
                    
                    if (x8_1 != 0 && ((x8_2 u<= 2 && x8_3 != 0) || x8_4 != 0))
                        Botan::X509_Certificate::data()
                        Botan::X509_DN* x26_2 = *(arg3 + 0x10)
                        
                        if (x26_2 == *(arg3 + 0x18))
                            std::__ndk1::vector<Botan::X509_DN, std::__ndk1::allocator<Botan::X509_DN> >::__push_back_slow_path<Botan::X509_DN const&>(
                                arg13)
                        else
                            Botan::X509_DN::X509_DN(x26_2)
                            *(arg3 + 0x10) = x26_2 + 0x38
                        
                        std::__ndk1::piecewise_construct_t** x1_2 =
                            Botan::X509_Certificate::data() + 0x90
                        arg_d0.q = x1_2
                        void* x0_18 = std::__ndk1::__tree<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >, std::__ndk1::__map_value_compare<Botan::X509_DN, std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >, std::__ndk1::less<Botan::X509_DN>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > > > >::__emplace_unique_key_args<Botan::X509_DN, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<Botan::X509_DN const&>, std::__ndk1::tuple<> >(
                            arg14, x1_2)
                        int64_t* x8_7 = *(x0_18 + 0x60)
                        
                        if (x8_7 == *(x0_18 + 0x68))
                            std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > >::__push_back_slow_path<std::__ndk1::shared_ptr<Botan::X509_Certificate const> const&>(
                                x0_18 + 0x58)
                        else
                            *x8_7 = arg23
                            x8_7[1] = arg24
                            
                            if (arg24 != 0)
                                int32_t i
                                
                                do
                                    i = __stxr(__ldxr(arg24 + 8) + 1, arg24 + 8)
                                while (i != 0)
                            
                            *(x0_18 + 0x60) = &x8_7[2]
                        
                        std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::__map_value_compare<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::less<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >::__emplace_unique_key_args<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > const&, std::__ndk1::shared_ptr<Botan::X509_Certificate const>&>(
                            arg4, Botan::X509_Certificate::subject_public_key_bitstring_sha1())
                        Botan::X509_Certificate::raw_subject_dn_sha256()
                        std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::__map_value_compare<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::less<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >::__emplace_unique_key_args<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const>&>(
                            arg5, &arg_d0)
                        uint64_t x0_25 = arg_d0.q
                        
                        if (x0_25 != 0)
                            arg26 = x0_25
                            operator delete(x0_25)
                    else if ((arg6 & 1) == 0)
                        void** x0_31 = __cxa_allocate_exception(0x20)
                        Botan::X509_Certificate::data()
                        Botan::X509_DN::to_string()
                        int128_t* x0_36
                        int128_t v0_1
                        x0_36, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
                            &arg_b8, nullptr)
                        arg27 = x0_36[1].q
                        arg_d0.o = *x0_36
                        __builtin_memset(x0_36, 0, 0x18)
                        *x0_31 = _vtable_for_Botan::Exception + 0x10
                        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                            &x0_31[1])
                        *x0_31 = _vtable_for_Botan::Invalid_Argument + 0x10
                        __cxa_throw(x0_31, _typeinfo_for_Botan::Invalid_Argument, 
                            Botan::Exception::~Exception)
                        noreturn
                    
                    if (arg24 != 0)
                        int64_t x9_5
                        int32_t i_1
                        
                        do
                            x9_5 = __ldaxr(arg24 + 8)
                            i_1 = __stlxr(x9_5 - 1, arg24 + 8)
                        while (i_1 != 0)
                        
                        if (x9_5 == 0)
                            (*(*arg24 + 0x10))(arg24)
                            std::__ndk1::__shared_weak_count::__release_weak()
                    
                    x28 = &x28[3]
                while (x28 != arg15)
                
                x28 = arg_38
            
            if (x28 != 0)
                void* x8_12 = arg15
                uint64_t* x0_29
                
                if (x8_12 == x28)
                    x0_29 = x28
                else
                    void* x20_3 = x8_12
                    
                    do
                        x20_3 -= 0x18
                        void* x0_28 = *x20_3
                        
                        if (x0_28 != 0)
                            *(x8_12 - 0x10) = x0_28
                            operator delete(x0_28)
                        
                        x8_12 = x20_3
                    while (x28 != x20_3)
                    
                    x0_29 = arg_38
                
                arg15 = x28
                operator delete(x0_29)
            
            if (*(arg3 + 8) == *(arg3 + 0x10))
                void** x0_39 = __cxa_allocate_exception(0x20)
                void* x0_40
                int128_t v0_2
                x0_40, v0_2 = operator new(0x50)
                arg27 = x0_40
                arg_d0.o = data_71b700
                __builtin_strncpy(x0_40, 
                    "Flatfile_Certificate_Store::Flatfile_Certificate_Store cert file is empty", 
                    0x4a)
                *x0_39 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_39[1])
                *x0_39 = _vtable_for_Botan::Invalid_Argument + 0x10
                __cxa_throw(x0_39, _typeinfo_for_Botan::Invalid_Argument, 
                    Botan::Exception::~Exception)
                noreturn
            
            int64_t* result = arg19
            arg19 = nullptr
            arg_50 = _vtable_for_Botan::DataSource_Stream + 0x10
            
            if (result != 0)
                result = (*(*result + 8))()
            
            if ((zx.d(arg17) & 1) == 0)
                return result
            
            return operator delete(arg18)
        
        __builtin_memset(&arg_b8, 0, 0x30)
        Botan::PEM_Code::decode(&arg_50, &arg_d0)
        char* x25_2 = arg20
        __builtin_memset(&arg23, 0, 0x18)
        uint64_t fp_3 = arg21 - x25_2
        void* x0_43
        void* x0_60
        void* x8_42
        void* x9_9
        void* x10_5
        
        if (arg21 == x25_2)
            x9_9 = nullptr
            x10_5 = nullptr
            x0_60 = nullptr
            x8_42 = arg_b8
            
            if (x8_42 == 0)
                goto label_cf68e4
            
        label_cf68d0:
            arg_c0 = x8_42
            operator delete(x8_42)
            x0_60 = arg23
            x10_5 = arg24
            x9_9 = arg25
            x25_2 = arg20
        label_cf68e4:
            arg_b8 = x0_60
            arg_c0 = x10_5
            void* arg_c8 = x9_9
            __builtin_memset(&arg23, 0, 0x18)
            
            if (x25_2 != 0)
                arg21 = x25_2
                Botan::deallocate_memory(x25_2, arg22 - x25_2, 1)
            
            uint64_t x10_6 = zx.q(arg_d0)
            uint64_t x8_44 = arg26
            int32_t x9_10 = x10_6.d & 1
            uint64_t x10_7 = x10_6 u>> 1
            uint64_t x11_4
            
            x11_4 = x9_10 == 0 ? x10_7 : x8_44
            
            if (x11_4 != 0xb)
                goto label_cf695c
            
            if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                    &arg_d0, 0, -ffffffffffffffff, arg7) != 0)
                uint64_t x10_8 = zx.q(arg_d0)
                x8_44 = arg26
                x9_10 = x10_8.d & 1
                x10_7 = x10_8 u>> 1
            label_cf695c:
                uint64_t x11_5
                
                if ((x9_10 & 0xff) == 0)
                    x11_5 = x10_7
                else
                    x11_5 = x8_44
                
                if (x11_5 != 0x10)
                    goto label_cf6998
                
                if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                        &arg_d0, 0, -ffffffffffffffff, arg8) != 0)
                    uint64_t x10_9 = zx.q(arg_d0)
                    x8_44 = arg26
                    x9_10 = x10_9.d & 1
                    x10_7 = x10_9 u>> 1
                label_cf6998:
                    uint64_t x8_45
                    
                    if ((x9_10 & 0xff) == 0)
                        x8_45 = x10_7
                    else
                        x8_45 = x8_44
                    
                    if (x8_45 != 0x13)
                        continue
                    else if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                            &arg_d0, 0, -ffffffffffffffff, arg9) != 0)
                        continue
            
            int64_t* x25_3 = arg15
            
            if (x25_3 == arg16)
                std::__ndk1::vector<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::allocator<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > > >::__push_back_slow_path<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > const&>(
                    &arg_38)
                continue
            else
                __builtin_memset(x25_3, 0, 0x18)
                void* x9_11 = arg_b8
                void* x20_8 = arg_c0 - x9_11
                
                if (arg_c0 == x9_11)
                    arg15 = &x25_3[3]
                    continue
                else if ((x20_8 & 0xffffffff80000000) == 0)
                    void* x0_70 = operator new(x20_8)
                    *x25_3 = x0_70
                    x25_3[1] = x0_70
                    x25_3[2] = x0_70 + x20_8
                    void* x1_13 = arg_b8
                    void* fp_4 = x0_70
                    void* x20_9 = arg_c0 - x1_13
                    
                    if (x20_9 s>= 1)
                        memcpy(fp_4, x1_13, x20_9)
                        fp_4 += x20_9
                    
                    x25_3[1] = fp_4
                    arg15 = &x25_3[3]
                    continue
                
                x0_43 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        else
            if ((fp_3 & 0xffffffff80000000) == 0)
                int128_t v0_3
                int128_t v1_1
                x0_60, v0_3, v1_1 = operator new(fp_3)
                x9_9 = x0_60 + fp_3
                x10_5 = x0_60
                arg23 = x0_60
                arg24 = x0_60
                arg25 = x9_9
                
                if (x25_2 != arg21)
                    x10_5 = x0_60
                    char* x8_39 = x25_2
                    
                    if (fp_3 u< 0x20)
                    label_cf68bc:
                        
                        do
                            char x11_3 = *x8_39
                            x8_39 = &x8_39[1]
                            *x10_5 = x11_3
                            x10_5 += 1
                        while (arg21 != x8_39)
                    else
                        if (x0_60 u< arg21)
                            x10_5 = x0_60
                            x8_39 = x25_2
                        
                        if (x0_60 u< arg21 && x25_2 u< &arg21[x0_60 - x25_2])
                            goto label_cf68bc
                        
                        int64_t i_4 = fp_3 & 0xffffffffffffffe0
                        void* x12_1 = &x25_2[0x10]
                        x10_5 = x0_60 + i_4
                        x8_39 = &x25_2[i_4]
                        void* x13_1 = x0_60 + 0x10
                        int64_t i_3 = i_4
                        int32_t i_2
                        
                        do
                            v0_3 = *(x12_1 - 0x10)
                            v1_1 = *x12_1
                            x12_1 += 0x20
                            i_2 = i_3
                            i_3 -= 0x20
                            *(x13_1 - 0x10) = v0_3
                            *x13_1 = v1_1
                            x13_1 += 0x20
                        while (i_2 != 0x20)
                        
                        if (fp_3 != i_4)
                            goto label_cf68bc
                
                arg24 = x10_5
                x8_42 = arg_b8
                
                if (x8_42 == 0)
                    goto label_cf68e4
                
                goto label_cf68d0
            
            x0_43 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        x25 = x0_43
        break

void* x0_44 = arg_b8

if (x0_44 == 0)
    if ((zx.d(arg_d0) & 1) != 0)
        goto label_cf6fa0
    
    goto label_cf6f80

arg_c0 = x0_44
operator delete(x0_44)
uint64_t* x20_5

if ((zx.d(arg_d0) & 1) == 0)
label_cf6f80:
    x20_5 = arg_38
    
    if (x20_5 != 0)
    label_cf7124:
        void* x8_27 = arg15
        uint64_t* x0_46 = x20_5
        
        if (x8_27 != x20_5)
            void* x21_3 = x8_27
            
            do
                x21_3 -= 0x18
                void* x0_47 = *x21_3
                
                if (x0_47 != 0)
                    *(x8_27 - 0x10) = x0_47
                    operator delete(x0_47)
                
                x8_27 = x21_3
            while (x20_5 != x21_3)
            
            x0_46 = arg_38
        
        arg15 = x20_5
        operator delete(x0_46)
else
label_cf6fa0:
    operator delete(arg27)
    x20_5 = arg_38
    
    if (x20_5 != 0)
        goto label_cf7124
int64_t* x0_48 = arg19
arg19 = nullptr
arg_50 = _vtable_for_Botan::DataSource_Stream + 0x10

if (x0_48 != 0)
    (*(*x0_48 + 8))()

if ((zx.d(arg17) & 1) != 0)
    operator delete(arg18)

*arg10
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::__map_value_compare<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::less<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >::destroy(
    arg5)
*arg11
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::__map_value_compare<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> >, std::__ndk1::less<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >, std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >::destroy(
    arg4)
*arg12
std::__ndk1::__tree<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >, std::__ndk1::__map_value_compare<Botan::X509_DN, std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > >, std::__ndk1::less<Botan::X509_DN>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<Botan::X509_DN, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::X509_Certificate const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::X509_Certificate const> > > > > >::destroy(
    arg14)
void* x22_1 = *arg13

if (x22_1 != 0)
    void** x21_4 = *(arg3 + 0x10)
    void* x0_53 = x22_1
    
    if (x21_4 != x22_1)
        do
            x21_4 -= 0x38
            sub_f276a8(arg3 + 0x18, x21_4)
        while (x22_1 != x21_4)
        
        x0_53 = *arg13
    
    *(arg3 + 0x10) = x22_1
    operator delete(x0_53)

sub_1101e04(x25)
noreturn
