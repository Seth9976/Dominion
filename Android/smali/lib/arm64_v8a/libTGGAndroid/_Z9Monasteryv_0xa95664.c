// 函数: _Z9Monasteryv
// 地址: 0xa95664
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result
int128_t v0
int128_t v1
result, v0, v1 = CountCardsGainedThisTurn()

if (result.d s>= 1)
    int32_t x19_1 = result.d
    int32_t x20_1 = 0
    v1.d = 0x3ea
    v1:4.d = 0x3ea
    v1:8.d = 0x3ea
    v1:0xc.d = 0x3ea
    v0.d = 0x3e9
    v0:4.d = 0x3e9
    v0:8.d = 0x3e9
    v0:0xc.d = 0x3e9
    
    do
        CardsHand()
        int32_t var_cd8
        uint64_t x8_1 = zx.q(var_cd8)
        int32_t var_cd0[0x4]
        void var_cc0
        
        if (x8_1.d s>= 1)
            int64_t i_6
            
            if (x8_1.d u>= 8)
                i_6 = x8_1 & 0xfffffff8
                int64_t i_4 = i_6
                void* x11_1 = &var_cc0
                int64_t i
                
                do
                    *(x11_1 - 0x10) = v1
                    *x11_1 = v1
                    i = i_4
                    i_4 -= 8
                    x11_1 += 0x20
                while (i != 8)
                
                if (i_6 != x8_1)
                    goto label_a95700
            else
                i_6 = 0
            label_a95700:
                void* x10_1 = &var_cd0[i_6]
                int64_t i_3 = x8_1 - i_6
                int64_t i_1
                
                do
                    i_1 = i_3
                    i_3 -= 1
                    *x10_1 = 0x3ea
                    x10_1 += 4
                while (i_1 != 1)
        
        int64_t x25_1 = sx.q(x8_1.d)
        CardsWhereWhat(0x3e9, 0x104)
        CardIDs var_25e0
        void var_1958
        operator+=(&var_1958, &var_25e0)
        int64_t x8_2 = sx.q(var_cd8)
        
        if (x25_1.d s< x8_2.d)
            int64_t x9_1 = x8_2 - x25_1
            int64_t i_7
            
            if (x9_1 u>= 8)
                i_7 = x9_1 & 0xfffffffffffffff8
                void* x12_1 = &var_cc0 + (x25_1 << 2)
                int64_t i_5 = i_7
                int64_t i_2
                
                do
                    *(x12_1 - 0x10) = v0
                    *x12_1 = v0
                    i_2 = i_5
                    i_5 -= 8
                    x12_1 += 0x20
                while (i_2 != 8)
                x25_1 += i_7
            
            if (x9_1 u< 8 || x9_1 != i_7)
                do
                    var_cd0[x25_1] = 0x3e9
                    x25_1 += 1
                while (x25_1 s< x8_2)
        
        result = TrashUpTo(&var_1958, 1, &var_cd0, 0x13, 0, nullptr)
        int32_t var_1960
        
        if (var_1960 == 0)
            break
        
        x20_1 += 1
    while (x20_1 s< x19_1)

return result
