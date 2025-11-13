// 函数: _ZNK12CardTypeSortclE11DomCardEnumS0_
// 地址: 0xc08ea0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *(*arg1 + 0xd50)
int32_t x19 = arg2
int32_t x8_1 = x21 << 0x10
int32_t x9_4 = (x8_1 + arg2) s% 0x3e5
int32_t* x10_1 = *(&data_1838a20 + (sx.q(x9_4) << 3))
void* x0_3

if (x10_1 != 0)
    while (*x10_1 != x19 || x10_1[1] != x21)
        x10_1 = *(x10_1 + 0x10)
        
        if (x10_1 == 0)
            goto label_c08f10
    
    x0_3 = *(x10_1 + 8)
else
label_c08f10:
    DomDefGetSlow(zx.q(x19), zx.q(x21))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_2 = sx.q(x9_4) << 3
    int64_t x9_5 = *(&data_1838a20 + x8_2)
    *x0_1 = x19
    x0_1[1] = x21
    *(&data_1838a20 + x8_2) = x0_1
    *(x0_1 + 0x10) = x9_5
    x0_3 = DomDefGetSlow(zx.q(x19), zx.q(x21))
    *(x0_1 + 8) = x0_3
    x21 = *(*arg1 + 0xd50)
    x8_1 = x21 << 0x10

int32_t x23_2 = *(x0_3 + 0xc4)
int32_t entry_x2
int32_t x8_5 = (x8_1 + entry_x2) s% 0x3e5
int32_t* x9_10 = *(&data_1838a20 + (sx.q(x8_5) << 3))
int32_t x25_2 = x23_2 & 0xff
int32_t x8_7
bool cond:0

if (x9_10 != 0)
    while (*x9_10 != entry_x2 || x9_10[1] != x21)
        x9_10 = *(x9_10 + 0x10)
        
        if (x9_10 == 0)
            goto label_c08fbc
    
    x8_7 = *(*(x9_10 + 8) + 0xc4)
    int32_t x9_13 = x8_7 & 0xff
    cond:0 = x25_2 u<= x9_13
    
    if (x25_2 u< x9_13)
        return 1
else
label_c08fbc:
    DomDefGetSlow(zx.q(entry_x2), zx.q(x21))
    int32_t* x0_5 = malloc(0x18)
    int64_t x8_6 = sx.q(x8_5) << 3
    int64_t x9_11 = *(&data_1838a20 + x8_6)
    *x0_5 = entry_x2
    x0_5[1] = x21
    *(&data_1838a20 + x8_6) = x0_5
    *(x0_5 + 0x10) = x9_11
    void* x0_7 = DomDefGetSlow(zx.q(entry_x2), zx.q(x21))
    *(x0_5 + 8) = x0_7
    x8_7 = *(x0_7 + 0xc4)
    int32_t x9_12 = x8_7 & 0xff
    cond:0 = x25_2 u<= x9_12
    
    if (x25_2 u< x9_12)
        return 1

if (not(cond:0))
    return 0

int32_t x10_5 = x23_2 u>> 0x10 & 1
int32_t x12_1 = x8_7 u>> 0x10 & 1

if (x10_5 u< x12_1)
    return 1

int32_t x11_3 = x23_2 s>> 0x18
int32_t x13_1 = x8_7 s>> 0x18
int32_t x9_14 = x23_2 & 0x1a0000
int32_t x8_8 = x8_7 & 0x1a0000

if (x10_5 u<= x12_1 && (x11_3 s< x13_1 || (x9_14 == 0 && x11_3 s<= x13_1 && x8_8 != 0)))
    return 1

if (x10_5 u< x12_1
        || (x10_5 u<= x12_1 && (x11_3 s< x13_1 || (x11_3 s<= x13_1 && (x9_14 == 0 || x8_8 != 0)))))
    return zx.q(x19 s< entry_x2 ? 1 : 0)

return 0
