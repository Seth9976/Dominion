// 函数: _Z17CardMod_CardStampv
// 地址: 0xa3f618
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_14 = 0
DomCardEnum var_28
int64_t result

do
    var_14 = RollStamp(0)
    result = RandomStampTargetPiles(&var_14, 1, &var_28, 1, nullptr)
while (result.d == 0)

if (result.d s>= 1)
    uint64_t i_1 = zx.q(result.d)
    DomCardEnum* x20_1 = &var_28
    uint64_t i
    
    do
        uint64_t x1_1 = zx.q(*x20_1)
        x20_1 += 4
        result = CampaignAddExtra(zx.q(var_14), x1_1, 0xffffffff, 0, 0)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
