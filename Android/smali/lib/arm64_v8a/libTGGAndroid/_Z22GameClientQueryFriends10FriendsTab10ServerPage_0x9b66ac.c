// 函数: _Z22GameClientQueryFriends10FriendsTab10ServerPage
// 地址: 0x9b66ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d u< 2)
    return 

int32_t x19_1 = arg1.d
int32_t x20_1 = arg2
int32_t* x8_1

if (arg1.d == 3)
    x8_1 = GetClient() + 0x5038
    
    if (*x8_1 s> x20_1 || x8_1[1] s< x20_1)
    label_9b6720:
        int32_t var_18 = x19_1
        int32_t var_14_1 = x20_1
        arg1 = GetClient()
        
        if (*(arg1 + 0x18) == 3)
            NetworkSendMessage(zx.q(*(arg1 + 0x14)), 0xf42cc, 8, &var_18)
else
    if (x19_1 != 2)
        pthread_kill(pthread_self(), 6)
        XNoReturn()
        return GameClientPeekMaxServerNotification() __tailcall
    
    x8_1 = GetClient() + 0x5030
    
    if (*x8_1 s> x20_1 || x8_1[1] s< x20_1)
        goto label_9b6720
