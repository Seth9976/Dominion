// 函数: _Z17CardTypeHasExistsR7DomGame11DomCardEnum18TriggerWhileExistsPi
// 地址: 0xbd34ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg1 + 0xd50)
int32_t x8_4 = (arg2 + (x22 << 0x10)) s% 0x3e5
int32_t* x9_1 = *(&data_1838a20 + (sx.q(x8_4) << 3))
int32_t x21 = arg2
void* x8_6

if (x9_1 != 0)
    while (*x9_1 != x21 || x9_1[1] != x22)
        x9_1 = *(x9_1 + 0x10)
        
        if (x9_1 == 0)
            goto label_bd3510
    
    x8_6 = *(x9_1 + 8)
else
label_bd3510:
    DomDefGetSlow(zx.q(x21), zx.q(x22))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_4) << 3
    int64_t x9_2 = *(&data_1838a20 + x8_5)
    *x0_1 = x21
    x0_1[1] = x22
    *(&data_1838a20 + x8_5) = x0_1
    *(x0_1 + 0x10) = x9_2
    void* x0_3 = DomDefGetSlow(zx.q(x21), zx.q(x22))
    x8_6 = x0_3
    *(x0_1 + 8) = x0_3

int32_t x9_3 = 0
uint64_t result = 0
int32_t* x8_7 = x8_6 + 0xec

while (true)
    int32_t x10_3 = x8_7[-3]
    
    if (x10_3 != 6)
        if (x10_3 == 0)
            return result
    else if (x8_7[-2] == 2 && *x8_7 == arg3)
        arg4[sx.q(result.d)] = x9_3
        result = zx.q(result.d + 1)
    
    x8_7 = &x8_7[0x30]
    x9_3 += 1
