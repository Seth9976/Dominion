// 函数: sub_ef6634
// 地址: 0xef6634
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x26 = *(arg2 + 0x28)
int64_t* x20 = *(arg2 + 0x30)

if (x20 != 0)
    int32_t i
    
    do
        i = __stxr(__ldxr(&x20[1]) + 1, &x20[1])
    while (i != 0)

int64_t* x0 = operator new(0x50)
x0[2] = 0
x0[1] = 0
*x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Exponentation_State const, std::__ndk1::allocator<Botan::Montgomery_Exponentation_State const> >
    + 0x10
int64_t var_60 = x26
int64_t* var_58 = x20

if (x20 != 0)
    int32_t i_1
    
    do
        i_1 = __stxr(__ldxr(&x20[1]) + 1, &x20[1])
    while (i_1 != 0)

Botan::Montgomery_Exponentation_State::Montgomery_Exponentation_State(&x0[3], &var_60, arg3, true)

if (x20 != 0)
    int64_t x8_4
    int32_t i_2
    
    do
        x8_4 = __ldaxr(&x20[1])
        i_2 = __stlxr(x8_4 - 1, &x20[1])
    while (i_2 != 0)
    
    if (x8_4 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()
    
    int64_t x8_7
    int32_t i_3
    
    do
        x8_7 = __ldaxr(&x20[1])
        i_3 = __stlxr(x8_7 - 1, &x20[1])
    while (i_3 != 0)
    
    if (x8_7 == 0)
        (*(*x20 + 0x10))(x20)
        std::__ndk1::__shared_weak_count::__release_weak()

*(arg2 + 0x20)
int64_t result = Botan::Montgomery_Exponentation_State::exponentiation(&x0[3], *(arg2 + 0x18))
int64_t x8_11
int32_t i_4

do
    x8_11 = __ldaxr(&x0[1])
    i_4 = __stlxr(x8_11 - 1, &x0[1])
while (i_4 != 0)

if (x8_11 != 0)
    return result

(*(*x0 + 0x10))(x0)
return std::__ndk1::__shared_weak_count::__release_weak() __tailcall
