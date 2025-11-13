// 函数: _Z12ChooseNumberiiRK11DomChoiceUI15DomChoiceAIHint14DomChoiceFlags
// 地址: 0xad5200
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg5
int32_t x20 = arg1

if (arg1 != arg2 || x19 == 1)
    int32_t* x0 = DomGetContext()
    DomGame* x8_1 = *(x0 + 8)
    uint64_t x2 = zx.q(x0[6])
    int32_t x9_1 = x0[7]
    int32_t var_38 = *x0
    int32_t var_34_1 = x9_1
    x20 = QueueChoiceNumber(x8_1, &var_38, x2, x20, arg2, arg3, zx.q(arg4), zx.q(x19))

return zx.q(x20)
