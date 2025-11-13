// 函数: _ZN5Botan3TLS6Server14session_createERNS0_22Server_Handshake_StateEb
// 地址: 0xe7badc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* var_160 = nullptr
int64_t var_158 = 0
int64_t* var_168 = &var_160
Botan::TLS::Policy* fp = arg2
int64_t* i_21 = *(arg2 + 0x100) + 0x90
int64_t* i = *i_21
int16_t var_180

if (i == 0)
    var_180 = 0
else
    int64_t* i_11 = i_21
    
    do
        int32_t x11_1 = i[4].d
        
        if (x11_1 s>= 0)
            i_11 = i
        
        i = i[zx.q(x11_1 u>> 0x1f)]
    while (i != 0)
    
    if (i_11 == i_21 || i_11[4].d s> 0)
        var_180 = 0
    else
        int64_t x0_7 = i_11[5]
        
        if (x0_7 == 0)
            var_180 = 0
        else if (__dynamic_cast(x0_7, _typeinfo_for_Botan::TLS::Extension, 
                _typeinfo_for_Botan::TLS::Server_Name_Indicator, 0) == 0)
            var_180 = 0
        else
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_180)

int64_t* var_1a0
sub_e7f104(&var_1a0, &var_180, *(arg1 + 0xd0))
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > > > >::destroy(
    &var_168)
int64_t* var_198
int64_t* x1_2 = var_198
var_168 = var_1a0
var_160 = x1_2
void* var_190
void* var_158_1 = var_190

if (var_190 == 0)
    var_168 = &var_160
else
    x1_2[2] = &var_160
    var_1a0 = &var_198
    var_198 = nullptr
    var_190 = nullptr

Botan::TLS::Server_Handshake_State& x20_1 = arg1
std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > > > >::destroy(
    &var_1a0)
uint64_t x8_2 = zx.q(var_180.b)
uint64_t x8_3
uint64_t var_178

if ((x8_2.d & 1) == 0)
    x8_3 = x8_2 u>> 1
else
    x8_3 = var_178
int32_t x0_4

if (x8_3 == 0)
    x0_4 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_180, 0, -ffffffffffffffff, &data_793a18)

int16_t var_78
void* var_68

if ((x8_3 != 0 || x0_4 != 0) && var_158_1 == 0)
    var_78 = 0
    sub_e7f104(&var_1a0, &var_78, *(x20_1 + 0xd0))
    std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > > > >::destroy(
        &var_168)
    int64_t* x1_6 = var_198
    var_168 = var_1a0
    var_160 = x1_6
    void* var_158_2 = var_190
    
    if (var_190 == 0)
        var_168 = &var_160
    else
        x1_6[2] = &var_160
        var_1a0 = &var_198
        var_198 = nullptr
        var_190 = nullptr
    
    x20_1 = arg1
    std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > > > >::destroy(
        &var_1a0)
    
    if ((zx.d(var_78.b) & 1) != 0)
        operator delete(var_68)
    
    if (var_158_2 != 0)
        var_1a0.b = 0
        var_1a0:4.d = 0x70
        Botan::TLS::Channel::send_alert(x20_1)

int64_t* x0_13 = *(x20_1 + 0x28)
uint64_t x9_5 = zx.q(*(fp + 0x20))
int64_t* x24 = *(x20_1 + 0xd0)
void* x19 = *(fp + 0x100)
int32_t x0_14 = (*(*x0_13 + 0x120))()
var_1a0.b = 0x14
var_198:1.w = 0x7265
var_1a0 = 0x767265732d736c74
var_198:3.b = 0
int64_t* i_1 = *(x19 + 0x90)

if (i_1 == 0)
    var_78 = 0
else
    int64_t* i_12 = x19 + 0x90
    
    do
        int32_t x10_1 = i_1[4].d
        
        if (x10_1 s>= 0)
            i_12 = i_1
        
        i_1 = i_1[zx.q(x10_1 u>> 0x1f)]
    while (i_1 != 0)
    
    if (i_12 == x19 + 0x90 || i_12[4].d s> 0)
        var_78 = 0
    else
        int64_t x0_94 = i_12[5]
        
        if (x0_94 == 0)
            var_78 = 0
        else if (__dynamic_cast(x0_94, _typeinfo_for_Botan::TLS::Extension, 
                _typeinfo_for_Botan::TLS::Server_Name_Indicator, 0) == 0)
            var_78 = 0
        else
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_78)

int32_t x0_16 = (*(*x24 + 0x30))(x24, &var_1a0, &var_78)

if ((zx.d(var_78.b) & 1) != 0)
    operator delete(var_68)

if ((zx.d(var_1a0.b) & 1) != 0)
    operator delete(var_190)

var_1a0 = nullptr
var_198 = nullptr
int64_t var_190_1 = 0
int64_t x21 = *(x19 + 0x40)
int64_t x8_14 = *(x19 + 0x48)
uint64_t x25 = x8_14 - x21

if (x8_14 == x21)
    goto label_e7bde4

int128_t var_d0

if ((x25 & 0xffffffff80000000) != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t* x0_20 = operator new(x25)
    var_1a0 = x0_20
    var_198 = x0_20
    void* var_190_2 = x0_20 + (x25 s>> 1 << 1)
    memcpy(x0_20, x21, x25)
    var_198 = x0_20 + x25
label_e7bde4:
    (*(*x0_13 + 0x150))(x0_13, x9_5, zx.q(x0_16) & 1)
    int128_t var_90
    void* var_80
    void* var_70
    
    if (var_78.q == var_70)
        void** x0_150 = __cxa_allocate_exception(0x28)
        void* x0_151
        int128_t v0_1
        x0_151, v0_1 = operator new(0x40)
        v0_1 = data_71ac10
        var_80 = x0_151
        __builtin_strncpy(x0_151, "Policy forbids us from negotiating any ciphersuite", 0x33)
        var_90 = v0_1
        *x0_150 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_150[1])
        x0_150[4].d = 0x28
        *x0_150 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_150, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn
    
    int64_t* i_2 = *(x19 + 0x90)
    
    if (i_2 == 0)
        __builtin_memset(&var_90, 0, 0x18)
    else
        int64_t* i_13 = x19 + 0x90
        
        do
            int32_t x10_3 = i_2[4].d
            
            if (x10_3 s>= 0xa)
                i_13 = i_2
            
            i_2 = i_2[zx.q(x10_3 s< 0xa ? 1 : 0)]
        while (i_2 != 0)
        
        if (i_13 == x19 + 0x90 || i_13[4].d s> 0xa)
            __builtin_memset(&var_90, 0, 0x18)
        else
            int64_t x0_22 = i_13[5]
            
            if (x0_22 == 0)
                __builtin_memset(&var_90, 0, 0x18)
            else if (__dynamic_cast(x0_22, _typeinfo_for_Botan::TLS::Extension, 
                    _typeinfo_for_Botan::TLS::Supported_Groups, 0) == 0)
                __builtin_memset(&var_90, 0, 0x18)
            else
                Botan::TLS::Supported_Groups::ec_groups()
    
    int16_t x0_25 = (*(*x0_13 + 0x50))(x0_13, &var_90)
    void* x0_26 = var_90.q
    
    if (x0_26 != 0)
        var_90:8.q = x0_26
        operator delete(x0_26)
    
    int64_t x21_1 = var_78.q
    __builtin_memset(&var_90, 0, 0x18)
    uint64_t x25_1 = var_70 - x21_1
    void* x19_2
    void* x20_4
    int16_t* x27_2
    
    if (var_70 == x21_1)
        x19_2 = nullptr
        x20_4 = nullptr
        x27_2 = nullptr
    label_e7beec:
        int64_t* x21_2 = var_1a0
        int64_t* x8_24 = var_198
        int16_t* var_b0
        __builtin_memset(&var_b0, 0, 0x18)
        void* x28_1 = x8_24 - x21_2
        int16_t* var_a8_1
        void* var_a0
        void* x22_1
        void* x23_1
        int16_t* x25_2
        int16_t x28_2
        
        if (x8_24 == x21_2)
            x22_1 = nullptr
            x23_1 = nullptr
            x25_2 = nullptr
            x28_2 = x0_25
            int16_t* x8_26
            void* x9_10
            
            if ((x0_14 & 1) != 0)
            label_e7bf40:
                x8_26 = x25_2
                x9_10 = x23_1
                x23_1 = x20_4
                x25_2 = x27_2
            else
            label_e7bf68:
                x8_26 = x27_2
                x9_10 = x20_4
                var_90.q = x25_2
                var_90:8.q = x23_1
                var_b0 = x27_2
                var_a8_1 = x20_4
                var_80 = x22_1
                var_a0 = x19_2
            
            if (x25_2 == x23_1)
            label_e7cf08:
                void** x0_140 = __cxa_allocate_exception(0x28)
                int64_t x0_141
                int128_t v0
                x0_141, v0 = operator new(0x30)
                v0 = data_71aa70
                int64_t var_c0_1 = x0_141
                __builtin_strncpy(x0_141, "Can\'t agree on a ciphersuite with client", 0x29)
                var_d0 = v0
                *x0_140 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_140[1])
                x0_140[4].d = 0x28
                *x0_140 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                __cxa_throw(x0_140, _typeinfo_for_Botan::TLS::TLS_Exception, 
                    Botan::Exception::~Exception)
                noreturn
            
            Botan::TLS::Policy* var_200_1 = fp
            void* x10_7 = x9_10 - x8_26
            
            if (x9_10 == x8_26)
                goto label_e7c664
            
            while (true)
                void* x11_3
                
                x11_3 = x10_7 s>= 0 ? x10_7 : -ffffffffffffffff
                
                void* x9_11 = x8_26 - x9_10
                uint32_t i_3 = zx.d(*x25_2)
                void* x11_4
                
                x11_4 = x11_3 s< 1 ? x11_3 : 1
                
                void* x9_12
                
                x9_12 = x9_11 s> x10_7 ? x9_11 : x10_7
                
                int64_t x9_14 = x11_4 * (x9_12 u>> 1)
                
                while (zx.d(*x8_26) != i_3)
                    int64_t temp0_1 = x9_14
                    x9_14 -= 1
                    x8_26 = &x8_26[1]
                    
                    if (temp0_1 == 1)
                        goto label_e7c664
                
                Botan::TLS::Ciphersuite::all_known_ciphersuites()
                int16_t* x8_27 = data_23ecc48
                int64_t x9_15 = data_23ecc50
                
                if (x9_15 != x8_27)
                    uint64_t i_4 = ((x9_15 - x8_27) s>> 3) * -0x71c71c71c71c71c7
                    
                    do
                        uint64_t i_19 = i_4 u>> 1
                        int16_t* x12_1 = x8_27 + i_19 * 0x48
                        uint32_t x13_1 = zx.d(*x12_1)
                        
                        if (x13_1 u< i_3)
                            i_4 += not.q(i_19)
                        else
                            i_4 = i_19
                        
                        if (x13_1 u< i_3)
                            x8_27 = &x12_1[0x24]
                    while (i_4 != 0)
                
                if (x8_27 != x9_15 && zx.d(*x8_27) == i_3 && zx.d(x8_27[0x20].b) != 0)
                    uint64_t x0_31 = zx.q(*(x8_27 + 0x10))
                    int32_t x8_28 = *(x8_27 + 0x14)
                    
                    if (zx.d(x28_2) != 0)
                    label_e7c07c:
                        void* var_c0
                        
                        if ((x0_31.d & 0xfffffffe) == 0x10000)
                        label_e7c688:
                            
                            if (x8_28 == 4)
                                int64_t* i_16 = x19 + 0x90
                                int64_t* i_5 = *i_16
                                uint32_t x9_35
                                
                                if (i_5 == 0)
                                    x9_35 = 0
                                    var_d0.w = 0
                                else
                                    do
                                        int32_t x10_22 = i_5[4].d
                                        
                                        if (x10_22 s>= 0xc)
                                            i_16 = i_5
                                        
                                        i_5 = i_5[zx.q(x10_22 s< 0xc ? 1 : 0)]
                                    while (i_5 != 0)
                                    
                                    if (i_16 == x19 + 0x90 || i_16[4].d s> 0xc)
                                        x9_35 = 0
                                        var_d0.w = 0
                                    else
                                        int64_t x0_63 = i_16[5]
                                        
                                        if (x0_63 == 0)
                                            x9_35 = 0
                                            var_d0.w = 0
                                        else if (__dynamic_cast(x0_63, 
                                                _typeinfo_for_Botan::TLS::Extension, 
                                                _typeinfo_for_Botan::TLS::SRP_Identifier, 0) == 0)
                                            x9_35 = 0
                                            var_d0.w = 0
                                        else
                                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                                &var_d0)
                                            x9_35 = zx.d(var_d0.b)
                                
                                int32_t x8_60 = x9_35 & 1
                                uint64_t x9_37
                                
                                if (x8_60 == 0)
                                    x9_37 = zx.q(x9_35 u>> 1)
                                else
                                    x9_37 = var_d0:8.q
                                
                                int32_t x19_3
                                
                                if (x9_37 == 0)
                                    x19_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
                                        &var_d0, 0, -ffffffffffffffff, &data_793a18) == 0 ? 1 : 0
                                    
                                    if ((zx.d(var_d0.b) & 1) != 0)
                                        operator delete(var_c0)
                                else
                                    x19_3 = 0
                                    
                                    if ((x8_60 & 0xff) != 0)
                                        operator delete(var_c0)
                                
                                if (x19_3 != 0)
                                    goto label_e7d1d8
                            
                            int16_t* x0_67 = var_b0
                            
                            if (x0_67 != 0)
                                var_a8_1 = x0_67
                                operator delete(x0_67)
                            
                            void* x0_68 = var_90.q
                            
                            if (x0_68 != 0)
                                var_90:8.q = x0_68
                                operator delete(x0_68)
                            
                            void* x0_69 = var_78.q
                            
                            if (x0_69 != 0)
                                var_70 = x0_69
                                operator delete(x0_69)
                            
                            int64_t* x0_70 = var_1a0
                            
                            if (x0_70 != 0)
                                var_198 = x0_70
                                operator delete(x0_70)
                            
                            Botan::TLS::make_hello_random(*(arg1 + 0x30), *(arg1 + 0x28))
                            int16_t x19_4 = *(fp + 0x20)
                            var_1a0 = nullptr
                            var_198 = nullptr
                            int64_t var_190_3 = 0
                            void* var_1b8
                            int64_t var_1b0
                            size_t x21_9 = var_1b0 - var_1b8
                            
                            if (var_1b0 == var_1b8)
                                goto label_e7c7c8
                            
                            if ((x21_9 & 0xffffffff80000000) != 0)
                                break
                            
                            int64_t* x0_73 = operator new(x21_9)
                            int64_t* x23_2 = x0_73 + x21_9
                            var_1a0 = x0_73
                            var_198 = x0_73
                            int64_t* var_190_4 = x23_2
                            memcpy(x0_73, var_1b8, x21_9)
                            var_198 = x23_2
                        label_e7c7c8:
                            int16_t var_188 = x19_4
                            uint16_t i_10 = i_3.w
                            char entry_x2
                            char var_184 = entry_x2 & 1
                            
                            if (var_1b8 != 0)
                                void* var_1b0_1 = var_1b8
                                operator delete(var_1b8)
                            
                            Botan::TLS::Handshake_IO* x0_75 = operator new(0x60)
                            Botan::TLS::Handshake_Hash* x23_3 = *(fp + 0x10)
                            Botan::RandomNumberGenerator* x24_2 = *(arg1 + 0x18)
                            Botan::TLS::Callbacks* x26_5 = *(arg1 + 0x28)
                            std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x25_3 =
                                *(arg1 + 0x30)
                            Botan::TLS::Channel::secure_renegotiation_data_for_server_hello()
                            Botan::TLS::Server_Hello::Settings* x27_11 = *(fp + 0x100)
                            char var_1d0
                            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                &var_1d0)
                            int64_t** var_250 = &var_1a0
                            char* var_248 = &var_1d0
                            Botan::TLS::Server_Hello::Server_Hello(x0_75, x23_3, fp + 0xe8, x26_5, 
                                x24_2, x25_3, &var_78, x27_11)
                            Botan::TLS::Handshake_State::server_hello(fp)
                            void* var_1c0
                            
                            if ((zx.d(var_1d0) & 1) != 0)
                                operator delete(var_1c0)
                            void* x0_81 = var_78.q
                            Botan::TLS::Server_Handshake_State& x19_6 = arg1
                            
                            if (x0_81 != 0)
                                var_70 = x0_81
                                operator delete(x0_81)
                            
                            *(fp + 0x108)
                            Botan::TLS::Channel::secure_renegotiation_check(x19_6)
                            uint64_t x0_83 = zx.q(*(fp + 0x38))
                            
                            if ((x0_83.d & 0xfffffffe) == 0x10000)
                                if (*(fp + 0x3c) == 0)
                                    var_90.b = 6
                                    var_90:1.d = 0x415352
                                    goto label_e7c918
                                
                            label_e7cc44:
                                Botan::TLS::Handshake_IO* x0_115 = operator new(0x58)
                                Botan::TLS::Handshake_IO* x23_8 = x0_115
                                Botan::TLS::Server_Key_Exchange::Server_Key_Exchange(x0_115, 
                                    *(fp + 0x10), fp, *(x19_6 + 0x28), *(x19_6 + 0xd0), 
                                    *(x19_6 + 0x30))
                                void* x22_15 = *(fp + 0x120)
                                *(fp + 0x120) = x23_8
                                
                                if (x22_15 != 0)
                                    Botan::TLS::Server_Key_Exchange::~Server_Key_Exchange()
                                    operator delete(x22_15)
                                    x23_8 = *(fp + 0x120)
                                
                                int64_t* x0_118 = *(fp + 8)
                                (*(*x0_118 + 0x70))(x0_118, x23_8)
                                goto label_e7cca4
                            
                            Botan::TLS::auth_method_to_string(x0_83)
                        label_e7c918:
                            var_78.q = &var_90
                            void* x0_87 = std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > > > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(
                                &var_168, &var_90)
                            
                            if (*(x0_87 + 0x38) == *(x0_87 + 0x40))
                                Botan::assertion_failure("!cert_chains[algo_used].empty()", 
                                    "Attempting to send empty certificate chain", "session_create", 
                                    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 
                                    0x15372)
                            label_e7d100:
                                void** x0_156 = __cxa_allocate_exception(0x20)
                                void* x0_157
                                int128_t v0_2
                                x0_157, v0_2 = operator new(0x40)
                                v0_2 = data_71d0c0
                                var_a0 = x0_157
                                var_b0.o = v0_2
                                __builtin_strncpy(x0_157, 
                                    "No private key located for associated server cert", 0x32)
                                std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                                    "Internal error: ", &var_b0)
                                *x0_156 = _vtable_for_Botan::Exception + 0x10
                                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                    &x0_156[1])
                                
                                if ((zx.d(var_78.b) & 1) != 0)
                                    operator delete(var_68)
                                
                                *x0_156 = _vtable_for_Botan::Internal_Error + 0x10
                                __cxa_throw(x0_156, _typeinfo_for_Botan::Internal_Error, 
                                    Botan::Exception::~Exception)
                                noreturn
                            
                            Botan::TLS::Handshake_IO* x0_88 = operator new(0x20)
                            Botan::TLS::Handshake_Hash* x23_4 = *(fp + 0x10)
                            Botan::TLS::Handshake_IO* x22_11 = x0_88
                            var_78.q = &var_90
                            std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > > > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(
                                &var_168, &var_90)
                            Botan::TLS::Certificate::Certificate(x22_11, x23_4, fp + 0xe8)
                            void** x23_5 = *(fp + 0x110)
                            *(fp + 0x110) = x22_11
                            
                            if (x23_5 != 0)
                                void* x19_7 = x23_5[1]
                                *x23_5 = _vtable_for_Botan::TLS::Certificate + 0x10
                                
                                if (x19_7 != 0)
                                    int64_t* x22_12 = x23_5[2]
                                    void* x0_93
                                    
                                    if (x22_12 == x19_7)
                                        x0_93 = x19_7
                                    else
                                        do
                                            x22_12 = &x22_12[-0x11]
                                            (*(*x22_12 + 0x10))(x22_12)
                                        while (x19_7 != x22_12)
                                        
                                        x0_93 = x23_5[1]
                                    
                                    x23_5[2] = x19_7
                                    operator delete(x0_93)
                                
                                operator delete(x23_5)
                                x22_11 = *(fp + 0x110)
                            
                            int64_t* x0_98 = *(fp + 8)
                            (*(*x0_98 + 0x70))(x0_98, x22_11)
                            int64_t* i_22 = *(fp + 0x100) + 0x90
                            int64_t* i_7 = *i_22
                            void* var_170
                            
                            if (i_7 != 0)
                                int64_t* i_17 = i_22
                                int64_t* i_6 = i_7
                                
                                do
                                    int32_t x10_25 = i_6[4].d
                                    
                                    if (x10_25 s>= 5)
                                        i_17 = i_6
                                    
                                    i_6 = i_6[zx.q(x10_25 s< 5 ? 1 : 0)]
                                while (i_6 != 0)
                                
                                if (i_17 != i_22 && i_17[4].d s<= 5)
                                    int64_t x0_99 = i_17[5]
                                    
                                    if (x0_99 != 0 && __dynamic_cast(x0_99, 
                                            _typeinfo_for_Botan::TLS::Extension, 
                                            _typeinfo_for_Botan::TLS::Certificate_Status_Request, 0) != 0
                                            && zx.d(*(fp + 0x171)) == 0)
                                        int64_t* i_18 = i_22
                                        
                                        do
                                            int32_t x9_40 = i_7[4].d
                                            
                                            if (x9_40 s>= 5)
                                                i_18 = i_7
                                            
                                            i_7 = i_7[zx.q(x9_40 s< 5 ? 1 : 0)]
                                        while (i_7 != 0)
                                        
                                        if (i_18 == i_22 || i_18[4].d s> 5)
                                        label_e7d2b0:
                                            int64_t* x0_169 = Botan::assertion_failure(
                                                "csr != nullptr", &data_793a18, "session_create", 
                                                "..\..\ExternalCode\botan\botanAM\arm\botan_all_android."
                                            "cpp", 
                                                0x1537c)
                                            operator delete(x22_11)
                                            void* x0_171 = var_78.q
                                            
                                            if (x0_171 != 0)
                                                void* var_70_2 = x0_171
                                                operator delete(x0_171)
                                            
                                            if ((zx.d(var_90.b) & 1) != 0)
                                                operator delete(var_80)
                                            
                                            int64_t* x0_173 = var_1a0
                                            
                                            if (x0_173 != 0)
                                                var_198 = x0_173
                                                operator delete(x0_173)
                                            
                                            if ((zx.d(var_180.b) & 1) != 0)
                                                operator delete(var_170)
                                            
                                            std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > > > >::destroy(
                                                &var_168)
                                            sub_1101e04(x0_169)
                                            noreturn
                                        
                                        int64_t x0_101 = i_18[5]
                                        
                                        if (x0_101 == 0)
                                            goto label_e7d2b0
                                        
                                        int64_t x0_102 = __dynamic_cast(x0_101, 
                                            _typeinfo_for_Botan::TLS::Extension, 
                                            _typeinfo_for_Botan::TLS::Certificate_Status_Request, 0)
                                        
                                        if (x0_102 == 0)
                                            goto label_e7d2b0
                                        
                                        int64_t* x23_6 = *(arg1 + 0x18)
                                        var_b0 = &var_90
                                        (*(*x23_6 + 0x48))(x23_6, 
                                            std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > > > >::__emplace_unique_key_args<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::piecewise_construct_t const&, std::__ndk1::tuple<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&>, std::__ndk1::tuple<> >(
                                                &var_168, &var_90) + 0x38, 
                                            x0_102)
                                        void* x0_106 = var_70
                                        
                                        if (x0_106 != var_78.q)
                                            Botan::TLS::Handshake_IO* x0_107 = operator new(0x20)
                                            Botan::TLS::Handshake_IO* x22_14 = x0_107
                                            Botan::TLS::Certificate_Status::Certificate_Status(
                                                x0_107, *(fp + 0x10), fp + 0xe8)
                                            void** x23_7 = *(fp + 0x118)
                                            *(fp + 0x118) = x22_14
                                            
                                            if (x23_7 != 0)
                                                void* x0_108 = x23_7[1]
                                                *x23_7 = _vtable_for_Botan::TLS::Certificate_Status
                                                    + 0x10
                                                
                                                if (x0_108 != 0)
                                                    x23_7[2] = x0_108
                                                    operator delete(x0_108)
                                                
                                                operator delete(x23_7)
                                                x22_14 = *(fp + 0x118)
                                            
                                            int64_t* x0_110 = *(fp + 8)
                                            (*(*x0_110 + 0x70))(x0_110, x22_14)
                                            x0_106 = var_78.q
                                        
                                        if (x0_106 != 0)
                                            var_70 = x0_106
                                            operator delete(x0_106)
                            
                            x19_6 = arg1
                            int64_t x1_44 = *(*(fp + 0x110) + 8)
                            int64_t* x0_111 = *(x19_6 + 0xd0)
                            var_78.b = 0x14
                            __builtin_strncpy(&var_78:1, "tls-server", 0xb)
                            int64_t x0_112 = (*(*x0_111 + 0x28))(x0_111, x1_44, &var_78, &var_180)
                            
                            if ((zx.d(var_78.b) & 1) != 0)
                                operator delete(var_68)
                            
                            if (x0_112 == 0)
                                goto label_e7d100
                            
                            if ((zx.d(var_90.b) & 1) != 0)
                                operator delete(var_80)
                            
                            if (*(fp + 0x3c) != 0)
                                goto label_e7cc44
                            
                            *(fp + 0x168) = x0_112
                        label_e7cca4:
                            int64_t* x0_119 = *(x19_6 + 0xd0)
                            var_90.b = 0x14
                            __builtin_strncpy(&var_90:1, "tls-server", 0xb)
                            (*(*x0_119 + 0x10))(x0_119, &var_90, &var_180)
                            
                            if ((zx.d(var_90.b) & 1) != 0)
                                operator delete(var_80)
                            
                            int64_t* x19_9 = var_78.q
                            __builtin_memset(&var_90, 0, 0x18)
                            int32_t x8_103
                            
                            if (x19_9 == var_70)
                            label_e7cd98:
                                
                                if (((*(**(arg1 + 0x28) + 0x140))() & 1) == 0
                                        || (*(fp + 0x38) & 0xfffffffe) == 0x10000)
                                    x8_103 = 0x800
                                else
                                label_e7cdbc:
                                    Botan::TLS::Handshake_IO* x0_127 = operator new(0x50)
                                    *(fp + 0x20)
                                    Botan::TLS::Handshake_IO* x22_16 = x0_127
                                    Botan::TLS::Certificate_Req::Certificate_Req(x0_127, 
                                        *(fp + 0x10), fp + 0xe8, *(arg1 + 0x28), &var_90)
                                    void** x1_51 = *(fp + 0x128)
                                    *(fp + 0x128) = x22_16
                                    
                                    if (x1_51 != 0)
                                        sub_f4edb8(fp + 0x128, x1_51)
                                        x22_16 = *(fp + 0x128)
                                    
                                    int64_t* x0_129 = *(fp + 8)
                                    (*(*x0_129 + 0x70))(x0_129, x22_16)
                                    x8_103 = 0x10
                            else
                                do
                                    (*(**x19_9 + 0x38))()
                                    std::__ndk1::vector<Botan::X509_DN, std::__ndk1::allocator<Botan::X509_DN> >::insert<std::__ndk1::__wrap_iter<Botan::X509_DN*> >(
                                        &var_90, var_90:8.q, var_b0)
                                    int16_t* x24_3 = var_b0
                                    
                                    if (x24_3 != 0)
                                        int16_t* x23_9 = var_a8_1
                                        int16_t* x0_121
                                        
                                        if (x23_9 == x24_3)
                                            x0_121 = x24_3
                                        else
                                            do
                                                x23_9 -= 0x38
                                                sub_f276a8(&var_a0, x23_9)
                                            while (x24_3 != x23_9)
                                            
                                            x0_121 = var_b0
                                        
                                        var_a8_1 = x24_3
                                        operator delete(x0_121)
                                    
                                    x19_9 = &x19_9[1]
                                while (x19_9 != var_70)
                                
                                if (var_90.q == var_90:8.q)
                                    goto label_e7cd98
                                
                                if ((*(fp + 0x38) & 0xfffffffe) != 0x10000)
                                    goto label_e7cdbc
                                
                                x8_103 = 0x800
                            
                            *(fp + 0x18) |= x8_103
                            Botan::TLS::Handshake_IO* x0_130 = operator new(8)
                            Botan::TLS::Handshake_IO* x20_9 = x0_130
                            Botan::TLS::Server_Hello_Done::Server_Hello_Done(x0_130, *(fp + 0x10))
                            void* x0_131 = *(fp + 0x130)
                            *(fp + 0x130) = x20_9
                            
                            if (x0_131 != 0)
                                operator delete(x0_131)
                                x20_9 = *(fp + 0x130)
                            
                            int64_t* x0_132 = *(fp + 8)
                            (*(*x0_132 + 0x70))(x0_132, x20_9)
                            void* x21_11 = var_90.q
                            
                            if (x21_11 != 0)
                                void** x19_10 = var_90:8.q
                                void* x0_134
                                
                                if (x19_10 == x21_11)
                                    x0_134 = x21_11
                                else
                                    do
                                        x19_10 -= 0x38
                                        sub_f276a8(&var_80, x19_10)
                                    while (x21_11 != x19_10)
                                    
                                    x0_134 = var_90.q
                                
                                var_90:8.q = x21_11
                                operator delete(x0_134)
                            
                            void* x0_135 = var_78.q
                            
                            if (x0_135 != 0)
                                void* var_70_1 = x0_135
                                operator delete(x0_135)
                            
                            int64_t* x0_136 = var_1a0
                            
                            if (x0_136 != 0)
                                var_198 = x0_136
                                operator delete(x0_136)
                            
                            if ((zx.d(var_180.b) & 1) != 0)
                                operator delete(var_170)
                            
                            return std::__ndk1::__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > >, std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >, true>, std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, std::__ndk1::vector<Botan::X509_Certificate, std::__ndk1::allocator<Botan::X509_Certificate> > > > >::destroy(
                                &var_168)
                        
                        int32_t var_1d4_1 = x0_31.d
                        Botan::TLS::auth_method_to_string(x0_31)
                        void* x22_2 = var_160
                        int32_t x21_4
                        
                        if (x22_2 == 0)
                            x21_4 = 1
                        label_e7c2a0:
                            
                            if ((zx.d(var_d0.b) & 1) != 0)
                                operator delete(var_c0)
                        else
                            uint64_t x8_30 = zx.q(var_d0.b)
                            int32_t temp1_1 = x8_30.d & 1
                            uint64_t x27_4
                            
                            if (temp1_1 == 0)
                                x27_4 = x8_30 u>> 1
                            else
                                x27_4 = var_d0:8.q
                            
                            void* fp_1
                            
                            if (temp1_1 == 0)
                                fp_1 = &var_d0 | 1
                            else
                                fp_1 = var_c0
                            
                            while (true)
                                uint64_t x9_19 = zx.q(*(x22_2 + 0x20))
                                uint64_t x28_3
                                
                                if ((x9_19.d & 1) == 0)
                                    x28_3 = x9_19 u>> 1
                                else
                                    x28_3 = *(x22_2 + 0x28)
                                
                                uint64_t x26_1
                                
                                x26_1 = x28_3 u< x27_4 ? x28_3 : x27_4
                                
                                if (x26_1 != 0)
                                    void* x21_3
                                    
                                    if ((x9_19.d & 1) != 0)
                                        x21_3 = *(x22_2 + 0x30)
                                    else
                                        x21_3 = x22_2 + 0x21
                                    
                                    int32_t x0_33 = memcmp(fp_1, x21_3, x26_1)
                                    
                                    if (x0_33 == 0)
                                        if (x27_4 u>= x28_3)
                                        label_e7c134:
                                            int32_t x0_35 = memcmp(x21_3, fp_1, x26_1)
                                            
                                            if (x0_35 == 0)
                                                goto label_e7c13c
                                            
                                            if ((x0_35 & 0x80000000) == 0)
                                                break
                                            
                                            x22_2 += 8
                                    else if ((x0_33 & 0x80000000) == 0)
                                        goto label_e7c134
                                else if (x27_4 u>= x28_3)
                                label_e7c13c:
                                    
                                    if (x28_3 u>= x27_4)
                                        break
                                    
                                    x22_2 += 8
                                
                                x22_2 = *x22_2
                                
                                if (x22_2 == 0)
                                    x21_4 = 1
                                    goto label_e7c274
                            
                            int32_t x9_20 = x9_5.d
                            x21_4 = 0
                            
                            if (x9_20 - 0x301 u< 2)
                            label_e7c274:
                                fp = var_200_1
                                x28_2 = x0_25
                                
                                if ((zx.d(var_d0.b) & 1) != 0)
                                    operator delete(var_c0)
                            else
                                fp = var_200_1
                                x28_2 = x0_25
                                
                                if (x9_20 == 0xfeff)
                                    goto label_e7c2a0
                                
                                (*(*x0_13 + 0x28))()
                                int64_t* i_14 = x19 + 0x90
                                void* var_100
                                __builtin_memset(&var_100, 0, 0x18)
                                int32_t x22_3 = var_1d4_1
                                int64_t* i_8 = *i_14
                                void* x27_5
                                void* var_f0_1
                                void* x8_37
                                void* x8_38
                                int16_t* fp_2
                                void* fp_3
                                
                                if (i_8 == 0)
                                label_e7c2b4:
                                    fp_2 = nullptr
                                    x8_37 = nullptr
                                label_e7c2bc:
                                    int64_t x8_43 = x8_37 - fp_2
                                    int64_t x9_24
                                    
                                    x9_24 = x8_37 != fp_2 ? x8_43 : 1
                                    
                                    int64_t x21_5
                                    
                                    if (0x3fffffffffffffff u> x8_43 s>> 1)
                                        x21_5 = x9_24
                                    else
                                        x21_5 = 0x7fffffffffffffff
                                    
                                    if ((x21_5 & 0xffffffff80000000) != 0)
                                        sub_ef2a0c()
                                        noreturn
                                    
                                    void* x0_42 = operator new(x21_5 << 1)
                                    *x0_42 = 0x201
                                    var_100 = x0_42
                                    var_f0_1 = x0_42 + (x21_5 << 1)
                                    
                                    if (fp_2 != 0)
                                        operator delete(fp_2)
                                        fp_3 = x0_42 + 2
                                        x8_38 = var_f0_1
                                        
                                        if (fp_3 u>= x8_38)
                                            goto label_e7c330
                                        
                                        goto label_e7c314
                                    
                                    fp_3 = x0_42 + 2
                                    x8_38 = var_f0_1
                                    void* fp_6
                                    
                                    if (fp_3 u< x8_38)
                                    label_e7c314:
                                        *fp_3 = 0x203
                                        fp_6 = fp_3 + 2
                                        void* var_f8_4 = fp_6
                                    else
                                    label_e7c330:
                                        void* x11_7 = var_100
                                        void* x26_2 = fp_3 - x11_7
                                        
                                        if (x26_2 s<= -3)
                                            std::__ndk1::__vector_base_common<true>::__throw_length_error()
                                        label_e7d26c:
                                            std::__ndk1::__vector_base_common<true>::__throw_length_error()
                                            sub_ef2a0c()
                                            noreturn
                                        
                                        int64_t x27_6 = x26_2 s>> 1
                                        void* x8_45 = x8_38 - x11_7
                                        void* x9_27
                                        
                                        if (x8_45 u< x27_6 + 1)
                                            x9_27 = x27_6 + 1
                                        else
                                            x9_27 = x8_45
                                        
                                        void* x22_4
                                        
                                        if (0x3fffffffffffffff u> x8_45 s>> 1)
                                            x22_4 = x9_27
                                        else
                                            x22_4 = 0x7fffffffffffffff
                                        
                                        void* x21_6
                                        
                                        if (x22_4 == 0)
                                            x21_6 = nullptr
                                        else
                                            if ((x22_4 & 0xffffffff80000000) != 0)
                                                sub_ef2a0c()
                                                noreturn
                                            
                                            x21_6 = operator new(x22_4 << 1)
                                        
                                        int16_t* fp_5 = x21_6 + (x27_6 << 1)
                                        *fp_5 = 0x203
                                        fp_6 = &fp_5[1]
                                        
                                        if (x26_2 s>= 1)
                                            memcpy(x21_6, x11_7, x26_2)
                                        
                                        x22_3 = var_1d4_1
                                        var_100 = x21_6
                                        var_f0_1 = x21_6 + (x22_4 << 1)
                                        
                                        if (x11_7 != 0)
                                            operator delete(x11_7)
                                    
                                    if (fp_6 u>= var_f0_1)
                                        void* x26_3 = var_100
                                        void* fp_8 = fp_6 - x26_3
                                        
                                        if (fp_8 s<= -3)
                                            goto label_e7d26c
                                        
                                        int64_t x27_8 = fp_8 s>> 1
                                        void* x8_48 = var_f0_1 - x26_3
                                        void* x9_29
                                        
                                        if (x8_48 u< x27_8 + 1)
                                            x9_29 = x27_8 + 1
                                        else
                                            x9_29 = x8_48
                                        
                                        void* x22_5
                                        
                                        if (0x3fffffffffffffff u> x8_48 s>> 1)
                                            x22_5 = x9_29
                                        else
                                            x22_5 = 0x7fffffffffffffff
                                        
                                        void* x21_7
                                        
                                        if (x22_5 == 0)
                                            x21_7 = nullptr
                                        else
                                            if ((x22_5 & 0xffffffff80000000) != 0)
                                                sub_ef2a0c()
                                                noreturn
                                            
                                            x21_7 = operator new(x22_5 << 1)
                                        
                                        int16_t* x27_9 = x21_7 + (x27_8 << 1)
                                        *x27_9 = 0x202
                                        x27_5 = &x27_9[1]
                                        
                                        if (fp_8 s>= 1)
                                            memcpy(x21_7, x26_3, fp_8)
                                        
                                        x22_3 = var_1d4_1
                                        var_100 = x21_7
                                        void* var_f0_2 = x21_7 + (x22_5 << 1)
                                        
                                        if (x26_3 != 0)
                                            operator delete(x26_3)
                                    else
                                        *fp_6 = 0x202
                                        void* var_f8_6 = fp_6 + 2
                                        x27_5 = fp_6 + 2
                                else
                                    do
                                        int32_t x10_15 = i_8[4].d
                                        
                                        if (x10_15 s>= 0xd)
                                            i_14 = i_8
                                        
                                        i_8 = i_8[zx.q(x10_15 s< 0xd ? 1 : 0)]
                                    while (i_8 != 0)
                                    
                                    if (i_14 == x19 + 0x90 || i_14[4].d s> 0xd)
                                        goto label_e7c2b4
                                    
                                    int64_t x0_37 = i_14[5]
                                    
                                    if (x0_37 == 0)
                                        goto label_e7c2b4
                                    
                                    void* x0_38 = __dynamic_cast(x0_37, 
                                        _typeinfo_for_Botan::TLS::Extension, 
                                        _typeinfo_for_Botan::TLS::Signature_Algorithms, 0)
                                    
                                    if (x0_38 == 0 || &var_100 == x0_38 + 8)
                                        goto label_e7c2b4
                                    
                                    *(x0_38 + 0x10)
                                    std::__ndk1::vector<Botan::TLS::Signature_Scheme, std::__ndk1::allocator<Botan::TLS::Signature_Scheme> >::assign<Botan::TLS::Signature_Scheme*>(
                                        &var_100, *(x0_38 + 8))
                                    fp_2 = var_100
                                    void* var_f8_1
                                    x27_5 = var_f8_1
                                    
                                    if (fp_2 == x27_5)
                                        x8_37 = var_f0_1
                                        
                                        if (fp_2 u>= x8_37)
                                            goto label_e7c2bc
                                        
                                        *fp_2 = 0x201
                                        fp_3 = &fp_2[1]
                                        void* var_f8_2 = fp_3
                                        x8_38 = var_f0_1
                                        
                                        if (fp_3 u< x8_38)
                                            goto label_e7c314
                                        
                                        goto label_e7c330
                                void* x21_8 = var_100
                                int128_t var_120
                                
                                if (x21_8 == x27_5)
                                label_e7cf98:
                                    void** x0_145 = __cxa_allocate_exception(0x28)
                                    int64_t x0_146
                                    int128_t v2
                                    x0_146, v2 = operator new(0x40)
                                    (*"ported by client")[0].o
                                    int64_t var_110_1 = x0_146
                                    v2 = data_71b0e0
                                    __builtin_strncpy(x0_146, 
                                        "Policy does not accept any hash function supported by client", 
                                        0x3d)
                                    var_120 = v2
                                    *x0_145 = _vtable_for_Botan::Exception + 0x10
                                    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                                        &x0_145[1])
                                    x0_145[4].d = 0x28
                                    *x0_145 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
                                    __cxa_throw(x0_145, _typeinfo_for_Botan::TLS::TLS_Exception, 
                                        Botan::Exception::~Exception)
                                    noreturn
                                
                                int32_t x27_10 = 0
                                
                                while (true)
                                    uint32_t fp_9 = zx.d(*x21_8)
                                    
                                    if (fp_9 s<= 0x500)
                                        if (fp_9 - 0x201 u< 3 || fp_9 - 0x401 u< 3)
                                        label_e7c500:
                                            Botan::TLS::signature_algorithm_of_scheme(zx.q(fp_9))
                                            Botan::TLS::auth_method_to_string(zx.q(x22_3))
                                            uint64_t x9_30 = zx.q(var_120.b)
                                            char var_138
                                            uint64_t x11_8 = zx.q(var_138)
                                            uint64_t i_15 = x9_30 u>> 1
                                            uint64_t i_20
                                            
                                            if ((x9_30.d & 1) == 0)
                                                i_20 = i_15
                                            else
                                                i_20 = var_120:8.q
                                            
                                            int32_t x22_6 = x11_8.d & 1
                                            uint64_t x10_19
                                            uint64_t var_130
                                            
                                            if (x22_6 == 0)
                                                x10_19 = x11_8 u>> 1
                                            else
                                                x10_19 = var_130
                                            int32_t x26_4
                                            char* var_128
                                            
                                            if (i_20 != x10_19)
                                            label_e7c59c:
                                                x26_4 = 0
                                                
                                                if ((x22_6 & 0xff) != 0)
                                                    operator delete(var_128)
                                            else
                                                char* x1_23
                                                
                                                if ((x22_6 & 0xff) == 0)
                                                    x1_23 = &var_138 | 1
                                                else
                                                    x1_23 = var_128
                                                
                                                if ((x9_30.d & 1) == 0)
                                                    char* x9_32 = &var_120 | 1
                                                    
                                                    if (i_20 != 0)
                                                        uint64_t i_9
                                                        
                                                        do
                                                            if (zx.d(*x9_32) != zx.d(*x1_23))
                                                                goto label_e7c59c
                                                            
                                                            i_9 = i_15
                                                            i_15 -= 1
                                                            x9_32 = &x9_32[1]
                                                            x1_23 = &x1_23[1]
                                                        while (i_9 != 1)
                                                else if (i_20 != 0 && memcmp() != 0)
                                                    goto label_e7c59c
                                                
                                                Botan::TLS::hash_function_of_scheme(zx.q(fp_9))
                                                x26_4 = Botan::TLS::Policy::allowed_signature_hash(
                                                    x0_13)
                                                char var_150
                                                void* var_140
                                                
                                                if ((zx.d(var_150) & 1) != 0)
                                                    operator delete(var_140)
                                                
                                                if ((zx.d(var_138) & 1) != 0)
                                                    operator delete(var_128)
                                            x22_3 = var_1d4_1
                                            char* var_110
                                            
                                            if ((zx.d(var_120.b) & 1) != 0)
                                                operator delete(var_110)
                                            x27_10 |= x26_4
                                            x21_8 += 2
                                            
                                            if (x21_8 == x27_5)
                                                break
                                            
                                            continue
                                    else if (fp_9 - 0x501 u< 3 || fp_9 - 0x804 u< 3
                                            || fp_9 - 0x601 u<= 2)
                                        goto label_e7c500
                                    
                                    x21_8 += 2
                                    
                                    if (x21_8 == x27_5)
                                        break
                                
                                if ((x27_10 & 1) == 0)
                                    goto label_e7cf98
                                
                                void* x0_61 = var_100
                                
                                if (x0_61 != 0)
                                    void* var_f8_8 = x0_61
                                    operator delete(x0_61)
                                
                                fp = var_200_1
                                x28_2 = x0_25
                                void* var_e8
                                
                                if (var_e8 != 0)
                                    void* var_e0_1 = var_e8
                                    operator delete(var_e8)
                                
                                x21_4 = 0
                                
                                if ((zx.d(var_d0.b) & 1) != 0)
                                    operator delete(var_c0)
                        
                        if ((x21_4 & 1) == 0)
                            goto label_e7c688
                    else if (x8_28 != 2 && x8_28 != 7 && x0_31.d != 2)
                        goto label_e7c07c
                
            label_e7c664:
                x25_2 = &x25_2[1]
                
                if (x25_2 == x23_1)
                    goto label_e7cf08
                
                x8_26 = var_b0
                x9_10 = var_a8_1
                x10_7 = x9_10 - x8_26
                
                if (x9_10 == x8_26)
                    goto label_e7c664
        else
            if ((x28_1 & 0xffffffff80000000) == 0)
                int16_t* x0_30 = operator new(x28_1)
                x22_1 = &x0_30[x28_1 s>> 1]
                x25_2 = x0_30
                var_b0 = x0_30
                int16_t* var_a8_2 = x0_30
                var_a0 = x22_1
                memcpy(x0_30, x21_2, x28_1)
                x23_1 = x25_2 + x28_1
                var_a8_1 = x23_1
                x28_2 = x0_25
                
                if ((x0_14 & 1) == 0)
                    goto label_e7bf68
                
                goto label_e7bf40
            
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
    else
        if ((x25_1 & 0xffffffff80000000) == 0)
            int16_t* x0_28 = operator new(x25_1)
            x19_2 = &x0_28[x25_1 s>> 1]
            x27_2 = x0_28
            var_90.q = x0_28
            var_90:8.q = x0_28
            var_80 = x19_2
            memcpy(x0_28, x21_1, x25_1)
            x20_4 = x27_2 + x25_1
            var_90:8.q = x20_4
            goto label_e7beec
        
        std::__ndk1::__vector_base_common<true>::__throw_length_error()
        std::__ndk1::__vector_base_common<true>::__throw_length_error()

std::__ndk1::__vector_base_common<true>::__throw_length_error()
label_e7d1d8:
void** x0_162 = __cxa_allocate_exception(0x28)
int64_t x0_163
int128_t v0_3
x0_163, v0_3 = operator new(0x30)
(*"ot send username")[0].o
int64_t var_c0_2 = x0_163
v0_3 = data_71cfc0
__builtin_strncpy(x0_163, "Client wanted SRP but did not send username", 0x2c)
var_d0 = v0_3
*x0_162 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_162[1])
x0_162[4].d = 0x73
*x0_162 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
__cxa_throw(x0_162, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
noreturn
