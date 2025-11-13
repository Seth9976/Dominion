// 函数: _ZN5Botan7mul_addERKNS_6BigIntES2_S2_
// 地址: 0xdd5b9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg3 + 0x20) == 0)
    void** x0_5 = __cxa_allocate_exception(0x20)
    int64_t x0_6
    int128_t v2
    x0_6, v2 = operator new(0x30)
    v2 = data_71b820
    int64_t var_70_2 = x0_6
    __builtin_strncpy(x0_6, "mul_add: Third argument must be > 0", 0x24)
    int128_t var_80 = v2
    *x0_5 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_5[1])
    *x0_5 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_5, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

uint64_t x23 = *(arg1 + 0x18)
int32_t x26 = *(arg1 + 0x20) == *(arg2 + 0x20) ? 1 : 0
uint64_t x25

if (x23 == -1)
    int64_t x8_1 = *arg1
    int64_t x10_1 = *(arg1 + 8)
    int64_t x9_2 = x10_1 - x8_1
    
    if (x10_1 == x8_1)
        x23 = 0
    else
        int64_t x11_1
        
        x11_1 = x9_2 s>= 0 ? x9_2 : -1
        
        int64_t x10_2 = x8_1 - x10_1
        int64_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x23 = x9_2 s>> 2
        int64_t x9_3
        
        x9_3 = x10_2 s> x9_2 ? x10_2 : x9_2
        
        int64_t i_4 = x11_2 * (x9_3 u>> 2)
        uint64_t x10_3 = 1
        int64_t i
        
        do
            int32_t x11_3 = *(x8_1 - 4 + (i_4 << 2))
            i = i_4
            i_4 -= 1
            x10_3 = zx.q(x10_3.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x23 -= x10_3
        while (i != 1)
    
    *(arg1 + 0x18) = x23
    x25 = *(arg2 + 0x18)
    
    if (x25 != -1)
        goto label_dd5bf8
    
    goto label_dd5c78

x25 = *(arg2 + 0x18)
int64_t x24

if (x25 == -1)
label_dd5c78:
    int64_t x8_3 = *arg2
    int64_t x10_4 = *(arg2 + 8)
    int64_t x9_5 = x10_4 - x8_3
    
    if (x10_4 == x8_3)
        x25 = 0
    else
        int64_t x11_5
        
        x11_5 = x9_5 s>= 0 ? x9_5 : -1
        
        int64_t x10_5 = x8_3 - x10_4
        int64_t x11_6
        
        x11_6 = x11_5 s< 1 ? x11_5 : 1
        
        x25 = x9_5 s>> 2
        int64_t x9_6
        
        x9_6 = x10_5 s> x9_5 ? x10_5 : x9_5
        
        int64_t i_5 = x11_6 * (x9_6 u>> 2)
        uint64_t x10_6 = 1
        int64_t i_1
        
        do
            int32_t x11_7 = *(x8_3 - 4 + (i_5 << 2))
            i_1 = i_5
            i_5 -= 1
            x10_6 = zx.q(x10_6.d) & zx.q(((x11_7 - 1) & not.d(x11_7)) s>> 0x1f)
            x25 -= x10_6
        while (i_1 != 1)
    
    *(arg2 + 0x18) = x25
    x24 = *(arg3 + 0x18)
    
    if (x24 == -1)
        goto label_dd5ce8
else
label_dd5bf8:
    x24 = *(arg3 + 0x18)
    
    if (x24 == -1)
    label_dd5ce8:
        int64_t x8_5 = *arg3
        int64_t x10_7 = *(arg3 + 8)
        int64_t x9_8 = x10_7 - x8_5
        
        if (x10_7 == x8_5)
            x24 = 0
        else
            int64_t x11_9
            
            x11_9 = x9_8 s>= 0 ? x9_8 : -1
            
            int64_t x10_8 = x8_5 - x10_7
            int64_t x11_10
            
            x11_10 = x11_9 s< 1 ? x11_9 : 1
            
            x24 = x9_8 s>> 2
            int64_t x9_9
            
            x9_9 = x10_8 s> x9_8 ? x10_8 : x9_8
            
            int64_t i_6 = x11_10 * (x9_9 u>> 2)
            uint64_t x10_9 = 1
            int64_t i_2
            
            do
                int32_t x11_11 = *(x8_5 - 4 + (i_6 << 2))
                i_2 = i_6
                i_6 -= 1
                x10_9 = zx.q(x10_9.d) & zx.q(((x11_11 - 1) & not.d(x11_11)) s>> 0x1f)
                x24 -= x10_9
            while (i_2 != 1)
        
        *(arg3 + 0x18) = x24

uint64_t x8_7 = x25 + x23
uint64_t x8_8

x8_8 = x8_7 u< x24 ? x24 : x8_7

int64_t* entry_x8
__builtin_memset(entry_x8, 0, 0x18)
entry_x8[4].d = 1
entry_x8[3] = -1
uint32_t* x0_1
int64_t x8_11

if (((x8_8 + 1) & 0xfffffffffffffff8) == -8)
    x0_1 = nullptr
    x8_11 = 0
else
    std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(entry_x8)
    x0_1 = *entry_x8
    x8_11 = entry_x8[1]

size_t x27 = x8_11 - x0_1
entry_x8[4].d = x26
void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* var_70_1
int64_t x1_1
void* result_4
void* result_3

if (x8_11 == x0_1)
    x1_1 = 0
    result_3 = nullptr
    result_4 = nullptr
else
    if ((x27 & 0xffffffff80000000) != 0)
        sub_1101e04(std::__ndk1::__vector_base_common<true>::__throw_length_error())
        noreturn
    
    int64_t x28 = x27 s>> 2
    void* result_2 = Botan::allocate_memory(x28, 4)
    result_4 = result_2
    result_1 = result_2
    var_70_1 = result_2 + (x28 << 2)
    result_3 = x27 + result_2
    memset(result_2, 0, x27)
    x0_1 = *entry_x8
    int64_t x8_13 = entry_x8[1]
    result_1 = result_3
    x1_1 = (x8_13 - x0_1) s>> 2

entry_x8[3] = -1
uint32_t* x2_1 = *arg1
uint32_t* x5 = *arg2
void* result_5 = result_4
int64_t var_88 = (result_3 - result_4) s>> 2
Botan::bigint_mul(x0_1, x1_1, x2_1, (*(arg1 + 8) - x2_1) s>> 2, x23, x5, (*(arg2 + 8) - x5) s>> 2, 
    x25)
uint64_t x8_18 = entry_x8[3]
uint32_t* x21_1

if (x8_18 == -1)
    x21_1 = *entry_x8
    int64_t x9_13 = entry_x8[1]
    void* x10_11 = x9_13 - x21_1
    
    if (x9_13 == x21_1)
        x8_18 = 0
    else
        void* x12_4
        
        x12_4 = x10_11 s>= 0 ? x10_11 : -ffffffffffffffff
        
        void* x11_13 = x21_1 - x9_13
        void* x12_5
        
        x12_5 = x12_4 s< 1 ? x12_4 : 1
        
        x8_18 = x10_11 s>> 2
        void* x10_12
        
        x10_12 = x11_13 s> x10_11 ? x11_13 : x10_11
        
        int64_t i_7 = x12_5 * (x10_12 u>> 2)
        uint64_t x11_14 = 1
        int64_t i_3
        
        do
            int32_t x12_6 = *(x21_1 - 4 + (i_7 << 2))
            i_3 = i_7
            i_7 -= 1
            x11_14 = zx.q(x11_14.d) & zx.q(((x12_6 - 1) & not.d(x12_6)) s>> 0x1f)
            x8_18 -= x11_14
        while (i_3 != 1)
    
    entry_x8[3] = x8_18
else
    x21_1 = *entry_x8

entry_x8[3] = -1
uint64_t x20_1

x20_1 = x8_18 u< x24 ? x24 : x8_18

int32_t x0_4 = Botan::bigint_add2_nc(x21_1, x20_1, *arg3, x24)
x21_1[x20_1] += x0_4
void* result = result_1

if (result == 0)
    return result

result_1 = result
return Botan::deallocate_memory(result, (var_70_1 - result) s>> 2, 4)
