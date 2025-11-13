// 函数: _ZN5Botan13base58_decodeEPKcm
// 地址: 0xcd1298
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = 0

if (arg2 != 0)
    while (zx.d(arg1[x22]) == 0x31)
        x22 += 1
        
        if (arg2 == x22)
            x22 = arg2
            break

void* result_1
__builtin_memset(&result_1, 0, 0x18)
int64_t var_70 = -1
int32_t var_68 = 1

if (x22 != arg2)
    uint64_t i_2 = arg2 - x22
    void* x21_2 = &arg1[x22]
    uint64_t i
    
    do
        uint32_t x8_5 = zx.d(*x21_2)
        
        if (x8_5 != 0xa && x8_5 != 0x20)
            char x9_4 = (((x8_5.b - 0x31)
                | (sx.d((0x39 - x8_5.b) | x8_5.b | (x8_5.b - 0x31)) u>> 7).b) ^ (x8_5.b - 0x38))
                & (sx.d((0x48 - x8_5.b) | x8_5.b | (x8_5.b - 0x41)) u>> 7).b
            char x9_7 = (x8_5.b - 0x3a) ^ (x8_5.b - 0x39) ^ (((x8_5.b - 0x39) ^ (x8_5.b - 0x38)
                ^ x9_4) & (sx.d((0x4e - x8_5.b) | x8_5.b | (x8_5.b - 0x4a)) u>> 7).b)
            char x9_10 = ((x8_5.b - 0x40) ^ (x8_5.b - 0x3a)
                ^ (x9_7 & (sx.d((0x5a - x8_5.b) | x8_5.b | (x8_5.b - 0x50)) u>> 7).b))
                & (sx.d((0x6b - x8_5.b) | x8_5.b | (x8_5.b - 0x61)) u>> 7).b
            char x8_10 = (((x8_5.b - 0x41) ^ (x8_5.b - 0x40) ^ x9_10)
                & (sx.d((0x7a - x8_5.b) | x8_5.b | (x8_5.b - 0x6d)) u>> 7).b) ^ (x8_5.b - 0x41)
            uint32_t fp_1 = zx.d(x8_10)
            char var_a0
            
            if (fp_1 == 0xff)
                void** x0_10 = __cxa_allocate_exception(0x20)
                var_a0 = 0x1c
                int64_t var_9f
                __builtin_strncpy(&var_9f, "Invalid base58", 0xf)
                *x0_10 = _vtable_for_Botan::Exception + 0x10
                std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
                    &x0_10[1])
                *x0_10 = _vtable_for_Botan::Decoding_Error + 0x10
                __cxa_throw(x0_10, _typeinfo_for_Botan::Decoding_Error, 
                    Botan::Exception::~Exception)
                noreturn
            
            Botan::BigInt::operator*=(&result_1)
            var_a0.d = fp_1
            Botan::BigInt::add(&result_1, &var_a0, 1)
        
        i = i_2
        i_2 -= 1
        x21_2 += 1
    while (i != 1)

int64_t x0 = Botan::BigInt::bits()
int64_t x8_3

if ((x0 & 7) == 0)
    x8_3 = 0
else
    x8_3 = 8 - (x0 & 7)

int64_t x8_4 = x8_3 + x0
uint64_t x21_1 = x22 + (x8_4 u>> 3)
int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t x20_1

if (x22 == neg.q(x8_4 u>> 3))
    x20_1 = 0
else
    if ((x21_1 & 0xffffffff80000000) != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    int64_t x0_2 = operator new(x21_1)
    int64_t x23_1 = x0_2 + x21_1
    x20_1 = x0_2
    *entry_x8 = x0_2
    entry_x8[2] = x23_1
    memset(x0_2, 0, x21_1)
    entry_x8[1] = x23_1

int64_t x0_9 = Botan::BigInt::bits()
int64_t x8_13

if ((x0_9 & 7) == 0)
    x8_13 = 0
else
    x8_13 = 8 - (x0_9 & 7)

int64_t x12_5 = x8_13 + x0_9
uint64_t x9_11 = x12_5 u>> 5
uint64_t i_1 = x12_5 u>> 3 & 3
int64_t var_80

if (x9_11 != 0)
    void* result_3 = result_1
    int64_t x10_6 = 0
    int32_t* x13_5 = x22 + (x12_5 u>> 3) + x20_1 - 4
    
    do
        int32_t x14_8
        
        if ((var_80 - result_3) s>> 2 u> x10_6)
            x14_8 = *(result_3 + (x10_6 << 2))
        else
            x14_8 = 0
        
        x10_6 += 1
        *x13_5 = _byteswap(x14_8)
        x13_5 = &x13_5[-1]
    while (x9_11 != x10_6)

void* result

if (i_1 == 0)
    result = result_1
else
    result = result_1
    int32_t x9_12
    
    if (x9_11 u>= (var_80 - result) s>> 2)
        x9_12 = 0
    else
        x9_12 = *(result + (x9_11 << 2))
    
    int32_t x11_2 = 0x18
    
    do
        *(x22 + x20_1 - 1 + i_1) = (x9_12 u>> (not.d(x11_2) & 0x18)).b
        i_1 -= 1
        x11_2 -= 8
    while (i_1 != 0)

if (result == 0)
    return result

void* result_2 = result
int64_t var_78
return Botan::deallocate_memory(result, (var_78 - result) s>> 2, 4)
