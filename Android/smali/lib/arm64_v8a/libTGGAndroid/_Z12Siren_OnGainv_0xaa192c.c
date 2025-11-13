// 函数: _Z12Siren_OnGainv
// 地址: 0xaa192c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

CardsWhereType(0x3ea, 4)
void var_c98
int64_t result = MayTrashOneOf(&var_c98, 0x3ea, 0x14, 7)

if (result.d == 0)
    return TrashThis(CardGainedToWhere(ThisCard(result.b, nullptr)))

return result
