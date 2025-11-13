// 函数: _ZNSt6__ndk112system_errorC1EiRKNS_14error_categoryEPKc
// 地址: 0x10e8bc8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
int64_t* x20 = arg1
int32_t var_80 = arg2.d
char const* var_78 = arg3
char* entry_x3
size_t x0_1 = strlen(entry_x3)

if (x0_1 u>= -0x10)
    std::__ndk1::__basic_string_common<true>::__throw_length_error()
else
    int64_t var_98
    void* var_88
    void* x24_1
    
    if (x0_1 u>= 0x17)
        uint64_t x25_1 = (x0_1 + 0x10) & 0xfffffffffffffff0
        void* x0_3 = operator new(x25_1)
        x24_1 = x0_3
        size_t var_90_1 = x0_1
        var_88 = x0_3
        var_98 = x25_1 | 1
        memcpy(x24_1, entry_x3, x0_1)
    else
        x24_1 = &var_98 | 1
        var_98.b = (x0_1.d << 1).b
        
        if (x0_1 != 0)
            memcpy(x24_1, entry_x3, x0_1)
    
    *(x24_1 + x0_1) = 0
    std::__ndk1::system_error::__init(&var_80, &var_98)
    int64_t result = std::runtime_error::runtime_error(x20)
    char var_70
    void* var_60
    
    if ((zx.d(var_70) & 1) != 0)
        result = operator delete(var_60)
    
    if ((zx.d(var_98.b) & 1) != 0)
        result = operator delete(var_88)
    
    x20[2].d = arg2.d
    x20[3] = arg3
    *x20 = _vtable_for_std::__ndk1::system_error + 0x10
    
    if (*(x26 + 0x28) == x8)
        return result

__stack_chk_fail()
noreturn
