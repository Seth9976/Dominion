// 函数: _ZNSt6__ndk18ios_base7copyfmtERKS0_
// 地址: 0x10a3410
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x1
int64_t x20 = *(entry_x1 + 0x48)
int64_t x19
int64_t x20_1
int128_t v0

if (*(arg1 + 0x50) u>= x20)
    x20_1 = 0
    x19 = 0
else
    int64_t x0_1 = malloc(x20 << 3)
    
    if (x0_1 == 0)
        std::__throw_bad_alloc()
        noreturn
    
    x19 = x0_1
    int64_t x0_3
    x0_3, v0 = malloc(x20 << 2)
    
    if (x0_3 == 0)
        std::__throw_bad_alloc()
        noreturn
    
    x20_1 = x0_3

int64_t x8_1 = *(entry_x1 + 0x60)
int64_t x23

if (*(arg1 + 0x68) u>= x8_1)
    x23 = 0
else
    int64_t x0_5
    x0_5, v0 = malloc(x8_1 << 3)
    x23 = x0_5
    
    if (x0_5 == 0)
        std::__throw_bad_alloc()
        noreturn

int64_t x8_2 = *(entry_x1 + 0x78)
int64_t x24

if (*(arg1 + 0x80) u>= x8_2)
    x24 = 0
else
    int64_t x0_7
    x0_7, v0 = malloc(x8_2 << 3)
    x24 = x0_7
    
    if (x0_7 == 0)
        std::__throw_bad_alloc()
        noreturn

*(arg1 + 8) = *(entry_x1 + 8)
*(arg1 + 0x10) = *(entry_x1 + 0x10)
int64_t result = std::__ndk1::locale::operator=(arg1 + 0x30)

if (*(arg1 + 0x50) u< *(entry_x1 + 0x48))
    free(*(arg1 + 0x38))
    int64_t x0_10 = *(arg1 + 0x40)
    *(arg1 + 0x38) = x19
    result = free(x0_10)
    *(arg1 + 0x40) = x20_1
    x19 = 0
    x20_1 = 0
    *(arg1 + 0x50) = *(entry_x1 + 0x48)

*(arg1 + 0x48) = 0

if (*(entry_x1 + 0x48) != 0)
    int64_t i = 0
    
    do
        (*(arg1 + 0x38))[i] = (*(entry_x1 + 0x38))[i]
        i += 1
        (*(arg1 + 0x40))[i] = (*(entry_x1 + 0x40))[i]
        *(arg1 + 0x48) = i
    while (i u< *(entry_x1 + 0x48))

if (*(arg1 + 0x68) u< *(entry_x1 + 0x60))
    result = free(*(arg1 + 0x58))
    *(arg1 + 0x58) = x23
    x23 = 0
    *(arg1 + 0x68) = *(entry_x1 + 0x60)

*(arg1 + 0x60) = 0

if (*(entry_x1 + 0x60) != 0)
    int64_t* x8_10 = *(entry_x1 + 0x58)
    int64_t* x9_9 = *(arg1 + 0x58)
    int64_t i_1 = 0
    
    do
        x9_9[i_1] = x8_10[i_1]
        i_1 = *(arg1 + 0x60) + 1
        *(arg1 + 0x60) = i_1
    while (i_1 u< *(entry_x1 + 0x60))

if (*(arg1 + 0x80) u< *(entry_x1 + 0x78))
    result = free(*(arg1 + 0x70))
    *(arg1 + 0x70) = x24
    x24 = 0
    *(arg1 + 0x80) = *(entry_x1 + 0x78)

*(arg1 + 0x78) = 0

if (*(entry_x1 + 0x78) != 0)
    int64_t i_2 = 0
    
    do
        i_2 += 1
        (*(arg1 + 0x70))[i_2] = (*(entry_x1 + 0x70))[i_2]
        *(arg1 + 0x78) = i_2
    while (i_2 u< *(entry_x1 + 0x78))

if (x24 != 0)
    result = free(x24)

if (x23 != 0)
    result = free(x23)

if (x20_1 != 0)
    result = free(x20_1)

if (x19 == 0)
    return result

return free(x19) __tailcall
