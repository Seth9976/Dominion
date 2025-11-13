// 函数: sub_60ab50
// 地址: 0x60ab50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76adb0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_8c = arg1
int32_t __saved_ebp
int32_t var_90 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1
sub_63d720(&result_1, "btnBack")
char* result_3 = result_1
char* const result_2 = &data_801800
char* edx = *(arg2 + 4)
char* const result_13 = &data_801800

if (result_3 != 0)
    result_13 = result_3

int32_t ecx_2

while (true)
    result_3.b = *edx
    char temp0_1 = *result_13
    bool c_1 = result_3.b u< temp0_1
    bool z_1 = result_3.b == temp0_1
    char var_75_1 = result_3.b
    result_3 = result_1
    
    if (z_1)
        if (var_75_1 == 0)
            ecx_2 = 0
            break
        
        result_3.b = edx[1]
        char temp1_1 = result_13[1]
        c_1 = result_3.b u< temp1_1
        bool z_2 = result_3.b == temp1_1
        char var_75_2 = result_3.b
        result_3 = result_1
        
        if (z_2)
            edx = &edx[2]
            result_13 = &result_13[2]
            
            if (var_75_2 != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_13, result_13, c_1) | 1
    break

char var_75_3

if (ecx_2 != 0)
    var_75_3 = 0

if (ecx_2 == 0 || *(arg2 + 0x18) == 2)
    var_75_3 = 1

int32_t var_8_1 = 0

if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
    char* eax_3 = sub_63d4e0(&result_1)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)

int32_t var_8_2 = 0xffffffff

if (var_75_3 != 0)
    data_8db660 = 3

sub_63d720(&result_1, "btn_tabLeaderboard")
char* result_4 = result_1
char* const result_14 = &data_801800
char* edx_3 = *(arg2 + 4)

if (result_4 != 0)
    result_14 = result_4

int32_t edi

while (true)
    result_4.b = *edx_3
    char temp3_1 = *result_14
    bool c_2 = result_4.b u< temp3_1
    bool z_3 = result_4.b == temp3_1
    char var_75_4 = result_4.b
    result_4 = result_1
    
    if (z_3)
        if (var_75_4 == 0)
            edi = 0
            break
        
        result_4.b = edx_3[1]
        char temp4_1 = result_14[1]
        c_2 = result_4.b u< temp4_1
        bool z_4 = result_4.b == temp4_1
        char var_75_5 = result_4.b
        result_4 = result_1
        
        if (z_4)
            edx_3 = &edx_3[2]
            result_14 = &result_14[2]
            
            if (var_75_5 != 0)
                continue
            
            edi = 0
            break
    
    edi = sbb.d(arg1, arg1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
    char* eax_4 = sub_63d4e0(&result_1)
    int32_t temp5_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)

int32_t var_8_4 = 0xffffffff
int64_t var_2c
int64_t var_20

if (edi == 0)
    if (*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x72d4) == 0)
        int32_t var_24_1 = edi
        var_2c = 0
        var_20 = 0
        int32_t var_18_1 = edi
        sub_4ba480(&var_2c, &var_20, edi + 4, &var_2c)
        *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x72d4) = 1
    
    data_ccf6b0 = 0

sub_63d720(&result_1, "btn_tabCalendar")
char* result_5 = result_1
char* const result_15 = &data_801800
char* edx_7 = *(arg2 + 4)

if (result_5 != 0)
    result_15 = result_5

int32_t edi_2

while (true)
    result_5.b = *edx_7
    char temp6_1 = *result_15
    bool c_3 = result_5.b u< temp6_1
    bool z_5 = result_5.b == temp6_1
    char var_75_6 = result_5.b
    result_5 = result_1
    
    if (z_5)
        if (var_75_6 == 0)
            edi_2 = 0
            break
        
        result_5.b = edx_7[1]
        char temp7_1 = result_15[1]
        c_3 = result_5.b u< temp7_1
        bool z_6 = result_5.b == temp7_1
        char var_75_7 = result_5.b
        result_5 = result_1
        
        if (z_6)
            edx_7 = &edx_7[2]
            result_15 = &result_15[2]
            
            if (var_75_7 != 0)
                continue
            
            edi_2 = 0
            break
    
    edi_2 = sbb.d(edi, edi, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
    char* eax_8 = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)

int32_t var_8_6 = 0xffffffff

if (edi_2 == 0)
    data_ccf6b0 = 1

sub_63d720(&result_1, "btn_tabStats")
char* result_6 = result_1
char* const result_16 = &data_801800
char* edx_10 = *(arg2 + 4)

if (result_6 != 0)
    result_16 = result_6

int32_t edi_4

while (true)
    result_6.b = *edx_10
    char temp9_1 = *result_16
    bool c_4 = result_6.b u< temp9_1
    bool z_7 = result_6.b == temp9_1
    char var_75_8 = result_6.b
    result_6 = result_1
    
    if (z_7)
        if (var_75_8 == 0)
            edi_4 = 0
            break
        
        result_6.b = edx_10[1]
        char temp10_1 = result_16[1]
        c_4 = result_6.b u< temp10_1
        bool z_8 = result_6.b == temp10_1
        char var_75_9 = result_6.b
        result_6 = result_1
        
        if (z_8)
            edx_10 = &edx_10[2]
            result_16 = &result_16[2]
            
            if (var_75_9 != 0)
                continue
            
            edi_4 = 0
            break
    
    edi_4 = sbb.d(edi_2, edi_2, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && result_6 != 0 && *result_6 != 0)
    char* eax_9 = sub_63d4e0(&result_1)
    int32_t temp11_1 = *(eax_9 + 4)
    *(eax_9 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)

int32_t var_8_8 = 0xffffffff

if (edi_4 == 0)
    data_ccf6b0 = 2

sub_63d720(&result_1, "btn_day")
char* result_7 = result_1
char* const result_17 = &data_801800
char* edx_13 = *(arg2 + 4)

if (result_7 != 0)
    result_17 = result_7

int32_t edi_6

while (true)
    result_7.b = *edx_13
    char temp12_1 = *result_17
    bool c_5 = result_7.b u< temp12_1
    bool z_9 = result_7.b == temp12_1
    char var_75_10 = result_7.b
    result_7 = result_1
    
    if (z_9)
        if (var_75_10 == 0)
            edi_6 = 0
            break
        
        result_7.b = edx_13[1]
        char temp13_1 = result_17[1]
        c_5 = result_7.b u< temp13_1
        bool z_10 = result_7.b == temp13_1
        char var_75_11 = result_7.b
        result_7 = result_1
        
        if (z_10)
            edx_13 = &edx_13[2]
            result_17 = &result_17[2]
            
            if (var_75_11 != 0)
                continue
            
            edi_6 = 0
            break
    
    edi_6 = sbb.d(edi_4, edi_4, c_5) | 1
    break

int32_t var_8_9 = 4

if (data_cf65bc != 0 && result_7 != 0 && *result_7 != 0)
    char* eax_10 = sub_63d4e0(&result_1)
    int32_t temp14_1 = *(eax_10 + 4)
    *(eax_10 + 4) -= 1
    
    if (temp14_1 == 1)
        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)

int32_t var_8_10 = 0xffffffff

if (edi_6 == 0)
    int64_t* eax_12 = sub_60a0a0(&var_20, data_ccf6bc, data_ccf6b8, &var_20, *(arg2 + 8))
    int32_t eax_13 = eax_12[1].d
    int32_t ecx_24 = *(data_cc8dc8 + 0x1e1a4)
    var_2c = *eax_12
    int32_t var_24_2 = eax_13
    void* eax_14 = sub_4d8f30(ecx_24)
    sub_60a950(eax_14, *(eax_14 + 0x7218), &var_2c, edi_6.b)

sub_63d720(&result_1, "btn_toggleLeaderboardFriends")
char* result_8 = result_1
char* const result_18 = &data_801800
char* edx_18 = *(arg2 + 4)

if (result_8 != 0)
    result_18 = result_8

int32_t edi_8

while (true)
    result_8.b = *edx_18
    char temp15_1 = *result_18
    bool c_6 = result_8.b u< temp15_1
    bool z_11 = result_8.b == temp15_1
    char var_75_12 = result_8.b
    result_8 = result_1
    
    if (z_11)
        if (var_75_12 == 0)
            edi_8 = 0
            break
        
        result_8.b = edx_18[1]
        char temp16_1 = result_18[1]
        c_6 = result_8.b u< temp16_1
        bool z_12 = result_8.b == temp16_1
        char var_75_13 = result_8.b
        result_8 = result_1
        
        if (z_12)
            edx_18 = &edx_18[2]
            result_18 = &result_18[2]
            
            if (var_75_13 != 0)
                continue
            
            edi_8 = 0
            break
    
    edi_8 = sbb.d(edi_6, edi_6, c_6) | 1
    break

int32_t var_8_11 = 5

if (data_cf65bc != 0 && result_8 != 0 && *result_8 != 0)
    char* eax_15 = sub_63d4e0(&result_1)
    int32_t temp17_1 = *(eax_15 + 4)
    *(eax_15 + 4) -= 1
    
    if (temp17_1 == 1)
        sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)

int32_t var_8_12 = 0xffffffff

if (edi_8 == 0)
    data_ccf6b4 = 1

sub_63d720(&result_1, "btn_toggleLeaderboardGlobal")
char* result_9 = result_1
char* const result_19 = &data_801800
char* edx_21 = *(arg2 + 4)

if (result_9 != 0)
    result_19 = result_9

int32_t edi_10

while (true)
    result_9.b = *edx_21
    char temp18_1 = *result_19
    bool c_7 = result_9.b u< temp18_1
    bool z_13 = result_9.b == temp18_1
    char var_75_14 = result_9.b
    result_9 = result_1
    
    if (z_13)
        if (var_75_14 == 0)
            edi_10 = 0
            break
        
        result_9.b = edx_21[1]
        char temp19_1 = result_19[1]
        c_7 = result_9.b u< temp19_1
        bool z_14 = result_9.b == temp19_1
        char var_75_15 = result_9.b
        result_9 = result_1
        
        if (z_14)
            edx_21 = &edx_21[2]
            result_19 = &result_19[2]
            
            if (var_75_15 != 0)
                continue
            
            edi_10 = 0
            break
    
    edi_10 = sbb.d(edi_8, edi_8, c_7) | 1
    break

int32_t var_8_13 = 6

if (data_cf65bc != 0 && result_9 != 0 && *result_9 != 0)
    char* eax_16 = sub_63d4e0(&result_1)
    int32_t temp20_1 = *(eax_16 + 4)
    *(eax_16 + 4) -= 1
    
    if (temp20_1 == 1)
        sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)

int32_t var_8_14 = 0xffffffff

if (edi_10 == 0)
    data_ccf6b4 = edi_10

sub_63d720(&result_1, "btn_campaign")
char* result_10 = result_1
char* const result_20 = &data_801800
char* edx_24 = *(arg2 + 4)

if (result_10 != 0)
    result_20 = result_10

int32_t edi_12

while (true)
    result_10.b = *edx_24
    char temp21_1 = *result_20
    bool c_8 = result_10.b u< temp21_1
    bool z_15 = result_10.b == temp21_1
    char var_75_16 = result_10.b
    result_10 = result_1
    
    if (z_15)
        if (var_75_16 == 0)
            edi_12 = 0
            break
        
        result_10.b = edx_24[1]
        char temp22_1 = result_20[1]
        c_8 = result_10.b u< temp22_1
        bool z_16 = result_10.b == temp22_1
        char var_75_17 = result_10.b
        result_10 = result_1
        
        if (z_16)
            edx_24 = &edx_24[2]
            result_20 = &result_20[2]
            
            if (var_75_17 != 0)
                continue
            
            edi_12 = 0
            break
    
    edi_12 = sbb.d(edi_10, edi_10, c_8) | 1
    break

int32_t var_8_15 = 7

if (data_cf65bc != 0 && result_10 != 0 && *result_10 != 0)
    char* eax_17 = sub_63d4e0(&result_1)
    int32_t temp23_1 = *(eax_17 + 4)
    *(eax_17 + 4) -= 1
    
    if (temp23_1 == 1)
        sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)

int32_t var_8_16 = 0xffffffff

if (edi_12 == 0)
    char* result_11 = data_ccf6b8
    int32_t ebx = data_ccf6bc
    result_1 = result_11
    var_2c.d = result_11
    var_2c:4.d = ebx
    edi_12 = *(arg2 + 8) * 7 + 1
    int32_t var_24_3 = edi_12
    _time64(&var_20:4)
    struct tm* _Tm_2 = _localtime64(&var_20:4)
    _Tm_2->tm_year = &result_1[0xfffff894]
    _Tm_2->tm_mon = ebx - 1
    _Tm_2->tm_mday = edi_12
    _mktime64(_Tm_2)
    int64_t* eax_20 = sub_64b530(&var_20, neg.d(_Tm_2->tm_wday), &var_2c, &var_20)
    int32_t eax_21 = eax_20[1].d
    var_2c = *eax_20
    int32_t var_24_4 = eax_21
    sub_60a460()
    result_2 = &data_801800

sub_63d720(&result_1, "btnLeft")
char* result_12 = result_1
char* result_21 = &data_801800
void* edx_29 = *(arg2 + 4)

if (result_12 != 0)
    result_21 = result_12

int32_t edi_16

while (true)
    result_12.b = *edx_29
    char temp24_1 = *result_21
    bool c_9 = result_12.b u< temp24_1
    bool z_17 = result_12.b == temp24_1
    char var_75_18 = result_12.b
    result_12 = result_1
    
    if (z_17)
        if (var_75_18 == 0)
            edi_16 = 0
            break
        
        result_12.b = *(edx_29 + 1)
        char temp25_1 = result_21[1]
        c_9 = result_12.b u< temp25_1
        bool z_18 = result_12.b == temp25_1
        char var_75_19 = result_12.b
        result_12 = result_1
        
        if (z_18)
            edx_29 += 2
            result_21 = &result_21[2]
            
            if (var_75_19 != 0)
                continue
            
            edi_16 = 0
            break
    
    edi_16 = sbb.d(edi_12, edi_12, c_9) | 1
    break

int32_t var_8_17 = 8

if (data_cf65bc != 0 && result_12 != 0 && *result_12 != 0)
    char* eax_22 = sub_63d4e0(&result_1)
    int32_t temp26_1 = *(eax_22 + 4)
    *(eax_22 + 4) -= 1
    
    if (temp26_1 == 1)
        sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)

int32_t var_8_18 = 0xffffffff
struct tm _Tm

if (edi_16 == 0)
    struct tm _Tm_1
    _Tm_1.tm_hour = edi_16
    _Tm_1.tm_year = data_ccf6b8 - 0x76c
    _Tm_1.tm_isdst = edi_16
    _Tm_1.tm_mon = data_ccf6bc - 1
    _Tm_1.tm_mday = edi_16
    _Tm_1.tm_sec = 0
    _Tm_1.tm_min = 0
    _Tm_1.tm_wday = 0
    _Tm_1.tm_yday = 0
    _mktime64(&_Tm_1)
    int32_t ecx_43 = _Tm_1.tm_year + 0x76c
    int32_t edx_33 = _Tm_1.tm_mon + 1
    data_ccf6b8 = ecx_43
    data_ccf6bc = edx_33
    _Tm.tm_sec = 0
    _Tm.tm_min = 0
    _Tm.tm_hour = 0
    _Tm.tm_year = ecx_43 - 0x76c
    _Tm.tm_mon = edx_33 - 1
    _Tm.tm_wday = 0
    _Tm.tm_yday = 0
    _Tm.tm_isdst = 0
    _Tm.tm_mday = 0
    _mktime64(&_Tm)
    _Tm_1.tm_year = _Tm.tm_year
    _Tm_1.tm_mon = _Tm.tm_mon
    _Tm_1.tm_sec = 0
    _Tm_1.tm_min = 0
    _Tm_1.tm_hour = 0
    _Tm_1.tm_wday = 0
    _Tm_1.tm_yday = 0
    _Tm_1.tm_isdst = 0
    _Tm_1.tm_mday = 0
    _mktime64(&_Tm_1)
    var_20.d = _Tm_1.tm_year + 0x76c
    var_20:4.d = _Tm_1.tm_mon + 1
    int32_t tm_mday = _Tm_1.tm_mday
    
    if (sub_6375f0(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x72ec, &var_20) == 0)
        sub_4ba480(&var_20, &var_20, 8, &var_20)

sub_63d720(&result_1, "btnRight")
char* result = result_1
char* ecx_48 = *(arg2 + 4)

if (result != 0)
    result_2 = result

int32_t esi_2

while (true)
    char edx_35 = *ecx_48
    char temp27_1 = *result_2
    bool c_10 = edx_35 u< temp27_1
    
    if (edx_35 == temp27_1)
        if (edx_35 == 0)
            esi_2 = 0
            break
        
        edx_35 = ecx_48[1]
        char temp28_1 = result_2[1]
        c_10 = edx_35 u< temp28_1
        
        if (edx_35 == temp28_1)
            ecx_48 = &ecx_48[2]
            result_2 = &result_2[2]
            
            if (edx_35 != 0)
                continue
            
            esi_2 = 0
            break
    
    esi_2 = sbb.d(arg2, arg2, c_10) | 1
    break

int32_t var_8_19 = 9

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&result_1)
    int32_t temp29_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp29_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

int32_t var_8_20 = 0xffffffff

if (esi_2 == 0)
    int32_t esi_4 = data_ccf6b8
    int32_t edi_18 = data_ccf6bc
    int32_t eax_39 = sub_64b5d0(esi_4, edi_18)
    _Tm.tm_hour = 0
    _Tm.tm_isdst = 0
    _Tm.tm_mon = edi_18 - 1
    _Tm.tm_year = esi_4 - 0x76c
    _Tm.tm_sec = 0
    _Tm.tm_min = 0
    _Tm.tm_mday = eax_39 + 1
    _Tm.tm_wday = 0
    _Tm.tm_yday = 0
    _mktime64(&_Tm)
    result = _Tm.tm_mon + 1
    data_ccf6b8 = _Tm.tm_year + 0x76c
    data_ccf6bc = result

result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
