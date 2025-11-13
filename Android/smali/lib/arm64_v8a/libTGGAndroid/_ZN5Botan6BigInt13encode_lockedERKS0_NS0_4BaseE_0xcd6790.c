// 函数: _ZN5Botan6BigInt13encode_lockedERKS0_NS0_4BaseE
// 地址: 0xcd6790
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_50
void* var_40
size_t var_48
int64_t result
int64_t* entry_x8

if (arg2 == 0xa)
    Botan::BigInt::to_dec_string()
    uint64_t x10_4 = zx.q(var_50)
    size_t x8_4 = var_48
    __builtin_memset(entry_x8, 0, 0x18)
    int32_t x9_2 = x10_4.d & 1
    size_t x10_5 = x10_4 u>> 1
    size_t x21_1
    
    x21_1 = x9_2 == 0 ? x10_5 : x8_4
    
    int64_t x20_1
    
    if (x21_1 == 0)
        x20_1 = 0
    label_cd68fc:
        int32_t x21_2 = x9_2 & 0xff
        void* x1_2
        
        if (x21_2 == 0)
            x1_2 = &var_50 | 1
        else
            x1_2 = var_40
        
        size_t x2_4
        
        x2_4 = x21_2 == 0 ? x10_5 : x8_4
        
        result = memcpy(x20_1, x1_2, x2_4)
        
        if (x21_2 == 0)
            return result
        
        return operator delete(var_40)
    
    if ((x21_1 & 0xffffffff80000000) == 0)
        int64_t x0_5 = Botan::allocate_memory(x21_1, 1)
        int64_t x23_1 = x0_5 + x21_1
        x20_1 = x0_5
        *entry_x8 = x0_5
        entry_x8[2] = x23_1
        memset(x0_5, 0, x21_1)
        uint64_t x10_6 = zx.q(var_50)
        x8_4 = var_48
        entry_x8[1] = x23_1
        x9_2 = x10_6.d & 1
        x10_5 = x10_6 u>> 1
        goto label_cd68fc
    
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    if (arg2 != 0x10)
        if (arg2 == 0x100)
            return Botan::BigInt::encode_locked(arg1) __tailcall
        
        void** x0_9 = __cxa_allocate_exception(0x20)
        int64_t x0_10
        int128_t v0_1
        x0_10, v0_1 = operator new(0x20)
        int64_t var_40_1 = x0_10
        var_50.o = data_71d400
        __builtin_strncpy(x0_10, "Unknown BigInt encoding base", 0x1d)
        *x0_9 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_9[1])
        *x0_9 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_9, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    Botan::BigInt::encode(arg1)
    uint8_t* x0_1 = var_50.q
    char var_68
    uint8_t* var_48_1
    
    if (x0_1 == var_48)
        var_68 = 4
        int16_t var_67_1 = 0x3030
        char var_65_1 = 0
        
        if (x0_1 != 0)
            var_48_1 = x0_1
            operator delete(x0_1)
    else
        Botan::hex_encode(x0_1, var_48 - x0_1, true)
        x0_1 = var_50.q
        
        if (x0_1 != 0)
            var_48_1 = x0_1
            operator delete(x0_1)
    uint64_t x10_1 = zx.q(var_68)
    uint64_t var_60
    uint64_t x8_3 = var_60
    __builtin_memset(entry_x8, 0, 0x18)
    int32_t x9_1 = x10_1.d & 1
    uint64_t x10_2 = x10_1 u>> 1
    uint64_t x21
    
    x21 = x9_1 == 0 ? x10_2 : x8_3
    
    int64_t x20
    
    if (x21 == 0)
        x20 = 0
    label_cd693c:
        int32_t x21_3 = x9_1 & 0xff
        void* var_58
        void* x1_3
        
        if (x21_3 == 0)
            x1_3 = &var_68 | 1
        else
            x1_3 = var_58
        
        uint64_t x2_5
        
        x2_5 = x21_3 == 0 ? x10_2 : x8_3
        
        result = memcpy(x20, x1_3, x2_5)
        
        if (x21_3 != 0)
            return operator delete(var_58)
        
        return result
    
    if ((x21 & 0xffffffff80000000) == 0)
        int64_t x0_3 = Botan::allocate_memory(x21, 1)
        int64_t x22_1 = x0_3 + x21
        x20 = x0_3
        *entry_x8 = x0_3
        entry_x8[2] = x22_1
        memset(x0_3, 0, x21)
        uint64_t x10_3 = zx.q(var_68)
        x8_3 = var_60
        entry_x8[1] = x22_1
        x9_1 = x10_3.d & 1
        x10_2 = x10_3 u>> 1
        goto label_cd693c
int64_t* x0_15 = std::__ndk1::__vector_base_common<true>::__throw_length_error()

if ((zx.d(var_50) & 1) != 0)
    operator delete(var_40)

sub_1101e04(x0_15)
noreturn
