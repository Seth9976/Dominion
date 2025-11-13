// 函数: _Z13DrawOneRandomR9RandomPCGP11DomCardEnumRiS2_S3_
// 地址: 0xbf3364
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x1 = *arg3
uint64_t result
void* x8
int32_t x9_1
DomCardEnum* x19

if (x1 == 0)
    x19 = arg4
    x8 = x19 + (sx.q(RandomInt(arg1, *arg5)) << 2)
    result = zx.q(*x8)
    x9_1 = *arg5 - 1
    *arg5 = x9_1
else
    x8 = arg2 + (sx.q(RandomInt(arg1, x1)) << 2)
    result = zx.q(*x8)
    x19 = arg2
    x9_1 = *arg3 - 1
    *arg3 = x9_1

*x8 = *(x19 + (sx.q(x9_1) << 2))
return result
