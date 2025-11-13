// 函数: _Z9DomDefGet11DomCardEnum14DomGameVersion
// 地址: 0xbb6eb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = (arg1 + (arg2 << 0x10)) s% 0x3e5
int32_t* i = *(&data_1838a20 + (sx.q(x8_1) << 3))
int32_t x19 = arg2
int32_t x20 = arg1

if (i != 0)
    do
        if (*i == x20 && i[1] == x19)
            return *(i + 8)
        
        i = *(i + 0x10)
    while (i != 0)

DomDefGetSlow(zx.q(x20), zx.q(x19))
int32_t* x0_1 = malloc(0x18)
int64_t x8_2 = sx.q(x8_1) << 3
int64_t x9_4 = *(&data_1838a20 + x8_2)
*x0_1 = x20
x0_1[1] = x19
*(&data_1838a20 + x8_2) = x0_1
*(x0_1 + 0x10) = x9_4
int64_t result = DomDefGetSlow(zx.q(x20), zx.q(x19))
*(x0_1 + 8) = result
return result
