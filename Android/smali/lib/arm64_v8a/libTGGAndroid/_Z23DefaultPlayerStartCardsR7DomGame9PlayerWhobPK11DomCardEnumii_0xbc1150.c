// 函数: _Z23DefaultPlayerStartCardsR7DomGame9PlayerWhobPK11DomCardEnumii
// 地址: 0xbc1150
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg2

if (arg5 s< 1)
label_bc11b0:
    int32_t i_2 = arg5 - 7
    int32_t i
    
    do
        CardCreate(arg1, 0x104, 0x3eb, zx.q(x20), 0)
        i = i_2
        i_2 += 1
    while (i u< 0xffffffff)
else
    DomCardEnum const* x23_1 = arg4
    uint64_t i_3 = zx.q(arg5)
    uint64_t i_1
    
    do
        uint64_t x1 = zx.q(*x23_1)
        x23_1 += 4
        CardCreate(arg1, x1, 0x3eb, zx.q(x20), 0)
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    
    if (arg5 s>= 8)
        void* x0_3 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_3 + sx.q(*(x0_3 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    else if (arg5 != 7)
        goto label_bc11b0

CardCreate(arg1, 0x101, 0x3eb, zx.q(x20), 0)
CardCreate(arg1, 0x101, 0x3eb, zx.q(x20), 0)
CardCreate(arg1, 0x101, 0x3eb, zx.q(x20), 0)
int32_t x0_8
int32_t x4
x0_8, x4 = CampaignApplyExtras(arg1, zx.q(x20), arg1 + 0xd40, 1)

if ((arg3.d & 1) != 0)
    ReplaceDeckCards(arg1, zx.q(x20), 0x101, 0x929, 
        ReplaceDeckCards(arg1, zx.q(x20), 0x101, 0x92b, 
            ReplaceDeckCards(arg1, zx.q(x20), 0x101, 0x92a, x4)))

int32_t x20_1 = CampaignApplyExtras(arg1, zx.q(x20), arg1 + 0xd40, 0x20) | x0_8
CalcScores(arg1)
return zx.q(x20_1)
