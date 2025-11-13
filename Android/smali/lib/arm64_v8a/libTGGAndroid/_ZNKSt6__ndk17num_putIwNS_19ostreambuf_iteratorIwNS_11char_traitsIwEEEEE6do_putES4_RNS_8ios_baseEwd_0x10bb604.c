// 函数: _ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwd
// 地址: 0x10bb604
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x28 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x28 + 0x28)
int64_t var_190 = 0x25
int32_t x9 = *(arg3 + 8)
void* x20 = arg3
char* x8_1

if ((x9 & 0x800) != 0)
    x8_1 = &var_190 | 2
    var_190:1.b = 0x2b
    
    if ((x9 & 0x400) != 0)
        *x8_1 = 0x23
        x8_1 = &x8_1[1]
else
    x8_1 = &var_190 | 1
    
    if ((x9 & 0x400) != 0)
        *x8_1 = 0x23
        x8_1 = &x8_1[1]

int32_t x10 = x9 & 0x104
char* var_198
char var_a0[0x20]
int32_t x0_1
char* x22

if (x10 != 0x104)
    *x8_1 = 0x2a2e
    char x9_2
    char x10_1
    bool cond:3_1
    
    if (x10 == 0x100)
        cond:3_1 = (x9 & 0x4000) == 0
        x9_2 = 0x45
        x10_1 = 0x65
    else if (x10 != 4)
        cond:3_1 = (x9 & 0x4000) == 0
        x9_2 = 0x47
        x10_1 = 0x67
    else
        cond:3_1 = (x9 & 0x4000) == 0
        x9_2 = 0x46
        x10_1 = 0x66
    
    char x9_3
    
    x9_3 = cond:3_1 ? x10_1 : x9_2
    
    x8_1[2] = x9_3
    var_198 = &var_a0
    
    if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
        data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
        __cxa_guard_release(&data_24bad08)
    
    *(x20 + 0x10)
    x0_1 = std::__ndk1::__libcpp_snprintf_l(&var_a0, 0x1e, data_24bad00, &var_190)
    
    if (x0_1 s<= 0x1d)
        x22 = nullptr
    else
        if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
            data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
            __cxa_guard_release(&data_24bad08)
        
        *(x20 + 0x10)
        x0_1 = std::__ndk1::__libcpp_asprintf_l(&var_198, data_24bad00, &var_190)
    label_10bb7b4:
        x22 = var_198
        
        if (x22 == 0)
            std::__throw_bad_alloc()
            noreturn
else
    char x9_1
    
    if ((x9 & 0x4000) == 0)
        x9_1 = 0x61
    else
        x9_1 = 0x41
    
    *x8_1 = x9_1
    var_198 = &var_a0
    
    if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
        data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
        __cxa_guard_release(&data_24bad08)
    
    x0_1 = std::__ndk1::__libcpp_snprintf_l(&var_a0, 0x1e, data_24bad00, &var_190)
    
    if (x0_1 s> 0x1d)
        if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
            data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
            __cxa_guard_release(&data_24bad08)
        
        x0_1 = std::__ndk1::__libcpp_asprintf_l(&var_198, data_24bad00, &var_190)
        goto label_10bb7b4
    
    x22 = nullptr

char* x23 = var_198
int64_t x8_6 = sx.q(x0_1)
void* x24 = &x23[x8_6]
int32_t x9_5 = *(x20 + 8) & 0xb0
void* x26 = x24

if (x9_5 != 0x20)
    if (x9_5 != 0x10)
        x26 = x23
    else
        uint32_t x9_6 = zx.d(*x23)
        
        if (x9_6 == 0x2d || x9_6 == 0x2b)
            x26 = &x23[1]
        else if (x8_6.d s< 2 || x9_6 != 0x30 || (zx.d(x23[1]) | 0x20) != 0x78)
            x26 = x23
        else
            x26 = &x23[2]

wchar_t* x25
wchar_t* x27

if (x23 == &var_a0)
    x25 = nullptr
    void var_184
    x27 = &var_184
else
    wchar_t* x0_6 = malloc(x8_6 << 3)
    x25 = x0_6
    x27 = x0_6
    
    if (x0_6 == 0)
        std::__throw_bad_alloc()
        noreturn

std::__ndk1::ios_base::getloc()
int64_t var_1b0
wchar_t* var_1a8
wchar_t* var_1a0
std::__ndk1::__num_put<wchar_t>::__widen_and_group_float(x23, x26, x24, x27, &var_1a0, &var_1a8, 
    &var_1b0)
std::__ndk1::__shared_count::__release_shared()
wchar_t entry_x3
int64_t* result = sub_10bac8c(arg2, x27, var_1a0, var_1a8, x20, entry_x3)

if (x25 != 0)
    free(x25)

if (x22 != 0)
    free(x22)

if (*(x28 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
