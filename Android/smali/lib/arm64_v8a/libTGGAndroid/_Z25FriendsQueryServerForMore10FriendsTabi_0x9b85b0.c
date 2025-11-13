// 函数: _Z25FriendsQueryServerForMore10FriendsTabi
// 地址: 0x9b85b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = arg2 * 6
int32_t x9_1

if (x8_1 s< 0)
    x9_1 = x8_1 + 0x7f
else
    x9_1 = x8_1

int32_t x8_2 = x9_1 s>> 7
uint64_t x1

if (x8_1 s> 0x7f)
    x1 = zx.q(x8_2 - 1)
else
    x1 = 0

if (arg1 u> 3)
    pthread_kill(pthread_self(), 6)
    GameSetup* x0_3
    int64_t x1_3
    x0_3, x1_3 = XNoReturn()
    return PlayerConfigFromSlot(x0_3, x1_3) __tailcall

uint64_t x2 = zx.q(x8_2 + 1)

switch (arg1)
    case 0
        return ModifyFriendRange(3, 0, 0) __tailcall
    case 1
        ModifyFriendRange(2, 0, 0)
        return ModifyFriendRange(3, 0, 0) __tailcall
    case 2
        ModifyFriendRange(2, x1, x2)
        return ModifyFriendRange(3, 0, 0) __tailcall
    case 3
        return ModifyFriendRange(3, x1, x2) __tailcall
