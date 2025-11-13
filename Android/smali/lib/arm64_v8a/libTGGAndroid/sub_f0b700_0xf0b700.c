// 函数: sub_f0b700
// 地址: 0xf0b700
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = *(arg1 + 8)
void* x22 = *(x23 + 0x10)
uint32_t var_44 = 1
Botan::BigInt::add2(x22 + 0x28, &var_44, 1, 0)
void* var_c0
Botan::operator*(*(arg1 + 0x18), &var_c0)
uint64_t var_80
uint64_t x2 = var_80
void* var_98
uint32_t* x1_2 = var_98

if (x2 == -1)
    int64_t var_90
    void* x9_1 = var_90 - x1_2
    
    if (var_90 == x1_2)
        x2 = 0
    else
        void* x11_1
        
        x11_1 = x9_1 s>= 0 ? x9_1 : -ffffffffffffffff
        
        void* x10_1 = x1_2 - var_90
        void* x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        x2 = x9_1 s>> 2
        void* x9_2
        
        x9_2 = x10_1 s> x9_1 ? x10_1 : x9_1
        
        int64_t i_6 = x11_2 * (x9_2 u>> 2)
        uint64_t x10_2 = 1
        int32_t i
        
        do
            int32_t x11_3 = *(x1_2 - 4 + (i_6 << 2))
            i = i_6
            i_6 -= 1
            x10_2 = zx.q(x10_2.d) & zx.q(((x11_3 - 1) & not.d(x11_3)) s>> 0x1f)
            x2 -= x10_2
        while (i != 1)
    
    uint64_t var_80_1 = x2

int32_t var_78
Botan::BigInt::add2(x22 + 0x78, x1_2, x2, zx.q(var_78))
void* x0_3 = var_98
int64_t var_88

if (x0_3 != 0)
    void* var_90_1 = x0_3
    Botan::deallocate_memory(x0_3, (var_88 - x0_3) s>> 2, 4)

void* x0_4 = var_c0

if (x0_4 != 0)
    void* var_b8_1 = x0_4
    int64_t var_b0
    Botan::deallocate_memory(x0_4, (var_b0 - x0_4) s>> 2, 4)

void* x8_8 = *(x23 + 0x10)
void* x25 = *(x8_8 + 0x1a0)
int64_t* x20_1 = *(x8_8 + 0x1a8)

if (x20_1 != 0)
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(&x20_1[1]) + 1, &x20_1[1])
    while (i_1 != 0)
    x8_8 = *(x23 + 0x10)

*(arg1 + 0x10)
Botan::Modular_Reducer::reduce(x8_8 + 0xf0)
int64_t* x0_6 = operator new(0x50)
x0_6[2] = 0
x0_6[1] = 0
*x0_6 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Exponentation_State const, std::__ndk1::allocator<Botan::Montgomery_Exponentation_State const> >
    + 0x10
var_c0 = x25
int64_t* var_b8_2 = x20_1

if (x20_1 != 0)
    int32_t i_2
    
    do
        i_2 = __stxr(__ldxr(&x20_1[1]) + 1, &x20_1[1])
    while (i_2 != 0)

Botan::Montgomery_Exponentation_State::Montgomery_Exponentation_State(&x0_6[3], &var_c0, &var_98, 
    true)
int64_t x9_8

if (x20_1 != 0)
    int32_t i_3
    
    do
        x9_8 = __ldaxr(&x20_1[1])
        i_3 = __stlxr(x9_8 - 1, &x20_1[1])
    while (i_3 != 0)

void* var_90_2
void* x0_8

if (x20_1 != 0 && x9_8 == 0)
    (*(*x20_1 + 0x10))(x20_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_8 = var_98
    
    if (x0_8 != 0)
        var_90_2 = x0_8
        Botan::deallocate_memory(x0_8, (var_88 - x0_8) s>> 2, 4)
else
    x0_8 = var_98
    
    if (x0_8 != 0)
        var_90_2 = x0_8
        Botan::deallocate_memory(x0_8, (var_88 - x0_8) s>> 2, 4)

if (x20_1 != 0)
    int64_t x9_9
    int32_t i_4
    
    do
        x9_9 = __ldaxr(&x20_1[1])
        i_4 = __stlxr(x9_9 - 1, &x20_1[1])
    while (i_4 != 0)
    
    if (x9_9 == 0)
        (*(*x20_1 + 0x10))(x20_1)
        std::__ndk1::__shared_weak_count::__release_weak()

*(x23 + 0x148)
void* result_1
Botan::Montgomery_Exponentation_State::exponentiation(&x0_6[3], &result_1)
int64_t x8_17
int32_t i_5

do
    x8_17 = __ldaxr(&x0_6[1])
    i_5 = __stlxr(x8_17 - 1, &x0_6[1])
while (i_5 != 0)
void* result
void* result_2
int64_t var_60

if (x8_17 == 0)
    (*(*x0_6 + 0x10))(x0_6)
    std::__ndk1::__shared_weak_count::__release_weak()
    result = result_1
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, (var_60 - result) s>> 2, 4)
else
    result = result_1
    
    if (result != 0)
        result_2 = result
        return Botan::deallocate_memory(result, (var_60 - result) s>> 2, 4)
return result
