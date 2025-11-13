// 函数: _Z21HasFriendsPageAlready10FriendsTab10ServerPage
// 地址: 0x9b6638
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 u< 2)
    return 1

int32_t x19 = arg2
void* x0
int64_t x8

if (arg1 == 3)
    x0 = GetClient()
    x8 = 0x5038
else
    if (arg1 != 2)
        pthread_kill(pthread_self(), 6)
        int64_t x0_4
        int64_t x1
        x0_4, x1 = XNoReturn()
        return GameClientQueryFriends(x0_4, x1) __tailcall
    
    x0 = GetClient()
    x8 = 0x5030

int32_t* x8_1 = x0 + x8
return zx.q(*x8_1 s<= x19 ? 1 : 0) & zx.q(x8_1[1] s>= x19 ? 1 : 0)
