// 函数: sub_f06f44
// 地址: 0xf06f44
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0_1 = Botan::BigInt::bits()
Botan::BigInt::bits()
uint64_t x8 = zx.q(*(arg1 + 0xa8))
int64_t x9

if (x0_1 == 0)
    x9 = 1
else if (x0_1 u>= 0x59a)
    x9 = *((0 << 4) + 0x837240) + 1
else if (x0_1 u> 0x21a)
    x9 = *((1 << 4) + 0x837240) + 1
else if (x0_1 u> 0xc4)
    x9 = *((2 << 4) + 0x837240) + 1
else if (x0_1 u> 0x45)
    x9 = *((3 << 4) + 0x837240) + 1
else if (x0_1 u> 0x10)
    x9 = *((4 << 4) + 0x837240) + 1
else
    x9 = 1

int64_t x10 = *(arg1 + 0x90)
int64_t* x8_1 = *(arg1 + 0x98)
int64_t x9_4

if ((x8.d & 1) == 0)
    x9_4 = x9
else
    x9_4 = x9 + 2

int64_t x12_1 = x9_4 + (x8 u>> 0xa & 1)
int64_t x11_1 = ((x8_1 - x10) s>> 3) * -0x3333333333333333
int64_t x9_7 = 1 << x12_1
*(arg1 + 0x88) = x12_1

if (x9_7 u> x11_1)
    std::__ndk1::vector<Botan::BigInt, std::__ndk1::allocator<Botan::BigInt> >::__append(arg1
        + 0x90)
else if (x9_7 u< x11_1)
    int64_t x22_1 = x10 + x9_7 * 0x28
    
    if (x8_1 != x22_1)
        int64_t* x23_1 = x8_1
        
        do
            x23_1 = &x23_1[-5]
            void* x0_4 = *x23_1
            
            if (x0_4 != 0)
                int64_t x9_8 = x8_1[-3]
                x8_1[-4] = x0_4
                Botan::deallocate_memory(x0_4, (x9_8 - x0_4) s>> 2, 4)
            
            x8_1 = x23_1
        while (x22_1 != x23_1)
    
    *(arg1 + 0x98) = x22_1

int32_t* result_1
__builtin_memset(&result_1, 0, 0x18)
int32_t var_50 = 1
int64_t var_58 = -1
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&result_1)
*result_1 = 1
int32_t* result_4 = result_1
int64_t var_58_1 = -1
int32_t* result_2

if ((result_2 - result_4) s>> 2 u>= 2)
    result_4[1] = 0

int32_t** x8_4 = *(arg1 + 0x90)
int64_t var_60
int32_t* result_3

if (x8_4 == &result_1)
    result_3 = result_1
    
    if (result_3 != 0)
        result_2 = result_3
        Botan::deallocate_memory(result_3, (var_60 - result_3) s>> 2, 4)
else
    result_3 = *x8_4
    *x8_4 = result_1
    result_1 = result_3
    int64_t x11_2 = x8_4[2]
    int64_t x10_1 = x8_4[3]
    x8_4[1] = result_2
    x8_4[2] = var_60
    x8_4[3] = var_58_1
    var_60 = x11_2
    var_58_1 = x10_1
    x8_4[4].d = var_50
    var_50 = x8_4[4].d
    
    if (result_3 != 0)
        result_2 = result_3
        Botan::deallocate_memory(result_3, (var_60 - result_3) s>> 2, 4)
Botan::Modular_Reducer::reduce(arg1 + 8)
void* x8_7 = *(arg1 + 0x90)
int32_t* result

if (x8_7 + 0x28 == &result_1)
    result = result_1
    
    if (result != 0)
        result_2 = result
        result = Botan::deallocate_memory(result, (var_60 - result) s>> 2, 4)
else
    result = *(x8_7 + 0x28)
    int128_t v0 = result_1.o
    result_1 = result
    *(x8_7 + 0x28) = v0
    int64_t x12_2 = *(x8_7 + 0x38)
    int64_t x10_3 = *(x8_7 + 0x40)
    *(x8_7 + 0x38) = var_60
    *(x8_7 + 0x40) = var_58_1
    var_60 = x12_2
    var_58_1 = x10_3
    int32_t x10_4 = *(x8_7 + 0x48)
    *(x8_7 + 0x48) = var_50
    var_50 = x10_4
    
    if (result != 0)
        result_2 = result
        result = Botan::deallocate_memory(result, (var_60 - result) s>> 2, 4)

void* x8_10 = *(arg1 + 0x90)

if (*(arg1 + 0x98) - x8_10 != 0x50)
    int64_t x21_1 = 0
    int64_t i = 2
    
    do
        Botan::Modular_Reducer::multiply(arg1 + 8, x8_10 + x21_1 + 0x28)
        void* x8_11 = *(arg1 + 0x90)
        
        if (&result_1 - x8_11 - 0x50 != x21_1)
            void* x8_12 = x8_11 + x21_1
            int32_t* result_5 = *(x8_12 + 0x50)
            *(x8_12 + 0x50) = result_1
            result_1 = result_5
            int32_t* result_6 = *(x8_12 + 0x58)
            *(x8_12 + 0x58) = result_2
            result_2 = result_6
            int64_t x10_5 = *(x8_12 + 0x60)
            *(x8_12 + 0x60) = var_60
            var_60 = x10_5
            int64_t x10_6 = *(x8_12 + 0x68)
            *(x8_12 + 0x68) = var_58_1
            var_58_1 = x10_6
            int32_t x10_7 = *(x8_12 + 0x70)
            *(x8_12 + 0x70) = var_50
            var_50 = x10_7
        
        result = result_1
        
        if (result != 0)
            result_2 = result
            result = Botan::deallocate_memory(result, (var_60 - result) s>> 2, 4)
        
        x8_10 = *(arg1 + 0x90)
        i += 1
        x21_1 += 0x28
    while (i != ((*(arg1 + 0x98) - x8_10) s>> 3) * -0x3333333333333333)

return result
