// 函数: _ZN5Botan6BigInt6encodeERKS0_NS0_4BaseE
// 地址: 0xcd6498
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_5
void* x19_1
uint64_t x20
int64_t x21
uint64_t x22
char var_60
uint64_t var_58
int64_t* entry_x8

if (arg2 == 0xa)
    Botan::BigInt::to_dec_string()
    x22 = zx.q(var_60)
    __builtin_memset(entry_x8, 0, 0x18)
    
    if ((x22.d & 1) == 0)
        x20 = x22 u>> 1
    else
        x20 = var_58
    
    void* var_50
    
    if (x20 == 0)
        x21 = 0
        x19_1 = var_50
        x8_5 = &var_60 | 1
    else
        if ((x20 & 0xffffffff80000000) != 0)
            std::__ndk1::__vector_base_common<true>::__throw_length_error()
        label_cd66cc:
            int64_t* x0_14 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
            
            if ((zx.d(var_60) & 1) != 0)
                operator delete(var_50)
            
            sub_1101e04(x0_14)
            noreturn
        
        int64_t x0_5 = operator new(x20)
        int64_t x24_1 = x0_5 + x20
        x21 = x0_5
        *entry_x8 = x0_5
        entry_x8[2] = x24_1
        memset(x0_5, 0, x20)
        entry_x8[1] = x24_1
        x19_1 = var_50
        x8_5 = &var_60 | 1
else
    if (arg2 != 0x10)
        if (arg2 == 0x100)
            return Botan::BigInt::encode(arg1) __tailcall
        
        void** x0_8 = __cxa_allocate_exception(0x20)
        int64_t x0_9
        int128_t v0_1
        x0_9, v0_1 = operator new(0x20)
        int64_t var_50_1 = x0_9
        var_60.o = data_71d400
        __builtin_strncpy(x0_9, "Unknown BigInt encoding base", 0x1d)
        *x0_8 = _vtable_for_Botan::Exception + 0x10
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
            &x0_8[1])
        *x0_8 = _vtable_for_Botan::Invalid_Argument + 0x10
        __cxa_throw(x0_8, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
        noreturn
    
    Botan::BigInt::encode(arg1)
    uint8_t* x0_1 = var_60.q
    char var_78
    uint8_t* var_58_1
    
    if (x0_1 == var_58)
        var_78 = 4
        int16_t var_77_1 = 0x3030
        char var_75_1 = 0
        
        if (x0_1 != 0)
            var_58_1 = x0_1
            operator delete(x0_1)
    else
        Botan::hex_encode(x0_1, var_58 - x0_1, true)
        x0_1 = var_60.q
        
        if (x0_1 != 0)
            var_58_1 = x0_1
            operator delete(x0_1)
    x22 = zx.q(var_78)
    __builtin_memset(entry_x8, 0, 0x18)
    uint64_t var_70
    
    if ((x22.d & 1) == 0)
        x20 = x22 u>> 1
    else
        x20 = var_70
    void* var_68
    
    if (x20 == 0)
        x21 = 0
        x19_1 = var_68
        x8_5 = &var_78 | 1
    else
        if ((x20 & 0xffffffff80000000) != 0)
            goto label_cd66cc
        
        int64_t x0_3 = operator new(x20)
        int64_t x23_1 = x0_3 + x20
        x21 = x0_3
        *entry_x8 = x0_3
        entry_x8[2] = x23_1
        memset(x0_3, 0, x20)
        entry_x8[1] = x23_1
        x19_1 = var_68
        x8_5 = &var_78 | 1
void* x1_2

if ((x22.d & 1) == 0)
    x1_2 = x8_5
else
    x1_2 = x19_1

int64_t result = memcpy(x21, x1_2, x20)

if ((x22.d & 1) == 0)
    return result

return operator delete(x19_1)
