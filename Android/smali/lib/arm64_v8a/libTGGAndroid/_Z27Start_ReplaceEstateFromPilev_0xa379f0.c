// 函数: _Z27Start_ReplaceEstateFromPilev
// 地址: 0xa379f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = ThisWhat()
void* x0_1 = DomGetContext()
DomGame* x19 = *(x0_1 + 8)

if (x0 != 0xf46)
    return ReplaceStartingCard(x19, zx.q(*(x0_1 + 0x18)), 0x101, zx.q(x0)) __tailcall

ExtraSetup var_70

if ((ExtraPileExists(x19, 0xf46) & 1) == 0)
    AddPileWhere(x19, zx.q(NextAvailableNonSupplyPile(x19)), 0xf46, &var_70, 0, 0)
void* x0_7 = DomGetContext()
return ReplaceStartingCard(*(x0_7 + 8), zx.q(*(x0_7 + 0x18)), 0x101, 0xf46)
