// 函数: sub_f140d8
// 地址: 0xf140d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = _vtable_for_std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> > + 0x10
arg1[1] = arg3
std::__ndk1::locale::locale(&arg1[2])
int128_t v0 = *(arg2 + 8)
__builtin_memset(&arg1[5], 0, 0x7c)
*(arg1 + 0xa4) = arg4 & 1
*(arg1 + 0xa5) = arg5 & 1
*(arg1 + 0x18) = v0
*(arg1 + 0xa6) = arg6 & 1
void var_60
std::__ndk1::locale::locale(&var_60)
std::__ndk1::locale::name()
char var_58
uint64_t x9 = zx.q(var_58)
int32_t x8_1 = x9.d & 1
uint64_t x9_2
uint64_t var_50

if (x8_1 == 0)
    x9_2 = x9 u>> 1
else
    x9_2 = var_50
char x20_1
void* var_48

if (x9_2 != 1)
    x20_1 = 1
    
    if ((x8_1 & 0xff) != 0)
        operator delete(var_48)
else
    x20_1 = (std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_58, 0, -ffffffffffffffff, 0x739c3c) != 0 ? 1 : 0).b
    
    if ((zx.d(var_58) & 1) != 0)
        operator delete(var_48)
int64_t result = std::__ndk1::locale::~locale()
*(arg1 + 0xa7) = x20_1
return result
