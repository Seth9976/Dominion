// 函数: _Z11UI2SetStateR3UI2RK12UI2StateDeclifi
// 地址: 0x102c000
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *(arg1 + 0x1788)
UI2& i_1 = arg1

if (x8 != 0 && *(i_1 + 0x10) != *(x8 + 0x10))
    int64_t x9_2 = *(i_1 + 0x1660)
    *(i_1 + 0x17a0) = 0
    *(i_1 + 0x1670) = x9_2
    *(i_1 + 0x10) = *(x8 + 0x10)

uint64_t i_3 = zx.q(*(i_1 + 0x17a0))
UI2StateDecl** result = *(i_1 + 0x1798)
int32_t x21

x21 = arg3 != 0xfffffc18 ? arg3 : -1

if (i_3.d s>= 1)
    uint64_t i_2 = i_3
    UI2StateDecl** result_1 = result
    uint64_t i
    
    do
        if (result_1[1].d == x21 && *result_1 == arg2)
            *result_1 = arg2
            result_1[4].d = arg4
            result_1[1].d = x21
            *(result_1 + 0xc) = 0
            goto label_102c120
        
        i = i_2
        i_2 -= 1
        result_1 = &result_1[6]
    while (i != 1)

if (*(i_1 + 0x17a4) == 0)
    int32_t temp0_1 = arg5 & 1
    int32_t x0
    
    x0 = temp0_1 == 0 ? 0x3000 : 0x30
    
    int32_t x22_1
    
    x22_1 = temp0_1 == 0 ? 0x100 : 1
    
    result = XPooledCalloc(x0)
    i_3 = 0
    *(i_1 + 0x1798) = result
    *(i_1 + 0x17a0) = 0
    *(i_1 + 0x17a4) = x22_1

*(result + muls.dp.d(i_3.d, 0x30) + 8) = 0
int64_t x8_3 = sx.q(*(i_1 + 0x17a0))
UI2StateDecl** x8_4 = *(i_1 + 0x1798) + x8_3 * 0x30
*(i_1 + 0x17a0) = x8_3.d + 1
*x8_4 = arg2
x8_4[4].d = arg4
x8_4[1].d = x21
*(x8_4 + 0xc) = 0

do
    *(i_1 + 0x1378) = 2
    i_1 = *(i_1 + 0x17d0)
while (i_1 != 0)

label_102c120:
return result
