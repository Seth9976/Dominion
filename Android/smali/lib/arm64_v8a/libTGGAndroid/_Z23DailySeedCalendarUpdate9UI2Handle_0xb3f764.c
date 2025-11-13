// 函数: _Z23DailySeedCalendarUpdate9UI2Handle
// 地址: 0xb3f764
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(gDailyDlg + 8)

if (x19 == 0)
    return 

int32_t x20_1 = *(gDailyDlg + 0xc)
int32_t var_1a14_1 = arg1.d
int32_t x0_1 = DaysInMonth(x19, zx.q(x20_1))
int32_t x20_2
int32_t x26_1

if (x0_1 == 0x1c)
    if (CalcDayOfTheWeek(x19, zx.q(x20_1), 1) != 0)
        x20_2 = var_1a14_1
        x26_1 = 0x23
    else
        x20_2 = var_1a14_1
        UI2SetState(zx.q(x20_2), &data_1830b40, 0xffffffff, 0)
        x26_1 = 0x1c
else if (x0_1 s< 0x1d)
    x20_2 = var_1a14_1
    x26_1 = 0x23
else
    x20_2 = var_1a14_1
    
    if (CalcDayOfTheWeek(x19, zx.q(x20_1), 1) s<= CalcDayOfTheWeek(x19, zx.q(x20_1), x0_1))
        x26_1 = 0x23
    else
        UI2SetState(zx.q(x20_2), &data_1830b58, 0xffffffff, 0)
        x26_1 = 0x2a

int32_t x0_11

if (data_182abc8 == "tbl_Calendar" && data_182a878 == x20_2 && zx.d(data_182a670) != 0)
    x0_11 = UI2Exists(zx.q(data_182a880))

int32_t x20_3

if (data_182abc8 != "tbl_Calendar" || data_182a878 != x20_2 || zx.d(data_182a670) == 0
        || (x0_11 & 1) == 0)
    int32_t x0_13 = UI2GetHandle(zx.q(x20_2), "tbl_Calendar")
    x20_3 = x0_13
    data_182a880 = x0_13
    
    if (x0_13 != 0)
        data_182a878 = x20_2
        data_182abc8 = "tbl_Calendar"
        data_182a670 = 1
else
    x20_3 = data_182a880

int32_t x21_2 = 0

do
    int32_t x19_1 = *(gDailyDlg + 8)
    int32_t x23_1 = *(gDailyDlg + 0xc)
    int32_t x1_6 = x21_2 - CalcDayOfTheWeek(x19_1, zx.q(x23_1), 1)
    int32_t var_19f0 = x19_1
    int32_t var_19ec_1 = x23_1
    int32_t var_19e8_1 = 1
    int64_t x0_18
    int32_t x1_7
    x0_18, x1_7 = DateAdd_Day(&var_19f0, x1_6)
    int32_t x9_1 = *(gDailyDlg + 0xc)
    int64_t var_1a00 = x0_18
    int32_t x0_19 = x1_7
    int32_t var_19f8_1 = x0_19
    
    if (x9_1 != (x0_18 u>> 0x20).d)
        UI2SetState(zx.q(x20_3), &data_1830b70, x21_2, 0)
        x0_19 = var_19f8_1
    
    XStringFromInt(x0_19)
    UI2SetText(zx.q(x20_3), &data_1830b88, &var_19f0, x21_2)
    XString::~XString()
    int32_t x0_23 = GetDailyImage(&var_1a00)
    DeclareCalendarDay(zx.q(x20_3), zx.q(x0_23), x21_2)
    void* x0_26 = DailySeedDataByDate(&var_1a00)
    int64_t var_1a10
    
    if (x0_26 != 0)
        int32_t x23_2 = *(x0_26 + 0x10)
        
        if (x23_2 == 0)
            DomSetupConfigFromString(XString::operator char const*(), 0x18)
            int32_t x0_30 = DomSetupConfigToExpansionBitset(&var_19f0, x0_26 + 0x14)
            x23_2 = x0_30
            *(x0_26 + 0x10) = x0_30
        
        int32_t x19_3 = *(x0_26 + 0x14)
        
        if ((x23_2 & not.d(DomExpansionsBitsetFromExpansions(&var_19f0, 
                GetOwnedExpansionSetups(&var_19f0), &var_1a10))) != 0 || (var_1a10.d & x19_3) != x19_3)
            UI2SetState(zx.q(x20_3), &data_1830d68, x21_2, 0)
    
    int64_t x0_37
    int32_t x1_11
    x0_37, x1_11 = DateAdd_Day(&var_1a00, 0xffffffff)
    var_19f0.q = x0_37
    int32_t var_19e8_2 = x1_11
    int64_t x0_39
    int32_t x1_12
    x0_39, x1_12 = DateAdd_Day(&var_1a00, 1)
    var_1a10 = x0_39
    int32_t var_1a08_1 = x1_12
    int32_t x0_41 = GetDailyImage(&var_1a10)
    int32_t x0_43 = GetDailyImage(&var_19f0)
    int32_t x0_46 = operator==(GetClient() + 0x75f8, &var_1a00)
    int32_t x0_48 = CalcDayOfTheWeek(var_1a00.d, zx.q(var_1a00:4.d), var_19f8_1)
    
    if ((x0_23 & 0xfffffff8) == 8)
        int32_t x28_1 = var_19f8_1
        
        if ((x0_43 & 0xfffffff8) == 8 && ((x0_48 != 0 ? 1 : 0) & (x28_1 != 1 ? 1 : 0) & 1) == 0)
            UI2SetState(zx.q(x20_3), &data_1831008, x21_2, 0)
            x28_1 = var_19f8_1
        
        int32_t x25_2 = x0_41 & 0xfffffff8
        
        if (((x0_46 | (x0_48 == 6 ? 1 : 0)
                | (x28_1 == DaysInMonth(var_1a00.d, zx.q(var_1a00:4.d)) ? 1 : 0)) & 1) == 0)
            if (x25_2 == 8)
                UI2SetState(zx.q(x20_3), &data_1831038, x21_2, 0)
                UI2SetState(zx.q(x20_3), GetFullBarImage(zx.q(x0_23), zx.q(x0_41)), x21_2, 0)
        else if (((x25_2 != 8 ? 1 : 0) & (x0_46 ^ 1) & 1) == 0)
            UI2SetState(zx.q(x20_3), &data_1831020, x21_2, 0)
    
    int32_t x0_57 = GetDayIdForDate(&var_1a00)
    void* x0_58 = GetActiveProfile()
    
    for (int32_t* i = *(*(x0_58 + 0x7590)
            + (((zx.q(x0_57) | zx.q(x0_57 s>> 4)) & zx.q(*(x0_58 + 0x7598))) << 3)); i != 0; i = *(i + 8))
        if (x0_57 == *i)
            UI2SetState(zx.q(x20_3), &data_1830d50, x21_2, 0)
            break
    
    x21_2 += 1
while (x21_2 != x26_1)

void* x0_59 = GetClient()
int32_t x20_4 = *(x0_59 + 0x75f8)
int32_t x19_7 = *(x0_59 + 0x75fc)
int32_t x8_20

if (*(gDailyDlg + 8) == 0x7e7)
    x8_20 = *(gDailyDlg + 0xc)

if (*(gDailyDlg + 8) != 0x7e7 || x8_20 != 2)
    UI2SetState(zx.q(var_1a14_1), &data_1830e40, 0xffffffff, 0)
    
    if (*(gDailyDlg + 8) != x20_4 || *(gDailyDlg + 0xc) != x19_7)
        UI2SetState(zx.q(var_1a14_1), &data_1830e58, 0xffffffff, 0)
else if (0x7e7 != x20_4 || x8_20 != x19_7)
    UI2SetState(zx.q(var_1a14_1), &data_1830e58, 0xffffffff, 0)
