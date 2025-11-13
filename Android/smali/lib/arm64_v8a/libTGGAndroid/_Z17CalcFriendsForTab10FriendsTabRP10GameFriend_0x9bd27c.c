// 函数: _Z17CalcFriendsForTab10FriendsTabRP10GameFriend
// 地址: 0x9bd27c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
void* x0 = GetClient()
int32_t x8_1

if (zx.d(*(x0 + 0x502c)) == 0)
    GameFriend* x1 = x0 + 0x28 + (sx.q(*(x0 + 0x5028)) << 5)
    bool (* var_28)(GameFriend const&, GameFriend const&) = SortFriends
    std::__ndk1::__sort<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(x0 + 0x28, 
        x1, &var_28)
    *arg2 = nullptr
    x8_1 = *(x0 + 0x5028)
    
    if (x8_1 s< 1)
        return 0
else
    *arg2 = nullptr
    x8_1 = *(x0 + 0x5028)
    
    if (x8_1 s< 1)
        return 0

GameFriend* x11_1 = nullptr
GameFriend* x13_1 = nullptr
int64_t x9_1 = 0
uint64_t result = 0
GameFriend* x10_1 = x0 + 0x28

while (true)
    uint64_t x14_1 = zx.q(*(x10_1 + 0x14))
    
    if (x14_1.d u> 5)
        break
    
    int32_t x14_2 = 0
    
    switch (x14_1)
        case 0
            break
        case 1, 2
            goto label_9bd324
        case 3
            if (1 != x20)
            label_9bd2dc:
                
                if (x13_1 == 0)
                    x9_1 += 1
                    x10_1 += 0x20
                    
                    if (x9_1 s< sx.q(x8_1))
                        continue
            else
            label_9bd32c:
                
                if (x11_1 == 0)
                    *arg2 = x10_1
                    x8_1 = *(x0 + 0x5028)
                    x11_1 = x10_1
                
                result = zx.q(result.d + 1)
                x13_1 = x11_1
                x9_1 += 1
                x10_1 += 0x20
                
                if (x9_1 s< sx.q(x8_1))
                    continue
        case 4
            x14_2 = 2
        label_9bd324:
            
            if (x14_2 != x20)
                goto label_9bd2dc
            
            goto label_9bd32c
        case 5
            if (3 != x20)
                goto label_9bd2dc
            
            goto label_9bd32c
    
    return result

pthread_kill(pthread_self(), 6)
return FriendsClick(XNoReturn()) __tailcall
