// 函数: _ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwb
// 地址: 0x10ba410
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int32_t entry_x4
uint64_t x20 = zx.q(entry_x4)
std::__ndk1::ios_base& result = arg2

if ((zx.d(*(arg3 + 8)) & 1) != 0)
    std::__ndk1::ios_base::getloc()
    int32_t* var_60_1 = nullptr
    int64_t (* const var_70)() = std::__ndk1::numpunct<wchar_t>::id
    int64_t (* const var_68_1)() = std::__ndk1::locale::id::__init
    
    if (*std::__ndk1::numpunct<wchar_t>::id != -1)
        int64_t (* const* var_50)()
        int64_t* var_58 = &var_50
        var_50 = &var_70
        std::__ndk1::__call_once(std::__ndk1::numpunct<wchar_t>::id, &var_58, sub_10dd4b0)
    
    void* var_78
    int64_t x8_5 = *(var_78 + 0x10)
    int64_t x9_2 = sx.q(*(std::__ndk1::numpunct<wchar_t>::id + 8)) - 1
    int64_t* x21_2
    
    if (x9_2 u< (*(var_78 + 0x18) - x8_5) s>> 3)
        x21_2 = *(x8_5 + (x9_2 << 3))
    
    if (x9_2 u>= (*(var_78 + 0x18) - x8_5) s>> 3 || x21_2 == 0)
        sub_f43870()
        noreturn
    
    std::__ndk1::__shared_count::__release_shared()
    void* x8_6 = *x21_2
    int64_t x9_3
    
    if ((x20.d & 1) == 0)
        x9_3 = *(x8_6 + 0x38)
    else
        x9_3 = *(x8_6 + 0x30)
    
    x9_3(x21_2)
    uint32_t x8_7 = zx.d(var_70.b)
    int32_t* x21_3
    
    if ((x8_7 & 1) == 0)
        x21_3 = &var_70 | 4
    else
        x21_3 = var_60_1
    
    while (true)
        if ((x8_7 & 1) != 0)
            if (x21_3 == &var_60_1[var_68_1])
                operator delete(var_60_1)
                break
        else if (x21_3 == &var_70 + ((zx.q(x8_7 u>> 1) & 0x7f) << 2) + 4)
            break
        
        if (result != 0)
            int32_t* x8_8 = *(result + 0x30)
            int32_t x1_2 = *x21_3
            
            if (x8_8 != *(result + 0x38))
                *(result + 0x30) = &x8_8[1]
                *x8_8 = x1_2
            else
                x1_2 = (*(*result + 0x68))(result, x1_2)
            
            x8_7 = zx.d(var_70.b)
            
            if (x1_2 == 0xffffffff)
                result = nullptr
        
        x21_3 = &x21_3[1]
else
    result = (*(*arg1 + 0x30))(arg1, result, arg3, arg4, x20 & 1)

if (*(x22 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
