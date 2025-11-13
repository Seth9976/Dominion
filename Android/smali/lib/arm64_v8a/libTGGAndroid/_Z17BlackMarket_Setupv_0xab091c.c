// 函数: _Z17BlackMarket_Setupv
// 地址: 0xab091c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* var_38
int32_t x0_1 = GetSetupPiles(&var_38)
void* x0_2 = DomGetContext()
DomGame* x19 = *(x0_2 + 8)
int32_t x0_4 = NextAvailableNonSupplyPile(x19)
AllocBoardPile(x19, zx.q(x0_4), 0x1301, 0)

if (x0_1 s>= 1)
    int64_t i = 0
    
    do
        int32_t x22_1 = *(var_38 + i)
        
        if (x22_1 == 0)
            break
        
        CardCreate(x19, zx.q(x22_1), zx.q(x0_4), 0xffffffff, 0)
        RunPileSetup(x19, zx.q(x22_1), *(x0_2 + 0x90), 1)
        i += 4
    while (zx.q(x0_1) << 2 != i)

return ShufflePile(x19, zx.q(x0_4), 0xffffffff)
