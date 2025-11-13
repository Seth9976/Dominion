// 函数: _Z17ModifyFriendRange10FriendsTab10ServerPageS0_
// 地址: 0x9be7c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i_4 = arg3
int32_t i_1 = arg2
int32_t x21 = arg1
void* result = GetClient()
int32_t* x24 = result + 0x5028
int32_t x8 = *x24
void* result_1 = result
int32_t i_3

i_3 = i_4 == 0 ? i_1 : i_4

if (x8 s>= 1)
    int32_t x22 = i_1 << 7
    int32_t x25_1 = 0x7f | (0x1ffffff & i_1) << 7
    int32_t x26_1 = 0
    
    if (x21 == 2)
        do
            int64_t x9_2 = sx.q(x26_1)
            void* x10_3 = result_1 + (x9_2 << 5)
            int32_t x11_7 = *(x10_3 + 0x3c)
            
            if (x11_7 == 5)
                if (x21 == 3)
                    int32_t x11_9 = *(x10_3 + 0x28)
                    
                    if (x11_9 != 0xffffffff && (x22 s> x11_9 || x25_1 s< x11_9))
                    label_9be8c4:
                        *x24 = x8 - 1
                        void* x27_2 = result_1 + 0x28 + ((sx.q(x8) - 1) << 5)
                        void* x28_2 = result_1 + 0x28 + (x9_2 << 5)
                        x26_1 -= 1
                        *(x10_3 + 0x28) = *x27_2
                        int128_t v0_2
                        result, v0_2 = XString::operator=(x28_2 + 8)
                        *(x28_2 + 0x10) = *(x27_2 + 0x10)
            else if (x11_7 == 4)
                int32_t x11_8 = *(x10_3 + 0x28)
                
                if (x11_8 != 0xffffffff && (x22 s> x11_8 || x25_1 s< x11_8))
                    goto label_9be8c4
            
            x8 = *x24
            x26_1 += 1
        while (x26_1 s< x8)
    else
        do
            int64_t x9_1 = sx.q(x26_1)
            void* x10_1 = result_1 + (x9_1 << 5)
            
            if ((((*(x10_1 + 0x3c) != 5 ? 1 : 0) | (x21 != 3 ? 1 : 0)) & 1) == 0)
                int32_t x11_5 = *(x10_1 + 0x28)
                
                if (x11_5 != 0xffffffff && (x22 s> x11_5 || x25_1 s< x11_5))
                    *x24 = x8 - 1
                    void* x28_1 = result_1 + 0x28 + ((sx.q(x8) - 1) << 5)
                    void* fp_1 = result_1 + 0x28 + (x9_1 << 5)
                    x26_1 -= 1
                    *(x10_1 + 0x28) = *x28_1
                    int128_t v0_1
                    result, v0_1 = XString::operator=(fp_1 + 8)
                    *(fp_1 + 0x10) = *(x28_1 + 0x10)
                    x8 = *x24
            
            x26_1 += 1
        while (x26_1 s< x8)

x24[1].b = 0

if (i_3 s>= i_1)
    int32_t i = i_1
    
    do
        result = GameClientQueryFriends(zx.q(x21), zx.q(i))
        i += 1
    while (i_3 + 1 != i)

int32_t i_2
int64_t x9_3

if (x21 == 2)
    i_2 = i_1
    x9_3 = 0x5030
else
    if (x21 != 3)
        pthread_kill(pthread_self(), 6)
        int64_t x0_4
        int64_t x1_3
        x0_4, x1_3 = XNoReturn()
        return FriendsUpdateTable(x0_4, x1_3) __tailcall
    
    i_2 = i_1
    x9_3 = 0x5038

*(result_1 + x9_3) = zx.q(i_2) | zx.q(i_3) << 0x20
return result
