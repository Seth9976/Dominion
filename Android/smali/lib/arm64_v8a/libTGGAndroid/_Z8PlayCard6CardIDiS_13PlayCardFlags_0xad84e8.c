// 函数: _Z8PlayCard6CardIDiS_13PlayCardFlags
// 地址: 0xad84e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = arg4
int32_t x24 = arg1
void* x0 = DomGetContext()
DomGame* x19 = *(x0 + 8)
int32_t x20 = *(x0 + 0x18)
int64_t var_38 = ToCardRef(x19, zx.q(x24))
int64_t var_48 = ToCardRef(x19, zx.q(arg3))
CardAddProjectedPlay(x19, zx.q(x24), arg2)
int64_t var_58 = 0
int64_t var_50 = 0
int64_t result = PlayCard(x19, zx.q(x20), &var_38, &var_50, &var_58, zx.q(x22) | 8)

if (arg2 s>= 2)
    int32_t i_1 = arg2 - 1
    int32_t i
    
    do
        var_50 = 0
        result = PlayCard(x19, zx.q(x20), &var_38, &var_48, &var_50, zx.q(x22) | 0xc)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
