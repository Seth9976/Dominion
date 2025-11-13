// 函数: _Z11FriendIndex10FriendsTabii
// 地址: 0x9bd210
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 0)
    return zx.q(arg3 + arg2 * 6 - 1)

int64_t var_28
CalcFriendsForTab(arg1, &var_28)
return zx.q(arg3 + arg2 * 6 + ((var_28 - GetClient() - 0x28) u>> 5).d)
