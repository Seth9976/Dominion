// 函数: _Z16Twist_MirrorLootv
// 地址: 0xa3b6d0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = BoardPileWhere(*(x0 + 8), 0x1128)
void* result = DomBoardPile(*(x0 + 8), x0_2)
int32_t x21 = *(result + 8)

if (x21 != 0)
    int32_t x20_1 = 0
    
    while (true)
        result = CardGet(*(x0 + 8), zx.q(x21))
        void* result_1 = result
        
        if (x20_1 != 0)
            DomGame* x23_1 = *(x0 + 8)
            int64_t* x0_5 = CardGet(x23_1, zx.q(x21))
            x0_5[1].d = x20_1
            *x0_5 = DomDefGet(zx.q(x20_1), zx.q(*(x23_1 + 0xd50)))
            int64_t var_48_1 = 0
            int32_t var_50_1 = 0
            int32_t var_58_1 = 0
            int32_t var_60_1 = 0
            result = NotifyEffect(x23_1, 0x2d, 0xffffffff, zx.q(x21), zx.q(x20_1), 0, 0, 0)
            x21 = *(result_1 + 0x60)
            
            if (x21 == 0)
                break
        else
            x20_1 = *(result_1 + 8)
            x21 = *(result_1 + 0x60)
            
            if (x21 == 0)
                break

return result
