// 函数: _ZmiRK7CardIDsS1_
// 地址: 0xadcf68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x8
int64_t result = memset(entry_x8, 0, 0xc80)
uint64_t x22 = zx.q(*(arg1 + 0xc80))

if (x22.d s>= 1)
    result = memcpy(entry_x8, arg1, x22 << 2)

*(entry_x8 + 0xc80) = x22.d
uint64_t x8 = zx.q(*(arg2 + 0xc80))

if (x8.d s< 1)
    return result

int64_t x9_1 = 0
int32_t i = x22.d

if (i s< 1)
    goto label_add008

do
    uint64_t x13_1 = zx.q(i)
    void* x11_1 = entry_x8
    uint64_t j
    
    do
        if (*x11_1 == *(arg2 + (x9_1 << 2)))
            *(entry_x8 + 0xc80) = i - 1
            *x11_1 = *(entry_x8 + ((sx.q(i) - 1) << 2))
            break
        
        j = x13_1
        x13_1 -= 1
        x11_1 += 4
    while (j != 1)
label_add008:
    x9_1 += 1
    
    if (x9_1 == x8)
        return result
    
    i = *(entry_x8 + 0xc80)
while (i s>= 1)
