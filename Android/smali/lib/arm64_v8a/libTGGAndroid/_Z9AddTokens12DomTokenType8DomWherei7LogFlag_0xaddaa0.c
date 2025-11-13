// 函数: _Z9AddTokens12DomTokenType8DomWherei7LogFlag
// 地址: 0xaddaa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg4
void* x0 = DomGetContext()
int32_t x8_1

if ((x19 & 0x10) != 0)
    x8_1 = *(x0 + 0x18)
else
    x8_1 = -1

int32_t var_38 = x19
int32_t var_40 = x8_1
return AddTokens(*(x0 + 8), 0xffffffff, zx.q(arg1), zx.q(arg3), zx.q(arg2), 0, 0, 0)
