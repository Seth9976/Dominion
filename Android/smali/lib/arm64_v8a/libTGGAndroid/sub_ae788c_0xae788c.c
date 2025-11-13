// 函数: sub_ae788c
// 地址: 0xae788c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = **(arg1 + 8)
void* x0 = DomGetContext()
int32_t x0_2 = CardOwner(*(x0 + 8), zx.q(x20))
int32_t var_cc8 = 0
int64_t var_cd0 = 0
int32_t var_cd8 = 0
int32_t var_ce0 = 0
int32_t var_ce8 = *(x0 + 0x48)
int64_t var_cf0 = *(x0 + 0x40)
MoveCardTo(*(x0 + 8), zx.q(x0_2), zx.q(x20), 0x3ee, 0xb, 0x464, 0, 0)
int32_t x8_3 = **(arg1 + 8)
int32_t var_cb8 = 1
int32_t var_cb4 = x8_3
int32_t var_34 = 1
return StartOfNextTurn(sub_ae7970, nullptr, &var_cb8, 1, 2)
