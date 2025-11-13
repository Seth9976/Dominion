// 函数: _Z8Blockadev
// 地址: 0xacc7cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = GainUpToCard(4, zx.q(ThisCard(true, nullptr)))

if (result.d != 0)
    int32_t x19_1 = result.d
    result = CardWhere(result)
    
    if (result.d == 0x474)
        int32_t x0_2 = CardWhat(zx.q(x19_1))
        FromSingle(zx.q(x19_1))
        void var_ca8
        FromPairCardInt(zx.q(x19_1), 
            UntilForever_AttackOtherPlayers(0xd, 0xe, j_GainCurse, sub_accfe4, 0, 0x2a, &var_ca8, 
                zx.q(x0_2)))
        return StartOfNextTurn(sub_acd060, nullptr, &var_ca8, 0x29, 2)

return result
