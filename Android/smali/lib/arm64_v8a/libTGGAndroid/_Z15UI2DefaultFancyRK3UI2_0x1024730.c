// 函数: _Z15UI2DefaultFancyRK3UI2
// 地址: 0x1024730
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t v0
v0:8.q = 0
void* entry_x8
__builtin_memset(entry_x8, 0, 0x98)

if ((zx.d(data_24b48f8) & 1) == 0)
    UI2 const& var_8_1 = arg1
    void* var_18_1 = entry_x8
    entry_x8 = var_18_1
    arg1 = var_8_1
    
    if (__cxa_guard_acquire(&data_24b48f8, v0) != 0)
        data_24b48f0 = *(arg1 + 0x1548)
        __cxa_guard_release(&data_24b48f8)
        arg1 = var_8_1
        entry_x8 = var_18_1

*(entry_x8 + 8) = &data_24b48f0

if ((zx.d(data_24b4908) & 1) == 0)
    UI2 const& var_8_2 = arg1
    void* var_18_2 = entry_x8
    entry_x8 = var_18_2
    arg1 = var_8_2
    
    if (__cxa_guard_acquire(&data_24b4908) != 0)
        data_24b4900 = *(arg1 + 0x1550)
        __cxa_guard_release(&data_24b4908)
        arg1 = var_8_2
        entry_x8 = var_18_2

*(entry_x8 + 0x78) = &data_24b4900
*(entry_x8 + 0x80) = *(arg1 + 0x1558)
int32_t x9_2 = *(arg1 + 0x1444)
*(entry_x8 + 0x2c) = 0x3f800000
*(entry_x8 + 0x1c) = x9_2
v0 = *(arg1 + 0x1594)
*(entry_x8 + 0x54) = *(arg1 + 0x158c)
*(entry_x8 + 0x58) = v0
*(entry_x8 + 0x30) = *(arg1 + 0x1598)
int32_t x9_3 = *(arg1 + 0x1564)

if (x9_3 u>= 3)
    pthread_kill(pthread_self(), 6)
    LocString* x0_3
    bool* x1
    char* x2
    x0_3, x1, x2 = XNoReturn()
    return TrySuffix(x0_3, x1, x2) __tailcall

*(entry_x8 + 0x70) = 1 | (0x7fffffff & x9_3) << 1
*(entry_x8 + 0x74) = *(arg1 + 0x1568)
