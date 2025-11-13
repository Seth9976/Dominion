// 函数: _ZN5Botan11checked_addEmmPKci
// 地址: 0xef2480
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 + arg1 u>= arg2)
    return arg2 + arg1

int32_t var_4c = arg4
void* x0_1 = __cxa_allocate_exception(0x20)
size_t x0_3 = strlen(arg3)

if (x0_3 u>= -0x10)
    x0_3 = std::__ndk1::__basic_string_common<true>::__throw_length_error()

int64_t var_48
int64_t x22

if (x0_3 u>= 0x17)
    uint64_t x23_1 = (x0_3 + 0x10) & 0xfffffffffffffff0
    int64_t x0_5 = operator new(x23_1)
    x22 = x0_5
    size_t var_40_1 = x0_3
    int64_t var_38_1 = x0_5
    var_48 = x23_1 | 1
    memcpy(x22, arg3, x0_3)
else
    x22 = &var_48 | 1
    var_48.b = (x0_3.d << 1).b
    
    if (x0_3 != 0)
        memcpy(x22, arg3, x0_3)

*(x22 + x0_3) = 0
Botan::Integer_Overflow_Detected::Integer_Overflow_Detected(x0_1, &var_48)
__cxa_throw(x0_1, _typeinfo_for_Botan::Integer_Overflow_Detected, Botan::Exception::~Exception)
noreturn
