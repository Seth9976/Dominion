// 函数: _ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcPKv
// 地址: 0x10ba1ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
int16_t var_a8 = 0
int32_t var_ac = 0x7025
void* x20 = arg3

if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
    data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
    __cxa_guard_release(&data_24bad08)

char var_7c
int64_t x25 = sx.q(std::__ndk1::__libcpp_snprintf_l(&var_7c, 0x14, data_24bad00, &var_ac))
void* x22_1 = &(&var_7c)[x25]
int32_t x8_3 = *(x20 + 8) & 0xb0
void* x26 = x22_1

if (x8_3 != 0x20)
    if (x8_3 != 0x10)
        x26 = &var_7c
    else
        uint32_t x8_4 = zx.d(var_7c)
        char var_7b
        
        if (x8_4 == 0x2d || x8_4 == 0x2b)
            x26 = &var_7c | 1
        else if (x25.d s< 2 || x8_4 != 0x30 || (zx.d(var_7b) | 0x20) != 0x78)
            x26 = &var_7c
        else
            x26 = &var_7c | 2

std::__ndk1::ios_base::getloc()
int64_t var_c8 = 0
int64_t (* const var_d8)() = std::__ndk1::ctype<char>::id
int64_t (* const var_d0)() = std::__ndk1::locale::id::__init

if (*std::__ndk1::ctype<char>::id != -1)
    int64_t (* const* var_b8)()
    int64_t (* const** var_c0)() = &var_b8
    var_b8 = &var_d8
    std::__ndk1::__call_once(std::__ndk1::ctype<char>::id, &var_c0, sub_10dd4b0)

void* var_e0
int64_t x8_8 = *(var_e0 + 0x10)
int64_t x9_1 = sx.q(*(std::__ndk1::ctype<char>::id + 8)) - 1

if (x9_1 u< (*(var_e0 + 0x18) - x8_8) s>> 3)
    int64_t* x23_1 = *(x8_8 + (x9_1 << 3))
    
    if (x23_1 != 0)
        std::__ndk1::__shared_count::__release_shared()
        void var_a4
        (*(*x23_1 + 0x40))(x23_1, &var_7c, x22_1, &var_a4)
        void* x3_2 = &var_a4 + x25
        void* x2_2
        
        if (x26 == x22_1)
            x2_2 = x3_2
        else
            x2_2 = &var_a4 + x26 - &var_7c
        
        int64_t* result = sub_f23ab4(arg2, &var_a4, x2_2, x3_2, x20, arg4.d)
        
        if (*(x24 + 0x28) == x8)
            return result
        
        __stack_chk_fail()
        noreturn

sub_f43870()
noreturn
