// 函数: _ZNK5Botan13EMSA_PKCS1v1515config_for_x509ERKNS_11Private_KeyERKNSt6__ndk112basic_stringIcNS4_11char_traitsIcEENS4_9allocatorIcEEEE
// 地址: 0xd60ef0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

(*(**(arg1 + 8) + 0x40))()
char* entry_x2
uint64_t x9_2 = zx.q(*entry_x2)
char var_b0
uint64_t x23 = zx.q(var_b0)
uint64_t i_1 = x9_2 u>> 1
uint64_t i_2

if ((x9_2.d & 1) == 0)
    i_2 = i_1
else
    i_2 = *(entry_x2 + 8)

uint64_t result
uint64_t result_2

if ((x23.d & 1) == 0)
    result_2 = x23 u>> 1
else
    result_2 = result

int32_t x22_1
char* var_a0

if (i_2 != result_2)
    x22_1 = 1
    
    if ((x23.d & 1) != 0)
        operator delete(var_a0)
else
    char* x1
    
    if ((x23.d & 1) == 0)
        x1 = &var_b0 | 1
    else
        x1 = var_a0
    
    if ((x9_2.d & 1) == 0)
        if (i_2 == 0)
            goto label_d61180
        
        void* x9_4 = &entry_x2[1]
        uint32_t x10_1
        uint32_t x11_2
        uint64_t i
        
        do
            x10_1 = zx.d(*x9_4)
            x11_2 = zx.d(*x1)
            
            if (x10_1 != x11_2)
                break
            
            i = i_1
            i_1 -= 1
            x9_4 += 1
            x1 = &x1[1]
        while (i != 1)
        x22_1 = x10_1 != x11_2 ? 1 : 0
        
        if ((x23.d & 1) != 0)
            operator delete(var_a0)
    else if (i_2 == 0)
    label_d61180:
        x22_1 = 0
        
        if ((x23.d & 1) != 0)
            operator delete(var_a0)
    else
        x22_1 = memcmp() != 0 ? 1 : 0
        
        if ((x23.d & 1) != 0)
            operator delete(var_a0)

if (x22_1 != 0)
    void** x0_20 = __cxa_allocate_exception(0x20)
    int64_t x0_21
    int128_t v0_2
    x0_21, v0_2 = operator new(0x50)
    v0_2 = data_71cfd0
    int64_t var_a0_1 = x0_21
    __builtin_strncpy(x0_21, "Hash function from opts and hash_fn argument need to be identical", 
        0x42)
    var_b0.o = v0_2
    *x0_20 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_20[1])
    *x0_20 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_20, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

(*(*(arg2 + *(*arg2 - 0x88)) + 0x10))()
char var_70
__builtin_strcpy(&var_70, "\nEMSA3")
char var_58
int32_t x0_4 = Botan::sig_algo_and_pad_ok(&var_58, &var_70)
void* var_48

if ((zx.d(var_58) & 1) != 0)
    operator delete(var_48)
int128_t var_90

if ((x0_4 & 1) == 0)
    void** x0_25 = __cxa_allocate_exception(0x20)
    void* x9_8 = arg2 + *(*arg2 - 0x88)
    (*(*x9_8 + 0x10))(x9_8)
    int128_t* x0_28
    int128_t v0_3
    x0_28, v0_3 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
        &var_90, nullptr)
    int64_t var_a0_2 = x0_28[1].q
    var_b0.o = *x0_28
    __builtin_memset(x0_28, 0, 0x18)
    *x0_25 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_25[1])
    *x0_25 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_25, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

(*(*(arg2 + *(*arg2 - 0x88)) + 0x10))()
char var_e8[0x10]
int128_t* x0_8
int128_t v0
x0_8, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_e8)
void* x8_7 = x0_8[1].q
int128_t var_d0 = *x0_8
__builtin_memset(x0_8, 0, 0x18)
Botan::EMSA_PKCS1v15::name()
char var_100
uint64_t var_f0
uint64_t x1_3

if ((zx.d(var_100) & 1) == 0)
    x1_3 = &var_100 | 1
else
    x1_3 = var_f0

int128_t* x0_11
int128_t v0_1
x0_11, v0_1 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
    &var_d0, x1_3)
void* x8_9 = x0_11[1].q
var_90 = *x0_11
__builtin_memset(x0_11, 0, 0x18)
Botan::OID::from_string(&var_90)

if ((zx.d(var_90.b) & 1) == 0)
    if ((zx.d(var_100) & 1) != 0)
        goto label_d61148
    
    goto label_d610d8

operator delete(x8_9)

if ((zx.d(var_100) & 1) != 0)
label_d61148:
    operator delete(var_f0)
    
    if ((zx.d(var_d0.b) & 1) == 0)
        goto label_d610e0
    
    goto label_d61158

label_d610d8:
void* var_d8

if ((zx.d(var_d0.b) & 1) != 0)
label_d61158:
    operator delete(x8_7)
    
    if ((zx.d(var_e8[0]) & 1) != 0)
        operator delete(var_d8)
else
label_d610e0:
    
    if ((zx.d(var_e8[0]) & 1) != 0)
        operator delete(var_d8)
Botan::OID* entry_x8
Botan::AlgorithmIdentifier::AlgorithmIdentifier(entry_x8, &var_b0)
var_b0.q = _vtable_for_Botan::OID + 0x10

if (result == 0)
    return result

uint64_t result_1 = result
return operator delete(result)
