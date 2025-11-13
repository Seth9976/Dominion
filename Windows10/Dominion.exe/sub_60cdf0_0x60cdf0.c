// 函数: sub_60cdf0
// 地址: 0x60cdf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76aed0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_a0 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = *(arg1 + 4)
int64_t var_70
sub_63d720(&var_70:4, "btn_4_campaign_tut")
char* const tm_mday_8 = &data_801800
char* tm_mday_1

if (tm_mday_1 != 0)
    tm_mday_8 = tm_mday_1

int32_t esi_2

while (true)
    char ecx_1 = *tm_mday_8
    char temp0_1 = *esi
    bool c_1 = ecx_1 u< temp0_1
    
    if (ecx_1 == temp0_1)
        if (ecx_1 == 0)
            esi_2 = 0
            break
        
        ecx_1 = tm_mday_8[1]
        char temp1_1 = esi[1]
        c_1 = ecx_1 u< temp1_1
        
        if (ecx_1 == temp1_1)
            tm_mday_8 = &tm_mday_8[2]
            esi = &esi[2]
            
            if (ecx_1 != 0)
                continue
            
            esi_2 = 0
            break
    
    esi_2 = sbb.d(esi, esi, c_1) | 1
    break

int32_t var_8_1 = 0

if (data_cf65bc != 0 && tm_mday_1 != 0 && *tm_mday_1 != 0)
    char* eax_4 = sub_63d4e0(&var_70:4)
    int32_t temp2_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        tm_mday_1 = &data_801800

int32_t var_8_2 = 0xffffffff

if (esi_2 == 0)
    sub_61dce0()

char* esi_3 = *(arg1 + 4)
sub_63d720(&var_70:4, "BtnCardGallery")
char* tm_mday_5 = tm_mday_1
char* const tm_mday_9 = &data_801800

if (tm_mday_5 != 0)
    tm_mday_9 = tm_mday_5

int32_t esi_5

while (true)
    char edx_2 = *tm_mday_9
    char temp3_1 = *esi_3
    bool c_2 = edx_2 u< temp3_1
    
    if (edx_2 == temp3_1)
        if (edx_2 == 0)
            esi_5 = 0
            break
        
        edx_2 = tm_mday_9[1]
        char temp4_1 = esi_3[1]
        c_2 = edx_2 u< temp4_1
        
        if (edx_2 == temp4_1)
            tm_mday_9 = &tm_mday_9[2]
            esi_3 = &esi_3[2]
            
            if (edx_2 != 0)
                continue
            
            esi_5 = 0
            break
    
    esi_5 = sbb.d(esi_3, esi_3, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && tm_mday_5 != 0 && *tm_mday_5 != 0)
    tm_mday_5 = sub_63d4e0(&var_70:4)
    int32_t temp5_1 = *(tm_mday_5 + 4)
    *(tm_mday_5 + 4) -= 1
    
    if (temp5_1 == 1)
        tm_mday_5 = sub_64c080(tm_mday_5, *(tm_mday_5 + 0xc) + 0x10)
        tm_mday_1 = &data_801800

int32_t var_8_4 = 0xffffffff

if (esi_5 == 0)
    int32_t ecx_7 = data_c23be0
    
    if (ecx_7 != 0)
        sub_66ca90(tm_mday_5, 0, ecx_7, 1)
    
    data_ccf6f0 = 2
    data_ccf6f4 = 0
    data_ccf6e8 = 1
    data_ccf6ec = 0
    data_8db660 = 0x7e6

char* esi_6 = *(arg1 + 4)
sub_63d720(&var_70:4, "BtnDaily")
char* const tm_mday_6 = &data_801800

if (tm_mday_1 != 0)
    tm_mday_6 = tm_mday_1

int32_t esi_8

while (true)
    char edx_5 = *tm_mday_6
    char temp6_1 = *esi_6
    bool c_3 = edx_5 u< temp6_1
    
    if (edx_5 == temp6_1)
        if (edx_5 == 0)
            esi_8 = 0
            break
        
        edx_5 = tm_mday_6[1]
        char temp7_1 = esi_6[1]
        c_3 = edx_5 u< temp7_1
        
        if (edx_5 == temp7_1)
            tm_mday_6 = &tm_mday_6[2]
            esi_6 = &esi_6[2]
            
            if (edx_5 != 0)
                continue
            
            esi_8 = 0
            break
    
    esi_8 = sbb.d(esi_6, esi_6, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && tm_mday_1 != 0 && *tm_mday_1 != 0)
    char* eax_6 = sub_63d4e0(&var_70:4)
    int32_t temp8_1 = *(eax_6 + 4)
    *(eax_6 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
        tm_mday_1 = &data_801800

int32_t var_8_6 = 0xffffffff
int64_t var_7c
int64_t var_20

if (esi_8 == 0)
    data_ccf6b0 = 1
    int64_t* eax_7 = sub_60a040(&var_20)
    int32_t eax_8 = eax_7[1].d
    var_7c = *eax_7
    int32_t var_74_1 = eax_8
    data_ccf6b8 = var_7c.d
    data_ccf6bc = var_7c:4.d
    data_ccf6b4 = esi_8
    data_8db660 = 0x7ea

char* esi_9 = *(arg1 + 4)
sub_63d720(&var_70:4, "BtnCampaign")
char* const tm_mday_7 = &data_801800

if (tm_mday_1 != 0)
    tm_mday_7 = tm_mday_1

int32_t esi_11

while (true)
    char edx_8 = *tm_mday_7
    char temp9_1 = *esi_9
    bool c_4 = edx_8 u< temp9_1
    
    if (edx_8 == temp9_1)
        if (edx_8 == 0)
            esi_11 = 0
            break
        
        edx_8 = tm_mday_7[1]
        char temp10_1 = esi_9[1]
        c_4 = edx_8 u< temp10_1
        
        if (edx_8 == temp10_1)
            tm_mday_7 = &tm_mday_7[2]
            esi_9 = &esi_9[2]
            
            if (edx_8 != 0)
                continue
            
            esi_11 = 0
            break
    
    esi_11 = sbb.d(esi_9, esi_9, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && tm_mday_1 != 0 && *tm_mday_1 != 0)
    char* eax_12 = sub_63d4e0(&var_70:4)
    int32_t temp11_1 = *(eax_12 + 4)
    *(eax_12 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
        tm_mday_1 = &data_801800

int32_t var_8_8 = 0xffffffff

if (esi_11 == 0)
    void* eax_13 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    *(eax_13 + 0x42d4) |= 1
    data_cc8dc8
    sub_4d8ad0(esi_11)
    sub_61dce0()

char* esi_12 = *(arg1 + 4)
sub_63d720(&var_70:4, "btn_3_daily")
char* tm_mday = tm_mday_1
char* tm_mday_4 = &data_801800

if (tm_mday != 0)
    tm_mday_4 = tm_mday

int32_t esi_14

while (true)
    char edx_11 = *tm_mday_4
    char temp12_1 = *esi_12
    bool c_5 = edx_11 u< temp12_1
    
    if (edx_11 == temp12_1)
        if (edx_11 == 0)
            esi_14 = 0
            break
        
        edx_11 = tm_mday_4[1]
        char temp13_1 = esi_12[1]
        c_5 = edx_11 u< temp13_1
        
        if (edx_11 == temp13_1)
            tm_mday_4 = &tm_mday_4[2]
            esi_12 = &esi_12[2]
            
            if (edx_11 != 0)
                continue
            
            esi_14 = 0
            break
    
    esi_14 = sbb.d(esi_12, esi_12, c_5) | 1
    break

int32_t var_8_9 = 4

if (data_cf65bc != 0 && tm_mday != 0 && *tm_mday != 0)
    tm_mday = sub_63d4e0(&var_70:4)
    int32_t temp15_1 = *(tm_mday + 4)
    *(tm_mday + 4) -= 1
    
    if (temp15_1 == 1)
        tm_mday = sub_64c080(tm_mday, *(tm_mday + 0xc) + 0x10)
        char* const var_6c = &data_801800

int32_t var_8_10 = 0xffffffff

if (esi_14 == 0)
    void var_88
    int64_t* eax_14 = sub_60a040(&var_88)
    struct tm _Tm
    _Tm.tm_hour = esi_14
    _Tm.tm_isdst = esi_14
    _Tm.tm_mday = esi_14
    int64_t xmm0_2 = *eax_14
    int32_t edi_1 = eax_14[1].d
    var_70 = xmm0_2
    var_7c = xmm0_2
    int32_t var_18_1 = edi_1
    var_20 = xmm0_2
    int32_t var_74_2 = edi_1
    _Tm.tm_year = var_20.d - 0x76c
    _Tm.tm_sec = 0
    _Tm.tm_min = 0
    _Tm.tm_mon = var_20:4.d - 1
    _Tm.tm_wday = 0
    _Tm.tm_yday = 0
    _mktime64(&_Tm)
    struct tm _Tm_1
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
    void* esi_15 = data_cc8d5c
    var_20.d = _Tm_1.tm_year + 0x76c
    var_20:4.d = _Tm_1.tm_mon + 1
    tm_mday = _Tm_1.tm_mday
    char* tm_mday_2 = tm_mday
    char const* const var_ac_2
    int32_t var_a8_2
    char const* const var_a4_5
    char* ecx_20
    
    if (esi_15 == 0)
    label_60d24a:
        var_a4_5 = "GetClient"
        var_a8_2 = 0x7b
        var_ac_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        ecx_20 = "gClient"
    label_60d39e:
        sub_63b870(tm_mday, &data_801800, ecx_20, var_ac_2, var_a8_2, var_a4_5)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    void* eax_27 = sub_6375f0(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x72ec, &var_20)
    int32_t eax_28 = neg.d(eax_27)
    int32_t ecx_25 = ((sbb.d(eax_28, eax_28, eax_27 != 0) & 0xfffffff8) + 8) | 3
    
    if (*(esi_15 + 0x7690) != 0)
        ecx_25 = (sbb.d(eax_28, eax_28, eax_27 != 0) & 0xfffffff8) + 8
    
    sub_4ba480((sbb.d(eax_28, eax_28, eax_27 != 0) & 0xfffffff8) + 8, &var_20, ecx_25, &var_20)
    
    if (sub_4ba1d0(&var_7c) != 1)
        data_ccf6b0 = 1
        void var_94
        var_7c = *sub_60a040(&var_94)
        data_ccf6b8 = var_7c.d
        tm_mday = var_7c:4.d
        data_ccf6bc = tm_mday
        data_ccf6b4 = 0
        data_8db660 = 0x7ea
    else
        int32_t tm_mday_3 = sub_60b750(&var_7c)
        tm_mday = tm_mday_3
        
        if (tm_mday_3 == 0)
            var_a4_5 = "GameSpecific_TitleButton"
            var_a8_2 = 0xaf31
        label_60d38f:
            ecx_20 = "Halt"
            var_ac_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            goto label_60d39e
        
        void* eax_33 = tm_mday - 1
        
        if (tm_mday == 1)
            tm_mday = sub_4bbd50(&var_7c)
        else
            tm_mday = eax_33 - 1
            
            if (eax_33 != 1)
                var_a4_5 = "GameSpecific_TitleButton"
                var_a8_2 = 0xaf3e
                goto label_60d38f
            
            tm_mday = sub_609710(&var_7c)
            void* ecx_29 = data_cc8d5c
            
            if (ecx_29 == 0)
                goto label_60d24a
            
            int64_t xmm0_4 = var_70
            *(ecx_29 + 0x5044) = 5
            *(ecx_29 + 0x5058) = tm_mday
            *(ecx_29 + 0x5048) = xmm0_4
            *(ecx_29 + 0x5050) = edi_1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(tm_mday)
return tm_mday
