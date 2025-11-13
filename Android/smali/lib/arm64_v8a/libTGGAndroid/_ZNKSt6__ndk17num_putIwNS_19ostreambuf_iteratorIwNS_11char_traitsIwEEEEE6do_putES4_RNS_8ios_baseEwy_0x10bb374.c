// 函数: _ZNKSt6__ndk17num_putIwNS_19ostreambuf_iteratorIwNS_11char_traitsIwEEEEE6do_putES4_RNS_8ios_baseEwy
// 地址: 0x10bb374
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x26 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x26 + 0x28)
int64_t var_70 = 0x25
int32_t x9 = *(arg3 + 8)
void* x20 = arg3
int16_t* x8_1

if ((x9 & 0x800) != 0)
    x8_1 = &var_70 | 2
    var_70:1.b = 0x2b
    
    if ((x9 & 0x200) != 0)
        *x8_1 = 0x23
        x8_1 += 1
else
    x8_1 = &var_70 | 1
    
    if ((x9 & 0x200) != 0)
        *x8_1 = 0x23
        x8_1 += 1

int32_t x10 = x9 & 0x4a
*x8_1 = 0x6c6c
char x9_1

if (x10 == 0x40)
    x9_1 = 0x6f
else if (x10 != 8)
    x9_1 = 0x75
else if ((x9 & 0x4000) == 0)
    x9_1 = 0x78
else
    x9_1 = 0x58

x8_1[1].b = x9_1
uint64_t x25 = zx.q(*(x20 + 8)) u>> 9 & 1
void var_90
void* x22 = &var_90 - (zx.q((x25 + 0x17).d + 0xf) & 0x30)

if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
    data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
    __cxa_guard_release(&data_24bad08)

int32_t x0_1 = std::__ndk1::__libcpp_snprintf_l(x22, x25 + 0x17, data_24bad00, &var_70)
char* x23_1 = x22 + sx.q(x0_1)
void* x24_1 = x23_1
int32_t x8_7 = *(x20 + 8) & 0xb0

if (x8_7 != 0x20)
    if (x8_7 != 0x10)
        x24_1 = x22
    else
        uint32_t x8_8 = zx.d(*x22)
        
        if (x8_8 == 0x2d || x8_8 == 0x2b)
            x24_1 = x22 + 1
        else if (x0_1 s< 2 || x8_8 != 0x30 || (zx.d(*(x22 + 1)) | 0x20) != 0x78)
            x24_1 = x22
        else
            x24_1 = x22 + 2

void* x25_2 = x22 - (((zx.q(((x25.d | 0x16) << 1) - 1) << 2) + 0xf) & 0x7fffffff0)
std::__ndk1::ios_base::getloc()
int64_t var_88
wchar_t* var_80
wchar_t* var_78
std::__ndk1::__num_put<wchar_t>::__widen_and_group_int(x22, x24_1, x23_1, x25_2, &var_78, &var_80, 
    &var_88)
std::__ndk1::__shared_count::__release_shared()
int64_t* result = sub_10bac8c(arg2, x25_2, var_78, var_80, x20, arg4.d)

if (*(x26 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
