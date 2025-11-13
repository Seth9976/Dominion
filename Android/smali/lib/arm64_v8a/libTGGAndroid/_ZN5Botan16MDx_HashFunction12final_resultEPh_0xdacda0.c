// 函数: _ZN5Botan16MDx_HashFunction12final_resultEPh
// 地址: 0xdacda0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 0x30)
int64_t x21 = 1 << zx.q(arg1[0xa])

if (x21 != x8)
    memset(*(arg1 + 0x18) + x8, 0, x21 - x8)
    x8 = *(arg1 + 0x30)

(*(arg1 + 0x18))[x8] = arg1[8]

if (*(arg1 + 0x30) u>= x21 - zx.q(arg1[9]))
    (*(*arg1 + 0x58))(arg1, *(arg1 + 0x18), 1)
    int64_t x0_2 = *(arg1 + 0x18)
    int64_t x8_5 = *(arg1 + 0x20)
    
    if (x8_5 != x0_2)
        memset(x0_2, 0, x8_5 - x0_2)

(*(*arg1 + 0x68))(arg1, *(arg1 + 0x18) + x21 - zx.q(arg1[9]))
(*(*arg1 + 0x58))(arg1, *(arg1 + 0x18), 1)
int64_t entry_x1
(*(*arg1 + 0x60))(arg1, entry_x1)
jump(*(*arg1 + 0x38))
