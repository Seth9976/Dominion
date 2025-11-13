// 函数: _Z10ReplayCard6CardIDS_13PlayCardFlags
// 地址: 0xad83dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg2
void* x0 = DomGetContext()
DomGame* x19 = *(x0 + 8)

if (x21 != 0)
    IsLandscape(x19, zx.q(x21))

int32_t x23_1 = *(x0 + 0x18)
int64_t var_38 = ToCardRef(x19, zx.q(arg1))
int64_t x0_5 = ToCardRef(x19, zx.q(x21))
int64_t var_48 = 0
int64_t var_40 = x0_5
return PlayCard(x19, zx.q(x23_1), &var_38, &var_40, &var_48, zx.q(arg3) | 4)
