// 函数: _ZNKSt6__ndk17num_getIwNS_19istreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_getES4_S4_RNS_8ios_baseERjRb
// 地址: 0x10b3d34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t var_58 = *(x24 + 0x28)
int64_t result_1 = arg2
int64_t result
int64_t (* const var_88)()
char* entry_x5

if ((zx.d(arg4[2].b) & 1) != 0)
    std::__ndk1::ios_base::getloc()
    int64_t var_78_1 = 0
    var_88 = std::__ndk1::ctype<wchar_t>::id
    int64_t (* const var_80_1)() = std::__ndk1::locale::id::__init
    int64_t* var_98
    int64_t (* const* var_90)()
    
    if (*std::__ndk1::ctype<wchar_t>::id != -1)
        var_98 = &var_90
        var_90 = &var_88
        std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_98, sub_10dd4b0)
    
    void* var_a8
    int64_t x8_6 = *(var_a8 + 0x10)
    int64_t x9_2 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1
    int64_t* x22_2
    
    if (x9_2 u< (*(var_a8 + 0x18) - x8_6) s>> 3)
        x22_2 = *(x8_6 + (x9_2 << 3))
    
    if (x9_2 u>= (*(var_a8 + 0x18) - x8_6) s>> 3 || x22_2 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__release_shared()
    std::__ndk1::ios_base::getloc()
    void* var_78_2 = nullptr
    var_88 = std::__ndk1::numpunct<wchar_t>::id
    int64_t (* const var_80_2)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::numpunct<wchar_t>::id != -1)
        var_98 = &var_90
        var_90 = &var_88
        std::__ndk1::__call_once(std::__ndk1::numpunct<wchar_t>::id, &var_98, sub_10dd4b0)
    
    int64_t x8_8 = *(var_a8 + 0x10)
    int64_t x9_4 = sx.q(*(std::__ndk1::numpunct<wchar_t>::id + 8)) - 1
    int64_t* x23_2
    
    if (x9_4 u< (*(var_a8 + 0x18) - x8_8) s>> 3)
        x23_2 = *(x8_8 + (x9_4 << 3))
    
    if (x9_4 u>= (*(var_a8 + 0x18) - x8_8) s>> 3 || x23_2 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__release_shared()
    (*(*x23_2 + 0x30))(x23_2)
    (*(*x23_2 + 0x38))(x23_2)
    *entry_x5 =
        (sub_10b3ff4(&result_1, arg3, &var_88, &var_58, x22_2, arg5, 1) == &var_88 ? 1 : 0).b
    result = result_1
    char var_70
    void* var_60
    
    if ((zx.d(var_70) & 1) != 0)
        operator delete(var_60)
    
    if ((zx.d(var_88.b) & 1) != 0)
        operator delete(var_78_2)
else
    var_88 = -ffffffffffffffff
    int64_t result_2 = (*(*arg1 + 0x20))(arg1, arg2, arg3, arg4, arg5, &var_88)
    int64_t (* const x8_4)() = var_88
    result = result_2
    result_1 = result_2
    
    if (x8_4 == 1)
        *entry_x5 = (x8_4.d).b
    else if (x8_4 != 0)
        *entry_x5 = 1
        *arg5 = true
    else
        *entry_x5 = 0

if (*(x24 + 0x28) == var_58)
    return result

__stack_chk_fail()
noreturn
