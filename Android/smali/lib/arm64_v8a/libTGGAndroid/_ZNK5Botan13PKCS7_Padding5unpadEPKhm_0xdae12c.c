// 函数: _ZNK5Botan13PKCS7_Padding5unpadEPKhm
// 地址: 0xdae12c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_result

if (entry_result - 3 u> 0xfc)
    return entry_result

uint64_t x10_1 = zx.q(*(arg2 + entry_result - 1))
int64_t x8 = entry_result - x10_1
int64_t x12_2 = (x8 & not.q(entry_result)) s>> 0x3f
int64_t i

if (entry_result - 1 u>= 2)
    int64_t x15_1 = 0
    int64_t x14_1 = 0
    i = (entry_result - 1) & 0xfffffffffffffffe
    
    do
        char* x17_1 = arg2 + x15_1
        int64_t x3_1 = x10_1 - entry_result + x15_1
        int64_t x2 = x15_1 ^ x8
        int64_t x3_4 = ((x3_1 ^ x15_1) | x2) ^ x15_1
        int64_t x2_2 = (((x3_1 + 1) ^ x15_1) | x2) ^ x15_1
        x15_1 += 2
        x12_2 |= not.q((((zx.q(*x17_1) ^ zx.q(x10_1.b)) - 1) | x3_4) s>> 0x3f)
        x14_1 |= not.q((((zx.q(x17_1[1]) ^ zx.q(x10_1.b)) - 1) | x2_2) s>> 0x3f)
    while (i != x15_1)
    
    x12_2 |= x14_1
    
    if (entry_result - 1 != i)
        goto label_dae21c
else
    i = 0
label_dae21c:
    
    do
        int64_t x16_4 = (((x10_1 - entry_result + i) ^ i) | (i ^ x8)) ^ i
        int64_t x15_5 = (zx.q(*(arg2 + i)) ^ zx.q(x10_1.b)) - 1
        i += 1
        x12_2 |= not.q((x15_5 | x16_4) s>> 0x3f)
    while (entry_result - 1 != i)
return (x12_2 & (x8 ^ entry_result)) ^ x8
