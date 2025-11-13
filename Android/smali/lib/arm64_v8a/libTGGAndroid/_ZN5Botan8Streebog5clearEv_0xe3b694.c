// 函数: _ZN5Botan8Streebog5clearEv
// 地址: 0xe3b694
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x0 = *(entry_x0 + 0x20)
int64_t x8 = *(entry_x0 + 0x28)
*(entry_x0 + 0x10) = 0
*(entry_x0 + 0x18) = 0

if (x8 != x0)
    memset(x0, 0, x8 - x0)

int64_t result = *(entry_x0 + 0x50)
int64_t x8_1 = *(entry_x0 + 0x58)
int128_t v0

if (x8_1 != result)
    result, v0 = memset(result, 0, x8_1 - result)

int64_t* x12 = *(entry_x0 + 0x38)
void* x9_1 = *(entry_x0 + 0x40) - x12
int64_t x8_3

if (*(entry_x0 + 8) == 0x200)
    x8_3 = 0
else
    x8_3 = 0x101010101010101

if (x9_1 s>= 1)
    uint64_t x9_2 = x9_1 u>> 3
    int64_t x11_1 = x9_2 - zx.q(x9_2 != 0 ? 1 : 0) + 1
    int64_t* x10_3
    
    if (x11_1 u>= 4)
        int64_t i_3 = x11_1 & 0xfffffffffffffffc
        v0.q = x8_3
        v0:8.q = x8_3
        x9_2 -= i_3
        x10_3 = &x12[i_3]
        void* x12_1 = &x12[2]
        int64_t i_2 = i_3
        int64_t i
        
        do
            *(x12_1 - 0x10) = v0
            *x12_1 = v0
            i = i_2
            i_2 -= 4
            x12_1 += 0x20
        while (i != 4)
        
        if (x11_1 != i_3)
            goto label_e3b740
    else
        x10_3 = x12
    label_e3b740:
        int64_t i_1 = x9_2 + 1
        
        do
            i_1 -= 1
            *x10_3 = x8_3
            x10_3 = &x10_3[1]
        while (i_1 s> 1)

return result
