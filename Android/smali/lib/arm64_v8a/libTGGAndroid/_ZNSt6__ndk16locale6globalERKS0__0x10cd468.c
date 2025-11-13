// 函数: _ZNSt6__ndk16locale6globalERKS0_
// 地址: 0x10cd468
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int64_t* x0 = std::__ndk1::locale::__global()
int64_t* entry_x8
*entry_x8 = *x0
std::__ndk1::__shared_count::__add_shared()
*arg1
std::__ndk1::__shared_count::__add_shared()
*x0
std::__ndk1::__shared_count::__release_shared()
*x0 = *arg1
char var_60
int64_t result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
    &var_60)
uint64_t x9 = zx.q(var_60)
int32_t x8_2 = x9.d & 1
uint64_t x9_2
uint64_t var_58

if (x8_2 == 0)
    x9_2 = x9 u>> 1
else
    x9_2 = var_58
void* var_50
int32_t x21_1

if (x9_2 != 1)
    x21_1 = 1
    
    if ((x8_2 & 0xff) != 0)
        result = operator delete(var_50)
else
    result = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::compare(
        &var_60, 0, -ffffffffffffffff, &data_74e377)
    x21_1 = result.d != 0 ? 1 : 0
    
    if ((zx.d(var_60) & 1) != 0)
        result = operator delete(var_50)

if (x21_1 != 0)
    *x0
    std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::basic_string(
        &var_60)
    int64_t* x1_2
    
    if ((zx.d(var_60) & 1) == 0)
        x1_2 = &var_60 | 1
    else
        x1_2 = var_50
    
    result = setlocale(6, x1_2)
    
    if ((zx.d(var_60) & 1) != 0)
        result = operator delete(var_50)

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
