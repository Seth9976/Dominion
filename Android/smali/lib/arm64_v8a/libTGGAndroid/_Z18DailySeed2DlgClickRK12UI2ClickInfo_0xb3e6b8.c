// 函数: _Z18DailySeed2DlgClickRK12UI2ClickInfo
// 地址: 0xb3e6b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x20 = *(arg1 + 8)
int32_t var_50
XString::XString(&var_50)

if ((operator==(x20, &var_50) & 1) == 0)
    int32_t x20_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x20_1 == 2)
        GameDlgManagerShow(3, 5)
else
    XString::~XString()
    GameDlgManagerShow(3, 5)

char* x20_2 = *(arg1 + 8)
XString::XString(&var_50)
int32_t x0_5 = operator==(x20_2, &var_50)
XString::~XString()

if ((x0_5 & 1) != 0)
    TryQueryFriendLeaderboard()
    *gDailyDlg = 0

char* x20_4 = *(arg1 + 8)
XString::XString(&var_50)
int32_t x0_8 = operator==(x20_4, &var_50)
XString::~XString()

if ((x0_8 & 1) != 0)
    *gDailyDlg = 1

char* x20_6 = *(arg1 + 8)
XString::XString(&var_50)
int32_t x0_11 = operator==(x20_6, &var_50)
XString::~XString()

if ((x0_11 & 1) != 0)
    *gDailyDlg = 2

char* x20_8 = *(arg1 + 8)
XString::XString(&var_50)
int32_t x0_14 = operator==(x20_8, &var_50)
XString::~XString()

if ((x0_14 & 1) != 0)
    int32_t x20_10 = *(gDailyDlg + 8)
    int32_t x21_1 = *(gDailyDlg + 0xc)
    int32_t x1_11 = *(arg1 + 0x10) - CalcDayOfTheWeek(x20_10, zx.q(x21_1), 1)
    var_50 = x20_10
    int32_t var_4c_1 = x21_1
    int32_t var_48_1 = 1
    int64_t x0_18
    int32_t x1_12
    x0_18, x1_12 = DateAdd_Day(&var_50, x1_11)
    var_50.q = x0_18
    int32_t var_48_2 = x1_12
    TryReplayDaily(&var_50, zx.q(*(GetActiveProfile() + 0x75a0)), false)

char* x20_11 = *(arg1 + 8)
XString::XString(&var_50)
int32_t x0_23 = operator==(x20_11, &var_50)
XString::~XString()

if ((x0_23 & 1) != 0)
    *(gDailyDlg + 4) = 1

char* x20_13 = *(arg1 + 8)
XString::XString(&var_50)
int32_t x0_26 = operator==(x20_13, &var_50)
XString::~XString()

if ((x0_26 & 1) != 0)
    *(gDailyDlg + 4) = 0

char* x20_15 = *(arg1 + 8)
XString::XString(&var_50)
int32_t x0_29 = operator==(x20_15, &var_50)
XString::~XString()
int64_t var_60

if ((x0_29 & 1) != 0)
    int32_t x2_1 = *(gDailyDlg + 8)
    int32_t x1_20 = *(gDailyDlg + 0xc)
    var_50 = x2_1
    int32_t var_4c_2 = x1_20
    int32_t x8_1 = *(arg1 + 0x10)
    int32_t var_48_3 = x8_1 * 7 + 1
    int64_t x0_33
    int32_t x1_22
    x0_33, x1_22 = DateAdd_Day(&var_50, neg.d(GetDayOfTheWeek(x8_1 * 7 + 1, x1_20, x2_1)))
    var_60 = x0_33
    int32_t var_58_1 = x1_22
    TryReplayCampaign(&var_60, false)

char* x20_17 = *(arg1 + 8)
XString::XString(&var_50)
int32_t x0_37 = operator==(x20_17, &var_50)
XString::~XString()

if ((x0_37 & 1) != 0)
    var_50.q = *(gDailyDlg + 8)
    int32_t var_48_4 = 1
    int64_t x0_39 = DateAdd_Day(&var_50, 0xffffffff)
    *(gDailyDlg + 8) = x0_39
    var_60.d = x0_39.d
    var_60:4.d = (x0_39 u>> 0x20).d
    int32_t var_58_2 = 1
    QueryTwoMonthsAgo(&var_60)

char* x19_1 = *(arg1 + 8)
XString::XString(&var_50)
int32_t x0_43 = operator==(x19_1, &var_50)
XString::~XString()

if ((x0_43 & 1) != 0)
    int32_t x0_44 = *(gDailyDlg + 8)
    uint64_t x1_27 = zx.q(*(gDailyDlg + 0xc))
    var_50 = x0_44
    int32_t var_4c_3 = x1_27.d
    int32_t var_48_5 = DaysInMonth(x0_44, x1_27)
    *(gDailyDlg + 8) = DateAdd_Day(&var_50, 1)

return 0
