// 函数: _Z16DeclareCardEntry9UI2HandleRK10ScoreEntry
// 地址: 0xb9e394
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
int32_t x21_2 = *(arg2 + 4)
uint64_t x1_5

if (*(GetClient() + 0x5068) == 0)
    x1_5 = 0x18
else
    x1_5 = zx.q(*(ActiveGame() + 0x30))

IsLandscape(zx.q(x21_2), x1_5)
UI2SetState(zx.q(x19), &data_182cbf8, 0xffffffff, 0)
XStringFromInt(*(arg2 + 8))
void var_28
UI2SetText(zx.q(x19), &data_182cc10, &var_28, 0xffffffff)
return XString::~XString()
