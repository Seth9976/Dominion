// 函数: _ZN5Botan8FE_25519C2ESt16initializer_listIiE
// 地址: 0xd47ea8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19
int64_t var_8 = x19
int64_t entry_x2

if (entry_x2 != 0xa)
    void** x0 = __cxa_allocate_exception(0x20)
    int64_t x0_1
    int128_t v0_1
    x0_1, v0_1 = operator new(0x30)
    v0_1 = data_71c510
    int64_t var_30_1 = x0_1
    __builtin_strncpy(x0_1, "Invalid FE_25519 initializer list", 0x22)
    int128_t var_40_1 = v0_1
    *x0 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0[1])
    *x0 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

int128_t* entry_x1

if (entry_x1 != 0)
    int128_t v1 = *entry_x1
    int128_t v0 = entry_x1[1]
    *(arg1 + 0x20) = entry_x1[2].q
    *arg1 = v1
    *(arg1 + 0x10) = v0
    return 

int64_t* x0_5 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
    "If n > 0 then args are not null", "copy_mem", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
char var_40
void* var_30

if ((zx.d(var_40) & 1) != 0)
    operator delete(var_30)
sub_1101e04(x0_5)
noreturn
