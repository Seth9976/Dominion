// 函数: sub_f2dd40
// 地址: 0xf2dd40
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x8 = *(arg1 + 8)
char* x21

x21 = x8 == 0 ? &data_793a18 : x8

size_t x0_1 = strlen(x21)

if (x0_1 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_f2e368:
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
label_f2e370:
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
label_f2e378:
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
label_f2dde4:
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
        goto label_f2dde4
    
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
void** x21_1 = var_88
int64_t var_80

if (x21_1 == var_80)
    std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> >::__push_back_slow_path<Botan::X509_Certificate const&>(
        &var_90)
else
    Botan::X509_Object::X509_Object(x21_1)
    *x21_1 = _vtable_for_Botan::X509_Certificate + 0x10
    x21_1[0xf] = *(x0_8 + 0x78)
    int64_t x8_7 = *(x0_8 + 0x80)
    x21_1[0x10] = x8_7
    
    if (x8_7 != 0)
        int32_t i
        
        do
            i = __stxr(__ldxr(x8_7 + 8) + 1, x8_7 + 8)
        while (i != 0)
    
    var_88 = &x21_1[0x11]

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

void* var_b0
__builtin_memset(&var_b0, 0, 0x20)
char* x23_3 = *(arg1 + 0x30)
void** var_98
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x21_5
void* var_a8
void* var_a0

if (x23_3 == 0 || zx.d(*x23_3) == 0)
    x21_5 = nullptr
    
    if (*(arg1 + 0x38) != 0)
    label_f2e094:
        void** x0_27 = operator new(0x38)
        void** x1_8 = var_98
        *(x0_27 + 8) = zx.o(0)
        *x0_27 = _vtable_for_Botan::Certificate_Store_In_Memory + 0x10
        __builtin_memset(&x0_27[3], 0, 0x20)
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
        
        void** x25_4 = var_98
        
        if (var_a8 u>= var_a0)
            void* x22_6 = var_b0
            void* x23_5 = var_a8 - x22_6
            int64_t x26_2 = x23_5 s>> 3
            
            if ((x26_2 + 1) u>> 0x3d != 0)
                goto label_f2e370
            
            void* x8_35 = var_a0 - x22_6
            int64_t x11_2 = x8_35 s>> 2
            int64_t x9_12
            
            if (x11_2 u< x26_2 + 1)
                x9_12 = x26_2 + 1
            else
                x9_12 = x11_2
            
            int64_t x27_3
            
            if (0xfffffffffffffff u> x8_35 s>> 3)
                x27_3 = x9_12
            else
                x27_3 = 0x1fffffffffffffff
            
            void* x24_4
            
            if (x27_3 == 0)
                x24_4 = nullptr
            else
                if (x27_3 u>> 0x3d != 0)
                    sub_ef2a0c()
                    noreturn
                
                x24_4 = operator new(x27_3 << 3)
            
            void*** x28_1 = x24_4 + (x26_2 << 3)
            *x28_1 = x25_4
            
            if (x23_5 s>= 1)
                memcpy(x24_4, x22_6, x23_5)
            
            var_b0 = x24_4
            void* var_a8_2 = &x28_1[1]
            void* var_a0_1 = x24_4 + (x27_3 << 3)
            
            if (x22_6 != 0)
                operator delete(x22_6)
        else
            *var_a8 = x25_4
            void* var_a8_1 = var_a8 + 8
else
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
        x0_15 = operator new(0x38)
    size_t x0_17 = strlen(x23_3)
    
    if (x0_17 u>= -0x10)
        goto label_f2e368
    
    int64_t var_130
    void* var_120
    void* x24_2
    
    if (x0_17 u>= 0x17)
        uint64_t x25_1 = (x0_17 + 0x10) & 0xfffffffffffffff0
        void* x0_19 = operator new(x25_1)
        x24_2 = x0_19
        size_t var_128_1 = x0_17
        var_120 = x0_19
        var_130 = x25_1 | 1
        memcpy(x24_2, x23_3, x0_17)
    else
        x24_2 = &var_130 | 1
        var_130.b = (x0_17.d << 1).b
        
        if (x0_17 != 0)
            memcpy(x24_2, x23_3, x0_17)
    
    *(x24_2 + x0_17) = 0
    Botan::Certificate_Store_In_Memory::Certificate_Store_In_Memory(x0_15)
    
    if ((zx.d(var_130.b) & 1) != 0)
        operator delete(var_120)
    
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >**
         x9_5 = var_a8
    
    if (x9_5 u>= var_a0)
        void* x21_6 = var_b0
        void* x23_4 = x9_5 - x21_6
        int64_t x25_2 = x23_4 s>> 3
        
        if ((x25_2 + 1) u>> 0x3d != 0)
            goto label_f2e378
        
        void* x8_27 = var_a0 - x21_6
        int64_t x11_1 = x8_27 s>> 2
        int64_t x9_8
        
        if (x11_1 u< x25_2 + 1)
            x9_8 = x25_2 + 1
        else
            x9_8 = x11_1
        
        int64_t x26_1
        
        if (0xfffffffffffffff u> x8_27 s>> 3)
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
            memcpy(x24_3, x21_6, x23_4)
        
        var_b0 = x24_3
        var_a8 = &x27_1[1]
        var_a0 = x24_3 + (x26_1 << 3)
        
        if (x21_6 != 0)
            operator delete(x21_6)
        
        x21_5 = x0_15
        
        if (*(arg1 + 0x38) != 0)
            goto label_f2e094
    else
        *x9_5 = x0_15
        var_a8 = &x9_5[1]
        x21_5 = x0_15
        
        if (*(arg1 + 0x38) != 0)
            goto label_f2e094
void var_e0
Botan::Path_Validation_Restrictions::Path_Validation_Restrictions(&var_e0, 0, (*(arg1 + 0x48)).b, 0)
void* var_148
__builtin_memset(&var_148, 0, 0x18)
Botan::x509_path_validate(std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > const&, Botan::Path_Validation_Restrictions const&, std::__ndk1::vector<Botan::Certificate_Store*, std::__ndk1::allocator<Botan::Certificate_Store*> > const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Botan::Usage_Type, std::__ndk1::chrono::time_point<std::__ndk1::chrono::system_clock, std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000000l> > >, std::__ndk1::chrono::duration<long long, std::__ndk1::ratio<1l, 1000l> >, std::__ndk1::vector<std::__ndk1::shared_ptr<Botan::OCSP::Response const>, std::__ndk1::allocator<std::__ndk1::shared_ptr<Botan::OCSP::Response const> > > const&)(
    &var_90, &var_e0, &var_b0, &var_78, 0, x0_6, 0, &var_148)
void* x22_7 = var_148

if (x22_7 != 0)
    void* var_140
    void* x23_6 = var_140
    void* x0_38
    
    if (x23_6 != x22_7)
        do
            int64_t* x20_3 = *(x23_6 - 8)
            x23_6 -= 0x10
            
            if (x20_3 != 0)
                int64_t x9_13
                int32_t i_3
                
                do
                    x9_13 = __ldaxr(&x20_3[1])
                    i_3 = __stlxr(x9_13 - 1, &x20_3[1])
                while (i_3 != 0)
                
                if (x9_13 == 0)
                    (*(*x20_3 + 0x10))(x20_3)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x23_6 != x22_7)
        
        x0_38 = var_148
    else
        x0_38 = x22_7
    
    void* var_140_1 = x22_7
    operator delete(x0_38)

int32_t* x8_40 = *(arg1 + 0x50)
int32_t var_e8

if (x8_40 != 0)
    *x8_40 = var_e8

int64_t x8_41 = sx.q(var_e8)
int32_t x19_1

if (x8_41.d u> 3)
    x19_1 = 1
else
    x19_1 = *(&data_71a9c0 + (x8_41 << 2))

Botan::Path_Validation_Result::~Path_Validation_Result()
void var_d8
std::__ndk1::__tree<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > > >::destroy(
    &var_d8)
void* x0_42 = var_b0

if (x0_42 != 0)
    void* var_a8_3 = x0_42
    operator delete(x0_42)

void** x1_13 = var_98
var_98 = nullptr

if (x1_13 != 0)
    sub_f2e56c(&var_98, x1_13)

if (x21_5 != 0)
    (*(*x21_5 + 8))(x21_5)

void* x21_7 = var_90

if (x21_7 != 0)
    void* x20_4 = var_88
    void* x0_46
    
    if (x20_4 == x21_7)
        x0_46 = x21_7
    else
        do
            x20_4 -= 0x88
            (*(*x20_4 + 0x10))(x20_4)
        while (x21_7 != x20_4)
        
        x0_46 = var_90
    
    void* var_88_1 = x21_7
    operator delete(x0_46)

if ((zx.d(var_78.b) & 1) != 0)
    operator delete(var_68)

return zx.q(x19_1)
