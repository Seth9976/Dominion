// 函数: sub_4de780
// 地址: 0x4de780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_763e4b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* ecx
int32_t edx
ecx, edx = __chkstk(0x1cb0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = ecx
char var_1ca4[0x1c4]
memcpy(&var_1ca4, 0x8dce08, 0x1990)
char* ecx_1 = esi
void* edx_1 = &ecx_1[1]
char i

do
    i = *ecx_1
    ecx_1 = &ecx_1[1]
while (i != 0)
int32_t* eax_3 = sub_64bfd0(ecx_1 - edx_1 + 1)
eax_3[3] += 1
char* edx_2

if (ecx_1 - edx_1 + 1 s<= 0x400 || eax_3[4] != 0xffffffff)
    if (*eax_3 == 0)
        sub_64be70(eax_3)
    
    edx_2 = *eax_3
    *eax_3 = *edx_2
else
    edx_2 = sub_687730(ecx_1 - edx_1 + 1)

int32_t ecx_7 = edx_2 - esi
char* eax_4

do
    eax_4.b = *esi
    esi = &esi[1]
    esi[ecx_7 - 1] = eax_4.b
while (eax_4.b != 0)
ecx_7.b = *edx_2
int32_t ebx_1 = 0
int32_t var_28_1
char const* const var_24_1
void* eax_5
char* ecx_9
int32_t var_114[0x3a]

if (ecx_7.b == 0)
label_4de878:
    int32_t eax_6 = 0
    int32_t var_1cb4_1 = 0
    
    if (ebx_1 s<= 0)
    label_4deb1e:
        sub_64c080(edx_2, ecx_1 - edx_1 + 1)
        memcpy(arg1, &var_1ca4, 0x1990)
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(arg1)
        return arg1
    
    while (true)
        char* ecx_8 = var_114[eax_6]
        eax_5 = sx.d(*ecx_8) - 0x62
        
        if (eax_5 u<= 0x16)
            eax_5 = zx.d(*(eax_5 + &lookup_table_4debdc))
            
            switch (eax_5)
                case nullptr
                    int32_t edi_1 = 0
                    
                    for (char* i_1 = strtok(&ecx_8[1], &data_807234); i_1 != 0; 
                            i_1 = strtok(nullptr, &data_807234))
                        while (*i_1 == 0x20)
                            i_1 = &i_1[1]
                        
                        char* i_3 = i_1
                        char j
                        
                        do
                            j = *i_3
                            i_3 = &i_3[1]
                        while (j != 0)
                        void* ecx_13 = i_3 - &i_3[1] - 1 + i_1
                        
                        if (*ecx_13 == 0x20)
                            void* edx_7 = ecx_13
                            
                            do
                                ecx_13 -= 1
                                *edx_7 = 0
                                edx_7 = ecx_13
                            while (*ecx_13 == 0x20)
                        
                        char* i_4 = i_1
                        
                        do
                            ecx_13.b = *i_4
                            i_4 = &i_4[1]
                        while (ecx_13.b != 0)
                        
                        int32_t var_24_5 = 2
                        struct _EXCEPTION_REGISTRATION_RECORD* eax_10 =
                            sub_4dd260(i_1, i_4 - &i_4[1], i_1, ecx_13)
                        
                        if (eax_10 != 0)
                            int32_t var_10a0[0x2c2]
                            var_10a0[edi_1] = eax_10
                            edi_1 += 1
                        
                        if (edi_1 == 0x2bc)
                            break
                    
                    goto label_4deb03
                case 1
                    sub_4ddd90(eax_5.b, &ecx_8[1], &var_1ca4, edx)
                label_4deb03:
                    eax_6 = var_1cb4_1 + 1
                    var_1cb4_1 = eax_6
                    
                    if (eax_6 s>= ebx_1)
                        goto label_4deb1e
                    
                    continue
                case 2
                    sub_4dd810(&ecx_8[1], &var_1ca4, edx, &ecx_8[1])
                    goto label_4deb03
                case 3
                    sub_4de120(&var_1ca4, &ecx_8[1])
                    goto label_4deb03
                case 4
                    sub_4de4e0(&var_1ca4, &ecx_8[1])
                    goto label_4deb03
                case 5
                    int32_t var_598_1 = atoi(&ecx_8[1])
                    goto label_4deb03
                case 6
                    int32_t var_314[0x80]
                    int32_t eax_13 = memset(&var_314, 0, 0x200)
                    
                    if (ecx_8 == 0xffffffff)
                        sub_63b870(eax_13, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 
                            0x94, "XString::XString")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    char* var_1ca8
                    sub_63d720(&var_1ca8, &ecx_8[1])
                    int32_t var_8_1 = 0
                    char* const var_1cac
                    int32_t edx_12 = sub_63e810(&var_1cac)
                    var_8_1.b = 3
                    
                    if (data_cf65bc != 0)
                        char* eax_14 = var_1ca8
                        
                        if (eax_14 != 0 && *eax_14 != 0)
                            char* eax_15 = sub_63d4e0(&var_1ca8)
                            int32_t temp0_1 = *(eax_15 + 4)
                            *(eax_15 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                edx_12 = sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                                var_1ca8 = &data_801800
                    
                    var_8_1.b = 2
                    void var_594
                    sub_4e5ff0(&var_314, edx_12, &var_594, &var_314, &var_1cac)
                    void var_1ae0
                    void* ecx_22 = &var_1ae0
                    
                    for (int32_t i_2 = 0; i_2 s< 0x80; )
                        int32_t edx_15 = var_314[i_2]
                        
                        if (edx_15 != 0)
                            *(ecx_22 - 4) = 1
                            *ecx_22 = edx_15
                        
                        i_2 += 1
                        ecx_22 += 0x10
                    
                    int32_t var_8_2 = 4
                    
                    if (data_cf65bc != 0)
                        char* eax_17 = var_1cac
                        
                        if (eax_17 != 0 && *eax_17 != 0)
                            char* eax_18 = sub_63d4e0(&var_1cac)
                            int32_t temp1_1 = *(eax_18 + 4)
                            *(eax_18 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                                var_1cac = &data_801800
                    
                    int32_t var_8_3 = 0xffffffff
                    goto label_4deb03
        
        var_24_1 = "ParseSetupString"
        var_28_1 = 0xc0a
        ecx_9 = "Halt"
        break
else
    eax_5 = &edx_2[1]
    
    while (true)
        if (ecx_7.b == 0x2d)
            if (*eax_5 == 0)
                goto label_4de878
            
            ecx_7.b = *(eax_5 + 1)
            
            if (ecx_7.b == 0)
                goto label_4de878
            
            if (ecx_7.b == 0x20)
                if (ebx_1 s>= 0x40)
                    var_24_1 = "ToEntries"
                    var_28_1 = 0xbd5
                    ecx_9 = "numEntries < 64"
                    break
                
                var_114[ebx_1] = eax_5
                ebx_1 += 1
                *(eax_5 - 1) = 0
        
        ecx_7.b = *eax_5
        eax_5 += 1
        
        if (ecx_7.b == 0)
            goto label_4de878
sub_63b870(eax_5, &data_801800, ecx_9, "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 
    var_28_1, var_24_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
