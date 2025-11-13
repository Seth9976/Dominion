// 函数: _Z8IsAttack11DomCardEnum14DomGameVersion
// 地址: 0xbf4d84
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = (arg1 + (arg2 << 0x10)) s% 0x3e5
int32_t* x9_4 = *(&data_1838a20 + (sx.q(x8_1) << 3))
int32_t x19 = arg2
int32_t x20 = arg1
void* x0_3

if (x9_4 != 0)
    while (*x9_4 != x20 || x9_4[1] != x19)
        x9_4 = *(x9_4 + 0x10)
        
        if (x9_4 == 0)
            goto label_bf4ddc
    
    x0_3 = *(x9_4 + 8)
else
label_bf4ddc:
    DomDefGetSlow(zx.q(x20), zx.q(x19))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_2 = sx.q(x8_1) << 3
    int64_t x9_5 = *(&data_1838a20 + x8_2)
    *x0_1 = x20
    x0_1[1] = x19
    *(&data_1838a20 + x8_2) = x0_1
    *(x0_1 + 0x10) = x9_5
    x0_3 = DomDefGetSlow(zx.q(x20), zx.q(x19))
    *(x0_1 + 8) = x0_3

return zx.q(zx.d(*(x0_3 + 0xc8)) u>> 5) & 1
