// 函数: _ZN5Botan15Buffered_FilterC2Emm
// 地址: 0xd78190
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(arg1 + 8) = arg2
int64_t entry_x2
*(arg1 + 0x10) = entry_x2
*arg1 = _vtable_for_Botan::Buffered_Filter + 0x10
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0

if (arg2 == 0)
    void** x0_1 = __cxa_allocate_exception(0x20)
    char var_50_1
    __builtin_strncpy(&var_50_1, "*m_main_block_mod == 0", 0x17)
    *x0_1 = _vtable_for_Botan::Exception + 0x10
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &x0_1[1])
    *x0_1 = _vtable_for_Botan::Invalid_Argument + 0x10
    __cxa_throw(x0_1, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
    noreturn

if (entry_x2 u<= arg2)
    if (arg2 << 1 != 0)
        std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::__append(arg1 + 0x18)
    
    *(arg1 + 0x30) = 0
    return 

void** x0_4 = __cxa_allocate_exception(0x20)
int64_t x0_5
int128_t v0
x0_5, v0 = operator new(0x30)
v0 = data_71d3f0
int128_t var_4f
var_4f:0xf.q = x0_5
__builtin_strncpy(x0_5, "m_final_minimum > m_main_block_mod", 0x23)
char var_50
var_50.o = v0
*x0_4 = _vtable_for_Botan::Exception + 0x10
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &x0_4[1])
*x0_4 = _vtable_for_Botan::Invalid_Argument + 0x10
__cxa_throw(x0_4, _typeinfo_for_Botan::Invalid_Argument, Botan::Exception::~Exception)
noreturn
