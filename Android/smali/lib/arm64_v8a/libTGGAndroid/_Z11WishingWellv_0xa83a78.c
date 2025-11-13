// 函数: _Z11WishingWellv
// 地址: 0xa83a78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
Card(1, 0, 0, nullptr)
int32_t x0 = NameCardInDeckOne(0x1b)
int64_t result = TopDeckCard()

if (result.d == 0)
    return result

int32_t x20 = not.d(CardIs(result, zx.q(x0)))
int64_t x0_3 = RevealDeckOneTemp(zx.q(x20) & 1)

if ((x20 & 1) != 0)
    return NotifyResult(0) __tailcall

AchievementSignalResult(x0_3)
NotifyResult(1)
return MoveToHand(zx.q(x0_3.d), 0x3eb) __tailcall
