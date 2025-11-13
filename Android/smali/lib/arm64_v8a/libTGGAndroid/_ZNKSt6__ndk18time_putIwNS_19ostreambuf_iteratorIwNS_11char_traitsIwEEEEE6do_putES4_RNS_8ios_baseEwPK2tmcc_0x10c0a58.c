// 函数: _ZNKSt6__ndk18time_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwPK2tmcc
// 地址: 0x10c0a58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
std::__ndk1::ios_base& result = arg2
int64_t var_48 = *(x20 + 0x28)
struct tm var_1e0
var_1e0.tm_sec.q = &var_48
var_1d8
std::__ndk1::__time_put::__do_put(arg1 + 0x10, &var_1d8, &var_1e0, arg5, arg6)
int64_t x21
x21.d = var_1e0.tm_sec
x21:4.d = var_1e0.tm_min

if (&var_1d8 != x21)
    void* x22_1 = &var_1d8
    
    do
        if (result != 0)
            int32_t* x8_1 = *(result + 0x30)
            int32_t x1_1 = *x22_1
            
            if (x8_1 != *(result + 0x38))
                *(result + 0x30) = &x8_1[1]
                *x8_1 = x1_1
            else
                x1_1 = (*(*result + 0x68))(result, x1_1)
            
            if (x1_1 == 0xffffffff)
                result = nullptr
        
        x22_1 += 4
    while (x21 != x22_1)

if (*(x20 + 0x28) == var_48)
    return result

__stack_chk_fail()
noreturn
