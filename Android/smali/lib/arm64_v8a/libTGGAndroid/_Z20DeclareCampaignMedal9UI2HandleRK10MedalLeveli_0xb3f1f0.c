// 函数: _Z20DeclareCampaignMedal9UI2HandleRK10MedalLeveli
// 地址: 0xb3f1f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1.d

if (*arg2 != 0)
    UI2SetState(zx.q(x20), &data_18310b0, arg3, 0)
    int32_t x8_2 = *arg2 - 1
    
    if (x8_2 u<= 3)
        UI2SetState(zx.q(x20), (&data_1153ed8)[sx.q(x8_2)], arg3, 0)
    
    if (*(arg2 + 4) == 1)
        UI2SetState(zx.q(x20), &data_1831128, arg3, 0)
    
    XStringFromInt(*(arg2 + 8))
    XString var_28
    UI2SetText(zx.q(x20), &data_1831140, &var_28, arg3)
    XString::~XString()

if (*(arg2 + 4) != 0)
    return 

uint64_t x8_6 = zx.q(*(arg2 + 0xc) - 1)

if (x8_6.d u> 8)
    return 

switch (x8_6)
    case 1
        UI2SetState(zx.q(x20), &data_1831170, arg3, 0)
    case 2
        UI2SetState(zx.q(x20), &data_1831188, arg3, 0)
        UI2SetState(zx.q(x20), &data_1831170, arg3, 0)
    case 3
        goto label_b3f370
    case 4
        goto label_b3f358
    case 5
        goto label_b3f340
    case 6
        goto label_b3f328
    case 7
        goto label_b3f310
    case 8
        UI2SetState(zx.q(x20), &data_1831218, arg3, 0)
    label_b3f310:
        UI2SetState(zx.q(x20), &data_1831200, arg3, 0)
    label_b3f328:
        UI2SetState(zx.q(x20), &data_18311e8, arg3, 0)
    label_b3f340:
        UI2SetState(zx.q(x20), &data_18311d0, arg3, 0)
    label_b3f358:
        UI2SetState(zx.q(x20), &data_18311b8, arg3, 0)
    label_b3f370:
        UI2SetState(zx.q(x20), &data_18311a0, arg3, 0)
        UI2SetState(zx.q(x20), &data_1831188, arg3, 0)
        UI2SetState(zx.q(x20), &data_1831170, arg3, 0)

UI2SetState(zx.q(x20), &data_1831158, arg3, 0)
