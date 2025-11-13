// 函数: _Z9AlterCardR7DomGame6CardID11DomCardEnum
// 地址: 0xa314d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3
int64_t* x0 = CardGet(arg1, arg2)
x0[1].d = x19
*x0 = DomDefGet(zx.q(x19), zx.q(*(arg1 + 0xd50)))
int64_t var_38 = 0
int32_t var_40 = 0
int32_t var_48 = 0
int32_t var_50 = 0
return NotifyEffect(arg1, 0x2d, 0xffffffff, zx.q(arg2.d), zx.q(x19), 0, 0, 0)
