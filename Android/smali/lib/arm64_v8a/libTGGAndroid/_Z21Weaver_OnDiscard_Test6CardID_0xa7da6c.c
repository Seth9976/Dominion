// 函数: _Z21Weaver_OnDiscard_Test6CardID
// 地址: 0xa7da6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x8 = 0

if (ThisCard(false, nullptr) == x19)
    if (CardWhere(zx.q(x19)) != 0x3ec)
        return 0
    
    x8 = LimitPlayableCards(zx.q(x19)) ^ 1

return zx.q(x8) & 1
