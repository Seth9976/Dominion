// 函数: sub_a864c4
// 地址: 0xa864c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_28 = 0
int32_t result = RevealDeckOne(0x3ee, 0x7e579c)

if (result != 0)
    int32_t result_1 = result
    int32_t x8_1 = 0
    
    while (true)
        void var_ca8
        
        if (x8_1 == 0 || result_1 != 0)
            if ((CostAtLeast(zx.q(result_1), 3) & 1) != 0)
                PauseUI(true)
                TrashDisplay(zx.q(result_1), 0x3ee, 0)
                int32_t var_cb0 = Cost(zx.q(result_1))
                MayGainUpTo(zx.q(operator-(&var_cb0, 2)), 9)
            else
                operator+=(&var_ca8, zx.q(result_1))
                result = RevealDeckOne(0x3ee, 0x7e579c)
                x8_1 = var_28
                result_1 = result
                
                if ((x8_1 | result) == 0)
                    break
                
                continue
        else
            PauseUI(true)
        
        return DiscardCards(&var_ca8, 0x3ee, 0xb, 7, 0)

return result
