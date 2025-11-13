// 函数: _Z16UpdateFriendDesc9AccountID11FriendStatem
// 地址: 0x9b0964
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
void* result = GetClient()
uint64_t x10 = zx.q(*(result + 0x5028))

if (x10.d s>= 1)
    int64_t i = 0
    int64_t x8_1 = 0
    void* x11_1 = result + 0x2c
    
    do
        if (*x11_1 == arg1)
            if (i.d == 1)
                break
            
            void* x8_2 = x0 + (x8_1 s>> 0x1b)
            *(x8_2 + 0x3c) = arg2
            *(x8_2 + 0x40) = arg3
            *(x0 + 0x502c) = 0
            return result
        
        i -= 1
        x8_1 += 0x100000000
        x11_1 += 0x20
    while (neg.q(x10) != i)

return result
