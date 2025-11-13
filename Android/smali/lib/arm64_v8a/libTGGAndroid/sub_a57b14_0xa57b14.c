// 函数: sub_a57b14
// 地址: 0xa57b14
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(*(DomGetContext() + 8) + 0xd4c)
int32_t x0_1 = CurrentWho()

if ((x19 & 0x40) != 0)
    if (x0_1 == 1)
    label_a57b3c:
        
        if (CurrentTurnUI() != 1)
            return 1
else if (x0_1 == 0)
    goto label_a57b3c

return 0
