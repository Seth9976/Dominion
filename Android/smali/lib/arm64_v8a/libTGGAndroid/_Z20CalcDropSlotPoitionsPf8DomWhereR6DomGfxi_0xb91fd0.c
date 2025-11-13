// 函数: _Z20CalcDropSlotPoitionsPf8DomWhereR6DomGfxi
// 地址: 0xb91fd0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = arg2
int32_t x0 = GameMainUI()
int32_t x8 = x23 - 0x3eb

if (x8 u<= 5)
    goto label_b92034

while (x23 - 0x44d u< 4)
    while (true)
        if (arg4 s>= 1)
            int32_t var_6c
            
            if (x23 == 0x3ee)
                int64_t i = 0
                
                do
                    UI2GetTableTransform(zx.q(x0), "tbl_player_reveal", i.d, nullptr)
                    arg1[i] = var_6c
                    i += 1
                while (zx.q(arg4) != i)
            else
                int64_t i_1 = 0
                uint64_t x26_1 = zx.q(x23 - 0x3eb)
                
                if (x23 != 0x3eb)
                    int32_t x28_1 = x23 - 0x44d
                    x23 = 0x72b328
                    
                    while (true)
                        uint64_t x0_5
                        char* x1
                        
                        if (x26_1.d u> 5)
                            if (x28_1 u>= 4)
                                break
                            
                            x0_5 = zx.q(x0)
                            x1 = "tbl_player_reveal"
                        else
                            switch (x26_1)
                                case 1, 2
                                    break
                                case 4
                                    x0_5 = zx.q(x0)
                                    x1 = "tbl_player_reveal_left"
                                case 5
                                    x0_5 = zx.q(x0)
                                    x1 = "tbl_player_reveal_right"
                        
                        UI2GetTableTransform(x0_5, x1, i_1.d, nullptr)
                        arg1[i_1] = var_6c
                        i_1 += 1
                        
                        if (zx.q(arg4) == i_1)
                            return zx.q(arg4)
                    
                label_b92020:
                    pthread_kill(pthread_self(), 6)
                    x8 = XNoReturn()
                label_b92034:
                    
                    if ((1 << x8 & 0x39) == 0)
                        break
                    
                    continue
                else
                    do
                        UI2GetTableTransform(zx.q(x0), "tbl_player_reveal", i_1.d, nullptr)
                        arg1[i_1] = var_6c
                        i_1 += 1
                    while (zx.q(arg4) != i_1)
        
        return zx.q(arg4)

goto label_b92020
