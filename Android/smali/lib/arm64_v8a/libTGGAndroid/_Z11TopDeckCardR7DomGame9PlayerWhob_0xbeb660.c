// 函数: _Z11TopDeckCardR7DomGame9PlayerWhob
// 地址: 0xbeb660
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int64_t x22 = sx.q(x19)

if (*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x17f74) == 0)
    if ((arg3.d & 1) == 0 && *(arg1 + x22 * 0x5a30 + 0x17f78) != 0)
        ShuffleDiscardForDeck(arg1, zx.q(x19))
    
    if ((arg3.d & 1) != 0 || *(arg1 + x22 * 0x5a30 + 0x17f78) == 0
            || *(arg1 + muls.dp.d(arg2, 0x5a30) + 0x17f74) == 0)
        return 0

int32_t var_24

if ((TryDoCampaignDraw(arg1, zx.q(x19), arg1 + x22 * 0x5a30 + 0x18208, &var_24) & 1) == 0)
    return zx.q(*(arg1 + muls.dp.d(arg2, 0x5a30) + 0x17f74))

return zx.q(var_24)
