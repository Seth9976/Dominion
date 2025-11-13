// 函数: _Z25TryQueryFriendLeaderboardv
// 地址: 0x9b58b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()

if (zx.d(*(x0 + 0x7718)) != 0)
    return x0

int64_t var_2c
__builtin_memset(&var_2c, 0, 0x18)
int32_t var_30 = 4
void* x0_1 = GetClient()

if (*(x0_1 + 0x18) == 3)
    NetworkSendMessage(zx.q(*(x0_1 + 0x14)), 0xf42cb, 0x1c, &var_30)

void* x0_3 = GetActiveProfile()
*(x0_3 + 0x7718) = 1
return x0_3
