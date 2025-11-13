// 函数: _ZN5Botan8CCM_Mode9format_b0Em
// 地址: 0xcf2b20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x28) - *(arg1 + 0x20) != 0xf - *(arg1 + 0x10))
    void** x0_7 = __cxa_allocate_exception(0x20)
    int64_t x0_8
    int128_t v0
    x0_8, v0 = operator new(0x20)
    int64_t var_50_1 = x0_8
    int128_t var_60_1 = data_71c520
    __builtin_strncpy(x0_8, "CCM mode must set nonce", 0x18)
    *x0_7 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_7[1])
    *x0_7 = _vtable_for_Botan::Invalid_State + 0x10
    __cxa_throw(x0_7, _typeinfo_for_Botan::Invalid_State, Botan::Exception::~Exception)
    noreturn

int64_t** entry_x8
__builtin_memset(entry_x8, 0, 0x18)
int64_t* x0 = Botan::allocate_memory(0x10, 1)
*x0 = 0
x0[1] = 0
entry_x8[1] = &x0[2]
entry_x8[2] = &x0[2]
*entry_x8 = x0
int64_t x24 = *(arg1 + 0x50)
int64_t x23 = *(arg1 + 0x58)
char x8_3 = ((*(*arg1 + 0x80))(arg1) << 2).b
char x10_2

x10_2 = x23 == x24 ? -1 : 0x3f

*x0 = x10_2 + ((x8_3 - 8) & 0xf8) + (*(arg1 + 0x10)).b
int64_t x1 = *(arg1 + 0x20)
int64_t x8_8 = *(arg1 + 0x28)

if (x8_8 != x1)
    if (x1 == 0)
        int64_t* x0_11 = Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
            "If n > 0 then args are not null", "copy_mem", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
        char var_60
        void* var_50
        
        if ((zx.d(var_60) & 1) != 0)
            operator delete(var_50)
        sub_1101e04(x0_11)
        noreturn
    
    memmove(x0 + 1, x1, x8_8 - x1)

uint8_t* entry_x1
return Botan::CCM_Mode::encode_length(arg1, entry_x1)
