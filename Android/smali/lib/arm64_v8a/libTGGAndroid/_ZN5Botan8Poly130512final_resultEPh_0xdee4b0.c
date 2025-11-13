// 函数: _ZN5Botan8Poly130512final_resultEPh
// 地址: 0xdee4b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x10)

if (*(arg1 + 0x18) - x8 != 0x40)
    uint8_t* x0_3
    uint8_t* x1_1
    uint64_t x2_3
    x0_3, x1_1, x2_3 = Botan::SymmetricAlgorithm::throw_key_not_set_error()
    return Botan::poly_double_n_le(x0_3, x1_1, x2_3) __tailcall

int64_t x9_2 = *(arg1 + 0x40)

if (x9_2 != 0)
    (*(arg1 + 0x28))[x9_2] = 1
    int64_t* x1 = *(arg1 + 0x28)
    void* x8_2 = *(arg1 + 0x40)
    void* x9_4 = *(arg1 + 0x30) - x1
    int64_t x10_1 = not.q(x8_2)
    
    if (x9_4 != neg.q(x10_1))
        memset(x8_2 + x1 + 1, 0, x9_4 + x10_1)
        x1 = *(arg1 + 0x28)
    
    sub_dee1e0(&arg1[0x10], x1, 1, 1)
    x8 = *(arg1 + 0x10)

int64_t x10_2 = *(x8 + 0x20)
int64_t x12 = *(x8 + 0x30)
int64_t x8_4 = *(x8 + 0x38)
int64_t x10_3 = *(x8 + 0x28) + (x10_2 u>> 0x2c)
int64_t x9_6 = (x10_3 u>> 0x2a) * 5 + *(x8 + 0x18)
int64_t x9_7 = (x10_2 & 0xfffffffffff) + (x9_6 u>> 0x2c)
int64_t x9_8 = (x10_3 & 0x3ffffffffff) + (x9_7 u>> 0x2c)
uint64_t x10_5 = x9_8 u>> 0x2a
int64_t x10_7 = ((-5 & x10_5) | (1 & x10_5) << 2) + (x9_6 & 0xfffffffffff)
int64_t x11_4 = x10_7 & 0xfffffffffff
int64_t x10_8 = (x9_7 & 0xfffffffffff) + (x10_7 u>> 0x2c)
int64_t x15 = x10_8 + ((x11_4 + 5) u>> 0x2c)
uint64_t x16 = x15 u>> 0x2c
int64_t x16_2 = (x16 - 1) s>> 0x3f
int64_t x9_11 =
    ((x11_4 & x16_2) | ((x11_4 + 5) & not.q(x16_2) & 0xfffffffffff)) + (x12 & 0xfffffffffff)
int64_t x10_12 = ((x10_8 & x16_2) | (x15 & not.q(x16_2) & 0xfffffffffff))
    + ((x8_4 << 0x40 | x12) u>> 0x2c & 0xfffffffffff) + (x9_11 u>> 0x2c)
int64_t* entry_x1
*entry_x1 = (0xfffffffffff & x9_11) | (0xfffff & x10_12) << 0x2c
entry_x1[1] = (0xffffff & x10_12 u>> 0x14) | (0xffffffffff & (((x9_8 & x16_2)
    | ((x16 + (x9_8 | 0xfffffc0000000000)) & not.q(x16_2))) + (x8_4 u>> 0x18) + (x10_12 u>> 0x2c)))
    << 0x18
int64_t result = *(arg1 + 0x10)
int64_t x8_7 = *(arg1 + 0x18)

if (x8_7 != result)
    memset(result, 0, x8_7 - result)
    result = *(arg1 + 0x10)

*(arg1 + 0x18) = result
*(arg1 + 0x40) = 0
return result
