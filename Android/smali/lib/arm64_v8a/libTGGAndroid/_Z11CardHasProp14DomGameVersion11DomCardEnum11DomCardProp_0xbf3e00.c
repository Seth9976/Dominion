// 函数: _Z11CardHasProp14DomGameVersion11DomCardEnum11DomCardProp
// 地址: 0xbf3e00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = (arg2 + (arg1 << 0x10)) s% 0x3e5
int32_t* x9_4 = *(&data_1838a20 + (sx.q(x8_1) << 3))
int32_t x21 = arg2
int32_t x20 = arg1
void* x0_3

if (x9_4 != 0)
    while (*x9_4 != x21 || x9_4[1] != x20)
        x9_4 = *(x9_4 + 0x10)
        
        if (x9_4 == 0)
            goto label_bf3e60
    
    x0_3 = *(x9_4 + 8)
else
label_bf3e60:
    DomDefGetSlow(zx.q(x21), zx.q(x20))
    int32_t* x0_1 = malloc(0x18)
    int64_t x8_2 = sx.q(x8_1) << 3
    int64_t x9_5 = *(&data_1838a20 + x8_2)
    *x0_1 = x21
    x0_1[1] = x20
    *(&data_1838a20 + x8_2) = x0_1
    *(x0_1 + 0x10) = x9_5
    x0_3 = DomDefGetSlow(zx.q(x21), zx.q(x20))
    *(x0_1 + 8) = x0_3

int64_t x8_3 = *(x0_3 + 0x18)

if (x8_3 != 0x100000000 && (x8_3 & 0xffffffff80000000) == 0)
    return zx.q((x8_3 & arg3) != 0 ? 1 : 0)

return 0
