// 函数: _ZN5Botan3TLS7Channel26secure_renegotiation_checkEPKNS0_12Client_HelloE
// 地址: 0xe5ed28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1
int64_t* i = *(entry_x1 + 0x90)
Botan::TLS::Client_Hello const* x20 = arg1
void* x8_1
int32_t x21

if (i != 0)
    int64_t* i_2 = entry_x1 + 0x90
    
    do
        int32_t x12_1 = i[4].d
        
        if (x12_1 s>= 0xff01)
            i_2 = i
        
        i = i[zx.q(x12_1 s< 0xff01 ? 1 : 0)]
    while (i != 0)
    
    if (i_2 == entry_x1 + 0x90 || i_2[4].d s> 0xff01)
        goto label_e5edb8
    
    arg1 = i_2[5]
    
    if (arg1 == 0)
        goto label_e5edb8
    
    x21 = __dynamic_cast(arg1, _typeinfo_for_Botan::TLS::Extension, 
        _typeinfo_for_Botan::TLS::Renegotiation_Extension, 0) != 0 ? 1 : 0
    x8_1 = *(x20 + 0x40)
    
    if (x8_1 != 0)
        goto label_e5edc8
    
    goto label_e5ee38

label_e5edb8:
x21 = 0
x8_1 = *(x20 + 0x40)

if (x8_1 != 0)
label_e5edc8:
    int64_t* i_4 = *(x8_1 + 0x100) + 0x90
    int64_t* i_1 = *i_4
    
    if (i_1 != 0)
        int64_t* i_3 = i_4
        
        do
            int32_t x12_3 = i_1[4].d
            
            if (x12_3 s>= 0xff01)
                i_3 = i_1
            
            i_1 = i_1[zx.q(x12_3 s< 0xff01 ? 1 : 0)]
        while (i_1 != 0)
        
        if (i_3 == i_4 || i_3[4].d s> 0xff01)
            goto label_e5ee98
        
        arg1 = i_3[5]
        
        if (arg1 != 0)
            if (x21 != (__dynamic_cast(arg1, _typeinfo_for_Botan::TLS::Extension, 
                    _typeinfo_for_Botan::TLS::Renegotiation_Extension, 0) != 0 ? 1 : 0))
                goto label_e5eea0
            
            goto label_e5ee38
    
label_e5ee98:
    
    if ((x21 & 1) != 0)
    label_e5eea0:
        void** x0_3 = __cxa_allocate_exception(0x28)
        int64_t x0_4
        int128_t v0
        x0_4, v0 = operator new(0x40)
        v0 = data_71ac10
        int64_t var_40 = x0_4
        __builtin_strncpy(x0_4, "Client changed its mind about secure renegotiation", 0x33)
        int128_t var_50_1 = v0
        *x0_3 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_3[1])
        x0_3[4].d = 0x28
        *x0_3 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_3, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn
    
    return 

label_e5ee38:

if (x21 == 0)
    return 

Botan::TLS::Client_Hello::renegotiation_info()
void* x8_3 = *(x20 + 0x40)
char* var_70_1
int128_t var_50
char* x19_1
void* x22_1

if (x8_3 == 0)
    x19_1 = nullptr
    x22_1 = nullptr
    __builtin_memset(&var_70_1, 0, 0x18)
else
    void* x8_4 = *(x8_3 + 0x160)
    var_70_1 = nullptr
    int64_t var_68_1 = 0
    int64_t x20_1 = *(x8_4 + 8)
    int64_t x9_5 = *(x8_4 + 0x10)
    uint64_t x21_1 = x9_5 - x20_1
    
    if (x9_5 == x20_1)
        x19_1 = nullptr
        x22_1 = nullptr
    else
        if ((x21_1 & 0xffffffff80000000) != 0)
            int64_t* x0_14 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            void* x0_16 = var_50.q
            
            if (x0_16 == 0)
                sub_1101e04(x0_14)
                noreturn
            
            var_50:8.q = x0_16
            operator delete(x0_16)
            sub_1101e04(x0_14)
            noreturn
        
        char* x0_2 = operator new(x21_1)
        x22_1 = &x0_2[x21_1]
        x19_1 = x0_2
        var_70_1 = x0_2
        char* var_68_2 = x0_2
        void* var_60_1 = x22_1
        memcpy(x0_2, x20_1, x21_1)
        void* var_68_3 = x22_1

char* x9_6 = var_50.q
int64_t x8_7 = var_50:8.q
int32_t x20_3
char* var_68_4

if (x8_7 - x9_6 != x22_1 - x19_1)
    x20_3 = 1
    
    if (x19_1 != 0)
        var_68_4 = x19_1
        operator delete(x19_1)
else if (x9_6 == x8_7)
    x20_3 = 0
    
    if (x19_1 != 0)
        var_68_4 = x19_1
        operator delete(x19_1)
else
    char* x10_1 = x19_1
    uint32_t x11_2
    uint32_t x12_5
    
    do
        x11_2 = zx.d(*x9_6)
        x12_5 = zx.d(*x10_1)
        
        if (x11_2 != x12_5)
            break
        
        x9_6 = &x9_6[1]
        x10_1 = &x10_1[1]
    while (x8_7 != x9_6)
    
    x20_3 = x11_2 != x12_5 ? 1 : 0
    
    if (x19_1 != 0)
        var_68_4 = x19_1
        operator delete(x19_1)

if (x20_3 != 0)
    void** x0_9 = __cxa_allocate_exception(0x28)
    int64_t x0_10
    int128_t v0_1
    x0_10, v0_1 = operator new(0x30)
    (*"re renegotiation")[0].o
    int64_t var_60_2 = x0_10
    v0_1 = data_71c860
    __builtin_strncpy(x0_10, "Client sent bad values for secure renegotiation", 0x30)
    var_70_1.o = v0_1
    *x0_9 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_9[1])
    x0_9[4].d = 0x28
    *x0_9 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
    __cxa_throw(x0_9, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
    noreturn

arg1 = var_50.q

if (arg1 != 0)
    var_50:8.q = arg1
    operator delete(arg1)
