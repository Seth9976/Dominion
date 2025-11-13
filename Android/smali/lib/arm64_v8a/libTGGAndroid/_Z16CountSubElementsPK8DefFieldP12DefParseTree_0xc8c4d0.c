// 函数: _Z16CountSubElementsPK8DefFieldP12DefParseTree
// 地址: 0xc8c4d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i_1 = *(arg2 + 8)

if (i_1 == 0)
    return 0

int32_t x20 = 0
int64_t* i

do
    i = i_1[1]
    x20 += operator==(*i_1, *(arg1 + 8)) & 1
    i_1 = i
while (i != 0)
return zx.q(x20)
