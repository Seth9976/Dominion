// 函数: sub_f2ec84
// 地址: 0xf2ec84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *(arg1 + 8)
char* x21

x21 = x8 == 0 ? &data_793a18 : x8

size_t x0_1 = strlen(x21)

if (x0_1 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_f2f3e0:
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_f2f3e8:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
label_f2f3f0:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
label_f2f3f8:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    sub_ef2a0c()
    noreturn

int64_t var_78
void* var_68
int64_t x0_6
int64_t x0_2
void* x22_1

if (x0_1 u>= 0x17)
    uint64_t x23_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
    void* x0_4 = operator new(x23_1)
    x22_1 = x0_4
    size_t var_70_1 = x0_1
    var_68 = x0_4
    var_78 = x23_1 | 1
label_f2ed28:
    memcpy(x22_1, x21, x0_1)
    *(x22_1 + x0_1) = 0
    x0_2 = *(arg1 + 0x10)
    
    if (x0_2 != 0)
        x0_6 = std::__ndk1::chrono::system_clock::from_time_t(x0_2)
    else
        x0_6 = std::__ndk1::chrono::system_clock::now()
else
    x22_1 = &var_78 | 1
    var_78.b = (x0_1.d << 1).b
    
    if (x0_1 != 0)
        goto label_f2ed28
    
    *(x22_1 + x0_1) = 0
    x0_2 = *(arg1 + 0x10)
    
    if (x0_2 == 0)
        x0_6 = std::__ndk1::chrono::system_clock::now()
    else
        x0_6 = std::__ndk1::chrono::system_clock::from_time_t(x0_2)
void* var_90
__builtin_memset(&var_90, 0, 0x18)
void* x0_8 = Botan_FFI::safe_get<Botan::X509_Certificate, 2405599543u>(*(arg1 + 0x18))
void* var_88
void** x20_2 = var_88
int64_t var_80

if (x20_2 == var_80)
    std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >::__push_back_slow_path<Botan::X509_Certificate const&>(
        &var_90)
else
    Botan::X509_Object::X509_Object(x20_2)
    *x20_2 = _vtable_for_Botan::X509_Certificate + 0x10
    x20_2[0xf] = *(x0_8 + 0x78)
    int64_t x8_7 = *(x0_8 + 0x80)
    x20_2[0x10] = x8_7
    
    if (x8_7 != 0)
        int32_t i
        
        do
            i = __stxr(__ldxr(x8_7 + 8) + 1, x8_7 + 8)
        while (i != 0)
    
    var_88 = &x20_2[0x11]

if (*(arg1 + 0x20) != 0)
    int64_t x23_2 = 0
    
    while (true)
        void* x0_13 = Botan_FFI::safe_get<Botan::X509_Certificate, 2405599543u>(
            *(*(arg1 + 0x28) + (x23_2 << 3)))
        
        if (var_88 == var_80)
            std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >::__push_back_slow_path<Botan::X509_Certificate const&>(
                &var_90)
            x23_2 += 1
            
            if (x23_2 == *(arg1 + 0x20))
                break
        else
            Botan::X509_Object::X509_Object(var_88)
            *var_88 = _vtable_for_Botan::X509_Certificate + 0x10
            *(var_88 + 0x78) = *(x0_13 + 0x78)
            int64_t x8_15 = *(x0_13 + 0x80)
            *(var_88 + 0x80) = x8_15
            
            if (x8_15 != 0)
                int32_t i_1
                
                do
                    i_1 = __stxr(__ldxr(x8_15 + 8) + 1, x8_15 + 8)
                while (i_1 != 0)
            
            var_88 += 0x88
            x23_2 += 1
            
            if (x23_2 == *(arg1 + 0x20))
                break

void* var_b8
__builtin_memset(&var_b8, 0, 0x28)
char* x23_3 = *(arg1 + 0x30)
void* var_b0
void* var_a8
void** var_98
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x20_6

if (x23_3 == 0 || zx.d(*x23_3) == 0)
    x20_6 = nullptr
    
    if (*(arg1 + 0x38) != 0)
    label_f2efe0:
        void** x0_27 = operator new(0x38)
        void** x1_8 = var_98
        *x0_27 = _vtable_for_Botan::Certificate_Store_In_Memory + 0x10
        __builtin_memset(&x0_27[1], 0, 0x30)
        var_98 = x0_27
        
        if (x1_8 != 0)
            sub_f2e56c(&var_98, x1_8)
        
        if (x1_8 == 0 || *(arg1 + 0x38) != 0)
            int64_t i_2 = 0
            
            do
                void** x22_5 = var_98
                Botan_FFI::safe_get<Botan::X509_Certificate, 2405599543u>(
                    *(*(arg1 + 0x40) + (i_2 << 3)))
                Botan::Certificate_Store_In_Memory::add_certificate(x22_5)
                i_2 += 1
            while (i_2 != *(arg1 + 0x38))
        
        void** x26_2 = var_98
        
        if (var_b0 u>= var_a8)
            void* x22_6 = var_b8
            void* x23_5 = var_b0 - x22_6
            int64_t x27_3 = x23_5 s>> 3
            
            if ((x27_3 + 1) u>> 0x3d != 0)
                goto label_f2f3e8
            
            void* x8_34 = var_a8 - x22_6
            int64_t x11_2 = x8_34 s>> 2
            int64_t x9_12
            
            if (x11_2 u< x27_3 + 1)
                x9_12 = x27_3 + 1
            else
                x9_12 = x11_2
            
            int64_t x28_1
            
            if (0xfffffffffffffff u> x8_34 s>> 3)
                x28_1 = x9_12
            else
                x28_1 = 0x1fffffffffffffff
            
            void* x24_4
            
            if (x28_1 == 0)
                x24_4 = nullptr
            else
                if (x28_1 u>> 0x3d != 0)
                    sub_ef2a0c()
                    noreturn
                
                x24_4 = operator new(x28_1 << 3)
            
            int64_t* fp_1 = x24_4 + (x27_3 << 3)
            *fp_1 = x26_2
            
            if (x23_5 s>= 1)
                memcpy(x24_4, x22_6, x23_5)
            
            var_b8 = x24_4
            var_b0 = &fp_1[1]
            var_a8 = x24_4 + (x28_1 << 3)
            
            if (x22_6 != 0)
                operator delete(x22_6)
        else
            *var_b0 = x26_2
            var_b0 += 8
else
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_15 = operator new(0x38)
    size_t x0_17 = strlen(x23_3)
    
    if (x0_17 u>= -0x10)
        goto label_f2f3e0
    
    int64_t var_138
    void* var_128
    void* x24_2
    
    if (x0_17 u>= 0x17)
        uint64_t x25_1 = (x0_17 + 0x10) & 0xfffffffffffffff0
        void* x0_19 = operator new(x25_1)
        x24_2 = x0_19
        size_t var_130_1 = x0_17
        var_128 = x0_19
        var_138 = x25_1 | 1
        memcpy(x24_2, x23_3, x0_17)
    else
        x24_2 = &var_138 | 1
        var_138.b = (x0_17.d << 1).b
        
        if (x0_17 != 0)
            memcpy(x24_2, x23_3, x0_17)
    
    *(x24_2 + x0_17) = 0
    Botan::Certificate_Store_In_Memory::Certificate_Store_In_Memory(x0_15)
    
    if ((zx.d(var_138.b) & 1) != 0)
        operator delete(var_128)
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >**
         x9_5 = var_b0
    
    if (x9_5 u>= var_a8)
        void* x20_7 = var_b8
        void* x23_4 = x9_5 - x20_7
        int64_t x25_2 = x23_4 s>> 3
        
        if ((x25_2 + 1) u>> 0x3d != 0)
            goto label_f2f3f8
        
        void* x8_26 = var_a8 - x20_7
        int64_t x11_1 = x8_26 s>> 2
        int64_t x9_8
        
        if (x11_1 u< x25_2 + 1)
            x9_8 = x25_2 + 1
        else
            x9_8 = x11_1
        
        int64_t x26_1
        
        if (0xfffffffffffffff u> x8_26 s>> 3)
            x26_1 = x9_8
        else
            x26_1 = 0x1fffffffffffffff
        
        void* x24_3
        
        if (x26_1 == 0)
            x24_3 = nullptr
        else
            if (x26_1 u>> 0x3d != 0)
                sub_ef2a0c()
                noreturn
            
            x24_3 = operator new(x26_1 << 3)
        
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            ** x27_1 = x24_3 + (x25_2 << 3)
        *x27_1 = x0_15
        
        if (x23_4 s>= 1)
            memcpy(x24_3, x20_7, x23_4)
        
        var_b8 = x24_3
        var_b0 = &x27_1[1]
        var_a8 = x24_3 + (x26_1 << 3)
        
        if (x20_7 != 0)
            operator delete(x20_7)
    else
        *x9_5 = x0_15
        var_b0 = &x9_5[1]
    
    x20_6 = x0_15
    
    if (*(arg1 + 0x38) != 0)
        goto label_f2efe0

void** var_a0

if (*(arg1 + 0x48) != 0)
    void** x0_36 = operator new(0x38)
    void** x1_11 = var_a0
    *x0_36 = _vtable_for_Botan::Certificate_Store_In_Memory + 0x10
    __builtin_memset(&x0_36[1], 0, 0x30)
    var_a0 = x0_36
    
    if (x1_11 != 0)
        sub_f2e56c(&var_a0, x1_11)
    
    if (x1_11 == 0 || *(arg1 + 0x48) != 0)
        int64_t i_3 = 0
        
        do
            void** x22_7 = var_a0
            Botan_FFI::safe_get<Botan::X509_CRL, 744655120u>(*(*(arg1 + 0x50) + (i_3 << 3)))
            Botan::Certificate_Store_In_Memory::add_crl(x22_7)
            i_3 += 1
        while (i_3 != *(arg1 + 0x48))
    
    void** x25_4 = var_a0
    
    if (var_b0 u>= var_a8)
        void* x22_8 = var_b8
        void* x23_6 = var_b0 - x22_8
        int64_t x26_3 = x23_6 s>> 3
        
        if ((x26_3 + 1) u>> 0x3d != 0)
            goto label_f2f3f0
        
        void* x8_42 = var_a8 - x22_8
        int64_t x11_3 = x8_42 s>> 2
        int64_t x9_16
        
        if (x11_3 u< x26_3 + 1)
            x9_16 = x26_3 + 1
        else
            x9_16 = x11_3
        
        int64_t x27_5
        
        if (0xfffffffffffffff u> x8_42 s>> 3)
            x27_5 = x9_16
        else
            x27_5 = 0x1fffffffffffffff
        
        void* x24_5
        
        if (x27_5 == 0)
            x24_5 = nullptr
        else
            if (x27_5 u>> 0x3d != 0)
                sub_ef2a0c()
                noreturn
            
            x24_5 = operator new(x27_5 << 3)
        
        void*** x28_2 = x24_5 + (x26_3 << 3)
        *x28_2 = x25_4
        
        if (x23_6 s>= 1)
            memcpy(x24_5, x22_8, x23_6)
        
        var_b8 = x24_5
        void* var_b0_2 = &x28_2[1]
        void* var_a8_1 = x24_5 + (x27_5 << 3)
        
        if (x22_8 != 0)
            operator delete(x22_8)
    else
        *var_b0 = x25_4
        void* var_b0_1 = var_b0 + 8

void var_e8
Botan::Path_Validation_Restrictions::Path_Validation_Restrictions(&var_e8, 0, (*(arg1 + 0x58)).b, 0)
void* var_150
__builtin_memset(&var_150, 0, 0x18)
Botan::x509_path_validate(std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > const&, Botan::Path_Validation_Restrictions const&, std::__ndk1::vector<Botan::Certificate_Store*, std::__ndk1::allocator<Botan::Certificate_Store*> > const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::Usage_Type, std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock, std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000l> > >, std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000l> >, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::OCSP::Response const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::OCSP::Response const> > > const&)(
    &var_90, &var_e8, &var_b8, &var_78, 0, x0_6, 0, &var_150)
void* x22_9 = var_150

if (x22_9 != 0)
    void* var_148
    void* x23_7 = var_148
    void* x0_47
    
    if (x23_7 != x22_9)
        do
            int64_t* x21_2 = *(x23_7 - 8)
            x23_7 -= 0x10
            
            if (x21_2 != 0)
                int64_t x9_17
                int32_t i_4
                
                do
                    x9_17 = __ldaxr(&x21_2[1])
                    i_4 = __stlxr(x9_17 - 1, &x21_2[1])
                while (i_4 != 0)
                
                if (x9_17 == 0)
                    (*(*x21_2 + 0x10))(x21_2)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x23_7 != x22_9)
        
        x0_47 = var_150
    else
        x0_47 = x22_9
    
    void* var_148_1 = x22_9
    operator delete(x0_47)

int32_t* x8_47 = *(arg1 + 0x60)
int32_t var_f0

if (x8_47 != 0)
    *x8_47 = var_f0

int64_t x8_48 = sx.q(var_f0)
int32_t x19_1

if (x8_48.d u> 3)
    x19_1 = 1
else
    x19_1 = *(&data_71a9c0 + (x8_48 << 2))

Botan::Path_Validation_Result::~Path_Validation_Result()
void var_e0
std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::destroy(
    &var_e0)
void* x0_51 = var_b8

if (x0_51 != 0)
    void* var_b0_3 = x0_51
    operator delete(x0_51)

void** x1_16 = var_a0
var_a0 = nullptr

if (x1_16 != 0)
    sub_f2e56c(&var_a0, x1_16)

void** x1_17 = var_98
var_98 = nullptr

if (x1_17 != 0)
    sub_f2e56c(&var_98, x1_17)

if (x20_6 != 0)
    (*(*x20_6 + 8))(x20_6)

void* x21_3 = var_90

if (x21_3 != 0)
    void* x20_8 = var_88
    void* x0_56
    
    if (x20_8 == x21_3)
        x0_56 = x21_3
    else
        do
            x20_8 -= 0x88
            (*(*x20_8 + 0x10))(x20_8)
        while (x21_3 != x20_8)
        
        x0_56 = var_90
    
    void* var_88_1 = x21_3
    operator delete(x0_56)

if ((zx.d(var_78.b) & 1) != 0)
    operator delete(var_68)

return zx.q(x19_1)
