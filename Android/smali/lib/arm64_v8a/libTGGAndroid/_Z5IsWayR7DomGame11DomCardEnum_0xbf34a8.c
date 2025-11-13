// 函数: _Z5IsWayR7DomGame11DomCardEnum
// 地址: 0xbf34a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *(arg1 + 0xd50)
int32_t x8_4 = (arg2 + (x20 << 0x10)) s% 0x3e5
int32_t* x9 = *(&data_1838a20 + (sx.q(x8_4) << 3))
int32_t x19 = arg2
void* x0_3

if (x9 != 0)
    while (*x9 != x19 || x9[1] != x20)
        x9 = *(x9 + 0x10)
        
        if (x9 == 0)
            goto label_bf3500
    
    x0_3 = *(x9 + 8)
else
label_bf3500:
    DomDefGetSlow(zx.q(x19), zx.q(x20))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_5 = sx.q(x8_4) << 3
    int64_t x9_1 = *(&data_1838a20 + x8_5)
    *x0_1 = x19
    x0_1[1] = x20
    *(&data_1838a20 + x8_5) = x0_1
    *(x0_1 + 0x10) = x9_1
    x0_3 = DomDefGetSlow(zx.q(x19), zx.q(x20))
    *(x0_1 + 8) = x0_3

return zx.q(zx.d(*(x0_3 + 0xcb)) u>> 4) & 1
