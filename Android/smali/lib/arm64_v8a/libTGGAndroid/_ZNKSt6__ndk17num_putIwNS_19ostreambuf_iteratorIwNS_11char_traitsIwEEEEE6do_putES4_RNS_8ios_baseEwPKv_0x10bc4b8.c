// 函数: _ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwPKv
// 地址: 0x10bc4b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int16_t var_11c = 0
int32_t var_120 = 0x7025
void* x20 = arg3

if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
    data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
    __cxa_guard_release(&data_24bad08)

char var_84
int64_t x25 = sx.q(std::__ndk1::__libcpp_snprintf_l(&var_84, 0x14, data_24bad00, &var_120))
void* x22_1 = &(&var_84)[x25]
int32_t x8_3 = *(x20 + 8) & 0xb0
void* x26 = x22_1

if (x8_3 != 0x20)
    if (x8_3 != 0x10)
        x26 = &var_84
    else
        uint32_t x8_4 = zx.d(var_84)
        char var_83
        
        if (x8_4 == 0x2d || x8_4 == 0x2b)
            x26 = &var_84 | 1
        else if (x25.d s< 2 || x8_4 != 0x30 || (zx.d(var_83) | 0x20) != 0x78)
            x26 = &var_84
        else
            x26 = &var_84 | 2

std::__ndk1::ios_base::getloc()
int64_t var_138 = 0
int64_t (* const var_148)() = std::__ndk1::ctype<wchar_t>::id
int64_t (* const var_140)() = std::__ndk1::locale::id::__init

if (*std::__ndk1::ctype<wchar_t>::id != -1)
    int64_t (* const* var_128)()
    int64_t (* const** var_130)() = &var_128
    var_128 = &var_148
    std::__ndk1::__call_once(std::__ndk1::ctype<wchar_t>::id, &var_130, sub_10dd4b0)

void* var_150
int64_t x8_8 = *(var_150 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<wchar_t>::id + 8)) - 1

if (x9_1 u< (*(var_150 + 0x18) - x8_8) s>> 3)
    int64_t* x23_1 = *(x8_8 + (x9_1 << 3))
    
    if (x23_1 != 0)
        std::__ndk1::__shared_count::__release_shared()
        void var_118
        (*(*x23_1 + 0x60))(x23_1, &var_84, x22_1, &var_118)
        void* x3_2 = &var_118 + (x25 << 2)
        void* x2_2
        
        if (x26 == x22_1)
            x2_2 = x3_2
        else
            x2_2 = &var_118 + ((x26 - &var_84) << 2)
        
        int64_t* result = sub_10bac8c(arg2, &var_118, x2_2, x3_2, x20, arg4.d)
        
        if (*(x24 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
