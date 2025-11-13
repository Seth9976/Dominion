// 函数: _ZNK5Botan17ANSI_X923_Padding5unpadEPKhm
// 地址: 0xdae33c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_result

if (entry_result - 3 u> 0xfc)
    return entry_result

uint64_t x13_1 = zx.q(*(arg2 + entry_result - 1))
int64_t x8 = entry_result - x13_1
int64_t x11_2 = (x8 & not.q(entry_result)) s>> 0x3f
int64_t i

if (entry_result - 1 u>= 2)
    int64_t x15_1 = 0
    int64_t x14_1 = 0
    i = (entry_result - 1) & 0xfffffffffffffffe
    
    do
        int64_t x2 = x13_1 - entry_result + x15_1
        int64_t x17_1 = x15_1 ^ x8
        char* x3_1 = arg2 + x15_1
        int64_t x2_3 = ((x2 ^ x15_1) | x17_1) ^ x15_1
        int64_t x17_3 = (((x2 + 1) ^ x15_1) | x17_1) ^ x15_1
        x15_1 += 2
        x11_2 |= not.q(((zx.q(*x3_1) - 1) | x2_3) s>> 0x3f)
        x14_1 |= not.q(((zx.q(x3_1[1]) - 1) | x17_3) s>> 0x3f)
    while (i != x15_1)
    
    x11_2 |= x14_1
    
    if (entry_result - 1 != i)
        goto label_dae414
else
    i = 0
label_dae414:
    
    do
        int64_t x14_4 = (((x13_1 - entry_result + i) ^ i) | (i ^ x8)) ^ i
        int64_t x15_4 = zx.q(*(arg2 + i)) - 1
        i += 1
        x11_2 |= not.q((x15_4 | x14_4) s>> 0x3f)
    while (entry_result - 1 != i)
return (x11_2 & (x8 ^ entry_result)) ^ x8
