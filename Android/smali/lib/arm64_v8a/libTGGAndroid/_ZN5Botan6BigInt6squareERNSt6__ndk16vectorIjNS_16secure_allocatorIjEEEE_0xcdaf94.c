// 函数: _ZN5Botan6BigInt6squareERNSt6__ndk16vectorIjNS_16secure_allocatorIjEEEE
// 地址: 0xcdaf94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = *(arg1 + 0x18)
uint32_t* var_50_1
int64_t var_48_1
void* var_40_1
uint32_t* x22
int64_t x23

if (x20 == -1)
    int64_t x8_3 = *arg1
    int64_t x10_1 = *(arg1 + 8)
    int64_t x9_1 = x10_1 - x8_3
    
    if (x10_1 == x8_3)
        x20 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -1
        
        int64_t x10_2 = x8_3 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x20 = x9_1 s>> 2
        int64_t x9_2
        
        x9_2 = x10_2 s> x9_1 ? x10_2 : x9_1
        
        int64_t i_1 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8_3 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x20 -= x10_3
        while (i != 1)
    
    *(arg1 + 0x18) = x20
    x23 = x20 << 1
    __builtin_memset(&var_50_1, 0, 0x18)
    
    if (x23 != 0)
        goto label_cdafcc
    
    x22 = nullptr
else
    x23 = x20 << 1
    __builtin_memset(&var_50_1, 0, 0x18)
    
    if (x23 == 0)
        x22 = nullptr
    else
    label_cdafcc:
        
        if (x23 u>> 0x3e != 0)
            sub_c776cc(std::__ndk1::__vector_base_common<true>::__throw_length_error())
            noreturn
        
        uint32_t* x0_1 = Botan::allocate_memory(x23, 4)
        x22 = x0_1
        var_50_1 = x0_1
        var_40_1 = &x0_1[x23]
        x23 = &x0_1[x20 * 2]
        memset(x0_1, 0, x20 << 3)
        var_48_1 = x23

int64_t* entry_x1
uint32_t* x5 = *entry_x1
void* x8_5 = entry_x1[1]
int64_t x9_5 = (x23 - x22) s>> 2
int64_t x10_5 = (x8_5 - x5) s>> 2

if (x9_5 u> x10_5)
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x1)
    x22 = var_50_1
    x23 = var_48_1
    x5 = *entry_x1
    x8_5 = entry_x1[1]
else if (x9_5 u< x10_5)
    x8_5 = &x5[x9_5]
    entry_x1[1] = x8_5

uint32_t* x2_2 = *arg1
Botan::bigint_sqr(x22, (x23 - x22) s>> 2, x2_2, (*(arg1 + 8) - x2_2) s>> 2, x20, x5, 
    (x8_5 - x5) s>> 2)
void* x0_4 = *arg1
void* var_50_2 = x0_4
*arg1 = var_50_1.o
int64_t x8_7 = *(arg1 + 0x10)
*(arg1 + 0x10) = var_40_1
*(arg1 + 0x18) = -1
int64_t var_40_2 = x8_7
*(arg1 + 0x20) = 1

if (x0_4 != 0)
    void* var_48_2 = x0_4
    Botan::deallocate_memory(x0_4, (x8_7 - x0_4) s>> 2, 4)

return arg1
