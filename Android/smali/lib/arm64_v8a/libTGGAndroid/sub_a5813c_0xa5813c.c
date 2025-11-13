// 函数: sub_a5813c
// 地址: 0xa5813c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((DomContextTriggerFlags() & 4) != 0)
    return 0

void* x0_1 = DomGetContext()
int32_t x20 = *(AbilityGetRegistered(*(x0_1 + 8), zx.q(*(x0_1 + 0x1c))) + 0x24)
return (PileSource(*(DomGetContext() + 8), zx.q(arg1)) == x20 ? 1 : 0).b
