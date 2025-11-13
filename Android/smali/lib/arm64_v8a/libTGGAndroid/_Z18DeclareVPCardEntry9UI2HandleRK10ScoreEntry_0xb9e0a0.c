// 函数: _Z18DeclareVPCardEntry9UI2HandleRK10ScoreEntry
// 地址: 0xb9e0a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = *(arg2 + 4)
int32_t x19 = arg1
uint64_t x1

if (*(GetClient() + 0x5068) == 0)
    x1 = 0x18
else
    x1 = zx.q(*(ActiveGame() + 0x30))

DomCardDef* x0_3 = DomDefGet(zx.q(x21), x1)
UI2SetState(zx.q(x19), x0_3 + 0x90, 0xffffffff, 0)
DomDeclareCardComponents(zx.q(x19), x0_3, nullptr, 0, 0)
DomDeclareType(zx.q(x19), x0_3, 0)
DomDeclareExpansion(zx.q(x19), x0_3)
XStringFromInt(*(arg2 + 8))
void var_28
UI2SetText(zx.q(x19), &data_1832628, &var_28, 0xffffffff)
XString::~XString()
UI2SetState(zx.q(x19), &data_18326d0, 0xffffffff, 0)
UI2SetState(zx.q(x19), &data_1832598, 0xffffffff, 0)
VPBannerStringFormat(GetCurrentLanguage(), zx.q(*(arg2 + 4)), *(arg2 + 0x10), *(arg2 + 0x14), 
    *(arg2 + 0x18))

if ((XString::IsEmpty() & 1) == 0)
    UI2SetState(zx.q(x19), &data_18325b0, 0xffffffff, 0)
    UI2SetText(zx.q(x19), &data_18325c8, &var_28, 0xffffffff)

int32_t x21_2 = *(arg2 + 4)

if (*(GetClient() + 0x5068) == 0)
    if ((IsLandscape(zx.q(x21_2), 0x18) & 1) != 0)
        UI2SetState(zx.q(x19), &data_1832658, 0xffffffff, 0)
    else
    label_b9e244:
        UI2SetState(zx.q(x19), &data_182cbf8, 0xffffffff, 0)
        XStringFromInt(*(arg2 + 0xc))
        void var_30
        UI2SetText(zx.q(x19), &data_182cc10, &var_30, 0xffffffff)
        XString::~XString()
else
    if ((IsLandscape(zx.q(x21_2), zx.q(*(ActiveGame() + 0x30))) & 1) == 0)
        goto label_b9e244
    
    UI2SetState(zx.q(x19), &data_1832658, 0xffffffff, 0)

return XString::~XString()
