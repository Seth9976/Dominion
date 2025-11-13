// 函数: sub_a59ee8
// 地址: 0xa59ee8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(*(DomGetContext() + 8) + 0xd4c)
int32_t x0_1 = CurrentWho()

if ((x19 & 0x40) != 0)
    if (x0_1 == 1)
    label_a59f24:
        void* x0_3 = DomGetContext()
        uint64_t x1_1 = zx.q(*(x0_3 + 0x18))
        DomGame* x0_4 = *(x0_3 + 8)
        int64_t var_20 = 0
        int64_t var_18 = 0
        GainTurn(x0_4, x1_1, zx.q(x1_1.d), &var_18, &var_20, 0, 0, 0x1509)
        uint64_t x1_2 = zx.q(*(x0_3 + 0x18))
        DomGame* x0_5 = *(x0_3 + 8)
        var_20 = 0
        var_18 = 0
        return GainTurn(x0_5, x1_2, zx.q(x1_2.d), &var_18, &var_20, 0, 0, 0x1509)
else if (x0_1 == 0)
    goto label_a59f24

return VPChit(0xa, 0) __tailcall
