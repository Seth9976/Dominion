// 函数: _ZN5Botan3TLS7Channel26secure_renegotiation_checkEPKNS0_12Server_HelloE
// 地址: 0xe5f1f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1
int64_t* i_2 = *(entry_x1 + 0x50)
Botan::TLS::Server_Hello const* x19 = arg1
void* x8_1
int32_t x22

if (i_2 != 0)
    int64_t* i_3 = entry_x1 + 0x50
    int64_t* i = i_2
    
    do
        int32_t x11_1 = i[4].d
        
        if (x11_1 s>= 0xff01)
            i_3 = i
        
        i = i[zx.q(x11_1 s< 0xff01 ? 1 : 0)]
    while (i != 0)
    
    if (i_3 == entry_x1 + 0x50 || i_3[4].d s> 0xff01)
        goto label_e5f280
    
    arg1 = i_3[5]
    
    if (arg1 == 0)
        goto label_e5f280
    
    x22 = __dynamic_cast(arg1, _typeinfo_for_Botan::TLS::Extension, 
        _typeinfo_for_Botan::TLS::Renegotiation_Extension, 0) != 0 ? 1 : 0
    x8_1 = *(x19 + 0x40)
    
    if (x8_1 != 0)
        goto label_e5f290
    
    goto label_e5f300

label_e5f280:
x22 = 0
x8_1 = *(x19 + 0x40)

if (x8_1 != 0)
label_e5f290:
    int64_t* i_6 = *(x8_1 + 0x108) + 0x50
    int64_t* i_1 = *i_6
    
    if (i_1 != 0)
        int64_t* i_4 = i_6
        
        do
            int32_t x12_1 = i_1[4].d
            
            if (x12_1 s>= 0xff01)
                i_4 = i_1
            
            i_1 = i_1[zx.q(x12_1 s< 0xff01 ? 1 : 0)]
        while (i_1 != 0)
        
        if (i_4 == i_6 || i_4[4].d s> 0xff01)
            goto label_e5f3c0
        
        arg1 = i_4[5]
        
        if (arg1 != 0)
            if (x22 != (__dynamic_cast(arg1, _typeinfo_for_Botan::TLS::Extension, 
                    _typeinfo_for_Botan::TLS::Renegotiation_Extension, 0) != 0 ? 1 : 0))
                goto label_e5f3c8
            
            goto label_e5f300
    
label_e5f3c0:
    
    if ((x22 & 1) != 0)
    label_e5f3c8:
        void** x0_5 = __cxa_allocate_exception(0x28)
        int64_t x0_6
        int128_t v0
        x0_6, v0 = operator new(0x40)
        v0 = data_71ac10
        int64_t var_40_2 = x0_6
        __builtin_strncpy(x0_6, "Server changed its mind about secure renegotiation", 0x33)
        int64_t var_50
        var_50.o = v0
        *x0_5 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_5[1])
        x0_5[4].d = 0x28
        *x0_5 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
        __cxa_throw(x0_5, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
        noreturn
    
    return 

label_e5f300:

if (x22 == 0)
    return 

char* var_50_1
char* var_48_1

if (i_2 == 0)
    __builtin_memset(&var_50_1, 0, 0x18)
else
    int64_t* i_5 = entry_x1 + 0x50
    
    do
        int32_t x10_1 = i_2[4].d
        
        if (x10_1 s>= 0xff01)
            i_5 = i_2
        
        i_2 = i_2[zx.q(x10_1 s< 0xff01 ? 1 : 0)]
    while (i_2 != 0)
    
    if (i_5 == entry_x1 + 0x50 || i_5[4].d s> 0xff01)
        __builtin_memset(&var_50_1, 0, 0x18)
    else
        int64_t x0 = i_5[5]
        
        if (x0 == 0)
            __builtin_memset(&var_50_1, 0, 0x18)
        else
            void* x0_1 = __dynamic_cast(x0, _typeinfo_for_Botan::TLS::Extension, 
                _typeinfo_for_Botan::TLS::Renegotiation_Extension, 0)
            
            if (x0_1 == 0)
                __builtin_memset(&var_50_1, 0, 0x18)
            else
                __builtin_memset(&var_50_1, 0, 0x18)
                int64_t x9_5 = *(x0_1 + 8)
                int64_t x8_3 = *(x0_1 + 0x10)
                uint64_t x22_1 = x8_3 - x9_5
                
                if (x8_3 != x9_5)
                    if ((x22_1 & 0xffffffff80000000) != 0)
                        sub_1101e04(std::__ndk1::__vector_base_common<true>::__throw_length_error())
                        noreturn
                    
                    char* x0_3 = operator new(x22_1)
                    var_50_1 = x0_3
                    char* var_48_2 = x0_3
                    void* var_40_1 = &x0_3[x22_1]
                    int64_t x1_3 = *(x0_1 + 8)
                    char* x21 = x0_3
                    size_t x20_3 = *(x0_1 + 0x10) - x1_3
                    
                    if (x20_3 s>= 1)
                        memcpy(x21, x1_3, x20_3)
                        x21 = &x21[x20_3]
                    
                    var_48_1 = x21

Botan::TLS::Channel::secure_renegotiation_data_for_server_hello()
char* x9_6 = var_50_1
char* var_70
int64_t var_68
int32_t x19_1
char* var_68_1

if (var_48_1 - x9_6 != var_68 - var_70)
    x19_1 = 1
    
    if (var_70 != 0)
        var_68_1 = var_70
        operator delete(var_70)
else if (x9_6 == var_48_1)
    x19_1 = 0
    
    if (var_70 != 0)
        var_68_1 = var_70
        operator delete(var_70)
else
    char* x10_5 = var_70
    uint32_t x11_4
    uint32_t x12_3
    
    do
        x11_4 = zx.d(*x9_6)
        x12_3 = zx.d(*x10_5)
        
        if (x11_4 != x12_3)
            break
        
        x9_6 = &x9_6[1]
        x10_5 = &x10_5[1]
    while (var_48_1 != x9_6)
    
    x19_1 = x11_4 != x12_3 ? 1 : 0
    
    if (var_70 != 0)
        var_68_1 = var_70
        operator delete(var_70)

if (x19_1 != 0)
    void** x0_12 = __cxa_allocate_exception(0x28)
    int64_t x0_13
    int128_t v0_1
    x0_13, v0_1 = operator new(0x30)
    (*"re renegotiation")[0].o
    int64_t var_60 = x0_13
    v0_1 = data_71c860
    __builtin_strncpy(x0_13, "Server sent bad values for secure renegotiation", 0x30)
    var_70.o = v0_1
    *x0_12 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_12[1])
    x0_12[4].d = 0x28
    *x0_12 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
    __cxa_throw(x0_12, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
    noreturn

arg1 = var_50_1

if (arg1 != 0)
    Botan::TLS::Server_Hello const* var_48_3 = arg1
    operator delete(arg1)
