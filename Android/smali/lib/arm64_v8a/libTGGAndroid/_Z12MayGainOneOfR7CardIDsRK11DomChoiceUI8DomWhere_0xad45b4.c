// 函数: _Z12MayGainOneOfR7CardIDsRK11DomChoiceUI8DomWhere
// 地址: 0xad45b4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0xc80) == 0)
    return 0

int32_t* x0
int128_t v0_1
int128_t v1_1
int128_t v2_1
x0, v0_1, v1_1, v2_1 = DomGetContext()
int64_t var_40_1 = *(arg2 + 0x30)
int128_t var_50_1 = *(arg2 + 0x20)
int128_t var_60_1 = *(arg2 + 0x10)
int128_t var_70 = *arg2
var_50_1:8.q = *(x0 + 0x40)
int32_t var_cf8
memcpy(&var_cf8, arg1, 0xc84)
uint64_t x2 = zx.q(x0[6])
int32_t x8_3 = x0[7]
DomGame* x0_2 = *(x0 + 8)
int32_t var_d00 = *x0
int32_t var_cfc_1 = x8_3
int32_t var_d10_1 = 0
int32_t var_d18_1 = 0
int32_t var_d20_1 = 0xc
int128_t* var_d28_1 = &var_70
int32_t var_d30_1 = 7
int32_t var_78

if (QueueChoiceCards(x0_2, &var_d00, x2, 1, &var_cf8, zx.q(var_78), 1, 0) != 0)
    int32_t x20_2 = var_cf8
    
    if (x20_2 != 0)
        void* x0_5 = DomGetContext()
        int32_t var_d30_2 = 4
        GainCard(*(x0_5 + 8), zx.q(*(x0_5 + 0x18)), zx.q(x20_2), zx.q(arg3), 0, 0x476, 0, 0)
        return zx.q(x20_2)

return 0
