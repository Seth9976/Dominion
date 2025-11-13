// 函数: _Z16RemoveFriendDesc9AccountID
// 地址: 0x9b08ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetClient()
void* x0_1 = GetClient()
uint64_t x10 = zx.q(*(x0_1 + 0x5028))

if (x10.d s>= 1)
    int64_t i = 0
    int64_t x8_1 = 0
    void* x11_1 = x0_1 + 0x2c
    
    do
        if (*x11_1 == arg1)
            if (i.d == 1)
                break
            
            int64_t* x20_1 = x0 + 0x28 + (x8_1 s>> 0x1b)
            int64_t x9_2 = sx.q(*(x0 + 0x5028)) - 1
            *(x0 + 0x5028) = x9_2.d
            void* x19_1 = x0 + 0x28 + (x9_2 << 5)
            *x20_1 = *x19_1
            int64_t x0_3
            int128_t v0
            x0_3, v0 = XString::operator=(&x20_1[1])
            *(x20_1 + 0x10) = *(x19_1 + 0x10)
            *(x0 + 0x502c) = 0
            return x0_3
        
        i -= 1
        x8_1 += 0x100000000
        x11_1 += 0x20
    while (neg.q(x10) != i)

return x0_1
