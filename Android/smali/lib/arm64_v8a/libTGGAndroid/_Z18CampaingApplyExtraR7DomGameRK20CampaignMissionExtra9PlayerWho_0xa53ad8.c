// 函数: _Z18CampaingApplyExtraR7DomGameRK20CampaignMissionExtra9PlayerWho
// 地址: 0xa53ad8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = zx.q(*arg2)
int32_t x19 = arg3
int64_t* x8_1 =
    *gCampaignData + (((zx.q(x0.d) | zx.q(x0.d s>> 4)) & zx.q(*(gCampaignData + 8))) << 3)
int32_t* x9_2

do
    x9_2 = *x8_1
    x8_1 = &x9_2[4]
while (*x9_2 != x0.d)

void* x24 = *(x9_2 + 8)
int64_t x8_4

if (*(x24 + 0x18) == 1)
    x8_4 = 0
else if (*(x24 + 0x288) == 1)
    x8_4 = 1
else if (*(x24 + 0x4f8) != 1)
    if (*(x24 + 0x768) != 1)
        pthread_kill(pthread_self(), 6)
        DomGame* x0_17
        int64_t x1_6
        DomGameConfig* x2_6
        int64_t x3_2
        x0_17, x1_6, x2_6, x3_2 = XNoReturn()
        return CampaignApplyExtras(x0_17, x1_6, x2_6, x3_2) __tailcall
    
    x8_4 = 3
else
    x8_4 = 2

int64_t x25 = *(x24 + x8_4 * 0x270 + 0x20)
int64_t var_90

if (*(x24 + 0x10) != 0x1770)
    void* x0_13 = DomPushSetupContext(arg1, zx.q(*(arg2 + 4)), &var_90, zx.q(x19), 0)
    *(x0_13 + 0x54) = *(arg2 + 0x10)
else
    int32_t x0_1 = TwistGetCard(x0)
    int32_t x0_3 = NextAvailableNonSupplyPile(arg1)
    AllocBoardPile(arg1, zx.q(x0_3), zx.q(x0_1), 0)
    var_90 =
        ToCardRef(arg1, zx.q(GetId(arg1, CardCreate(arg1, zx.q(x0_1), zx.q(x0_3), 0xffffffff, 0))))
    DomPushContext(arg1, zx.q(x19), &var_90)
x25()
int64_t result = DomPopContext()
int32_t x8_10 = *(x24 + 0x10)

if (x8_10 == 0x1770)
    uint64_t x6_1 = zx.q(*arg2)
    DomGame& x0_14
    uint64_t x2_4
    uint64_t x7_1
    
    if (x6_1.d != 0x17d8)
        x0_14 = arg1
        x2_4 = zx.q(x19)
        x7_1 = 0
        int32_t var_98_2 = 0
        int32_t var_a0_2 = 0
    else
        x7_1 = zx.q(*(arg1 + 0x1014))
        int32_t var_98_1 = 0
        x6_1 = 0x17d8
        int32_t var_a0_1 = 0
        x0_14 = arg1
        x2_4 = zx.q(x19)
    
    result = NotifyLog(x0_14, 0x45, x2_4, 0, nullptr, 0, x6_1, x7_1)
    x8_10 = *(x24 + 0x10)

if (x8_10 != 0x1b58)
    return result

int32_t var_98_3 = 0
int32_t var_a0_3 = 0
return NotifyLog(arg1, 0x44, zx.q(x19), 0, nullptr, 0, zx.q(*arg2), zx.q(*(arg2 + 4)))
