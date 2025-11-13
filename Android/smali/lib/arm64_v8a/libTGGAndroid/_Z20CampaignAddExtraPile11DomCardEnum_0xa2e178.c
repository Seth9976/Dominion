// 函数: _Z20CampaignAddExtraPile11DomCardEnum
// 地址: 0xa2e178
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
DomGame* x20 = *(DomGetContext() + 8)
int64_t result = ExtraPileExists(x20, zx.q(x19))

if ((result.d & 1) != 0)
    return result

ExtraSetup var_70
return AddPileWhere(x20, zx.q(NextAvailableNonSupplyPile(x20)), zx.q(x19), &var_70, 0, 0)
