// 函数: _Z18GameClientFriendOp9AccountID8FriendOp
// 地址: 0x9b0554
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_28 = arg1
int32_t var_24 = arg2
void* x0 = GetClient()

if (*(x0 + 0x18) == 3)
    NetworkSendMessage(zx.q(*(x0 + 0x14)), 0xf42a9, 8, &var_28)

void* x0_2 = GetClient()
void* x0_3 = GetClient()
uint64_t x9 = zx.q(*(x0_3 + 0x5028))

if (x9.d s>= 1)
    int64_t i = 0
    int64_t x22_1 = 0
    void* x10_1 = x0_3 + 0x2c
    
    do
        if (*x10_1 == arg1)
            if (i.d == 1)
                break
            
            void* x0_4 = GetClient()
            uint64_t x8_1 = zx.q(*(x0_4 + 0x5028))
            int64_t x8_2
            
            if (x8_1.d s< 2)
                x8_2 = 0
            else
                int32_t x9_2 = 0
                void* x10_2 = x0_4 + 0x60
                int64_t x11_1 = 1
                
                do
                    int64_t x12_2 = *x10_2
                    x10_2 += 0x20
                    
                    if (x12_2 u> *(x0_4 + (sx.q(x9_2) << 5) + 0x40))
                        x9_2 = x11_1.d
                    
                    x11_1 += 1
                while (x8_1 != x11_1)
                
                x8_2 = sx.q(x9_2)
            
            uint64_t x9_4 = zx.q(var_24 - 1)
            void* x9_6
            
            if (x9_4.d u<= 4)
                switch (x9_4)
                    case 0
                        x9_6 = x0_2 + (x22_1 s>> 0x1b)
                        *(x9_6 + 0x28) = 0xffffffff
                        *(x9_6 + 0x40) = *(x0_4 + (x8_2 << 5) + 0x40) + 1
                        *(x9_6 + 0x3c) = 1
                    case 1
                        x9_6 = x0_2 + (x22_1 s>> 0x1b)
                        *(x9_6 + 0x28) = 0xffffffff
                        *(x9_6 + 0x40) = *(x0_4 + (x8_2 << 5) + 0x40) + 1
                        *(x9_6 + 0x3c) = 4
                    case 2, 4
                        int64_t* x20_1 = x0_2 + 0x28 + (x22_1 s>> 0x1b)
                        int64_t x8_4 = sx.q(*(x0_2 + 0x5028)) - 1
                        *(x0_2 + 0x5028) = x8_4.d
                        void* x19_1 = x0_2 + 0x28 + (x8_4 << 5)
                        *x20_1 = *x19_1
                        int128_t v0_1
                        x0_4, v0_1 = XString::operator=(&x20_1[1])
                        *(x20_1 + 0x10) = *(x19_1 + 0x10)
                    case 3
                        x9_6 = x0_2 + (x22_1 s>> 0x1b)
                        *(x9_6 + 0x28) = 0xffffffff
                        *(x9_6 + 0x40) = *(x0_4 + (x8_2 << 5) + 0x40) + 1
                        *(x9_6 + 0x3c) = 5
            *(x0_2 + 0x502c) = 0
            return x0_4
        
        i -= 1
        x22_1 += 0x100000000
        x10_1 += 0x20
    while (neg.q(x9) != i)

return x0_3
