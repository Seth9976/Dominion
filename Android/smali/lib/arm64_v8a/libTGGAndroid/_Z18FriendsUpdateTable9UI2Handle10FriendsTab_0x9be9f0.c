// 函数: _Z18FriendsUpdateTable9UI2Handle10FriendsTab
// 地址: 0x9be9f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_6c = arg2
int32_t x20 = arg1
void* x0 = GetClient()

if (*gFriendDlg == 1)
    UI2SetState(zx.q(x20), &data_11cf350, 0xffffffff, 0)
    *(gFriendDlg + 4) = 0

int64_t var_68
int32_t x0_3 = CalcFriendsForTab(zx.q(var_6c), &var_68)
int32_t x23 = *(gFriendDlg + 8)
int32_t x10

if (var_6c == 0)
    x10 = x0_3 + 1
else
    x10 = x0_3

int32_t x22 = x10 + x23 * 0xfffffffa
int32_t x26

x26 = x22 s< 6 ? x22 : 6

int64_t result = UI2SetInt(zx.q(x20), &data_11cf140, x26, 0xffffffff)

if (x23 != 0)
    result = UI2SetState(zx.q(x20), &data_11cf1b8, 0xffffffff, 0)

if (x23 s< (x10 + 5) s/ 6 - 1)
    result = UI2SetState(zx.q(x20), &data_11cf1d0, 0xffffffff, 0)

if (x22 s>= 1)
    int64_t x22_1 = 0
    void* x28_1 = &data_11d06b8
    uint64_t x25_1
    
    if (x26 s> 1)
        x25_1 = zx.q(x26)
    else
        x25_1 = 1
    
    int32_t x8_9 = neg.d(var_6c == 0 ? 1 : 0) + x23 * 6 + ((var_68 - x0 - 0x28) u>> 5).d
    
    do
        uint64_t x0_7
        int64_t* x1_1
        int32_t x2_1
        
        if ((x23 | var_6c | x22_1.d) == 0)
            x0_7 = zx.q(x20)
            x1_1 = &data_11cf158
            x2_1 = 0
            result = UI2SetState(x0_7, x1_1, x2_1, 0)
        else
            int32_t x0_9
            
            if (*(x28_1 - 0x30) == "tblFriends" && *(x28_1 - 0x38) == x20
                    && x22_1 == zx.q(*(x28_1 - 0x28)) && *(x28_1 - 0x20) == 0)
                x0_9 = UI2Exists(zx.q(*x28_1))
            
            int32_t x27_1
            
            if (*(x28_1 - 0x30) != "tblFriends" || *(x28_1 - 0x38) != x20
                    || x22_1 != zx.q(*(x28_1 - 0x28)) || *(x28_1 - 0x20) != 0 || (x0_9 & 1) == 0)
                int32_t x0_12 = UI2GetHandle(zx.q(x20), "tblFriends", x22_1.d)
                *x28_1 = x0_12
                
                if (x0_12 == 0)
                    result = UI2GetHandle(zx.q(x20), "tblFriends", x22_1.d)
                else
                    x27_1 = x0_12
                    *(x28_1 - 0x30) = "tblFriends"
                    *(x28_1 - 0x38) = x20
                    *(x28_1 - 0x28) = x22_1.d
                    *(x28_1 - 0x20) = 0
                    UI2GetHandle(zx.q(x20), "tblFriends", x22_1.d)
                label_9bec10:
                    int32_t x26_1 = x8_9 + x22_1.d
                    int64_t x23_1 = sx.q(x26_1)
                    void* x19_1 = x0 + (x23_1 << 5)
                    UI2SetState(zx.q(x27_1), GameAvatarGet(zx.q(*(x19_1 + 0x38))), 0xffffffff, 0)
                    uint64_t x8_16 = zx.q(*(x19_1 + 0x3c))
                    
                    if (x8_16.d u> 5)
                        pthread_kill(pthread_self(), 6)
                        return FriendsUpdate(XNoReturn()) __tailcall
                    
                    int64_t* x1_3 = &data_11cf2c0
                    
                    switch (x8_16)
                        case 0
                            pthread_kill(pthread_self(), 6)
                            return FriendsUpdate(XNoReturn()) __tailcall
                        case 1
                            goto label_9becb0
                        case 2
                            x1_3 = &data_11cf2d8
                        label_9becb0:
                            UI2SetState(zx.q(x20), x1_3, x22_1.d, 0)
                            int64_t x19_2 = x23_1 << 5
                            UI2SetText(zx.q(x20), &data_11cf1a0, x0 + x19_2 + 0x30, x22_1.d)
                            int32_t x8_19 = *(GetClient() + x19_2 + 0x38)
                            int64_t* x1_4
                            
                            if ((x8_19 & 0x80000000) != 0)
                                int64_t* x9_3
                                
                                if (x8_19 == 0xfffffffe)
                                    x9_3 = &data_11cf290
                                else
                                    x9_3 = &data_11cf2a8
                                
                                int64_t* x1_5
                                
                                x1_5 = x8_19 == 0xfffffffd ? &data_11cf278 : x9_3
                                
                                UI2SetState(zx.q(x20), x1_5, x22_1.d, 0)
                                x1_4 = &data_11cf188
                            else
                                x1_4 = &data_11cf188
                                
                                if (*gFriendDlg == 1)
                                    if ((IsAlreadyInGame(x26_1) & 1) != 0)
                                        x1_4 = &data_11cf188
                                    else
                                        x1_4 = &data_11cf170
                            
                            UI2SetState(zx.q(x20), x1_4, x22_1.d, 0)
                            
                            if (var_6c == 0)
                                int32_t x0_26 =
                                    GameClientPresence(zx.q(*(x0 + (x23_1 << 5) + 0x2c)))
                                
                                if (x0_26 == 3)
                                    x0_7 = zx.q(x20)
                                    x1_1 = &data_11cf248
                                    x2_1 = x22_1.d
                                else if (x0_26 == 2)
                                    x0_7 = zx.q(x20)
                                    x1_1 = &data_11cf218
                                    x2_1 = x22_1.d
                                else
                                    if (x0_26 != 1)
                                        pthread_kill(pthread_self(), 6)
                                        return FriendsUpdate(XNoReturn()) __tailcall
                                    
                                    x0_7 = zx.q(x20)
                                    x1_1 = &data_11cf230
                                    x2_1 = x22_1.d
                            else
                                x0_7 = zx.q(x20)
                                x1_1 = &data_11cf338
                                x2_1 = x22_1.d
                        case 3
                            x1_3 = &data_11cf2f0
                            goto label_9becb0
                        case 4
                            x1_3 = &data_11cf308
                            goto label_9becb0
                        case 5
                            x1_3 = &data_11cf320
                            goto label_9becb0
                    
                    result = UI2SetState(x0_7, x1_1, x2_1, 0)
            else
                x27_1 = *x28_1
                result = UI2GetHandle(zx.q(x20), "tblFriends", x22_1.d)
                
                if (x27_1 != 0)
                    goto label_9bec10
        x22_1 += 1
        x28_1 += 0x40
    while (x25_1 != x22_1)

return result
