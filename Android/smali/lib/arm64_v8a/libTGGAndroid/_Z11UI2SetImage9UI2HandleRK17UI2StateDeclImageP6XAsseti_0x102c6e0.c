// 函数: _Z11UI2SetImage9UI2HandleRK17UI2StateDeclImageP6XAsseti
// 地址: 0x102c6e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(arg1)
int64_t x8 = *gUI2
void* i_1 = x8 + mulu.dp.d(x9.d, 0x19a8)
void* x10 = *(i_1 + 0x1788)

if (x10 != 0 && *(x8 + x9 * 0x19a8 + 0x10) != *(x10 + 0x10))
    void* x12_2 = x8 + x9 * 0x19a8
    int64_t x13_2 = *(x12_2 + 0x1660)
    *(x12_2 + 0x17a0) = 0
    *(x12_2 + 0x1670) = x13_2
    *(x8 + x9 * 0x19a8 + 0x10) = *(x10 + 0x10)

void* x11_3 = x8 + x9 * 0x19a8
uint64_t i_3 = zx.q(*(x11_3 + 0x17a0))
int64_t* result = *(x11_3 + 0x1798)
int64_t* result_1

if (i_3.d s>= 1)
    result_1 = result
    uint64_t i_2 = i_3
    uint64_t i
    
    do
        if (result_1[1].d == arg4 && *result_1 == arg2)
            goto label_102c800
        
        i = i_2
        i_2 -= 1
        result_1 = &result_1[6]
    while (i != 1)

if (*(x8 + x9 * 0x19a8 + 0x17a4) == 0)
    result = XPooledCalloc(0x3000)
    i_3 = 0
    *(x11_3 + 0x1798) = result
    *(x11_3 + 0x17a0) = 0x10000000000

*(result + muls.dp.d(i_3.d, 0x30) + 8) = 0
int64_t x9_2 = sx.q(*(x11_3 + 0x17a0))
*(x11_3 + 0x17a0) = x9_2.d + 1
result_1 = *(x11_3 + 0x1798) + x9_2 * 0x30
label_102c800:
result_1[1].d = arg4
*(result_1 + 0xc) = 4
*result_1 = arg2
result_1[5] = arg3

do
    *(i_1 + 0x1378) = 2
    i_1 = *(i_1 + 0x17d0)
while (i_1 != 0)

return result
