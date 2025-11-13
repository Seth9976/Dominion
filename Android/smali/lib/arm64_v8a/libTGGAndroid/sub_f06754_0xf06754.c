// 函数: sub_f06754
// 地址: 0xf06754
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x0_1 = Botan::BigInt::bits()
Botan::BigInt::bits()
uint64_t x22 = zx.q(*(arg1 + 0xd0))
char x8

if (x0_1 == 0)
    x8 = 1
else if (x0_1 u>= 0x59a)
    x8 = (*((0 << 4) + 0x837240)).b + 1
else if (x0_1 u> 0x21a)
    x8 = (*((1 << 4) + 0x837240)).b + 1
else if (x0_1 u> 0xc4)
    x8 = (*((2 << 4) + 0x837240)).b + 1
else if (x0_1 u> 0x45)
    x8 = (*((3 << 4) + 0x837240)).b + 1
else if (x0_1 u> 0x10)
    x8 = (*((4 << 4) + 0x837240)).b + 1
else
    x8 = 1

int64_t x23 = *(arg1 + 0x88)
int64_t* x19_1 = *(arg1 + 0x90)
char x24

if ((x22.d & 1) == 0)
    x24 = x8
else
    x24 = x8 + 2

if (x19_1 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x19_1[1]) + 1, &x19_1[1])
    while (i != 0)

Botan::Modular_Reducer::reduce(arg1 + 0x30)
int64_t* x0_4 = operator new(0x50)
x0_4[2] = 0
*x0_4 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Exponentation_State const, std::__ndk1::allocator<Botan::Montgomery_Exponentation_State const> >
    + 0x10
x0_4[1] = 0
int64_t var_50 = x23
int64_t* var_48 = x19_1

if (x19_1 != 0)
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(&x19_1[1]) + 1, &x19_1[1])
    while (i_1 != 0)

void* result_1
Botan::Montgomery_Exponentation_State::Montgomery_Exponentation_State(&x0_4[3], &var_50, &result_1, 
    x24 + ((x22 u>> 0xa).b & 1))

if (x19_1 != 0)
    int64_t x9_5
    int32_t i_2
    
    do
        x9_5 = __ldaxr(&x19_1[1])
        i_2 = __stlxr(x9_5 - 1, &x19_1[1])
    while (i_2 != 0)
    
    if (x9_5 == 0)
        (*(*x19_1 + 0x10))(x19_1)
        std::__ndk1::__shared_weak_count::__release_weak()

int64_t* x23_1 = *(arg1 + 0xa0)
*(arg1 + 0x98) = &x0_4[3]
*(arg1 + 0xa0) = x0_4
int64_t x9_6

if (x23_1 != 0)
    int32_t i_3
    
    do
        x9_6 = __ldaxr(&x23_1[1])
        i_3 = __stlxr(x9_6 - 1, &x23_1[1])
    while (i_3 != 0)

void* result
void* result_2
int64_t var_68

if (x23_1 != 0 && x9_6 == 0)
    (*(*x23_1 + 0x10))(x23_1)
    std::__ndk1::__shared_weak_count::__release_weak()
    result = result_1
    
    if (result != 0)
        result_2 = result
        result = Botan::deallocate_memory(result, (var_68 - result) s>> 2, 4)
else
    result = result_1
    
    if (result != 0)
        result_2 = result
        result = Botan::deallocate_memory(result, (var_68 - result) s>> 2, 4)

if (x19_1 != 0)
    int64_t x9_7
    int32_t i_4
    
    do
        x9_7 = __ldaxr(&x19_1[1])
        i_4 = __stlxr(x9_7 - 1, &x19_1[1])
    while (i_4 != 0)
    
    if (x9_7 == 0)
        (*(*x19_1 + 0x10))(x19_1)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
