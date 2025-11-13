// 函数: _Z13CountBanTypesP11DomCardEnumiRiS1_
// 地址: 0xb3b1c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg3 = 0
*arg4 = 0

if (arg2 s< 1)
    return 

DomCardEnum* x21_1 = arg1
uint64_t i_1 = zx.q(arg2)
uint64_t i

do
    uint64_t x0 = zx.q(*x21_1)
    x21_1 += 4
    int32_t& x8_1
    
    if ((IsLandscape(x0, 0x18).d & 1) != 0)
        x8_1 = arg3
    else
        x8_1 = arg4
    
    i = i_1
    i_1 -= 1
    *x8_1 += 1
while (i != 1)
