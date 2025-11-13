// 函数: _ZNKSt6__ndk111__lookaheadIcNS_12regex_traitsIcEEE6__execERNS_7__stateIcEE
// 地址: 0xf12098
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_60
__builtin_memset(&var_60, 0, 0x11)
int64_t var_48
__builtin_memset(&var_48, 0, 0x11)
char var_30 = 0
int64_t var_28 = 0
void* result_1
__builtin_memset(&result_1, 0, 0x18)
int32_t* entry_x1
int64_t x21 = *(entry_x1 + 0x10)
int64_t x9 = *(entry_x1 + 0x18)
int64_t var_70 = x9
char var_68 = 0
std::__ndk1::vector<std::__ndk1::sub_match<char const*>, std::__ndk1::allocator<std::__ndk1::sub_match<char const*> > >::assign(
    &result_1, zx.q(*(arg1 + 0x2c) + 1))
int64_t var_60_1 = x21
int64_t var_58 = x21
char var_50 = 0
int64_t var_28_1 = x21
char var_30_1 = 1
var_48.o = x9.o
char var_38 = var_68
entry_x1[0x17].b
*(entry_x1 + 8)
int32_t x0_2 = std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__match_at_start_ecma<std::__ndk1::allocator<std::__ndk1::sub_match<char const*> > >(
    arg1 + 0x10, *(entry_x1 + 0x10), *(entry_x1 + 0x18), &result_1, 
    ((entry_x1[0x16]).b & 0xff) | 0x40)
void* result

if (zx.d(*(arg1 + 0x54)) != (x0_2 & 1))
    *entry_x1 = 0xfffffc1e
    *(entry_x1 + 0x50) = *(arg1 + 8)
    result = result_1
    int64_t var_88
    
    if (((var_88 - result) s>> 3) * -0x5555555555555555 u>= 2)
        int32_t x9_6 = 0
        uint64_t i = 1
        
        do
            int64_t* x11_1 = result + i * 0x18
            int64_t* x12_3 = *(entry_x1 + 0x20) + mulu.dp.d(x9_6 + *(arg1 + 0x50), 0x18)
            *x12_3 = *x11_1
            x12_3[1] = x11_1[1]
            x12_3[2].b = x11_1[2].b
            result = result_1
            i = zx.q(x9_6 + 2)
            x9_6 += 1
        while (((var_88 - result) s>> 3) * -0x5555555555555555 u> i)
else
    *entry_x1 = 0xfffffc1f
    *(entry_x1 + 0x50) = 0
    result = result_1

if (result == 0)
    return result

void* result_2 = result
return operator delete(result)
