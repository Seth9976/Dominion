// 函数: _Z11UI2SetColor9UI2HandleRK17UI2StateDeclColorRK10ColorRgbaIi
// 地址: 0x102c148
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x10 = zx.q(arg1)
int64_t x9 = *gUI2
void* i_1 = x9 + mulu.dp.d(x10.d, 0x19a8)
uint64_t i_3 = zx.q(*(i_1 + 0x17a0))
UI2StateDeclColor** result = *(i_1 + 0x1798)
UI2StateDeclColor** result_1

if (i_3.d s>= 1)
    result_1 = result
    uint64_t i_2 = i_3
    uint64_t i
    
    do
        if (result_1[1].d == arg4 && *result_1 == arg2)
            goto label_102c224
        
        i = i_2
        i_2 -= 1
        result_1 = &result_1[6]
    while (i != 1)

if (*(x9 + x10 * 0x19a8 + 0x17a4) == 0)
    result = XPooledCalloc(0x3000)
    i_3 = 0
    *(i_1 + 0x1798) = result
    *(i_1 + 0x17a0) = 0x10000000000

*(result + muls.dp.d(i_3.d, 0x30) + 8) = 0
int64_t x8_1 = sx.q(*(i_1 + 0x17a0))
*(i_1 + 0x17a0) = x8_1.d + 1
result_1 = *(i_1 + 0x1798) + x8_1 * 0x30
label_102c224:
*result_1 = arg2
result_1[1].d = arg4
*(result_1 + 0xc) = 8
result_1[4].d = 0
result_1[5].d = *arg3

do
    *(i_1 + 0x1378) = 2
    i_1 = *(i_1 + 0x17d0)
while (i_1 != 0)

return result
