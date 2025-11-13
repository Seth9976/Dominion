// 函数: _Z6ElemOfPK7XStringiPKc
// 地址: 0x101202c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg2 s< 1)
    return 0

if ((operator==(arg1, arg3) & 1) != 0)
    return 1

uint64_t x22 = zx.q(arg2)
void* __offset(XString, 0x8) x20_1 = arg1 + 8
int64_t x8 = 1
int64_t x21_1
int32_t x0_4

do
    x21_1 = x8
    
    if (x22 == x8)
        break
    
    x0_4 = operator==(x20_1, arg3)
    x8 = x21_1 + 1
    x20_1 += 8
while ((x0_4 & 1) == 0)
return zx.q(x21_1 u< x22 ? 1 : 0)
