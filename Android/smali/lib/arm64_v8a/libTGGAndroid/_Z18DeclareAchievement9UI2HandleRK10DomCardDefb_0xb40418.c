// 函数: _Z18DeclareAchievement9UI2HandleRK10DomCardDefb
// 地址: 0xb40418
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetState(arg1, arg2 + 0x90, 0xffffffff, 0)
DomAchievementLabelGet(arg2)
int64_t* x22 = &data_18312f0
void var_40
UI2SetText(zx.q(x19), &data_1831320, &var_40, 0xffffffff)
XString var_38
UI2SetText(zx.q(x19), &data_1831338, &var_38, 0xffffffff)
int32_t x0_7 =
    SyncedDataGet(GetActiveProfile(), zx.q(SyncedDataKeyFromAchievement(zx.q(*(arg2 + 0xc0)))))

if (x0_7 == 0x19640)
    x22 = &data_182e7d0
    UI2SetState(zx.q(x19), &data_18312d8, 0xffffffff, 0)
else if (x0_7 == 0x19a28)
    x22 = &data_182e7e8
    UI2SetState(zx.q(x19), &data_18312d8, 0xffffffff, 0)
else if (x0_7 == 0x1a1f8)
    x22 = &data_182e818
    UI2SetState(zx.q(x19), &data_18312d8, 0xffffffff, 0)

if (x0_7 == 0x18a88)
    x22 = &data_182e7a0
    UI2SetState(zx.q(x19), &data_18312d8, 0xffffffff, 0)
else if (x0_7 == 0x18e70)
    x22 = &data_182e800
    UI2SetState(zx.q(x19), &data_18312d8, 0xffffffff, 0)
else if (x0_7 == 0x19258)
    x22 = &data_182e7b8
    UI2SetState(zx.q(x19), &data_18312d8, 0xffffffff, 0)

UI2SetState(zx.q(x19), x22, 0xffffffff, 0)

if ((arg3.d & 1) != 0)
    UI2SetState(zx.q(x19), &data_1831308, 0xffffffff, 0)

XString::~XString()
return XString::~XString()
