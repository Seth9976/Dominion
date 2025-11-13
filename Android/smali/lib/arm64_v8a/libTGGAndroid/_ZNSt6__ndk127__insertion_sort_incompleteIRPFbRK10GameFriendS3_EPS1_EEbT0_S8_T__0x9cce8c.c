// 函数: _ZNSt6__ndk127__insertion_sort_incompleteIRPFbRK10GameFriendS3_EPS1_EEbT0_S8_T_
// 地址: 0x9cce8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1 = (arg2 - arg1) s>> 5
char x8_2
int64_t var_80
void var_78

if (x8_1 u> 5)
    GameFriend* x22_2 = arg1 + 0x40
    char x9_1 = std::__ndk1::__sort3<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(
        arg1, arg1 + 0x20, x22_2, arg3)
    void* __offset(GameFriend, 0x20) x8_7 = arg1 + 0x60
    char x8_13
    
    if (x8_7 == arg2)
    label_9cd0d0:
        x8_13 = 1
    else
        int64_t x25_1 = 0
        int32_t x26_1 = 0
        
        while (true)
            GameFriend* x1_4 = x22_2
            x22_2 = x8_7
            int32_t x0_8
            x0_8, x9_1 = (*arg3)(x8_7, x1_4)
            
            if ((x0_8 & 1) != 0)
                var_80 = *x22_2
                XString::XString(&var_78)
                int128_t v0_5 = *(x22_2 + 0x10)
                int64_t fp_1 = x25_1
                void* x8_8
                void* x28_1
                
                while (true)
                    x28_1 = arg1 + fp_1
                    *(x28_1 + 0x60) = *(x28_1 + 0x40)
                    XString::operator=(x28_1 + 0x68)
                    *(x28_1 + 0x70) = *(x28_1 + 0x50)
                    
                    if (fp_1 == -0x40)
                        x8_8 = arg1
                        break
                    
                    fp_1 -= 0x20
                    
                    if (((*arg3)(&var_80, x28_1 + 0x20) & 1) == 0)
                        x8_8 = arg1 + fp_1 + 0x60
                        break
                
                *x8_8 = var_80
                XString::operator=(x28_1 + 0x48)
                x26_1 += 1
                *(x28_1 + 0x50) = v0_5
                x9_1 = XString::~XString()
                
                if (x26_1 == 8)
                    x8_13 = 0
                    x9_1 = (x22_2 + 0x20 == arg2 ? 1 : 0).b
                    break
            
            x8_7 = x22_2 + 0x20
            x25_1 += 0x20
            
            if (x8_7 == arg2)
                goto label_9cd0d0
    
    x8_2 = x8_13 | x9_1
else
    x8_2 = 1
    
    switch (x8_1)
        case 2
            if (((*arg3)(arg2 - 0x20, arg1) & 1) == 0)
                x8_2 = 1
            else
                var_80 = *arg1
                XString::XString(&var_78)
                int128_t v0_1 = *(arg1 + 0x10)
                *arg1 = *(arg2 - 0x20)
                XString::operator=(arg1 + 8)
                *(arg1 + 0x10) = *(arg2 - 0x10)
                *(arg2 - 0x20) = var_80
                XString::operator=(arg2 - 0x18)
                *(arg2 - 0x10) = v0_1
                XString::~XString()
                x8_2 = 1
        case 3
            std::__ndk1::__sort3<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(
                arg1, arg1 + 0x20, arg2 - 0x20, arg3)
            x8_2 = 1
        case 4
            std::__ndk1::__sort4<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(
                arg1, arg1 + 0x20, arg1 + 0x40, arg2 - 0x20, arg3)
            x8_2 = 1
        case 5
            sub_9ccae0(arg1, arg1 + 0x20, arg1 + 0x40, arg1 + 0x60, arg2 - 0x20, arg3)
            x8_2 = 1
return x8_2 & 1
