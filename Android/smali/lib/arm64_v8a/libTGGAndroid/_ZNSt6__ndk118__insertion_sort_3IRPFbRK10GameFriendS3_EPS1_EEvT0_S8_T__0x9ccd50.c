// 函数: _ZNSt6__ndk118__insertion_sort_3IRPFbRK10GameFriendS3_EPS1_EEvT0_S8_T_
// 地址: 0x9ccd50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(GameFriend, 0x40) x22 = arg1 + 0x40
int32_t result = std::__ndk1::__sort3<bool (*&)(GameFriend const&, GameFriend const&), GameFriend*>(
    arg1, arg1 + 0x20, x22, arg3)
void* __offset(GameFriend, 0x60) x8 = arg1 + 0x60

if (x8 != arg2)
    int64_t x25_1 = 0
    
    do
        void* __offset(GameFriend, 0x40) x1_1 = x22
        x22 = x8
        result = (*arg3)(x8, x1_1)
        
        if ((result & 1) != 0)
            int64_t var_80 = *x22
            void var_78
            XString::XString(&var_78)
            int128_t v0_2 = *(x22 + 0x10)
            int64_t x28_1 = x25_1
            void* x8_1
            void* x27_1
            
            while (true)
                x27_1 = arg1 + x28_1
                *(x27_1 + 0x60) = *(x27_1 + 0x40)
                XString::operator=(x27_1 + 0x68)
                *(x27_1 + 0x70) = *(x27_1 + 0x50)
                
                if (x28_1 == -0x40)
                    x8_1 = arg1
                    break
                
                x28_1 -= 0x20
                
                if (((*arg3)(&var_80, x27_1 + 0x20) & 1) == 0)
                    x8_1 = arg1 + x28_1 + 0x60
                    break
            
            *x8_1 = var_80
            XString::operator=(x27_1 + 0x48)
            *(x27_1 + 0x50) = v0_2
            result = XString::~XString()
        
        x8 = x22 + 0x20
        x25_1 += 0x20
    while (x8 != arg2)

return result
