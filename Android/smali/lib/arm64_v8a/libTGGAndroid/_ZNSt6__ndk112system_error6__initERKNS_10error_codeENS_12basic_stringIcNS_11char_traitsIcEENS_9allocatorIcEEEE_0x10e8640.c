// 函数: _ZNSt6__ndk112system_error6__initERKNS_10error_codeENS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
// 地址: 0x10e8640
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x22 + 0x28)
char* x19 = arg2

if (*arg1 != 0)
    uint64_t x8 = zx.q(*x19)
    
    if ((x8.d & 1) != 0)
        if (*(x19 + 8) != 0)
            std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
                x19)
    else if (x8 u>> 1 != 0)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
            x19)
    
    (*(**(arg1 + 8) + 0x30))()
    char var_50
    uint64_t var_40
    uint64_t x1_2
    
    if ((zx.d(var_50) & 1) == 0)
        x1_2 = &var_50 | 1
    else
        x1_2 = var_40
    
    int128_t v0
    arg1, v0 = std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::append(
        x19, x1_2)
    
    if ((zx.d(var_50) & 1) != 0)
        arg1, v0 = operator delete(var_40)

int128_t* entry_x8
entry_x8[1].q = *(x19 + 0x10)
*entry_x8 = *x19
__builtin_memset(x19, 0, 0x18)

if (*(x22 + 0x28) == x9)
    return 

__stack_chk_fail()
noreturn
