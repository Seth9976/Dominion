// 函数: _ZN5Botan15XMSS_PrivateKeyC2ERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xecc6c0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = *entry_x1
*arg1 = x8
*(arg1 + *(x8 - 0xc8)) = entry_x1[1]
*(arg1 + *(*arg1 - 0x88)) = entry_x1[2]
*(arg1 + *(*arg1 - 0xd0)) = entry_x1[3]
Botan::XMSS_WOTS_PrivateKey::XMSS_WOTS_PrivateKey(arg1 + 8, zx.q(*(arg1 + 0x200)))
char var_78
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_78)
Botan::XMSS_Hash::XMSS_Hash(arg1 + 0x118)
void* var_68

if ((zx.d(var_78) & 1) != 0)
    operator delete(var_68)

__builtin_memset(arg1 + 0x160, 0, 0x18)

if ((zx.d(*guard_variable_for_Botan::XMSS_Index_Registry::get_instance()::self) & 1) == 0
        && __cxa_guard_acquire(guard_variable_for_Botan::XMSS_Index_Registry::get_instance()::self)
        != 0)
    *(Botan::XMSS_Index_Registry::get_instance()::self + 0x50) = 0
    *(Botan::XMSS_Index_Registry::get_instance()::self + 0x30) = zx.o(0)
    *(Botan::XMSS_Index_Registry::get_instance()::self + 0x40) = zx.o(0)
    *(Botan::XMSS_Index_Registry::get_instance()::self + 0x10) = zx.o(0)
    *(Botan::XMSS_Index_Registry::get_instance()::self + 0x20) = zx.o(0)
    *Botan::XMSS_Index_Registry::get_instance()::self = zx.o(0)
    __cxa_atexit(Botan::XMSS_Index_Registry::~XMSS_Index_Registry, 
        Botan::XMSS_Index_Registry::get_instance()::self, &data_1122730)
    __cxa_guard_release(guard_variable_for_Botan::XMSS_Index_Registry::get_instance()::self)

*(arg1 + 0x178) = Botan::XMSS_Index_Registry::get_instance()::self
sub_eccdb8(&var_78)
uint64_t i_6 = *(arg1 + 0x1d8)
int64_t x27 = var_78.q
int128_t var_90
int64_t var_70

if (var_70 - x27 != (i_6 << 2) + 8)
    void** x0_18 = __cxa_allocate_exception(0x20)
    int64_t x0_19
    int128_t v0_2
    x0_19, v0_2 = operator new(0x20)
    int64_t var_80_1 = x0_19
    var_90 = data_71cd20
    __builtin_strncpy(x0_19, "Invalid XMSS private key size", 0x1e)
    *x0_18 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_18[1])
    *x0_18 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_18, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

if (_byteswap(zx.q(*(x27 + (i_6 << 1) + 4)) << 0x20) u>> *(arg1 + 0x1e0) != 0)
    void** x0_22 = __cxa_allocate_exception(0x20)
    int64_t x0_23
    int128_t v0_3
    x0_23, v0_3 = operator new(0x30)
    (*"ex out of bounds")[0].o
    int64_t var_80_2 = x0_23
    v0_3 = data_71cbb0
    __builtin_strncpy(x0_23, "XMSS private key leaf index out of bounds", 0x2a)
    var_90 = v0_3
    *x0_22 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_22[1])
    *x0_22 = _vtable_for_Botan::Decoding_Error + 0x10
    __cxa_throw(x0_22, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
    noreturn

int64_t x8_13 = *(arg1 + 0x160)
int64_t x9_6 = *(arg1 + 0x170)
*(arg1 + 0x168) = x8_13

if (x9_6 - x8_13 u< i_6)
    int64_t x0_6 = Botan::allocate_memory(i_6, 1)
    void* x23_1 = *(arg1 + 0x160)
    size_t x2_2 = *(arg1 + 0x168) - x23_1
    int64_t x25_1 = x0_6 - x2_2
    
    if (x2_2 s>= 1)
        memcpy(x25_1, x23_1, x2_2)
    
    int64_t x8_15 = *(arg1 + 0x170)
    *(arg1 + 0x160) = x25_1
    *(arg1 + 0x168) = x0_6
    *(arg1 + 0x170) = x0_6 + i_6
    
    if (x23_1 != 0)
        Botan::deallocate_memory(x23_1, x8_15 - x23_1, 1)
    
    var_90.q = arg1 + 0x160
    goto label_ecc83c

var_90.q = arg1 + 0x160

if (i_6 != 0)
label_ecc83c:
    void* x23_2 = x27 + (i_6 << 1) + 8
    uint64_t i_4 = i_6
    uint64_t i
    
    do
        sub_f4a08c(&var_90, x23_2)
        i = i_4
        i_4 -= 1
        x23_2 += 1
    while (i != 1)

uint64_t x23_3 = *(arg1 + 0x238)
__builtin_memset(&var_90, 0, 0x18)
char* x0_11
void* x9_8
char* x10
void* var_80
void* x8_18
void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 0x10) x22_1

if (x23_3 == 0)
    x9_8 = nullptr
    x10 = nullptr
    x0_11 = nullptr
    x22_1 = arg1 + 0x10
    x8_18 = *x22_1
    
    if (x8_18 != 0)
    label_ecc948:
        int64_t x9_9 = *(arg1 + 0x20)
        *(arg1 + 0x18) = x8_18
        Botan::deallocate_memory(x8_18, x9_9 - x8_18, 1)
        __builtin_memset(x22_1, 0, 0x18)
        x0_11 = var_90.q
        x10 = var_90:8.q
        x9_8 = var_80
else
    if ((x23_3 & 0xffffffff80000000) != 0)
        int64_t* x0_27 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
        
        if ((zx.d(var_90.b) & 1) != 0)
            operator delete(var_80)
        
        void* x0_30 = var_78.q
        
        if (x0_30 != 0)
            void* var_70_1 = x0_30
            Botan::deallocate_memory(x0_30, var_68 - x0_30, 1)
        
        void* x0_31 = *(arg1 + 0x160)
        
        if (x0_31 != 0)
            int64_t x8_27 = *(arg1 + 0x170)
            *(arg1 + 0x168) = x0_31
            Botan::deallocate_memory(x0_31, x8_27 - x0_31, 1)
        
        void* x0_32
        
        if ((zx.d(*(arg1 + 0x148)) & 1) == 0)
            x0_32 = *(arg1 + 0x128)
            
            if (x0_32 != 0)
                goto label_ecccb0
            
            goto label_eccc2c
        
        operator delete(*(arg1 + 0x158))
        x0_32 = *(arg1 + 0x128)
        int64_t* x0_38
        
        if (x0_32 != 0)
        label_ecccb0:
            *(arg1 + 0x130) = x0_32
            operator delete(x0_32)
            x0_38 = *(arg1 + 0x120)
            *(arg1 + 0x120) = 0
            
            if (x0_38 == 0)
                goto label_eccc38
            
            goto label_eccccc
        
    label_eccc2c:
        x0_38 = *(arg1 + 0x120)
        *(arg1 + 0x120) = 0
        int64_t* x0_33
        
        if (x0_38 != 0)
        label_eccccc:
            (*(*x0_38 + 0x10))()
            x0_33 = *(arg1 + 0x118)
            *(arg1 + 0x118) = 0
            
            if (x0_33 != 0)
                (*(*x0_33 + 0x10))()
        else
        label_eccc38:
            x0_33 = *(arg1 + 0x118)
            *(arg1 + 0x118) = 0
            
            if (x0_33 != 0)
                (*(*x0_33 + 0x10))()
        void* x0_34 = *(arg1 + 0x10)
        *(arg1 + 0x28) = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0x208
        *(arg1 + 8) = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0xd0
        
        if (x0_34 != 0)
            int64_t x8_32 = *(arg1 + 0x20)
            *(arg1 + 0x18) = x0_34
            Botan::deallocate_memory(x0_34, x8_32 - x0_34, 1)
        
        Botan::XMSS_WOTS_PublicKey::~XMSS_WOTS_PublicKey()
        sub_1101e04(x0_27)
        noreturn
    
    int128_t v0_1
    int128_t v1_1
    x0_11, v0_1, v1_1 = Botan::allocate_memory(x23_3, 1)
    x9_8 = &x0_11[x23_3]
    void* x8_17 = i_6 + x27 + (i_6 << 1) + 4 + 4
    var_90.q = x0_11
    var_90:8.q = x0_11
    var_80 = x9_8
    
    if (x23_3 u>= 0x20)
        if (x0_11 u< x8_17 + x23_3)
            x10 = x0_11
        
        if (x0_11 u< x8_17 + x23_3 && x8_17 u< x9_8)
            goto label_ecc920
        
        int64_t i_5 = x23_3 & 0xffffffffffffffe0
        x10 = &x0_11[i_5]
        x8_17 += i_5
        int128_t* x12_3 = i_6 * 3 + x27 + 0x18
        void* x13_1 = &x0_11[0x10]
        int64_t i_3 = i_5
        int64_t i_1
        
        do
            v0_1 = x12_3[-1]
            v1_1 = *x12_3
            x12_3 = &x12_3[2]
            i_1 = i_3
            i_3 -= 0x20
            *(x13_1 - 0x10) = v0_1
            *x13_1 = v1_1
            x13_1 += 0x20
        while (i_1 != 0x20)
        
        if (x23_3 != i_5)
            goto label_ecc920
    else
        x10 = x0_11
    label_ecc920:
        void* i_2 = x8_17 - 8
        
        do
            char x12_4 = *(i_2 + 8)
            i_2 += 1
            *x10 = x12_4
            x10 = &x10[1]
        while (x27 + x23_3 + i_6 * 3 != i_2)
    
    var_90:8.q = x10
    x22_1 = arg1 + 0x10
    x8_18 = *x22_1
    
    if (x8_18 != 0)
        goto label_ecc948
*(arg1 + 0x10) = x0_11
*(arg1 + 0x18) = x10
*(arg1 + 0x20) = x9_8
Botan::XMSS_PrivateKey::set_unused_leaf_index(arg1)
void* result = var_78.q

if (result == 0)
    return result

void* result_1 = result
return Botan::deallocate_memory(result, var_68 - result, 1)
