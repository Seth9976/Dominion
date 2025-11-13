// 函数: _Z12MoveToBottom6CardID8DomWhereS0_
// 地址: 0xadb9f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1
void* x0 = DomGetContext()
int32_t x0_2 = CardOwner(*(x0 + 8), zx.q(x21))
int32_t var_38 = 0
int64_t var_40 = 0
int32_t var_48 = 0
int32_t var_50 = 0
int32_t var_58 = *(x0 + 0x48)
int64_t var_60 = *(x0 + 0x40)
return MoveCardTo(*(x0 + 8), zx.q(x0_2), zx.q(x21), zx.q(arg2), 0xb, zx.q(arg3), 2, 0xffffffff)
