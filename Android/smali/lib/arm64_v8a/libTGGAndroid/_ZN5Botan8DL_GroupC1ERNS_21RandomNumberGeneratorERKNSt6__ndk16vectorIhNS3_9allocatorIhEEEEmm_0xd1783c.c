// 函数: _ZN5Botan8DL_GroupC1ERNS_21RandomNumberGeneratorERKNSt6__ndk16vectorIhNS3_9allocatorIhEEEEmm
// 地址: 0xd1783c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
void* result_1
__builtin_memset(&result_1, 0, 0x18)
void* var_80
__builtin_memset(&var_80, 0, 0x18)
int64_t var_40 = -1
int32_t var_38 = 1
int64_t var_68 = -1
int32_t var_60 = 1
int128_t var_b0
uint64_t entry_x4

if ((Botan::generate_dsa_primes(arg2, &result_1, &var_80, arg4, entry_x4, arg3, 0) & 1) == 0)
    void** x0_9 = __cxa_allocate_exception(0x20)
    int64_t x0_10
    int128_t v2
    x0_10, v2 = operator new(0x40)
    (*"t generate a DSA group")[0].o
    int64_t var_a0_1 = x0_10
    v2 = data_71bff0
    __builtin_strncpy(x0_10, "DL_Group: The seed given does not generate a DSA group", 0x37)
    var_b0 = v2
    *x0_9 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_9[1])
    *x0_9 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_9, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

sub_d170a8(&var_b0, &result_1, &var_80)
void** x0_3 = operator new(0x188)
x0_3[2] = 0
*x0_3 = _vtable_for_std::__ndk1::__shared_ptr_emplace<Botan::DL_Group_Data, std::__ndk1::allocator<Botan::DL_Group_Data> >
    + 0x10
x0_3[1] = 0
Botan::DL_Group_Data::DL_Group_Data(&x0_3[3], &result_1, &var_80, &var_b0)
int64_t* x20 = *(arg1 + 8)
*arg1 = &x0_3[3]
*(arg1 + 8) = x0_3
int64_t x9_1

if (x20 != 0)
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20[1])
        i = __stlxr(x9_1 - 1, &x20[1])
    while (i != 0)

int64_t var_a0
void* x0_5

if (x20 != 0 && x9_1 == 0)
    (*(*x20 + 0x10))(x20)
    std::__ndk1::__shared_weak_count::__release_weak()
    x0_5 = var_b0.q
    
    if (x0_5 != 0)
        var_b0:8.q = x0_5
        Botan::deallocate_memory(x0_5, (var_a0 - x0_5) s>> 2, 4)
else
    x0_5 = var_b0.q
    
    if (x0_5 != 0)
        var_b0:8.q = x0_5
        Botan::deallocate_memory(x0_5, (var_a0 - x0_5) s>> 2, 4)
void* x0_6 = var_80

if (x0_6 != 0)
    void* var_78_1 = x0_6
    int64_t var_70
    Botan::deallocate_memory(x0_6, (var_70 - x0_6) s>> 2, 4)

void* result = result_1

if (result == 0)
    return result

void* result_2 = result
int64_t var_48
return Botan::deallocate_memory(result, (var_48 - result) s>> 2, 4)
