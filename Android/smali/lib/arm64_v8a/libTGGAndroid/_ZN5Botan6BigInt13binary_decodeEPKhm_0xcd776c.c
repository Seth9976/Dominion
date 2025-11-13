// 函数: _ZN5Botan6BigInt13binary_decodeEPKhm
// 地址: 0xcd776c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *(arg1 + 0x10)
int64_t x0 = *arg1
uint64_t x20 = arg2
size_t x10 = x9 - x0
size_t x2 = *(arg1 + 8) - x0
int64_t x8_1 = x10 s>> 2
int64_t x11 = x2 s>> 2

if (x8_1 u> x11)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(arg1)
    x0 = *arg1
    x2 = *(arg1 + 8) - x0
else if (x8_1 u< x11)
    x2 = x10
    *(arg1 + 8) = x9

if (x2 != 0)
    memset(x0, 0, x2)

int64_t entry_x2
uint64_t x25 = entry_x2 u>> 2
int64_t i_1 = entry_x2 & 3
uint64_t x10_1

if (i_1 != 0)
    x10_1 = x25 + 1
else
    x10_1 = x25

*(arg1 + 0x20) = 1
int64_t x8_5

if ((x10_1 & 7) == 0)
    x8_5 = 0
else
    x8_5 = 8 - (x10_1 & 7)

uint64_t x23 = x8_5 + x10_1
*(arg1 + 0x18) = 0
int32_t* var_60_1
__builtin_memset(&var_60_1, 0, 0x18)
void* var_50_1
int32_t* x22

if (x8_5 == neg.q(x10_1))
    x22 = nullptr
    
    if (x25 != 0)
    label_cd7870:
        *x22 = _byteswap(*(x20 + entry_x2 - 4))
        
        if (x25 != 1)
            int32_t* x8_11 = entry_x2 + x20 - 8
            int64_t x9_2 = 1
            bool cond:5_1
            
            do
                int32_t x11_1 = *x8_11
                x8_11 = &x8_11[-1]
                cond:5_1 = x25 != x9_2 + 1
                var_60_1[x9_2] = _byteswap(x11_1)
                x9_2 += 1
            while (cond:5_1)
else
    if (x23 u>> 0x3e != 0)
        sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    int32_t* x0_3 = Botan::allocate_memory(x23, 4)
    void* x23_1 = &x0_3[x23]
    x22 = x0_3
    var_60_1 = x0_3
    var_50_1 = x23_1
    memset(x0_3, 0, x23 << 2)
    void* var_58_1 = x23_1
    
    if (x25 != 0)
        goto label_cd7870

if (i_1 != 0)
    int64_t i
    
    do
        int32_t* x9_3 = var_60_1
        i = i_1
        i_1 -= 1
        char x11_3 = *x20
        x20 += 1
        x9_3[x25] = zx.d(x11_3) | (0xffffff & x9_3[x25]) << 8
    while (i != 1)

void* result = *arg1
void* result_1 = result
*arg1 = var_60_1.o
int64_t x8_13 = *(arg1 + 0x10)
*(arg1 + 0x10) = var_50_1
*(arg1 + 0x18) = -1
int64_t var_50_2 = x8_13

if (result == 0)
    return result

void* result_2 = result
return Botan::deallocate_memory(result, (x8_13 - result) s>> 2, 4)
