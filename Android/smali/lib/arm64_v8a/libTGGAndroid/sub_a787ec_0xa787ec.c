// 函数: sub_a787ec
// 地址: 0xa787ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t result = GainCard(0x101, 0x476, 0, 0, 4)

if (result != 0)
    int64_t x0 = GetBoardPile(0xc1c, false)
    int32_t x0_1 = CountTokensWhereType(x0, 0x601)
    result = MoveTokens(zx.q(x0.d), 0x3f1, 0x601, x0_1)
    
    if (x0_1 s>= 1)
        return NotifyResult(1) __tailcall

return result
