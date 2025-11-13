// 函数: _Z8Commercev
// 地址: 0xa8c244
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
void* x8_1 = *(x0 + 8) + sx.q(*(x0 + 0x18)) * 0x5a30
int64_t x9_1 = sx.q(*(x8_1 + 0x181a4))
int32_t var_18 = x9_1.d
void var_c98
memcpy(&var_c98, x8_1 + 0x18218, x9_1 << 2)
FilterUnique(&var_c98, nullptr)
return GainCardN(0x106, var_18, 0x476)
