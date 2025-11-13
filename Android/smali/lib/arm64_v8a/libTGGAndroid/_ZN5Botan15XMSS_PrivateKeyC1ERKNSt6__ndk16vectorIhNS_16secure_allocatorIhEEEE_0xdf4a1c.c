// 函数: _ZN5Botan15XMSS_PrivateKeyC1ERKNSt6__ndk16vectorIhNS_16secure_allocatorIhEEEE
// 地址: 0xdf4a1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 0x160) entry_x28
void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 0x160) var_50 =
    entry_x28
*(arg1 + 0x180) = _vtable_for_Botan::Public_Key + 0x10
int64_t* entry_x1
char* i_9 = *entry_x1
int64_t* x21 = entry_x1[1]
void* result_1
__builtin_memset(&result_1, 0, 0x18)
uint64_t x20 = x21 - i_9
char var_90
void* var_80
void* var_68_1
void* result_7

if (x21 == i_9)
label_df4b18:
    Botan::XMSS_PublicKey::XMSS_PublicKey(arg1 + 0x180)
    void* result_4 = result_1
    
    if (result_4 != 0)
        result_7 = result_4
        operator delete(result_4)
    
    uint64_t x1_1 = zx.q(*(arg1 + 0x200))
    *(arg1 + 0x180) = _vtable_for_Botan::XMSS_PrivateKey + 0x258
    *arg1 = _vtable_for_Botan::XMSS_PrivateKey + 0xd0
    void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 0x180) var_98 =
        arg1 + 0x180
    Botan::XMSS_WOTS_PrivateKey::XMSS_WOTS_PrivateKey(arg1 + 8, x1_1)
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &result_1)
    x21 = arg1 + 0x118
    Botan::XMSS_Hash::XMSS_Hash(x21)
    
    if ((zx.d(result_1.b) & 1) != 0)
        operator delete(var_68_1)
    
    __builtin_memset(arg1 + 0x160, 0, 0x18)
    entry_x28 = arg1 + 0x160
    
    if ((zx.d(*guard_variable_for_Botan::XMSS_Index_Registry::get_instance()::self) & 1) == 0 &&
            __cxa_guard_acquire(guard_variable_for_Botan::XMSS_Index_Registry::get_instance()::self) != 0)
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
    sub_eccdb8(&result_1)
    i_9 = *(arg1 + 0x1d8)
    void* result_6 = result_1
    
    if (result_7 - result_6 != (i_9 << 2) + 8)
        void** x0_20 = __cxa_allocate_exception(0x20)
        int64_t x0_21
        int128_t v0_3
        x0_21, v0_3 = operator new(0x20)
        int64_t var_80_1 = x0_21
        var_90.o = data_71cd20
        __builtin_strncpy(x0_21, "Invalid XMSS private key size", 0x1e)
        *x0_20 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_20[1])
        *x0_20 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_20, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    if (_byteswap(zx.q(*(result_6 + (i_9 << 1) + 4)) << 0x20) u>> *(arg1 + 0x1e0) != 0)
        void** x0_24 = __cxa_allocate_exception(0x20)
        int64_t x0_25
        int128_t v0_4
        x0_25, v0_4 = operator new(0x30)
        (*"ex out of bounds")[0].o
        int64_t var_80_2 = x0_25
        v0_4 = data_71cbb0
        __builtin_strncpy(x0_25, "XMSS private key leaf index out of bounds", 0x2a)
        var_90.o = v0_4
        *x0_24 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_24[1])
        *x0_24 = _vtable_for_Botan::Decoding_Error + 0x10
        __cxa_throw(x0_24, _typeinfo_for_Botan::Decoding_Error, Botan::Exception::~Exception)
        noreturn
    
    int64_t x8_12 = *(arg1 + 0x160)
    int64_t x9_6 = *(arg1 + 0x170)
    *(arg1 + 0x168) = x8_12
    
    if (x9_6 - x8_12 u< i_9)
        void* x0_8 = Botan::allocate_memory(i_9, 1)
        void* x24_1 = *(arg1 + 0x160)
        size_t x2_2 = *(arg1 + 0x168) - x24_1
        void* x26_1 = x0_8 - x2_2
        
        if (x2_2 s>= 1)
            memcpy(x26_1, x24_1, x2_2)
        
        int64_t x8_14 = *(arg1 + 0x170)
        *(arg1 + 0x160) = x26_1
        *(arg1 + 0x168) = x0_8
        *(arg1 + 0x170) = x0_8 + i_9
        
        if (x24_1 != 0)
            Botan::deallocate_memory(x24_1, x8_14 - x24_1, 1)
        
        var_90.q = entry_x28
        goto label_df4c6c
    
    var_90.q = entry_x28
    
    if (i_9 != 0)
    label_df4c6c:
        void* x24_2 = result_6 + (i_9 << 1) + 8
        char* i_6 = i_9
        char* i
        
        do
            sub_f4a08c(&var_90, x24_2)
            i = i_6
            i_6 -= 1
            x24_2 += 1
        while (i != 1)
    
    uint64_t x24_3 = *(arg1 + 0x238)
    __builtin_memset(&var_90, 0, 0x18)
    void* var_88_1
    void* x0_13
    void* x8_17
    void* x9_8
    void* x10_2
    void* __offset(std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >, 0x10) x23_1
    
    if (x24_3 == 0)
        x9_8 = nullptr
        x10_2 = nullptr
        x0_13 = nullptr
        x23_1 = arg1 + 0x10
        x8_17 = *x23_1
        
        if (x8_17 == 0)
            goto label_df4da0
        
    label_df4d78:
        int64_t x9_9 = *(arg1 + 0x20)
        *(arg1 + 0x18) = x8_17
        Botan::deallocate_memory(x8_17, x9_9 - x8_17, 1)
        __builtin_memset(x23_1, 0, 0x18)
        x0_13 = var_90.q
        x10_2 = var_88_1
        x9_8 = var_80
    label_df4da0:
        *(arg1 + 0x10) = x0_13
        *(arg1 + 0x18) = x10_2
        *(arg1 + 0x20) = x9_8
        Botan::XMSS_PrivateKey::set_unused_leaf_index(arg1)
        void* result = result_1
        
        if (result == 0)
            return result
        
        void* result_2 = result
        return Botan::deallocate_memory(result, var_68_1 - result, 1)
    
    if ((x24_3 & 0xffffffff80000000) == 0)
        int128_t v0_2
        int128_t v1_2
        x0_13, v0_2, v1_2 = Botan::allocate_memory(x24_3, 1)
        x9_8 = x0_13 + x24_3
        void* x8_16 = i_9 + result_6 + (i_9 << 1) + 4 + 4
        var_90.q = x0_13
        void* var_88_2 = x0_13
        var_80 = x9_8
        
        if (x24_3 u>= 0x20)
            if (x0_13 u< x8_16 + x24_3)
                x10_2 = x0_13
            
            if (x0_13 u< x8_16 + x24_3 && x8_16 u< x9_8)
                goto label_df4d50
            
            void* i_8 = x24_3 & 0xffffffffffffffe0
            x10_2 = x0_13 + i_8
            x8_16 += i_8
            void* x12_3 = i_9 * 3 + result_6 + 0x18
            void* x13_1 = x0_13 + 0x10
            void* i_5 = i_8
            void* i_1
            
            do
                v0_2 = *(x12_3 - 0x10)
                v1_2 = *x12_3
                x12_3 += 0x20
                i_1 = i_5
                i_5 -= 0x20
                *(x13_1 - 0x10) = v0_2
                *x13_1 = v1_2
                x13_1 += 0x20
            while (i_1 != 0x20)
            
            if (x24_3 != i_8)
                goto label_df4d50
        else
            x10_2 = x0_13
        label_df4d50:
            void* i_2 = x8_16 - 8
            
            do
                char x12_4 = *(i_2 + 8)
                i_2 += 1
                *x10_2 = x12_4
                x10_2 += 1
            while (result_6 + x24_3 + i_9 * 3 != i_2)
        
        var_88_1 = x10_2
        x23_1 = arg1 + 0x10
        x8_17 = *x23_1
        
        if (x8_17 == 0)
            goto label_df4da0
        
        goto label_df4d78
else
    if ((x20 & 0xffffffff80000000) == 0)
        void* result_3
        int128_t v0_1
        int128_t v1_1
        result_3, v0_1, v1_1 = operator new(x20)
        result_1 = result_3
        void* result_8 = result_3
        var_68_1 = result_3 + x20
        void* result_10
        
        if (i_9 == x21)
            result_10 = result_3
        else if (x20 u< 0x20 || (result_3 u< x21 && i_9 u< x21 + result_3 - i_9))
        label_df4ae0:
            result_10 = result_3
            
            do
                char x9_1 = *i_9
                i_9 = &i_9[1]
                *result_10 = x9_1
                result_10 += 1
            while (x21 != i_9)
        else
            int64_t i_7 = x20 & 0xffffffffffffffe0
            void* x10_1 = &i_9[0x10]
            result_10 = result_3 + i_7
            i_9 = &i_9[i_7]
            void* x11_1 = result_3 + 0x10
            int64_t i_4 = i_7
            int64_t i_3
            
            do
                v0_1 = *(x10_1 - 0x10)
                v1_1 = *x10_1
                x10_1 += 0x20
                i_3 = i_4
                i_4 -= 0x20
                *(x11_1 - 0x10) = v0_1
                *x11_1 = v1_1
                x11_1 += 0x20
            while (i_3 != 0x20)
            result_3 = result_10
            
            if (x20 != i_7)
                goto label_df4ae0
        
        result_7 = result_10
        goto label_df4b18
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
int64_t* x0_29 = std::__ndk1::__vector_base_common<true>::__throw_length_error()

if ((zx.d(var_90) & 1) != 0)
    operator delete(var_80)

void* result_5 = result_1

if (result_5 != 0)
    void* result_9 = result_5
    Botan::deallocate_memory(result_5, var_68_1 - result_5, 1)

void* x0_32 = *entry_x28

if (x0_32 != 0)
    int64_t x8_26 = *(arg1 + 0x170)
    *(arg1 + 0x168) = x0_32
    Botan::deallocate_memory(x0_32, x8_26 - x0_32, 1)

void* x0_33

if ((zx.d(*(arg1 + 0x148)) & 1) == 0)
    x0_33 = *(arg1 + 0x128)
    
    if (x0_33 != 0)
        goto label_df5128
    
    goto label_df5090

operator delete(*(arg1 + 0x158))
x0_33 = *(arg1 + 0x128)
int64_t* x0_40

if (x0_33 != 0)
label_df5128:
    *(arg1 + 0x130) = x0_33
    operator delete(x0_33)
    x0_40 = *(arg1 + 0x120)
    *(arg1 + 0x120) = 0
    
    if (x0_40 == 0)
        goto label_df509c
    
    goto label_df5144

label_df5090:
x0_40 = *(arg1 + 0x120)
*(arg1 + 0x120) = 0
int64_t* x0_34

if (x0_40 != 0)
label_df5144:
    (*(*x0_40 + 0x10))()
    x0_34 = *x21
    *x21 = 0
    
    if (x0_34 != 0)
        (*(*x0_34 + 0x10))()
else
label_df509c:
    x0_34 = *x21
    *x21 = 0
    
    if (x0_34 != 0)
        (*(*x0_34 + 0x10))()
void* x0_35 = *(arg1 + 0x10)
*(arg1 + 0x28) = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0x208
*(arg1 + 8) = _vtable_for_Botan::XMSS_WOTS_PrivateKey + 0xd0

if (x0_35 != 0)
    int64_t x8_31 = *(arg1 + 0x20)
    *(arg1 + 0x18) = x0_35
    Botan::deallocate_memory(x0_35, x8_31 - x0_35, 1)

Botan::XMSS_WOTS_PublicKey::~XMSS_WOTS_PublicKey()
Botan::XMSS_PublicKey::~XMSS_PublicKey()
sub_1101e04(x0_29)
noreturn
