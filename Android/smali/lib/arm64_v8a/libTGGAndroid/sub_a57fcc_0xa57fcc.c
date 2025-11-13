// 函数: sub_a57fcc
// 地址: 0xa57fcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (CurrentTurnUI() s<= 0x14)
    int32_t x19_1 = *(*(DomGetContext() + 8) + 0xd4c)
    int32_t x0_2 = CurrentWho()
    
    if ((x19_1 & 0x40) != 0)
        if (x0_2 == 1)
        label_a58008:
            int32_t x0_4 = CurrentTurnUI()
            return (*(*(DomGetContext() + 8) + (zx.q(x0_4 s% 0x14 + 0x55) << 2) + 0xe6c) != 0 ? 1
                : 0).b
    else if (x0_2 == 0)
        goto label_a58008

return 0
