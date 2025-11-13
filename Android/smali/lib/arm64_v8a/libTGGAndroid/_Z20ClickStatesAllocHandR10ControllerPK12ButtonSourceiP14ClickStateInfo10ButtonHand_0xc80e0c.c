// 函数: _Z20ClickStatesAllocHandR10ControllerPK12ButtonSourceiP14ClickStateInfo10ButtonHand
// 地址: 0xc80e0c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s>= 1)
    ButtonSource const* x21_1 = arg2
    uint64_t i_1 = zx.q(arg3)
    uint64_t i
    
    do
        uint64_t x1 = zx.q(*x21_1)
        x21_1 += 4
        ClickStateAllocHand(arg1, x1, arg4, zx.q(arg5))
        i = i_1
        i_1 -= 1
        arg4 += 0x10
    while (i != 1)

return zx.q(arg3)
