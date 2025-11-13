// 函数: _ZNSt6__ndk16vectorIN5Botan6BigIntENS_9allocatorIS2_EEE8__appendEm
// 地址: 0xf2a134
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 8)
int64_t x10 = *(arg1 + 0x10)
int64_t entry_x1

if (((x10 - x8) s>> 3) * -0x3333333333333333 u>= entry_x1)
    if (entry_x1 != 0)
        void* x9_3 = x8 + entry_x1 * 0x28
        
        do
            __builtin_memset(x8, 0, 0x20)
            *(x8 + 0x18) = -1
            *(x8 + 0x20) = 0
            *(x8 + 0x20) = 1
            x8 += 0x28
        while (x8 != x9_3)
        
        x8 = x9_3
    
    *(arg1 + 8) = x8
    return 

int64_t x12_1 = *arg1
int64_t x23_1 = ((x8 - x12_1) s>> 3) * -0x3333333333333333
int64_t x8_3 = x23_1 + entry_x1

if (x8_3 u> 0x666666666666666)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
    sub_ef2a0c()
    noreturn

int64_t x10_3 = ((x10 - x12_1) s>> 3) * -0x3333333333333333
int64_t x11_1 = x10_3 << 1
int64_t x8_4

x8_4 = x11_1 u< x8_3 ? x8_3 : x11_1

int64_t x26_1

x26_1 = x10_3 u< 0x333333333333333 ? x8_4 : 0x666666666666666

uint64_t x21_1

if (x26_1 == 0)
    x21_1 = 0
else
    if (x26_1 u> 0x666666666666666)
        sub_ef2a0c()
        noreturn
    
    x21_1 = operator new(x26_1 * 0x28)

int64_t x9_5 = x23_1 * 0x28
int64_t x25_1 = x21_1 + x9_5
int64_t i = x25_1 + entry_x1 * 0x28
int64_t x11_2

do
    x11_2 = x21_1 + x9_5
    __builtin_memset(x11_2, 0, 0x20)
    *(x11_2 + 0x18) = -1
    *(x11_2 + 0x20) = 0
    *(x11_2 + 0x20) = 1
    x9_5 += 0x28
while (x11_2 + 0x28 != i)
void* x22_1 = *arg1
void* x28_1 = *(arg1 + 8)
int64_t x26_2 = x21_1 + x26_1 * 0x28

if (x28_1 == x22_1)
    *arg1 = x25_1
    *(arg1 + 8) = i
    *(arg1 + 0x10) = x26_2
else
    int64_t i_1 = 0
    int64_t var_70_1 = x23_1
    int64_t var_68_1 = entry_x1 * -0x28
    
    do
        void* fp_1 = x25_1 + i_1
        void* x23_2 = x28_1 + i_1
        std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(fp_1 - 0x28)
        i_1 -= 0x28
        *(fp_1 - 0x10) = *(x23_2 - 0x10)
        *(fp_1 - 8) = *(x23_2 - 8)
    while (x22_1 - x28_1 != i_1)
    
    x22_1 = *arg1
    uint64_t* x8_9 = *(arg1 + 8)
    *arg1 = x25_1 + i_1
    *(arg1 + 8) = i
    *(arg1 + 0x10) = x26_2
    
    if (x8_9 != x22_1)
        uint64_t* x19_1 = x8_9
        
        do
            x19_1 = &x19_1[-5]
            arg1 = *x19_1
            
            if (arg1 != 0)
                int64_t x9_7 = x8_9[-3]
                x8_9[-4] = arg1
                Botan::deallocate_memory(arg1, (x9_7 - arg1) s>> 2, 4)
            
            x8_9 = x19_1
        while (x22_1 != x19_1)

if (x22_1 != 0)
    return operator delete(x22_1) __tailcall
