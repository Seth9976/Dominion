// 函数: _ZNK5Botan11X509_Object23hash_used_for_signatureEv
// 地址: 0xeb7a34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
Botan::OID::to_formatted_string()
struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
    * const var_120 = &_vtable_for_std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>{for `std::__ndk1::__function::__base<bool (char)>'}
char var_118 = 0x2f
struct std::__ndk1::__function::__base<bool (char)>::std::__ndk1::__function::__func<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207, std::__ndk1::allocator<Botan::split_on(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, char)::$_207>, bool (char)>::VTable
    * const* var_100 = &var_120
char var_170
Botan::split_on_pred(&var_170, &var_120)

if (&var_120 == var_100)
    (*var_100)->vFunc_4()
else if (var_100 != 0)
    (*var_100)->j_operator delete()

void* var_160

if ((zx.d(var_170) & 1) != 0)
    operator delete(var_160)
char* var_138
char* x0_4 = var_138
char* var_130
char* x8_5 = var_130

if (x8_5 - x0_4 != 0x18)
    goto label_eb7b20

uint64_t x9_1 = zx.q(*x0_4)
uint64_t x9_2

if ((x9_1.d & 1) == 0)
    x9_2 = x9_1 u>> 1
else
    x9_2 = *(x0_4 + 8)

if (x9_2 != 7)
    goto label_eb7b20

void* result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
    x0_4, 0, -ffffffffffffffff, "Ed25519")
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    entry_x8

if (result.d == 0)
    *entry_x8 = 0xe
    __builtin_strncpy(entry_x8 + 1, "SHA-512", 8)
label_eb7bd4:
    
    if (var_138 != 0)
        char* x8_11 = var_130
        char* x0_11
        
        if (x8_11 == var_138)
            x0_11 = var_138
        else
            char* x20_1 = x8_11
            
            do
                x20_1 = &x20_1[-0x18]
                
                if ((zx.d(*x20_1) & 1) != 0)
                    operator delete(*(x8_11 - 8))
                
                x8_11 = x20_1
            while (var_138 != x20_1)
            
            x0_11 = var_138
        
        char* var_130_1 = var_138
        result = operator delete(x0_11)
    
    if (*(x23 + 0x28) == x8)
        return result
else
    x0_4 = var_138
    x8_5 = var_130
label_eb7b20:
    void var_150
    void* var_110
    
    if (x8_5 - x0_4 != 0x30)
        void** x0_20 = __cxa_allocate_exception(0x20)
        Botan::OID::to_string()
        int128_t* x0_23
        int128_t v0
        x0_23, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
            &var_150, nullptr)
        int64_t var_160_2 = x0_23[1].q
        var_170.o = *x0_23
        __builtin_memset(x0_23, 0, 0x18)
        std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
            "Internal error: ", &var_170)
        *x0_20 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_20[1])
        
        if ((zx.d(var_120.b) & 1) != 0)
            operator delete(var_110)
        
        *x0_20 = _vtable_for_Botan::Internal_Error + 0x10
        __cxa_throw(x0_20, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
        noreturn
    
    uint64_t x9_3 = zx.q(x0_4[0x18])
    uint64_t x9_4
    
    if ((x9_3.d & 1) == 0)
        x9_4 = x9_3 u>> 1
    else
        x9_4 = *(x0_4 + 0x20)
    
    if (x9_4 != 5)
        goto label_eb7b74
    
    if (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
            &x0_4[0x18], 0, -ffffffffffffffff, "EMSA4") != 0)
        x0_4 = var_138
    label_eb7b74:
        Botan::parse_algorithm_name(&x0_4[0x18])
        void* result_3 = var_170.q
        char* var_168
        char* x22_1 = var_168
        
        if (x22_1 - result_3 != 0x30)
            void** x0_28 = __cxa_allocate_exception(0x20)
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Invalid name format ", &var_138[0x18])
            std::__ndk1::operator+<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >(
                "Internal error: ", &var_150)
            *x0_28 = _vtable_for_Botan::Exception + 0x10
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                &x0_28[1])
            
            if ((zx.d(var_120.b) & 1) != 0)
                operator delete(var_110)
            
            *x0_28 = _vtable_for_Botan::Internal_Error + 0x10
            __cxa_throw(x0_28, _typeinfo_for_Botan::Internal_Error, Botan::Exception::~Exception)
            noreturn
        
        result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            entry_x8)
        
        if (result_3 == 0)
            goto label_eb7bd4
        
        if (x22_1 != result_3)
            char* x19_1 = x22_1
            
            do
                x19_1 = &x19_1[-0x18]
                
                if ((zx.d(*x19_1) & 1) != 0)
                    operator delete(*(x22_1 - 8))
                
                x22_1 = x19_1
            while (result_3 != x19_1)
        
        result = result_3
        goto label_eb7bcc
    
    sub_eb81cc(&var_120)
    int64_t var_108
    size_t x20_2 = var_108 - var_110
    var_170.q = _vtable_for_Botan::OID + 0x10
    void* result_1
    __builtin_memset(&result_1, 0, 0x18)
    
    if (var_108 == var_110)
        goto label_eb7cb8
    
    if ((x20_2 & 0xffffffff80000000) == 0)
        void* result_4 = operator new(x20_2)
        result_1 = result_4
        void* result_5 = result_4
        void* var_158_1 = result_4 + (x20_2 s>> 2 << 2)
        memcpy(result_4, var_110, x20_2)
        void* var_160_1 = result_4 + x20_2
    label_eb7cb8:
        void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_a0_1 =
            _vtable_for_Botan::AlgorithmIdentifier + 0x10
        void* var_78
        
        if (var_78 != 0)
            void* var_70_1 = var_78
            operator delete(var_78)
        
        void* __offset(vtable_for_Botan::OID, 0x10) var_98_1 = _vtable_for_Botan::OID + 0x10
        void* var_90
        
        if (var_90 != 0)
            void* var_88_1 = var_90
            operator delete(var_90)
        
        void* __offset(vtable_for_Botan::AlgorithmIdentifier, 0x10) var_e0_1 =
            _vtable_for_Botan::AlgorithmIdentifier + 0x10
        void* var_b8
        
        if (var_b8 != 0)
            void* var_b0_1 = var_b8
            operator delete(var_b8)
        
        void* __offset(vtable_for_Botan::OID, 0x10) var_d8_1 = _vtable_for_Botan::OID + 0x10
        void* var_d0
        
        if (var_d0 != 0)
            void* var_c8_1 = var_d0
            operator delete(var_d0)
        
        var_120 = _vtable_for_Botan::AlgorithmIdentifier + 0x10
        void* var_f8
        
        if (var_f8 != 0)
            void* var_f0_1 = var_f8
            operator delete(var_f8)
        
        var_118.q = _vtable_for_Botan::OID + 0x10
        
        if (var_110 != 0)
            void* var_108_1 = var_110
            operator delete(var_110)
        
        Botan::OID::to_formatted_string()
        result = result_1
        var_170.q = _vtable_for_Botan::OID + 0x10
        
        if (result == 0)
            goto label_eb7bd4
        
        void* result_2 = result
    label_eb7bcc:
        result = operator delete(result)
        goto label_eb7bd4
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
__stack_chk_fail()
noreturn
