// 函数: sub_9b6f64
// 地址: 0x9b6f64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(GetClient() + 0x506c)
int32_t var_18 = (*(GetClient() + 0x5080))[zx.q(x19.w) * 0x4ce]
int32_t var_14 = 3
void* x0_2 = GetClient()

if (*(x0_2 + 0x18) == 3)
    NetworkSendMessage(zx.q(*(x0_2 + 0x14)), 0xf42ad, 8, &var_18)

RemoveMultiplayerGame(zx.q(x19))
return GameQueueExit(0, false)
