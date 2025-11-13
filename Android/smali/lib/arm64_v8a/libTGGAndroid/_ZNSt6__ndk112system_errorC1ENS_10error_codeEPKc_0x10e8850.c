// 函数: _ZNSt6__ndk112system_errorC1ENS_10error_codeEPKc
// 地址: 0x10e8850
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >* 
    x19 = arg1
char const* var_58 = arg2
int64_t x2
int64_t var_50 = x2
char* entry_x3
size_t x0_1 = strlen(entry_x3)

if (x0_1 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    int64_t var_88
    void* var_78
    void* x22_1
    
    if (x0_1 u>= 0x17)
        uint64_t x23_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
        void* x0_3 = operator new(x23_1)
        x22_1 = x0_3
        size_t var_80_1 = x0_1
        var_78 = x0_3
        var_88 = x23_1 | 1
        memcpy(x22_1, entry_x3, x0_1)
    else
        x22_1 = &var_88 | 1
        var_88.b = (x0_1.d << 1).b
        
        if (x0_1 != 0)
            memcpy(x22_1, entry_x3, x0_1)
    
    *(x22_1 + x0_1) = 0
    std::__ndk1::system_error::__init(&var_58, &var_88)
    int64_t result
    int128_t v0_1
    result, v0_1 = std::runtime_error::runtime_error(x19)
    char var_70
    void* var_60
    
    if ((zx.d(var_70) & 1) != 0)
        result, v0_1 = operator delete(var_60)
    
    if ((zx.d(var_88.b) & 1) != 0)
        result, v0_1 = operator delete(var_78)
    
    *x19 = _vtable_for_std::__ndk1::system_error + 0x10
    *(x19 + 0x10) = var_58.o
    
    if (*(x24 + 0x28) == x8)
        return result

__stack_chk_fail()
noreturn
