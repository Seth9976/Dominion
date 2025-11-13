// 函数: _Z8GainLoot8DomWhere
// 地址: 0xaa14e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = DomGetContext()
int32_t x0_2 = BoardPileWhere(*(x0 + 8), 0x1128)
DomGame* x0_3 = *(x0 + 8)
int32_t var_24

if ((TryDoCampaignLootDraw(x0_3, x0_3 + 0x1a20, &var_24) & 1) == 0)
    int32_t x8_1 = *(DomBoardPile(*(x0 + 8), x0_2) + 8)
    
    if (x8_1 == 0)
        return 0
    
    var_24 = x8_1

int32_t var_38 = 0
int32_t var_40 = 0
NotifyLog(*(x0 + 8), 0x3c, 0xffffffff, 0, nullptr, 0, 0, 0)

if ((GainCard(zx.q(var_24), zx.q(arg1), 0, 0, 4) & 1) != 0)
    return zx.q(var_24)

return 0
