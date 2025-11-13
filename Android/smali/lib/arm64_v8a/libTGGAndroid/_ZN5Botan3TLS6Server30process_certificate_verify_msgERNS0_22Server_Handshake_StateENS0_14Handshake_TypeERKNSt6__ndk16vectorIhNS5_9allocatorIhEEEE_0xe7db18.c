// 函数: _ZN5Botan3TLS6Server30process_certificate_verify_msgERNS0_22Server_Handshake_StateENS0_14Handshake_TypeERKNSt6__ndk16vectorIhNS5_9allocatorIhEEEE
// 地址: 0xe7db18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::TLS::Policy* x19 = arg2
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x0 = operator new(0x28)
*(x19 + 0x20)
std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >* x21 = x0
int64_t entry_x3
Botan::TLS::Certificate_Verify::Certificate_Verify(x0, entry_x3)
void** x22 = *(x19 + 0x148)
*(x19 + 0x148) = x21

if (x22 != 0)
    void* x0_1 = x22[1]
    *x22 = _vtable_for_Botan::TLS::Certificate_Verify + 0x10
    
    if (x0_1 != 0)
        x22[2] = x0_1
        operator delete(x0_1)
    
    operator delete(x22)
    x21 = *(x19 + 0x148)

int64_t* x0_3 = *(x19 + 8)
(*(*x0_3 + 0x70))(x0_3, x21)
Botan::TLS::Handshake_State** x8_5 = *(x19 + 0x138) + 8
*(arg1 + 0x28)
int32_t x0_5 = Botan::TLS::Certificate_Verify::verify(*(x19 + 0x148), *x8_5, x19)
int64_t* x9 = *(x19 + 0x10)
(*(*x9 + 0x20))(x9, entry_x3, zx.q(arg3.d))
void* x27 = *(x19 + 0xe8)
void* var_80
void* x25 = var_80
int64_t x26 = *(x19 + 0xf0)
size_t x28 = x26 - x27
int64_t var_78
uint64_t x21_1 = var_78 - x25 + x28

if (*(x19 + 0xf8) - x27 u< x21_1)
    int64_t x0_8 = operator new(x21_1)
    x26 = x0_8 + x28
    
    if (x28 s>= 1)
        memcpy(x0_8, x27, x28)
    
    *(x19 + 0xe8) = x0_8
    *(x19 + 0xf0) = x26
    *(x19 + 0xf8) = x0_8 + x21_1
    
    if (x27 != 0)
        operator delete(x27)
        x26 = *(x19 + 0xf0)
        x25 = var_80

std::__ndk1::vector<uint8_t, std::__ndk1::allocator<uint8_t> >::insert<std::__ndk1::__wrap_iter<uint8_t const*> >(
    x19 + 0xe8, x26, x25)
void* x0_12 = var_80

if (x0_12 != 0)
    void* var_78_1 = x0_12
    operator delete(x0_12)

if ((x0_5 & 1) == 0)
    void** x0_23 = __cxa_allocate_exception(0x28)
    int64_t x0_24
    int128_t v0
    x0_24, v0 = operator new(0x20)
    int64_t var_70_1 = x0_24
    var_80.o = data_71aa40
    __builtin_strncpy(x0_24, "Client cert verify failed", 0x1a)
    *x0_23 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_23[1])
    x0_23[4].d = 0x33
    *x0_23 = _vtable_for_Botan::TLS::TLS_Exception + 0x10
    __cxa_throw(x0_23, _typeinfo_for_Botan::TLS::TLS_Exception, Botan::Exception::~Exception)
    noreturn

int64_t* i_3 = *(x19 + 0x100) + 0x90
int64_t* i = *i_3

if (i == 0)
    var_80.w = 0
else
    int64_t* i_2 = i_3
    
    do
        int32_t x11_1 = i[4].d
        
        if (x11_1 s>= 0)
            i_2 = i
        
        i = i[zx.q(x11_1 u>> 0x1f)]
    while (i != 0)
    
    if (i_2 == i_3 || i_2[4].d s> 0)
        var_80.w = 0
    else
        int64_t x0_20 = i_2[5]
        
        if (x0_20 == 0)
            var_80.w = 0
        else if (__dynamic_cast(x0_20, _typeinfo_for_Botan::TLS::Extension, 
                _typeinfo_for_Botan::TLS::Server_Name_Indicator, 0) == 0)
            var_80.w = 0
        else
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &var_80)

int64_t* x0_13 = *(arg1 + 0xd0)
char var_b0 = 0x14
int64_t var_af
__builtin_strncpy(&var_af, "tls-server", 0xb)
(*(*x0_13 + 0x10))(x0_13, &var_b0, &var_80)
void* var_a0

if ((zx.d(var_b0) & 1) != 0)
    operator delete(var_a0)
int64_t* x0_15 = *(arg1 + 0x18)
__builtin_memset(&var_b0, 0, 0x18)
void* result_1
(*(*x0_15 + 0x38))(x0_15, x8_5, &var_b0, &result_1, 2, &var_80, *(arg1 + 0x28))
void* x21_3 = var_b0.q

if (x21_3 != 0)
    void* x22_2 = var_af
    void* x0_16
    
    if (x22_2 != x21_3)
        do
            int64_t* x20_1 = *(x22_2 - 8)
            x22_2 -= 0x10
            
            if (x20_1 != 0)
                int64_t x9_5
                int32_t i_1
                
                do
                    x9_5 = __ldaxr(&x20_1[1])
                    i_1 = __stlxr(x9_5 - 1, &x20_1[1])
                while (i_1 != 0)
                
                if (x9_5 == 0)
                    (*(*x20_1 + 0x10))(x20_1)
                    std::__ndk1::__shared_weak_count::__release_weak()
        while (x22_2 != x21_3)
        
        x0_16 = var_b0.q
    else
        x0_16 = x21_3
    
    var_af = x21_3
    operator delete(x0_16)

void* result = result_1

if (result != 0)
    void* result_2 = result
    result = operator delete(result)

void* var_70

if ((zx.d(var_80.b) & 1) != 0)
    result = operator delete(var_70)
*(x19 + 0x18) |= 0x2000
return result
