// 函数: sub_4d0900
// 地址: 0x4d0900
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QGBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
char* arg_4
char* ebx = arg_4
char* esi = *(ebx + 4)
char* var_1c
sub_63d720(&var_1c, "btn_banner")
char* eax_3 = var_1c
char* const ecx_1 = &data_801800

if (eax_3 != 0)
    ecx_1 = eax_3

int32_t esi_2

while (true)
    char edx_1 = *ecx_1
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            esi_2 = 0
            break
        
        edx_1 = ecx_1[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            ecx_1 = &ecx_1[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            esi_2 = 0
            break
    
    esi_2 = sbb.d(esi, esi, c_1) | 1
    break

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(&var_1c)
    int32_t temp2_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        var_1c = &data_801800

int32_t var_8_2 = 0xffffffff

if (esi_2 == 0)
    ecx_1.b = 1
    sub_4d0720(ecx_1.b)

char* edi = *(ebx + 4)
char* var_20
sub_63d720(&var_20, "btn_announce")
int32_t var_8_3 = 1
int32_t ebx_1 = 1
char* esi_3 = var_20
char* const eax_5 = &data_801800
int32_t var_18_1 = 1

if (esi_3 != 0)
    eax_5 = esi_3

int32_t eax_7

while (true)
    char ecx_4 = *eax_5
    char temp3_1 = *edi
    bool c_2 = ecx_4 u< temp3_1
    
    if (ecx_4 == temp3_1)
        if (ecx_4 == 0)
            eax_7 = 0
            break
        
        ecx_4 = eax_5[1]
        char temp4_1 = edi[1]
        c_2 = ecx_4 u< temp4_1
        
        if (ecx_4 == temp4_1)
            eax_5 = &eax_5[2]
            edi = &edi[2]
            
            if (ecx_4 != 0)
                continue
            
            eax_7 = 0
            break
    
    eax_7 = sbb.d(eax_5, eax_5, c_2) | 1
    break

int32_t ecx_8 = 1
int32_t edx_4 = 1
char var_11
char* eax_8

if (eax_7 == 0)
    eax_8 = var_1c
label_4d0a7a:
    var_11 = 1
    
    if ((ecx_8.b & 2) != 0)
        goto label_4d0a85
else
    char* edi_2 = *(arg_4 + 4)
    sub_63d720(&var_1c, "btn_image")
    eax_8 = var_1c
    char* const ecx_6 = &data_801800
    ebx_1 = 3
    
    if (eax_8 != 0)
        ecx_6 = eax_8
    
    while (true)
        char edx_5 = *ecx_6
        char temp5_1 = *edi_2
        bool c_3 = edx_5 u< temp5_1
        
        if (edx_5 == temp5_1)
            if (edx_5 == 0)
                ecx_8 = 0
                break
            
            edx_5 = ecx_6[1]
            char temp6_1 = edi_2[1]
            c_3 = edx_5 u< temp6_1
            
            if (edx_5 == temp6_1)
                ecx_6 = &ecx_6[2]
                edi_2 = &edi_2[2]
                
                if (edx_5 != 0)
                    continue
                
                ecx_8 = 0
                break
        
        ecx_8 = sbb.d(ecx_6, ecx_6, c_3) | 1
        break
    
    edx_4 = 3
    
    if (ecx_8 == 0)
        ecx_8 = 3
        goto label_4d0a7a
    
    var_11 = 0
label_4d0a85:
    ebx_1 = edx_4 & 0xfffffffd
    int32_t var_18_2 = ebx_1
    int32_t var_8_4 = 2
    
    if (data_cf65bc != 0 && eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_63d4e0(&var_1c)
        int32_t temp7_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        *(eax_9 + 4)
        
        if (temp7_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
            var_1c = &data_801800
int32_t var_8_5 = 0xffffffff

if ((ebx_1.b & 1) != 0)
    ebx_1 &= 0xfffffffe
    int32_t var_8_6 = 3
    
    if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
        char* eax_10 = sub_63d4e0(&var_20)
        int32_t temp9_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        *(eax_10 + 4)
        
        if (temp9_1 == 1)
            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
            var_20 = &data_801800
    
    int32_t var_8_7 = 0xffffffff

if (var_11 != 0)
    ecx_8.b = 0
    sub_4d0720(ecx_8.b)

char* esi_4 = *(arg_4 + 4)
sub_63d720(&var_20, "btn_store")
char* eax_12 = var_20
char* const ecx_14 = &data_801800

if (eax_12 != 0)
    ecx_14 = eax_12

int32_t esi_6

while (true)
    char edx_10 = *ecx_14
    char temp8_1 = *esi_4
    bool c_4 = edx_10 u< temp8_1
    
    if (edx_10 == temp8_1)
        if (edx_10 == 0)
            esi_6 = 0
            break
        
        edx_10 = ecx_14[1]
        char temp10_1 = esi_4[1]
        c_4 = edx_10 u< temp10_1
        
        if (edx_10 == temp10_1)
            ecx_14 = &ecx_14[2]
            esi_4 = &esi_4[2]
            
            if (edx_10 != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_4) | 1
    break

int32_t var_8_8 = 4

if (data_cf65bc != 0 && eax_12 != 0 && *eax_12 != 0)
    char* eax_13 = sub_63d4e0(&var_20)
    int32_t temp11_1 = *(eax_13 + 4)
    *(eax_13 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
        var_20 = &data_801800

int32_t var_8_9 = 0xffffffff

if (esi_6 == 0)
    data_cc8d80 = esi_6
    data_cc8d84 = 3
    data_cc8d88 = esi_6
    data_8db660 = 0x15

char* esi_7 = *(arg_4 + 4)
sub_63d720(&var_20, "btn_banner_close")
char* eax_15 = var_20
char* const ecx_18 = &data_801800

if (eax_15 != 0)
    ecx_18 = eax_15

int32_t esi_9

while (true)
    char edx_13 = *ecx_18
    char temp12_1 = *esi_7
    bool c_5 = edx_13 u< temp12_1
    
    if (edx_13 == temp12_1)
        if (edx_13 == 0)
            esi_9 = 0
            break
        
        edx_13 = ecx_18[1]
        char temp13_1 = esi_7[1]
        c_5 = edx_13 u< temp13_1
        
        if (edx_13 == temp13_1)
            ecx_18 = &ecx_18[2]
            esi_7 = &esi_7[2]
            
            if (edx_13 != 0)
                continue
            
            esi_9 = 0
            break
    
    esi_9 = sbb.d(esi_7, esi_7, c_5) | 1
    break

int32_t var_8_10 = 5

if (data_cf65bc != 0 && eax_15 != 0 && *eax_15 != 0)
    eax_15 = sub_63d4e0(&var_20)
    int32_t temp14_1 = *(eax_15 + 4)
    *(eax_15 + 4) -= 1
    
    if (temp14_1 == 1)
        eax_15 = sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
        var_20 = &data_801800

int32_t var_8_11 = 0xffffffff
char const* const var_3c
int32_t var_38_1
char const* const var_34_1
char* ecx_21

if (esi_9 == 0)
    void* const esi_10 = &data_77f084
    
    while (true)
        if (*(esi_10 + 0x10) != 0)
            int32_t eax_16 = *(esi_10 + 4)
            int32_t* var_38_2
            char** var_34_2
            int32_t* ecx_24
            
            if (eax_16 == 1)
                ecx_24 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x7200
                var_1c = *(esi_10 + 8)
                var_34_2 = &var_20
                var_38_2 = &var_1c
            label_4d0ced:
                var_20 = 1
                sub_4bb260(ecx_24, var_38_2, var_34_2)
                data_cc8dc8
                sub_4d8ad0(esi_10)
            else if (eax_16 == 0)
                ecx_24 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x7200
                var_34_2 = &var_20
                var_38_2 = &data_77f080
                goto label_4d0ced
            break
        
        esi_10 += 0x14
        
        if (esi_10 == &data_77f098)
            var_34_1 = "TitleBannerExpire"
            var_38_1 = 0x2a35
            var_3c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp"
            ecx_21 = "result"
            goto label_4d1d97

char* edi_3 = *(arg_4 + 4)
sub_63d720(&var_20, "btn_sign_in")
int32_t var_8_12 = 6
int32_t ebx_3 = ebx_1 | 4
char* esi_11 = var_20
char* const eax_21 = &data_801800
int32_t var_18_3 = ebx_3

if (esi_11 != 0)
    eax_21 = esi_11

int32_t eax_23

while (true)
    char ecx_29 = *eax_21
    char temp15_1 = *edi_3
    bool c_6 = ecx_29 u< temp15_1
    
    if (ecx_29 == temp15_1)
        if (ecx_29 == 0)
            eax_23 = 0
            break
        
        ecx_29 = eax_21[1]
        char temp16_1 = edi_3[1]
        c_6 = ecx_29 u< temp16_1
        
        if (ecx_29 == temp16_1)
            eax_21 = &eax_21[2]
            edi_3 = &edi_3[2]
            
            if (ecx_29 != 0)
                continue
            
            eax_23 = 0
            break
    
    eax_23 = sbb.d(eax_21, eax_21, c_6) | 1
    break

char edx_16 = ebx_3.b
int32_t ecx_30 = ebx_3
char var_11_1
char* eax_25

if (eax_23 == 0)
    eax_25 = var_1c
    var_11_1 = 1
else
    char* edi_4 = *(arg_4 + 4)
    sub_63d720(&var_1c, "btn_taptip")
    eax_25 = var_1c
    ebx_3 |= 8
    char* ecx_32 = &data_801800
    
    if (eax_25 != 0)
        ecx_32 = eax_25
    
    int32_t ecx_34
    
    while (true)
        char edx_17 = *ecx_32
        char temp17_1 = *edi_4
        bool c_7 = edx_17 u< temp17_1
        
        if (edx_17 == temp17_1)
            if (edx_17 == 0)
                ecx_34 = 0
                break
            
            edx_17 = ecx_32[1]
            char temp18_1 = edi_4[1]
            c_7 = edx_17 u< temp18_1
            
            if (edx_17 == temp18_1)
                ecx_32 = &ecx_32[2]
                edi_4 = &edi_4[2]
                
                if (edx_17 != 0)
                    continue
                
                ecx_34 = 0
                break
        
        ecx_34 = sbb.d(ecx_32, ecx_32, c_7) | 1
        break
    
    edx_16 = ebx_3.b
    ecx_30 = ebx_3
    
    var_11_1 = ecx_34 == 0 ? 1 : 0

if ((edx_16 & 8) != 0)
    ebx_3 = ecx_30 & 0xfffffff7
    int32_t var_18_5 = ebx_3
    int32_t var_8_13 = 7
    
    if (data_cf65bc != 0 && eax_25 != 0 && *eax_25 != 0)
        char* eax_26 = sub_63d4e0(&var_1c)
        int32_t temp19_1 = *(eax_26 + 4)
        *(eax_26 + 4) -= 1
        
        if (temp19_1 == 1)
            sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
            var_1c = &data_801800

int32_t var_8_14 = 0xffffffff

if ((ebx_3.b & 4) != 0)
    int32_t var_8_15 = 8
    
    if (data_cf65bc != 0 && esi_11 != 0 && *esi_11 != 0)
        char* eax_27 = sub_63d4e0(&var_20)
        int32_t temp21_1 = *(eax_27 + 4)
        *(eax_27 + 4) -= 1
        
        if (temp21_1 == 1)
            sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
            var_20 = &data_801800
    
    int32_t var_8_16 = 0xffffffff

if (var_11_1 != 0)
    void* eax_28 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    int32_t ecx_41
    ecx_41.b = *(eax_28 + 0x42b4) == 0
    *(eax_28 + 0x42b4) = ecx_41
    data_cc8dc8
    sub_4d8ad0(eax_28)
    
    if (*(eax_28 + 0x42b4) == 0)
        sub_4aea20()
    else
        sub_4aeb40(0)
    
    int32_t ecx_44 = data_c23bec
    
    if (ecx_44 != 0)
        uint32_t eax_29 = zx.d(ecx_44.w)
        
        if (eax_29 u< data_c23bac)
            void* eax_31 = eax_29 * 0x18d0 + data_c23ba8
            
            if (*(eax_31 + 0x18c8) == ecx_44 && eax_31 != 0)
                *(eax_31 + 0x13c1) = 0
        
        data_c23bec = 0

char* esi_13 = *(arg_4 + 4)
sub_63d720(&var_20, "btn_0_resume")
char* eax_33 = var_20
char* const edi_5 = &data_801800
char* ecx_46 = &data_801800

if (eax_33 != 0)
    ecx_46 = eax_33

int32_t esi_15

while (true)
    char edx_22 = *ecx_46
    char temp20_1 = *esi_13
    bool c_8 = edx_22 u< temp20_1
    
    if (edx_22 == temp20_1)
        if (edx_22 == 0)
            esi_15 = 0
            break
        
        edx_22 = ecx_46[1]
        char temp22_1 = esi_13[1]
        c_8 = edx_22 u< temp22_1
        
        if (edx_22 == temp22_1)
            ecx_46 = &ecx_46[2]
            esi_13 = &esi_13[2]
            
            if (edx_22 != 0)
                continue
            
            esi_15 = 0
            break
    
    esi_15 = sbb.d(esi_13, esi_13, c_8) | 1
    break

int32_t var_8_17 = 9

if (data_cf65bc != 0 && eax_33 != 0 && *eax_33 != 0)
    char* eax_34 = sub_63d4e0(&var_20)
    int32_t temp23_1 = *(eax_34 + 4)
    *(eax_34 + 4) -= 1
    
    if (temp23_1 == 1)
        sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
        var_20 = &data_801800

int32_t var_8_18 = 0xffffffff

if (esi_15 != 0)
    char* esi_16 = *(arg_4 + 4)
    sub_63d720(&var_20, "btnQuit")
    char* eax_37 = var_20
    char* ecx_55 = &data_801800
    
    if (eax_37 != 0)
        ecx_55 = eax_37
    
    uint32_t uExitCode
    
    while (true)
        char edx_25 = *ecx_55
        char temp24_1 = *esi_16
        bool c_9 = edx_25 u< temp24_1
        
        if (edx_25 == temp24_1)
            if (edx_25 == 0)
                uExitCode = 0
                break
            
            edx_25 = ecx_55[1]
            char temp25_1 = esi_16[1]
            c_9 = edx_25 u< temp25_1
            
            if (edx_25 == temp25_1)
                ecx_55 = &ecx_55[2]
                esi_16 = &esi_16[2]
                
                if (edx_25 != 0)
                    continue
                
                uExitCode = 0
                break
        
        uExitCode = sbb.d(esi_16, esi_16, c_9) | 1
        break
    
    int32_t var_8_19 = 0xa
    
    if (data_cf65bc != 0 && eax_37 != 0 && *eax_37 != 0)
        char* eax_38 = sub_63d4e0(&var_20)
        int32_t temp26_1 = *(eax_38 + 4)
        *(eax_38 + 4) -= 1
        
        if (temp26_1 == 1)
            sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
            var_20 = &data_801800
    
    int32_t var_8_20 = 0xffffffff
    
    if (uExitCode == 0)
        TerminateProcess(GetCurrentProcess(), uExitCode)
        noreturn
    
    char* ebx_5 = arg_4
    char* esi_18 = *(ebx_5 + 4)
    sub_63d720(&arg_4, "BtnProfile")
    char* eax_40 = arg_4
    char* const ecx_59 = &data_801800
    
    if (eax_40 != 0)
        ecx_59 = eax_40
    
    int32_t esi_20
    
    while (true)
        char edx_28 = *ecx_59
        char temp27_1 = *esi_18
        bool c_10 = edx_28 u< temp27_1
        
        if (edx_28 == temp27_1)
            if (edx_28 == 0)
                esi_20 = 0
                break
            
            edx_28 = ecx_59[1]
            char temp28_1 = esi_18[1]
            c_10 = edx_28 u< temp28_1
            
            if (edx_28 == temp28_1)
                ecx_59 = &ecx_59[2]
                esi_18 = &esi_18[2]
                
                if (edx_28 != 0)
                    continue
                
                esi_20 = 0
                break
        
        esi_20 = sbb.d(esi_18, esi_18, c_10) | 1
        break
    
    int32_t var_8_21 = 0xb
    
    if (data_cf65bc != 0 && eax_40 != 0 && *eax_40 != 0)
        char* eax_41 = sub_63d4e0(&arg_4)
        int32_t temp29_1 = *(eax_41 + 4)
        *(eax_41 + 4) -= 1
        
        if (temp29_1 == 1)
            sub_64c080(eax_41, *(eax_41 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_22 = 0xffffffff
    int32_t eax_46
    
    if (esi_20 == 0)
        char* const ecx_64 = &data_801800
        char* eax_43 = *sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        
        if (eax_43 != 0)
            ecx_64 = eax_43
        
        char* const eax_44 = &data_801800
        
        while (true)
            char edx_31 = *ecx_64
            char temp31_1 = *eax_44
            bool c_11 = edx_31 u< temp31_1
            
            if (edx_31 == temp31_1)
                if (edx_31 == 0)
                    eax_46 = 0
                    break
                
                edx_31 = ecx_64[1]
                char temp33_1 = eax_44[1]
                c_11 = edx_31 u< temp33_1
                
                if (edx_31 == temp33_1)
                    ecx_64 = &ecx_64[2]
                    eax_44 = &eax_44[2]
                    
                    if (edx_31 != 0)
                        continue
                    
                    eax_46 = 0
                    break
            
            eax_46 = sbb.d(eax_44, eax_44, c_11) | 1
            break
        
        if (eax_46 != 0)
        label_4d1a56:
            data_8db660 = 5
            eax_46.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_46
        
        sub_63d720(&arg_4, &data_801800)
        int32_t var_8_23 = 0xc
        data_8db6b0 = 0x22
        data_8db768 = &data_8dbc60
        data_8db770 = sub_4d1db0
        data_8db774 = sub_4bfb50
        sub_63d850(&data_8db76c, &arg_4)
        data_8db778 = 1
        int32_t var_8_24 = 0xd
    label_4d1195:
        
        if (data_cf65bc == 0)
            goto label_4d1d70
        
        eax_15 = arg_4
        
        if (eax_15 != 0 && *eax_15 != 0)
            eax_15 = sub_63d4e0(&arg_4)
            int32_t temp36_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp36_1 == 1)
                sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                int32_t* eax_47
                eax_47.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_47
        
        goto label_4d1d70
    
    char* esi_21 = *(ebx_5 + 4)
    sub_63d720(&arg_4, "BtnStats")
    char* eax_48 = arg_4
    char* const ecx_71 = &data_801800
    
    if (eax_48 != 0)
        ecx_71 = eax_48
    
    int32_t esi_23
    
    while (true)
        char edx_34 = *ecx_71
        char temp30_1 = *esi_21
        bool c_12 = edx_34 u< temp30_1
        
        if (edx_34 == temp30_1)
            if (edx_34 == 0)
                esi_23 = 0
                break
            
            edx_34 = ecx_71[1]
            char temp32_1 = esi_21[1]
            c_12 = edx_34 u< temp32_1
            
            if (edx_34 == temp32_1)
                ecx_71 = &ecx_71[2]
                esi_21 = &esi_21[2]
                
                if (edx_34 != 0)
                    continue
                
                esi_23 = 0
                break
        
        esi_23 = sbb.d(esi_21, esi_21, c_12) | 1
        break
    
    int32_t var_8_25 = 0xe
    
    if (data_cf65bc != 0 && eax_48 != 0 && *eax_48 != 0)
        char* eax_49 = sub_63d4e0(&arg_4)
        int32_t temp34_1 = *(eax_49 + 4)
        *(eax_49 + 4) -= 1
        
        if (temp34_1 == 1)
            sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_26 = 0xffffffff
    
    if (esi_23 == 0)
        sub_4ce1a0()
        data_8db660 = 0xc
        void* eax_50
        eax_50.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_50
    
    char* esi_24 = *(ebx_5 + 4)
    sub_63d720(&arg_4, "BtnTutorial")
    char* eax_51 = arg_4
    char* ecx_77 = &data_801800
    
    if (eax_51 != 0)
        ecx_77 = eax_51
    
    int32_t esi_26
    
    while (true)
        char edx_37 = *ecx_77
        char temp35_1 = *esi_24
        bool c_13 = edx_37 u< temp35_1
        
        if (edx_37 == temp35_1)
            if (edx_37 == 0)
                esi_26 = 0
                break
            
            edx_37 = ecx_77[1]
            char temp37_1 = esi_24[1]
            c_13 = edx_37 u< temp37_1
            
            if (edx_37 == temp37_1)
                ecx_77 = &ecx_77[2]
                esi_24 = &esi_24[2]
                
                if (edx_37 != 0)
                    continue
                
                esi_26 = 0
                break
        
        esi_26 = sbb.d(esi_24, esi_24, c_13) | 1
        break
    
    int32_t var_8_27 = 0xf
    
    if (data_cf65bc != 0 && eax_51 != 0 && *eax_51 != 0)
        eax_51 = sub_63d4e0(&arg_4)
        int32_t temp38_1 = *(eax_51 + 4)
        *(eax_51 + 4) -= 1
        
        if (temp38_1 == 1)
            sub_64c080(eax_51, *(eax_51 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_28 = 0xffffffff
    
    if (esi_26 == 0)
        data_8db660 = 0x23
        eax_51.b = 0
        data_cc8d7c = 3
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_51
    
    char* esi_27 = *(ebx_5 + 4)
    sub_63d720(&arg_4, "BtnFriends")
    char* eax_52 = arg_4
    char* ecx_83 = &data_801800
    
    if (eax_52 != 0)
        ecx_83 = eax_52
    
    int32_t esi_29
    
    while (true)
        char edx_40 = *ecx_83
        char temp39_1 = *esi_27
        bool c_14 = edx_40 u< temp39_1
        
        if (edx_40 == temp39_1)
            if (edx_40 == 0)
                esi_29 = 0
                break
            
            edx_40 = ecx_83[1]
            char temp40_1 = esi_27[1]
            c_14 = edx_40 u< temp40_1
            
            if (edx_40 == temp40_1)
                ecx_83 = &ecx_83[2]
                esi_27 = &esi_27[2]
                
                if (edx_40 != 0)
                    continue
                
                esi_29 = 0
                break
        
        esi_29 = sbb.d(esi_27, esi_27, c_14) | 1
        break
    
    int32_t var_8_29 = 0x10
    
    if (data_cf65bc != 0 && eax_52 != 0 && *eax_52 != 0)
        char* eax_53 = sub_63d4e0(&arg_4)
        int32_t temp41_1 = *(eax_53 + 4)
        *(eax_53 + 4) -= 1
        
        if (temp41_1 == 1)
            sub_64c080(eax_53, *(eax_53 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_30 = 0xffffffff
    
    if (esi_29 == 0)
        sub_4bc520(0)
        int32_t eax_54
        eax_54.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_54
    
    char* esi_30 = *(ebx_5 + 4)
    sub_63d720(&arg_4, "BtnSettings")
    eax_15 = arg_4
    char* ecx_89 = &data_801800
    
    if (eax_15 != 0)
        ecx_89 = eax_15
    
    int32_t esi_32
    
    while (true)
        char edx_43 = *ecx_89
        char temp42_1 = *esi_30
        bool c_15 = edx_43 u< temp42_1
        
        if (edx_43 == temp42_1)
            if (edx_43 == 0)
                esi_32 = 0
                break
            
            edx_43 = ecx_89[1]
            char temp43_1 = esi_30[1]
            c_15 = edx_43 u< temp43_1
            
            if (edx_43 == temp43_1)
                ecx_89 = &ecx_89[2]
                esi_30 = &esi_30[2]
                
                if (edx_43 != 0)
                    continue
                
                esi_32 = 0
                break
        
        esi_32 = sbb.d(esi_30, esi_30, c_15) | 1
        break
    
    int32_t var_8_31 = 0x11
    
    if (data_cf65bc != 0 && eax_15 != 0 && *eax_15 != 0)
        eax_15 = sub_63d4e0(&arg_4)
        int32_t temp44_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp44_1 == 1)
            sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_32 = 0xffffffff
    int32_t esi_35
    
    if (esi_32 != 0)
        char* esi_33 = *(ebx_5 + 4)
        sub_63d720(&arg_4, "BtnOptions")
        eax_15 = arg_4
        char* ecx_93 = &data_801800
        
        if (eax_15 != 0)
            ecx_93 = eax_15
        
        while (true)
            char edx_46 = *ecx_93
            char temp45_1 = *esi_33
            bool c_16 = edx_46 u< temp45_1
            
            if (edx_46 == temp45_1)
                if (edx_46 == 0)
                    esi_35 = 0
                    break
                
                edx_46 = ecx_93[1]
                char temp46_1 = esi_33[1]
                c_16 = edx_46 u< temp46_1
                
                if (edx_46 == temp46_1)
                    ecx_93 = &ecx_93[2]
                    esi_33 = &esi_33[2]
                    
                    if (edx_46 != 0)
                        continue
                    
                    esi_35 = 0
                    break
            
            esi_35 = sbb.d(esi_33, esi_33, c_16) | 1
            break
        
        int32_t var_8_33 = 0x12
        
        if (data_cf65bc != 0 && eax_15 != 0 && *eax_15 != 0)
            eax_15 = sub_63d4e0(&arg_4)
            int32_t temp47_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp47_1 == 1)
                sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                arg_4 = &data_801800
        
        int32_t var_8_34 = 0xffffffff
    
    if (esi_32 == 0 || esi_35 == 0)
        data_8db660 = 0xe
    label_4d1d70:
        eax_15.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_15
    
    char* esi_36 = *(ebx_5 + 4)
    sub_63d720(&arg_4, "BtnMore")
    char* eax_55 = arg_4
    char* ecx_97 = &data_801800
    
    if (eax_55 != 0)
        ecx_97 = eax_55
    
    int32_t esi_38
    
    while (true)
        char edx_49 = *ecx_97
        char temp48_1 = *esi_36
        bool c_17 = edx_49 u< temp48_1
        
        if (edx_49 == temp48_1)
            if (edx_49 == 0)
                esi_38 = 0
                break
            
            edx_49 = ecx_97[1]
            char temp49_1 = esi_36[1]
            c_17 = edx_49 u< temp49_1
            
            if (edx_49 == temp49_1)
                ecx_97 = &ecx_97[2]
                esi_36 = &esi_36[2]
                
                if (edx_49 != 0)
                    continue
                
                esi_38 = 0
                break
        
        esi_38 = sbb.d(esi_36, esi_36, c_17) | 1
        break
    
    int32_t var_8_35 = 0x13
    
    if (data_cf65bc != 0 && eax_55 != 0 && *eax_55 != 0)
        eax_55 = sub_63d4e0(&arg_4)
        int32_t temp50_1 = *(eax_55 + 4)
        *(eax_55 + 4) -= 1
        
        if (temp50_1 == 1)
            sub_64c080(eax_55, *(eax_55 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_36 = 0xffffffff
    
    if (esi_38 == 0)
        data_8db660 = 4
        eax_55.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_55
    
    char* esi_39 = *(ebx_5 + 4)
    sub_63d720(&arg_4, "btn_5_store")
    char* eax_56 = arg_4
    char* ecx_103 = &data_801800
    
    if (eax_56 != 0)
        ecx_103 = eax_56
    
    int32_t esi_41
    
    while (true)
        char edx_52 = *ecx_103
        char temp51_1 = *esi_39
        bool c_18 = edx_52 u< temp51_1
        
        if (edx_52 == temp51_1)
            if (edx_52 == 0)
                esi_41 = 0
                break
            
            edx_52 = ecx_103[1]
            char temp52_1 = esi_39[1]
            c_18 = edx_52 u< temp52_1
            
            if (edx_52 == temp52_1)
                ecx_103 = &ecx_103[2]
                esi_39 = &esi_39[2]
                
                if (edx_52 != 0)
                    continue
                
                esi_41 = 0
                break
        
        esi_41 = sbb.d(esi_39, esi_39, c_18) | 1
        break
    
    int32_t var_8_37 = 0x14
    
    if (data_cf65bc != 0 && eax_56 != 0 && *eax_56 != 0)
        eax_56 = sub_63d4e0(&arg_4)
        int32_t temp53_1 = *(eax_56 + 4)
        *(eax_56 + 4) -= 1
        
        if (temp53_1 == 1)
            sub_64c080(eax_56, *(eax_56 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_38 = 0xffffffff
    
    if (esi_41 == 0)
        data_cc8d80 = esi_41
        eax_56.b = 0
        data_cc8d84 = 3
        data_cc8d88 = esi_41
        data_8db660 = 0x15
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_56
    
    char* esi_42 = *(ebx_5 + 4)
    sub_63d720(&arg_4, "BtnHowToPlay")
    char* eax_57 = arg_4
    char* ecx_109 = &data_801800
    
    if (eax_57 != 0)
        ecx_109 = eax_57
    
    int32_t esi_44
    
    while (true)
        char edx_55 = *ecx_109
        char temp54_1 = *esi_42
        bool c_19 = edx_55 u< temp54_1
        
        if (edx_55 == temp54_1)
            if (edx_55 == 0)
                esi_44 = 0
                break
            
            edx_55 = ecx_109[1]
            char temp55_1 = esi_42[1]
            c_19 = edx_55 u< temp55_1
            
            if (edx_55 == temp55_1)
                ecx_109 = &ecx_109[2]
                esi_42 = &esi_42[2]
                
                if (edx_55 != 0)
                    continue
                
                esi_44 = 0
                break
        
        esi_44 = sbb.d(esi_42, esi_42, c_19) | 1
        break
    
    int32_t var_8_39 = 0x15
    
    if (data_cf65bc != 0 && eax_57 != 0 && *eax_57 != 0)
        eax_57 = sub_63d4e0(&arg_4)
        int32_t temp56_1 = *(eax_57 + 4)
        *(eax_57 + 4) -= 1
        
        if (temp56_1 == 1)
            sub_64c080(eax_57, *(eax_57 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_40 = 0xffffffff
    
    if (esi_44 == 0)
        data_8db660 = 0x19
        eax_57.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_57
    
    char* esi_45 = *(ebx_5 + 4)
    sub_63d720(&arg_4, "BtnCredits")
    char* eax_58 = arg_4
    char* ecx_115 = &data_801800
    
    if (eax_58 != 0)
        ecx_115 = eax_58
    
    int32_t esi_47
    
    while (true)
        char edx_58 = *ecx_115
        char temp57_1 = *esi_45
        bool c_20 = edx_58 u< temp57_1
        
        if (edx_58 == temp57_1)
            if (edx_58 == 0)
                esi_47 = 0
                break
            
            edx_58 = ecx_115[1]
            char temp58_1 = esi_45[1]
            c_20 = edx_58 u< temp58_1
            
            if (edx_58 == temp58_1)
                ecx_115 = &ecx_115[2]
                esi_45 = &esi_45[2]
                
                if (edx_58 != 0)
                    continue
                
                esi_47 = 0
                break
        
        esi_47 = sbb.d(esi_45, esi_45, c_20) | 1
        break
    
    int32_t var_8_41 = 0x16
    
    if (data_cf65bc != 0 && eax_58 != 0 && *eax_58 != 0)
        eax_58 = sub_63d4e0(&arg_4)
        int32_t temp59_1 = *(eax_58 + 4)
        *(eax_58 + 4) -= 1
        
        if (temp59_1 == 1)
            sub_64c080(eax_58, *(eax_58 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_42 = 0xffffffff
    
    if (esi_47 == 0)
        data_8db660 = 0xf
        eax_58.b = 0
        data_cc8d74 = esi_47
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_58
    
    char* esi_48 = *(ebx_5 + 4)
    sub_63d720(&arg_4, "BtnAchievements")
    char* eax_59 = arg_4
    char* ecx_121 = &data_801800
    
    if (eax_59 != 0)
        ecx_121 = eax_59
    
    int32_t esi_50
    
    while (true)
        char edx_61 = *ecx_121
        char temp60_1 = *esi_48
        bool c_21 = edx_61 u< temp60_1
        
        if (edx_61 == temp60_1)
            if (edx_61 == 0)
                esi_50 = 0
                break
            
            edx_61 = ecx_121[1]
            char temp61_1 = esi_48[1]
            c_21 = edx_61 u< temp61_1
            
            if (edx_61 == temp61_1)
                ecx_121 = &ecx_121[2]
                esi_48 = &esi_48[2]
                
                if (edx_61 != 0)
                    continue
                
                esi_50 = 0
                break
        
        esi_50 = sbb.d(esi_48, esi_48, c_21) | 1
        break
    
    int32_t var_8_43 = 0x17
    
    if (data_cf65bc != 0 && eax_59 != 0 && *eax_59 != 0)
        eax_59 = sub_63d4e0(&arg_4)
        int32_t temp62_1 = *(eax_59 + 4)
        *(eax_59 + 4) -= 1
        
        if (temp62_1 == 1)
            sub_64c080(eax_59, *(eax_59 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_44 = 0xffffffff
    
    if (esi_50 == 0)
        data_8db660 = 0x1f
        eax_59.b = 0
        data_ccf6cc = 2
        data_ccf6d0 = esi_50
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_59
    
    char* esi_51 = *(ebx_5 + 4)
    sub_63d720(&arg_4, "BtnDiscord")
    char* eax_60 = arg_4
    char* ecx_127 = &data_801800
    
    if (eax_60 != 0)
        ecx_127 = eax_60
    
    PSTR esi_53
    
    while (true)
        char edx_64 = *ecx_127
        char temp63_1 = *esi_51
        bool c_22 = edx_64 u< temp63_1
        
        if (edx_64 == temp63_1)
            if (edx_64 == 0)
                esi_53 = 0
                break
            
            edx_64 = ecx_127[1]
            char temp64_1 = esi_51[1]
            c_22 = edx_64 u< temp64_1
            
            if (edx_64 == temp64_1)
                ecx_127 = &ecx_127[2]
                esi_51 = &esi_51[2]
                
                if (edx_64 != 0)
                    continue
                
                esi_53 = 0
                break
        
        esi_53 = sbb.d(esi_51, esi_51, c_22) | 1
        break
    
    int32_t var_8_45 = 0x18
    
    if (data_cf65bc != 0 && eax_60 != 0 && *eax_60 != 0)
        char* eax_61 = sub_63d4e0(&arg_4)
        int32_t temp65_1 = *(eax_61 + 4)
        *(eax_61 + 4) -= 1
        
        if (temp65_1 == 1)
            sub_64c080(eax_61, *(eax_61 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_46 = 0xffffffff
    
    if (esi_53 == 0)
        ShellExecuteA(esi_53, "open", "https://discord.gg/RBddmRGJWA", esi_53, esi_53, 1)
        HINSTANCE eax_62
        eax_62.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_62
    
    char* esi_54 = *(ebx_5 + 4)
    sub_63d720(&arg_4, "btnProfile")
    char* eax_63 = arg_4
    char* ecx_133 = &data_801800
    
    if (eax_63 != 0)
        ecx_133 = eax_63
    
    int32_t esi_56
    
    while (true)
        char edx_67 = *ecx_133
        char temp66_1 = *esi_54
        bool c_23 = edx_67 u< temp66_1
        
        if (edx_67 == temp66_1)
            if (edx_67 == 0)
                esi_56 = 0
                break
            
            edx_67 = ecx_133[1]
            char temp67_1 = esi_54[1]
            c_23 = edx_67 u< temp67_1
            
            if (edx_67 == temp67_1)
                ecx_133 = &ecx_133[2]
                esi_54 = &esi_54[2]
                
                if (edx_67 != 0)
                    continue
                
                esi_56 = 0
                break
        
        esi_56 = sbb.d(esi_54, esi_54, c_23) | 1
        break
    
    int32_t var_8_47 = 0x19
    
    if (data_cf65bc != 0 && eax_63 != 0 && *eax_63 != 0)
        char* eax_64 = sub_63d4e0(&arg_4)
        int32_t temp68_1 = *(eax_64 + 4)
        *(eax_64 + 4) -= 1
        
        if (temp68_1 == 1)
            sub_64c080(eax_64, *(eax_64 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_48 = 0xffffffff
    
    if (esi_56 == 0)
        char* eax_66 = *sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        
        if (eax_66 != 0)
            edi_5 = eax_66
        
        char* const eax_67 = &data_801800
        
        while (true)
            char ecx_138 = *edi_5
            char temp70_1 = *eax_67
            bool c_24 = ecx_138 u< temp70_1
            
            if (ecx_138 == temp70_1)
                if (ecx_138 == 0)
                    eax_46 = 0
                    break
                
                ecx_138 = edi_5[1]
                char temp72_1 = eax_67[1]
                c_24 = ecx_138 u< temp72_1
                
                if (ecx_138 == temp72_1)
                    edi_5 = &edi_5[2]
                    eax_67 = &eax_67[2]
                    
                    if (ecx_138 != 0)
                        continue
                    
                    eax_46 = 0
                    break
            
            eax_46 = sbb.d(eax_67, eax_67, c_24) | 1
            break
        
        if (eax_46 != 0)
            goto label_4d1a56
        
        void* eax_69 = data_8dbc9c
        
        if (eax_69 != 0 && eax_69 != &data_801800)
            if (data_cf65bc != 0 && *eax_69 != 0)
                eax_69 = sub_63d4e0(&data_8dbc9c)
                int32_t temp75_1 = *(eax_69 + 4)
                *(eax_69 + 4) -= 1
                
                if (temp75_1 == 1)
                    sub_64c080(eax_69, *(eax_69 + 0xc) + 0x10)
            
            data_8dbc9c = &data_801800
        
        data_8dbca0 = 0
        eax_69.b = 0
        data_8db6b0 = 0xb
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_69
    
    char* esi_57 = *(ebx_5 + 4)
    sub_63d720(&arg_4, "btn_1_newgame")
    char* eax_70 = arg_4
    char* ecx_145 = &data_801800
    
    if (eax_70 != 0)
        ecx_145 = eax_70
    
    int32_t esi_59
    
    while (true)
        char edx_72 = *ecx_145
        char temp69_1 = *esi_57
        bool c_25 = edx_72 u< temp69_1
        
        if (edx_72 == temp69_1)
            if (edx_72 == 0)
                esi_59 = 0
                break
            
            edx_72 = ecx_145[1]
            char temp71_1 = esi_57[1]
            c_25 = edx_72 u< temp71_1
            
            if (edx_72 == temp71_1)
                ecx_145 = &ecx_145[2]
                esi_57 = &esi_57[2]
                
                if (edx_72 != 0)
                    continue
                
                esi_59 = 0
                break
        
        esi_59 = sbb.d(esi_57, esi_57, c_25) | 1
        break
    
    int32_t var_8_49 = 0x1a
    
    if (data_cf65bc != 0 && eax_70 != 0 && *eax_70 != 0)
        char* eax_71 = sub_63d4e0(&arg_4)
        int32_t temp73_1 = *(eax_71 + 4)
        *(eax_71 + 4) -= 1
        
        if (temp73_1 == 1)
            sub_64c080(eax_71, *(eax_71 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_50 = 0xffffffff
    
    if (esi_59 != 0)
        char* esi_60 = *(ebx_5 + 4)
        sub_63d720(&arg_4, "btn_2_playonline")
        char* eax_75 = arg_4
        char* ecx_154 = &data_801800
        
        if (eax_75 != 0)
            ecx_154 = eax_75
        
        int32_t esi_62
        
        while (true)
            char edx_76 = *ecx_154
            char temp74_1 = *esi_60
            bool c_26 = edx_76 u< temp74_1
            
            if (edx_76 == temp74_1)
                if (edx_76 == 0)
                    esi_62 = 0
                    break
                
                edx_76 = ecx_154[1]
                char temp76_1 = esi_60[1]
                c_26 = edx_76 u< temp76_1
                
                if (edx_76 == temp76_1)
                    ecx_154 = &ecx_154[2]
                    esi_60 = &esi_60[2]
                    
                    if (edx_76 != 0)
                        continue
                    
                    esi_62 = 0
                    break
            
            esi_62 = sbb.d(esi_60, esi_60, c_26) | 1
            break
        
        int32_t var_8_51 = 0x1b
        
        if (data_cf65bc != 0 && eax_75 != 0 && *eax_75 != 0)
            char* eax_76 = sub_63d4e0(&arg_4)
            int32_t temp77_1 = *(eax_76 + 4)
            *(eax_76 + 4) -= 1
            
            if (temp77_1 == 1)
                sub_64c080(eax_76, *(eax_76 + 0xc) + 0x10)
                arg_4 = &data_801800
        
        int32_t var_8_52 = 0xffffffff
        
        if (esi_62 != 0)
            sub_60cdf0(ebx_5)
            char* eax_86
            eax_86.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_86
        
        char* const ecx_159 = &data_801800
        char* eax_78 = *sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        
        if (eax_78 != 0)
            ecx_159 = eax_78
        
        char* const eax_79 = &data_801800
        int32_t eax_81
        
        while (true)
            char edx_79 = *ecx_159
            char temp78_1 = *eax_79
            bool c_27 = edx_79 u< temp78_1
            
            if (edx_79 == temp78_1)
                if (edx_79 == 0)
                    eax_81 = 0
                    break
                
                edx_79 = ecx_159[1]
                char temp79_1 = eax_79[1]
                c_27 = edx_79 u< temp79_1
                
                if (edx_79 == temp79_1)
                    ecx_159 = &ecx_159[2]
                    eax_79 = &eax_79[2]
                    
                    if (edx_79 != 0)
                        continue
                    
                    eax_81 = 0
                    break
            
            eax_81 = sbb.d(eax_79, eax_79, c_27) | 1
            break
        
        if (eax_81 == 0)
            sub_63d720(&arg_4, &data_801800)
            int32_t var_8_53 = 0x1c
            data_8db6b0 = 0x22
            data_8db768 = &data_8dbc60
            data_8db770 = ?__abi_winrt_ptrto_string_dtor@@YAXQ$ADVString@Platform@@@Z
            data_8db774 = sub_4bfb50
            sub_63d850(&data_8db76c, &arg_4)
            data_8db778 = 1
            int32_t var_8_54 = 0x1d
            goto label_4d1195
        
        data_8db660 = 0x13
        char eax_82 = sub_4c5750()
        data_8dbfb8 = 0
        void* eax_83 = data_8dc144
        void** ecx_161
        ecx_161.b = eax_82 != 0
        data_8dbfb0 = ecx_161
        
        if (eax_83 != 0 && eax_83 != &data_801800)
            if (data_cf65bc != 0 && *eax_83 != 0)
                char* eax_84 = sub_63d4e0(&data_8dc144)
                int32_t temp80_1 = *(eax_84 + 4)
                *(eax_84 + 4) -= 1
                
                if (temp80_1 == 1)
                    sub_64c080(eax_84, *(eax_84 + 0xc) + 0x10)
            
            data_8dc144 = &data_801800
        
        eax_15 = data_cc8d5c
        
        if (eax_15 != 0)
            if (*(eax_15 + 0x18) != 3)
                goto label_4d1d70
            
            ecx_161.b = 1
            sub_4af000(ecx_161)
            int32_t eax_85
            eax_85.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_85
    else
        eax_15 = sub_4ba6f0()
        
        if (eax_15 == 0)
            memset(&data_8dbf38, 0, 0x78)
            *(sub_4bbdb0() + 0x28) = 0x17
            sub_62b4e0()
            data_8db660 = 0x10
            char* eax_74
            eax_74.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_74
        
        if (data_cc8d5c != esi_59)
            data_ccea14 = *(eax_15 + 8)
            int32_t eax_72
            eax_72.b = 0
            data_8db660 = 0x7f6
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_72
else
    int32_t ecx_51 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42c0)
    eax_15 = data_cc8d5c
    
    if (eax_15 != 0)
        *(eax_15 + 0x5044) = 5
        *(eax_15 + 0x5058) = ecx_51
        eax_15.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_15

var_34_1 = "GetClient"
var_38_1 = 0x7b
var_3c = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
ecx_21 = "gClient"
label_4d1d97:
sub_63b870(eax_15, &data_801800, ecx_21, var_3c, var_38_1, var_34_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
