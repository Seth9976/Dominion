// 函数: sub_10de09c
// 地址: 0x10de09c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int128_t result

if (arg1 == arg2)
    result = data_71ab00
    *arg3 = 4
else
    int32_t* x0 = __errno()
    int32_t x24_1 = *x0
    *x0 = 0
    
    if ((zx.d(data_24bad08) & 1) == 0 && __cxa_guard_acquire(&data_24bad08) != 0)
        data_24bad00 = newlocale(0x1fbf, 0x739c3c, nullptr)
        __cxa_guard_release(&data_24bad08)
    
    char* endptr
    result = strtold_l(arg1, &endptr, data_24bad00)
    int32_t x8_2 = *x0
    
    if (x8_2 == 0)
        *x0 = x24_1
        
        if (endptr != arg2)
            result = data_71ab00
            *arg3 = 4
    else if (endptr != arg2)
        result = data_71ab00
        *arg3 = 4
    else if (x8_2 == 0x22)
        *arg3 = 4

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
