// 函数: _Z13FriendsUpdate9UI2Handle
// 地址: 0x9bee08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, FriendsClick)
uint64_t x8 = zx.q(*(gFriendDlg + 4))

if (x8.d u> 3)
    pthread_kill(pthread_self(), 6)
    return ForfeitNetworkGame(XNoReturn()) __tailcall

switch (x8)
    case 0
        UI2SetState(zx.q(x19), &data_11cf368, 0xffffffff, 0)
        UI2SetText(zx.q(x19), &data_11cf260, GetActiveProfile() + 0x42b0, 0xffffffff)
        return FriendsUpdateTable(zx.q(x19), 0) __tailcall
    case 1
        UI2SetState(zx.q(x19), &data_11cf380, 0xffffffff, 0)
        UI2SetState(zx.q(x19), &data_11cf3b0, 0xffffffff, 0)
        return FriendsUpdateTable(zx.q(x19), 1) __tailcall
    case 2
        UI2SetState(zx.q(x19), &data_11cf380, 0xffffffff, 0)
        UI2SetState(zx.q(x19), &data_11cf3c8, 0xffffffff, 0)
        return FriendsUpdateTable(zx.q(x19), 2) __tailcall
    case 3
        UI2SetState(zx.q(x19), &data_11cf398, 0xffffffff, 0)
        return FriendsUpdateTable(zx.q(x19), 3) __tailcall
