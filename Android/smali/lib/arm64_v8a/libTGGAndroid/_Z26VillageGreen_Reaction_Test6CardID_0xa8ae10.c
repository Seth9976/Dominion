// 函数: _Z26VillageGreen_Reaction_Test6CardID
// 地址: 0xa8ae10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
uint64_t result = 0

if ((LimitPlayableCards(ThisCard(false, nullptr)) & 1) == 0)
    result = 0
    
    if (ThisCard(false, nullptr) == x19)
        return zx.q(CardWhere(zx.q(x19)) == 0x3ec ? 1 : 0)

return result
