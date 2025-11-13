// 函数: _ZN5Botan28is_bailie_psw_probable_primeERKNS_6BigIntERKNS_15Modular_ReducerE
// 地址: 0xdd8170
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** x0 = operator new(0xc8)
x0[2] = 0
*x0 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::Montgomery_Params, std::__ndk1::allocator<Botan::Montgomery_Params> >
    + 0x10
x0[1] = 0
Botan::Montgomery_Params::Montgomery_Params(&x0[3], arg1)
void* var_40 = &x0[3]
void** var_38 = x0
int32_t* var_68
__builtin_memset(&var_68, 0, 0x18)
int32_t var_48 = 1
int64_t var_50 = -1
std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::__append(&var_68)
*var_68 = 2
int32_t* x8_2 = var_68
int64_t var_50_1 = -1
int64_t var_60

if ((var_60 - x8_2) s>> 2 u>= 2)
    x8_2[1] = 0

int32_t x20_1
int32_t* var_60_1
int64_t var_58
int32_t* x0_7

if ((Botan::passes_miller_rabin_test(arg1, arg2, &var_40, &var_68) & 1) == 0)
    x20_1 = 0
    x0_7 = var_68
    
    if (x0_7 != 0)
        var_60_1 = x0_7
        Botan::deallocate_memory(x0_7, (var_58 - x0_7) s>> 2, 4)
else
    x20_1 = Botan::is_lucas_probable_prime(arg1, arg2)
    x0_7 = var_68
    
    if (x0_7 != 0)
        var_60_1 = x0_7
        Botan::deallocate_memory(x0_7, (var_58 - x0_7) s>> 2, 4)
int64_t x9_3
int32_t i

do
    x9_3 = __ldaxr(&x0[1])
    i = __stlxr(x9_3 - 1, &x0[1])
while (i != 0)

if (x9_3 == 0)
    (*(*x0 + 0x10))(x0)
    std::__ndk1::__shared_weak_count::__release_weak()

return zx.q(x20_1) & 1
