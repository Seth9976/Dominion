// 函数: _ZN5Botan8EC_GroupC1ERKNS_3OIDE
// 地址: 0xd258e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
Botan::EC_Group::ec_group_data()
int64_t result = Botan::EC_Group_Data_Map::lookup(&data_23ecee0)
int64_t var_50_1 = 0
int64_t* var_48_1 = nullptr
int64_t* x20 = *(arg1 + 8)
int64_t var_50
*arg1 = var_50
int64_t var_48
*(arg1 + 8) = var_48

if (x20 != 0)
    int64_t x9_1
    int32_t i
    
    do
        x9_1 = __ldaxr(&x20[1])
        i = __stlxr(x9_1 - 1, &x20[1])
    while (i != 0)
    
    if (x9_1 == 0)
        (*(*x20 + 0x10))(x20)
        result = std::__ndk1::__shared_weak_count::__release_weak()

if (var_48_1 != 0)
    int64_t x9_2
    int32_t i_1
    
    do
        x9_2 = __ldaxr(&var_48_1[1])
        i_1 = __stlxr(x9_2 - 1, &var_48_1[1])
    while (i_1 != 0)
    
    if (x9_2 == 0)
        (*(*var_48_1 + 0x10))(var_48_1)
        result = std::__ndk1::__shared_weak_count::__release_weak()

if (*arg1 != 0)
    return result

void** x0_4 = __cxa_allocate_exception(0x20)
Botan::OID::to_string()
void var_68
int128_t* x0_7
int128_t v0
x0_7, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert(
    &var_68, nullptr)
int64_t var_40 = x0_7[1].q
var_50_1.o = *x0_7
__builtin_memset(x0_7, 0, 0x18)
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
