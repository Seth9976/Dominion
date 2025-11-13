// 函数: _Z13SeparateTypes11DomCardTypePS_
// 地址: 0xb3741c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = 0
int64_t x9 = 1
uint64_t i

do
    if (x9 != 0x200000000000 && (x9 & arg1) != 0)
        *(arg2 + (sx.q(x8) << 3)) = x9
        x8 += 1
    
    i = x9 u>> 0x2e
    x9 <<= 1
while (i == 0)
return zx.q(x8)
