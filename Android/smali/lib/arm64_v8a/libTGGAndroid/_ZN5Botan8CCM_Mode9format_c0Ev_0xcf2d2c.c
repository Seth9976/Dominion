// 函数: _ZN5Botan8CCM_Mode9format_c0Ev
// 地址: 0xcf2d2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0

if (*(entry_x0 + 0x28) - *(entry_x0 + 0x20) != 0xf - *(entry_x0 + 0x10))
    void** x0_2 = __cxa_allocate_exception(0x20)
    int64_t x0_3
    int128_t v0_1
    x0_3, v0_1 = operator new(0x20)
    int64_t var_30_1 = x0_3
    int128_t var_40_1 = data_71c520
    __builtin_strncpy(x0_3, "CCM mode must set nonce", 0x18)
    *x0_2 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_2[1])
    *x0_2 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_2, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

void** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
char* result = Botan::allocate_memory(0x10, 1)
*(result + 8) = 0
entry_x8[1] = &result[0x10]
entry_x8[2] = &result[0x10]
*(result + 1) = 0
*entry_x8 = result
*result = *(entry_x0 + 0x10) - 1
int64_t x1 = *(entry_x0 + 0x20)
int64_t x9_5 = *(entry_x0 + 0x28)

if (x9_5 == x1)
    return result

if (x1 != 0)
    return memmove(&result[1], x1, x9_5 - x1) __tailcall

char* result_1 = result
int64_t* x0_6 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
char var_40
void* var_30

if ((zx.d(var_40) & 1) != 0)
    operator delete(var_30)
sub_1101e04(x0_6)
noreturn
