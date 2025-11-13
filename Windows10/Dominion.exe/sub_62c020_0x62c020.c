// 函数: sub_62c020
// 地址: 0x62c020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Getcat@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@SAIPAPBVfacet@locale@2@PBV42@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_58 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_40 = 1
void* eax_3 = strstr(arg4, &data_86d24c)
void* edi = eax_3
char const* const var_64
int32_t var_60_1
char const* const var_5c
char* ecx

if (edi != 0)
    eax_3 -= arg4
    
    if (arg4 != 0)
        char* const var_28 = &data_801800
        int32_t eax_4 = sub_63db30(&var_28, arg4, eax_3)
        int32_t var_8_1 = 0
        
        if (edi == 0xffffffff)
            sub_63b870(eax_4, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                "XString::XString")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        char* var_24
        sub_63d720(&var_24, edi + 1)
        *arg3 = &data_801800
        var_8_1.b = 2
        char* edi_1 = var_24
        char* const ecx_3 = &data_801800
        int32_t var_44 = 1
        int32_t var_40_1 = 1
        char* eax_6 = *arg2
        
        if (eax_6 != 0)
            ecx_3 = eax_6
        
        char* const var_18 = ecx_3
        void* eax_19
        
        while (true)
            char* const esi_1 = var_28
            void* ebx_1 = nullptr
            void* eax_12
            uint32_t ebx_3
            
            while (true)
                char* const eax_7 = &data_801800
                
                if (esi_1 != 0)
                    eax_7 = esi_1
                
                uint8_t* eax_9 = strstr(ebx_1 + ecx_3, eax_7)
                
                if (eax_9 != 0)
                    ebx_3 = eax_9 - var_18
                
                if (eax_9 == 0 || ebx_3 == 0xffffffff)
                    sub_63d960(arg3, var_18)
                    int32_t var_8_6 = 4
                    
                    if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                        char* eax_48 = sub_63d4e0(&var_24)
                        int32_t temp0_1 = *(eax_48 + 4)
                        *(eax_48 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_64c080(eax_48, *(eax_48 + 0xc) + 0x10)
                    
                    int32_t var_8_7 = 5
                else
                    char* const eax_10 = &data_801800
                    
                    if (edi_1 != 0)
                        eax_10 = edi_1
                    
                    int32_t eax_11 = strstr(eax_9, eax_10)
                    ecx_3 = var_18
                    
                    if (eax_11 != 0)
                        eax_12 = eax_11 - ecx_3
                        
                        if (eax_12 != 0xffffffff)
                            if (eax_12 - ebx_3 s<= 4)
                                break
                            
                            ebx_1 = ebx_3 + 1
                            continue
                    
                    sub_63d960(arg3, ecx_3)
                    int32_t var_8_4 = 7
                    
                    if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                        char* eax_47 = sub_63d4e0(&var_24)
                        int32_t temp2_1 = *(eax_47 + 4)
                        *(eax_47 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_64c080(eax_47, *(eax_47 + 0xc) + 0x10)
                    
                    int32_t var_8_5 = 8
                
                if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                    char* eax_49 = sub_63d4e0(&var_28)
                    int32_t temp1_1 = *(eax_49 + 4)
                    *(eax_49 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg3
            
            int32_t eax_15
            
            if (esi_1 == 0 || *esi_1 == 0)
                eax_15 = 0
            else
                eax_15 = *(sub_63d4e0(&var_28) + 8)
            
            void* ecx_8 = eax_12 - ebx_3 - eax_15
            void* var_38 = ecx_8
            int32_t eax_17
            
            if (esi_1 == 0 || *esi_1 == 0)
                eax_17 = 0
            else
                char* eax_16 = sub_63d4e0(&var_28)
                ecx_8 = var_38
                eax_17 = *(eax_16 + 8)
            
            void* eax_18 = eax_17 + ebx_3
            eax_19 = eax_18 + var_18
            
            if (eax_18 == neg.d(var_18))
                break
            
            char* const var_34 = &data_801800
            sub_63db30(&var_34, eax_19, ecx_8)
            int32_t var_8_2 = 9
            char* const esi_2 = var_34
            void* ebx_4
            char* const var_20
            
            if (esi_2 == 0 || *esi_2 == 0)
            label_62c2c0:
                var_20 = &data_801800
                var_8_2.b = 0xa
                int32_t var_60_8
                char const* const var_5c_16
                char* const eax_31
                char* ecx_50
                
                if (esi_2 != 0 && *esi_2 != 0)
                    eax_31 = arg5
                    
                    if (eax_31 == 0)
                        var_5c_16 = "ReplaceN"
                        var_60_8 = 0x106a4
                        ecx_50 = "dest"
                        goto label_62c67f
                    
                    var_8_2.b = 0xb
                    char* var_3c
                    sub_63d850(&var_20, sub_63dfa0(eax_31, eax_31, &var_3c, &data_86d24c, esi_2))
                    var_8_2.b = 0xc
                    
                    if (data_cf65bc != 0)
                        char* eax_33 = var_3c
                        
                        if (eax_33 != 0 && *eax_33 != 0)
                            char* eax_34 = sub_63d4e0(&var_3c)
                            int32_t temp5_1 = *(eax_34 + 4)
                            *(eax_34 + 4) -= 1
                            
                            if (temp5_1 == 1)
                                sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                                var_3c = &data_801800
                    
                    var_8_2.b = 0xa
                    goto label_62c354
                
                eax_31 = arg6
                char const* const var_64_1
                
                if (eax_31 == 0)
                    var_5c_16 = "ReplaceN"
                    var_60_8 = 0x1069f
                    ecx_50 = "emptyDest"
                label_62c67f:
                    var_64_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                label_62c689:
                    sub_63b870(eax_31, &data_801800, ecx_50, var_64_1, var_60_8, var_5c_16)
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                sub_63d8d0(&var_20, eax_31)
            label_62c354:
                eax_31 = var_18
                
                if (eax_31 == 0)
                    var_5c_16 = "XString::XString"
                    var_60_8 = 0x9a
                    var_64_1 = "C:\x\ax2017\Engine\xString.cpp"
                    ecx_50 = &data_871e0c
                    goto label_62c689
                
                var_38 = &data_801800
                sub_63db30(&var_38, eax_31, ebx_3)
                var_8_2.b = 0xe
                void* edi_3 = var_38
                void* var_1c = edi_3
                
                if (edi_3 != 0 && *edi_3 != 0)
                    char* eax_35 = sub_63d4e0(&var_1c)
                    *(eax_35 + 4) += 1
                
                char* const ecx_26 = &data_801800
                char* const eax_36 = var_20
                int32_t var_40_2 = 3
                
                if (eax_36 != 0)
                    ecx_26 = eax_36
                
                sub_63d960(&var_1c, ecx_26)
                void* eax_37 = var_1c
                void* ecx_28 = &data_801800
                
                if (eax_37 != 0)
                    ecx_28 = eax_37
                
                sub_63d960(arg3, ecx_28)
                int32_t var_44_1 = 1
                int32_t var_40_3 = 1
                var_8_2.b = 0xf
                
                if (data_cf65bc != 0)
                    void* eax_38 = var_1c
                    
                    if (eax_38 != 0 && *eax_38 != 0)
                        char* eax_39 = sub_63d4e0(&var_1c)
                        int32_t temp6_1 = *(eax_39 + 4)
                        *(eax_39 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(eax_39, *(eax_39 + 0xc) + 0x10)
                            var_1c = &data_801800
                
                var_8_2.b = 0x10
                
                if (data_cf65bc != 0 && edi_3 != 0 && *edi_3 != 0)
                    char* eax_40 = sub_63d4e0(&var_38)
                    int32_t temp7_1 = *(eax_40 + 4)
                    *(eax_40 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
                        var_38 = &data_801800
                
                var_8_2.b = 0x11
                
                if (data_cf65bc != 0)
                    char* const eax_41 = var_20
                    
                    if (eax_41 != 0 && *eax_41 != 0)
                        char* eax_42 = sub_63d4e0(&var_20)
                        int32_t temp8_1 = *(eax_42 + 4)
                        *(eax_42 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)
                            var_20 = &data_801800
                
                ebx_4 = eax_12
            else
                char* eax_20 = nullptr
                
                while (true)
                    bool cond:3_1 = *esi_2 != 0
                    var_38 = eax_20
                    int32_t ecx_11
                    
                    if (cond:3_1)
                        ecx_11 = *(sub_63d4e0(&var_34) + 8)
                        eax_20 = var_38
                    else
                        ecx_11 = 0
                    
                    if (eax_20 s>= ecx_11)
                        goto label_62c2c0
                    
                    eax_20.b = *(eax_20 + esi_2)
                    char var_11_1 = eax_20.b
                    
                    if (isdigit(sx.d(eax_20.b)) == 0)
                        int32_t eax_23
                        eax_23.b = var_11_1
                        
                        if (eax_23.b != 0x2b && eax_23.b != 0x2d)
                            int32_t eax_26
                            
                            if (edi_1 == 0 || *edi_1 == 0)
                                eax_26 = 0
                            else
                                eax_26 = *(sub_63d4e0(&var_24) + 8)
                            
                            if (var_18 == 0)
                                sub_63b870(eax_26, &data_801800, "str", 
                                    "C:\x\ax2017\Engine\xString.cpp", 0x9a, "XString::XString")
                                
                                if (sub_63bc30() != 0)
                                    breakpoint
                                
                                sub_63bb00()
                                noreturn
                            
                            ebx_4 = eax_12
                            var_20 = &data_801800
                            sub_63db30(&var_20, var_18, eax_26 + ebx_4)
                            var_8_2.b = 0x12
                            char* const eax_28 = &data_801800
                            char* const edi_2 = var_20
                            
                            if (edi_2 != 0)
                                eax_28 = edi_2
                            
                            sub_63d960(arg3, eax_28)
                            var_8_2.b = 0x13
                            
                            if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
                                char* eax_29 = sub_63d4e0(&var_20)
                                int32_t temp9_1 = *(eax_29 + 4)
                                *(eax_29 + 4) -= 1
                                
                                if (temp9_1 == 1)
                                    sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                                    var_20 = &data_801800
                            
                            break
                    
                    eax_20 = var_38 + 1
            var_8_2.b = 9
            edi_1 = var_24
            void* const eax_44
            
            if (edi_1 == 0 || *edi_1 == 0)
                eax_44 = nullptr
            else
                eax_44 = *(sub_63d4e0(&var_24) + 8)
            
            ecx_3 = var_18 + eax_44 + ebx_4
            var_18 = ecx_3
            int32_t var_8_3 = 0x14
            
            if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                char* eax_46 = sub_63d4e0(&var_34)
                int32_t temp10_1 = *(eax_46 + 4)
                *(eax_46 + 4) -= 1
                
                if (temp10_1 == 1)
                    sub_64c080(eax_46, *(eax_46 + 0xc) + 0x10)
                    var_34 = &data_801800
                
                ecx_3 = var_18
            
            var_8_3.b = 2
        
        sub_63b870(eax_19, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, 
            "XString::XString")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    var_5c = "XString::XString"
    var_60_1 = 0x9a
    var_64 = "C:\x\ax2017\Engine\xString.cpp"
    ecx = &data_871e0c
else
    var_5c = "ReplaceN"
    var_60_1 = 0x10670
    var_64 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx = "strN"

sub_63b870(eax_3, &data_801800, ecx, var_64, var_60_1, var_5c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
