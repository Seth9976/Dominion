// 函数: _ZNK5Botan22Path_Validation_Result10trust_rootEv
// 地址: 0xec8354
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
void* x8 = *(entry_x0 + 0x38)

if (*(entry_x0 + 0x30) == x8)
    void** x0_1 = __cxa_allocate_exception(0x20)
    int64_t x0_2
    int128_t v0
    x0_2, v0 = operator new(0x30)
    (*"root no path set")[0].o
    int64_t var_30 = x0_2
    v0 = data_71a900
    __builtin_strncpy(x0_2, "Path_Validation_Result::trust_root no path set", 0x2f)
    int128_t var_40 = v0
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

if (*(entry_x0 + 0x48) == 0)
    return *(x8 - 0x10)

void** x0_6 = __cxa_allocate_exception(0x20)
int64_t x0_7
int128_t v0_1
x0_7, v0_1 = operator new(0x50)
v0_1 = data_71b0f0
int64_t var_30_1 = x0_7
__builtin_strncpy(x0_7, "Path_Validation_Result::trust_root meaningless with invalid status", 0x43)
int128_t var_40_1 = v0_1
*x0_6 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_6[1])
*x0_6 = _vtable_for_Botan::Invalid_State + 0x10
__cxa_throw(x0_6, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
noreturn
