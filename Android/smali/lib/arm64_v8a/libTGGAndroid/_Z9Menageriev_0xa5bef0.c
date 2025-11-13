// 函数: _Z9Menageriev
// 地址: 0xa5bef0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Action(1, 0)
CardsHand()
RevealHandTemp()
int32_t var_38
int32_t x0_2

if (var_38 s< 1)
label_a5bf98:
    NotifyResult(1)
    x0_2 = 3
else
    int64_t x20_1 = 0
    
    while (true)
        int32_t var_cb8[0xde]
        int32_t i = CardWhat(zx.q(var_cb8[x20_1]))
        int32_t var_1938[0x242]
        
        if (x20_1 != 0)
            int64_t x8_3
            
            if (var_1938[0] != i)
                int64_t x9_2 = 1
                
                do
                    x8_3 = x9_2
                    
                    if (x20_1 == x9_2)
                        break
                    
                    x9_2 = x8_3 + 1
                while (var_1938[x8_3] != i)
            
            if (var_1938[0] == i || x8_3 u< x20_1)
                x0_2 = 1
                break
        
        int64_t x9_1 = x20_1 + 1
        var_1938[x20_1] = i
        x20_1 = x9_1
        
        if (x9_1 s>= sx.q(var_38))
            goto label_a5bf98

return Card(x0_2, 0, 0, nullptr)
