// 函数: sub_6250f0
// 地址: 0x6250f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_hermite@12
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* arg_4
void* edi = arg_4
char* esi = *(edi + 4)
sub_63d720(&var_14, "btnBack")
char* eax_3 = var_14
char* const ecx_1 = &data_801800

if (eax_3 != 0)
    ecx_1 = eax_3

int32_t ecx_3

while (true)
    char edx_1 = *ecx_1
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_3 = 0
            break
        
        edx_1 = ecx_1[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            ecx_1 = &ecx_1[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_3 = 0
            break
    
    ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
    break

int32_t ebx

if (ecx_3 == 0 || *(edi + 0x18) == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(&var_14)
    int32_t temp2_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        var_14 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    data_8db660 = 0x29

char* esi_1 = *(edi + 4)
sub_63d720(&var_14, "btn_tabCards")
char* eax_5 = var_14
char* const ecx_7 = &data_801800

if (eax_5 != 0)
    ecx_7 = eax_5

int32_t esi_3

while (true)
    char edx_4 = *ecx_7
    char temp3_1 = *esi_1
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_3 = 0
            break
        
        edx_4 = ecx_7[1]
        char temp4_1 = esi_1[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            ecx_7 = &ecx_7[2]
            esi_1 = &esi_1[2]
            
            if (edx_4 != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_5 != 0 && *eax_5 != 0)
    char* eax_6 = sub_63d4e0(&var_14)
    int32_t temp5_1 = *(eax_6 + 4)
    *(eax_6 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
        var_14 = &data_801800

int32_t var_8_4 = 0xffffffff

if (esi_3 == 0)
    data_cf6490 = 1
    data_cf6498 = esi_3

char* esi_4 = *(edi + 4)
sub_63d720(&var_14, "btn_tabVPs")
char* eax_7 = var_14
char* const ecx_11 = &data_801800

if (eax_7 != 0)
    ecx_11 = eax_7

int32_t esi_6

while (true)
    char edx_7 = *ecx_11
    char temp6_1 = *esi_4
    bool c_3 = edx_7 u< temp6_1
    
    if (edx_7 == temp6_1)
        if (edx_7 == 0)
            esi_6 = 0
            break
        
        edx_7 = ecx_11[1]
        char temp7_1 = esi_4[1]
        c_3 = edx_7 u< temp7_1
        
        if (edx_7 == temp7_1)
            ecx_11 = &ecx_11[2]
            esi_4 = &esi_4[2]
            
            if (edx_7 != 0)
                continue
            
            esi_6 = 0
            break
    
    esi_6 = sbb.d(esi_4, esi_4, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && eax_7 != 0 && *eax_7 != 0)
    char* eax_8 = sub_63d4e0(&var_14)
    int32_t temp8_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        var_14 = &data_801800

int32_t var_8_6 = 0xffffffff

if (esi_6 == 0)
    data_cf6490 = esi_6
    data_cf6498 = esi_6

char* esi_7 = *(edi + 4)
sub_63d720(&var_14, "btnRight")
char* eax_9 = var_14
char* const ecx_15 = &data_801800

if (eax_9 != 0)
    ecx_15 = eax_9

int32_t esi_9

while (true)
    char edx_10 = *ecx_15
    char temp9_1 = *esi_7
    bool c_4 = edx_10 u< temp9_1
    
    if (edx_10 == temp9_1)
        if (edx_10 == 0)
            esi_9 = 0
            break
        
        edx_10 = ecx_15[1]
        char temp10_1 = esi_7[1]
        c_4 = edx_10 u< temp10_1
        
        if (edx_10 == temp10_1)
            ecx_15 = &ecx_15[2]
            esi_7 = &esi_7[2]
            
            if (edx_10 != 0)
                continue
            
            esi_9 = 0
            break
    
    esi_9 = sbb.d(esi_7, esi_7, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && eax_9 != 0 && *eax_9 != 0)
    char* eax_10 = sub_63d4e0(&var_14)
    int32_t temp13_1 = *(eax_10 + 4)
    *(eax_10 + 4) -= 1
    
    if (temp13_1 == 1)
        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
        var_14 = &data_801800

int32_t var_8_8 = 0xffffffff

if (esi_9 != 0)
    goto label_62548a

int32_t eax_11 = data_cf6490
void* ecx_18 = data_cf6494 * 0x5dd4
int32_t eax_12 = eax_11 - esi_9
char const* const var_30
int32_t var_2c
char const* const var_28
void* eax_13
char* ecx_19
int32_t edi_3

if (eax_11 == esi_9)
    int32_t eax_15
    int32_t edx_16
    edx_16:eax_15 = muls.dp.d(0x2aaaaaab, *(ecx_18 + 0xcd8924) + 0xb)
    int32_t edx_17 = edx_16 s>> 1
    edi_3 = (edx_17 u>> 0x1f) + edx_17
label_6253f0:
    var_14 = sub_4b9480()[0x46a]
    eax_13 = data_cc8d5c
    
    if (eax_13 == 0)
    label_6255c2:
        var_28 = "GetClient"
        var_2c = 0x7b
        ecx_19 = "gClient"
        var_30 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    else
        void* esi_11 = data_cf6494 - *(eax_13 + 0x7590)
        void* eax_18 = sub_4b95e0()
        int32_t edx_18 = data_cf6498
        void* ebx_1 = esi_11 + eax_18
        
        if (esi_11 s>= 0)
            ebx_1 = esi_11
        
        if (edx_18 != edi_3 - 1)
            data_cf6498 = edx_18 + 1
        label_625487:
            edi = arg_4
        label_62548a:
            char* esi_14 = *(edi + 4)
            sub_63d720(&arg_4, "btnLeft")
            eax_13 = arg_4
            void* ecx_28 = &data_801800
            
            if (eax_13 != 0)
                ecx_28 = eax_13
            
            int32_t esi_16
            
            while (true)
                char edx_22 = *ecx_28
                char temp14_1 = *esi_14
                bool c_5 = edx_22 u< temp14_1
                
                if (edx_22 == temp14_1)
                    if (edx_22 == 0)
                        esi_16 = 0
                        break
                    
                    edx_22 = *(ecx_28 + 1)
                    char temp15_1 = esi_14[1]
                    c_5 = edx_22 u< temp15_1
                    
                    if (edx_22 == temp15_1)
                        ecx_28 += 2
                        esi_14 = &esi_14[2]
                        
                        if (edx_22 != 0)
                            continue
                        
                        esi_16 = 0
                        break
                
                esi_16 = sbb.d(esi_14, esi_14, c_5) | 1
                break
            
            int32_t var_8_9 = 4
            
            if (data_cf65bc != 0 && eax_13 != 0 && *eax_13 != 0)
                eax_13 = sub_63d4e0(&arg_4)
                int32_t temp16_1 = *(eax_13 + 4)
                *(eax_13 + 4) -= 1
                
                if (temp16_1 == 1)
                    sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                    arg_4 = &data_801800
            
            int32_t var_8_10 = 0xffffffff
            
            if (esi_16 != 0)
                goto label_6255ae
            
            eax_13 = data_cc8d5c
            
            if (eax_13 == 0)
                goto label_6255c2
            
            void* esi_18 = data_cf6494 - *(eax_13 + 0x7590)
            eax_13 = sub_4b95e0()
            int32_t ecx_31 = data_cf6498
            void* edi_6 = esi_18 + eax_13
            
            if (esi_18 s>= 0)
                edi_6 = esi_18
            
            if (ecx_31 != 0)
                data_cf6498 = ecx_31 - 1
            label_6255ae:
                eax_13.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_13
            
            if (edi_6 s> 0)
                void* esi_19 = data_cc8d5c
                
                if (esi_19 == 0)
                    goto label_6255c2
                
                void* esi_20 = *(esi_19 + 0x7590)
                void* eax_21 = sub_4b95e0()
                data_cf6498 = 0
                void* edx_26 = esi_20 - 1 + edi_6
                void* ecx_33 = edx_26 - eax_21
                
                if (edx_26 s< eax_21)
                    ecx_33 = edx_26
                
                eax_21.b = 0
                data_cf6494 = ecx_33
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_21
            
            var_28 = "ScorescreenCardsClick"
            var_2c = 0xed3b
            var_30 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            ecx_19 = "seat > SEAT_LOCAL"
        else
            eax_13 = var_14 - 1
            
            if (ebx_1 s< eax_13)
                void* esi_12 = data_cc8d5c
                
                if (esi_12 == 0)
                    goto label_6255c2
                
                void* esi_13 = *(esi_12 + 0x7590)
                void* eax_20 = sub_4b95e0()
                data_cf6498 = 0
                void* edx_20 = esi_13 + 1 + ebx_1
                void* ecx_26 = edx_20 - eax_20
                
                if (edx_20 s< eax_20)
                    ecx_26 = edx_20
                
                data_cf6494 = ecx_26
                goto label_625487
            
            var_28 = "ScorescreenCardsClick"
            var_2c = 0xed2b
            var_30 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            ecx_19 = "seat < numPlayers - 1"
else
    eax_13 = eax_12 - 1
    
    if (eax_12 == 1)
        edi_3 = (*(ecx_18 + 0xcd8f68) + 0xe) s/ 0xf
        
        if (edi_3 s< 1)
            edi_3 = 1
        
        goto label_6253f0
    
    var_28 = "ScorescreenNumPages"
    var_2c = 0xef8a
    var_30 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_19 = "Halt"
sub_63b870(eax_13, &data_801800, ecx_19, var_30, var_2c, var_28)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
