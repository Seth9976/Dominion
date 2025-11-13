// 函数: _Z16FriendDialogOpen14FriendDlgStyle
// 地址: 0x9b8508
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
uint64_t x8 = zx.q(*(x0 + 0x5028))
uint64_t x0_1

if (x8.d s< 1)
    x0_1 = 0
else if (*(x0 + 0x3c) != 3)
    void* x9_2 = x0 + 0x5c
    int64_t x11_1 = 1
    int64_t x10_1
    int32_t i
    
    do
        x10_1 = x11_1
        
        if (x8 == x11_1)
            break
        
        i = *x9_2
        x9_2 += 0x20
        x11_1 = x10_1 + 1
    while (i != 3)
    x0_1 = zx.q(x10_1 u< x8 ? 1 : 0)
else
    x0_1 = 1

*gFriendDlg = arg1
*(gFriendDlg + 4) = x0_1.d
*(gFriendDlg + 8) = 0
*(gGameDlgManager + 0xc8) = 9
return FriendsQueryServerForMore(x0_1, 0) __tailcall
