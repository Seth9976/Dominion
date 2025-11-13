// 函数: _Z9GainOneOfR7CardIDsRK11DomChoiceUI8DomWhere14DomChoiceFlags
// 地址: 0xad46c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = ChooseCard(arg1, 7, arg2, 0xc, zx.q(arg4))

if (x0 != 0)
    void* x0_1 = DomGetContext()
    int32_t var_30_1 = 4
    GainCard(*(x0_1 + 8), zx.q(*(x0_1 + 0x18)), zx.q(x0), zx.q(arg3), 0, 0x476, 0, 0)

return zx.q(x0)
