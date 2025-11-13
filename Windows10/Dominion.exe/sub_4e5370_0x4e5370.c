// 函数: sub_4e5370
// 地址: 0x4e5370
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Getcat@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@SAIPAPBVfacet@locale@2@PBV42@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_58 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_40 = arg2
char** var_44 = arg3
int32_t var_38 = 0
*arg3 = &data_801800
int32_t eax_3 = 0
int32_t var_8_1 = 0
int32_t var_38_1 = 1
int32_t var_34 = 0

while (true)
    int32_t eax_4 = eax_3 * 5
    int32_t* edi_1 = arg2 + (eax_4 << 2)
    
    if (*(arg2 + (eax_4 << 2)) != 0)
        char* eax_5 = *arg3
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_63d4e0(arg3)
            int32_t esi_1 = *(eax_6 + 8)
            sub_63d5e0(eax_6, esi_1 + 2, arg3, 1)
            char* ecx_2 = *arg3
            *(ecx_2 + esi_1) = 0x202c
            ecx_2[esi_1 + 2] = 0
        
        int32_t ecx_3 = *edi_1
        int32_t var_8_3
        
        if (ecx_3 == 0x17e3)
            char* const var_14
            sub_4e50e0(arg4, arg4 + 0x154, &var_14, 0x14, arg4)
            int32_t var_8_2 = 1
            char* const esi_2 = &data_801800
            char* const eax_8 = var_14
            int32_t ecx_5 = *edi_1
            
            if (eax_8 != 0)
                esi_2 = eax_8
            
            char const* const eax_9
            
            if (ecx_5 != 0)
                eax_9 = *(sub_516f30(ecx_5) + 4)
            else
                eax_9 = "none"
            
            char* const var_5c_2 = esi_2
            char const* const var_60_1 = eax_9
            var_8_2.b = 2
            char* ecx_6 = &data_801800
            char* const var_1c
            char* eax_12 = *sub_63df30(&var_1c, "%s(%s)")
            
            if (eax_12 != 0)
                ecx_6 = eax_12
            
            sub_63d960(arg3, ecx_6)
            var_8_2.b = 3
            
            if (data_cf65bc != 0)
                char* eax_13 = var_1c
                
                if (eax_13 != 0 && *eax_13 != 0)
                    char* eax_14 = sub_63d4e0(&var_1c)
                    int32_t temp0_1 = *(eax_14 + 4)
                    *(eax_14 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                        var_1c = &data_801800
            
            var_8_3 = 4
            
            if (data_cf65bc != 0)
                char* eax_15 = var_14
                
                if (eax_15 != 0 && *eax_15 != 0)
                    char* eax_16 = sub_63d4e0(&var_14)
                    int32_t temp2_1 = *(eax_16 + 4)
                    *(eax_16 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
                        var_14 = &data_801800
        else if (ecx_3 != 0x17d8)
            int32_t eax_27 = edi_1[1]
            
            if (eax_27 != 0)
                int32_t esi_4 = edi_1[2]
                
                if (esi_4 != 0xffffffff)
                    void* eax_50 = sub_571b30(eax_27, 0x17)
                    int32_t ecx_38 = *edi_1
                    int32_t eax_51 = *(eax_50 + 0x58)
                    char const* const eax_52
                    
                    if (ecx_38 != 0)
                        eax_52 = *(sub_516f30(ecx_38) + 4)
                    else
                        eax_52 = "none"
                    
                    int32_t var_5c_13 = esi_4
                    int32_t var_60_5 = eax_51
                    char const* const var_64_3 = eax_52
                    int32_t var_8_8 = 0xf
                    char* ecx_39 = &data_801800
                    char* var_30
                    char* eax_55 = *sub_63df30(&var_30, "%s(%s,%d)")
                    
                    if (eax_55 != 0)
                        ecx_39 = eax_55
                    
                    sub_63d960(arg3, ecx_39)
                    var_8_3 = 0x10
                    
                    if (data_cf65bc != 0)
                        char* eax_56 = var_30
                        
                        if (eax_56 != 0 && *eax_56 != 0)
                            char* eax_57 = sub_63d4e0(&var_30)
                            int32_t temp3_1 = *(eax_57 + 4)
                            *(eax_57 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_64c080(eax_57, *(eax_57 + 0xc) + 0x10)
                                var_30 = &data_801800
                else
                    int32_t ecx_24 = edi_1[4]
                    
                    if (ecx_24 == 0)
                        void* eax_43 = sub_571b30(eax_27, 0x17)
                        int32_t ecx_32 = *edi_1
                        int32_t esi_6 = *(eax_43 + 0x58)
                        char const* const eax_44
                        
                        if (ecx_32 != 0)
                            eax_44 = *(sub_516f30(ecx_32) + 4)
                        else
                            eax_44 = "none"
                        
                        int32_t var_5c_11 = esi_6
                        char const* const var_60_4 = eax_44
                        int32_t var_8_7 = 0xd
                        char* ecx_33 = &data_801800
                        char* var_2c
                        char* eax_47 = *sub_63df30(&var_2c, "%s(%s)")
                        
                        if (eax_47 != 0)
                            ecx_33 = eax_47
                        
                        sub_63d960(arg3, ecx_33)
                        var_8_3 = 0xe
                        
                        if (data_cf65bc != 0)
                            char* eax_48 = var_2c
                            
                            if (eax_48 != 0 && *eax_48 != 0)
                                char* eax_49 = sub_63d4e0(&var_2c)
                                int32_t temp6_1 = *(eax_49 + 4)
                                *(eax_49 + 4) -= 1
                                
                                if (temp6_1 == 1)
                                    sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
                                    var_2c = &data_801800
                    else
                        int32_t esi_5 = *(sub_571b30(ecx_24, 0x17) + 0x58)
                        void* eax_35 = sub_571b30(edi_1[1], 0x17)
                        int32_t ecx_26 = *edi_1
                        int32_t eax_36 = *(eax_35 + 0x58)
                        char const* const eax_37
                        
                        if (ecx_26 != 0)
                            eax_37 = *(sub_516f30(ecx_26) + 4)
                        else
                            eax_37 = "none"
                        
                        int32_t var_5c_9 = esi_5
                        int32_t var_60_3 = eax_36
                        char const* const var_64_2 = eax_37
                        int32_t var_8_6 = 0xb
                        char* ecx_27 = &data_801800
                        char* var_28
                        char* eax_40 = *sub_63df30(&var_28, "%s(%s,%s)")
                        
                        if (eax_40 != 0)
                            ecx_27 = eax_40
                        
                        sub_63d960(arg3, ecx_27)
                        var_8_3 = 0xc
                        
                        if (data_cf65bc != 0)
                            char* eax_41 = var_28
                            
                            if (eax_41 != 0 && *eax_41 != 0)
                                char* eax_42 = sub_63d4e0(&var_28)
                                int32_t temp7_1 = *(eax_42 + 4)
                                *(eax_42 + 4) -= 1
                                
                                if (temp7_1 == 1)
                                    sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)
                                    var_28 = &data_801800
            else
                if (ecx_3 == 0xdb1)
                    sub_63b870(eax_27, &data_801800, 
                        "missionExtras[i].piece != CSTART_REPLACE_COPPER", 
                        "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 0x1580, 
                        "ToExtrasString")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                char const* const eax_28
                
                if (ecx_3 != 0)
                    eax_28 = *(sub_516f30(ecx_3) + 4)
                else
                    eax_28 = "none"
                
                char const* const var_5c_7 = eax_28
                int32_t var_8_5 = 9
                char* ecx_20 = &data_801800
                char* const var_24
                char* eax_31 = *sub_63df30(&var_24, "%s")
                
                if (eax_31 != 0)
                    ecx_20 = eax_31
                
                sub_63d960(arg3, ecx_20)
                var_8_3 = 0xa
                
                if (data_cf65bc != 0)
                    char* eax_32 = var_24
                    
                    if (eax_32 != 0 && *eax_32 != 0)
                        char* eax_33 = sub_63d4e0(&var_24)
                        int32_t temp4_1 = *(eax_33 + 4)
                        *(eax_33 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                            var_24 = &data_801800
        else
            char* const var_18
            sub_4e50e0(arg4, arg4 + 0x1a8, &var_18, 1, arg4)
            int32_t var_8_4 = 5
            char* const esi_3 = &data_801800
            char* eax_18 = var_18
            int32_t ecx_13 = *edi_1
            
            if (eax_18 != 0)
                esi_3 = eax_18
            
            char const* const eax_19
            
            if (ecx_13 != 0)
                eax_19 = *(sub_516f30(ecx_13) + 4)
            else
                eax_19 = "none"
            
            char* const var_5c_5 = esi_3
            char const* const var_60_2 = eax_19
            var_8_4.b = 6
            char* ecx_14 = &data_801800
            char* const var_20
            char* eax_22 = *sub_63df30(&var_20, "%s(%s)")
            
            if (eax_22 != 0)
                ecx_14 = eax_22
            
            sub_63d960(arg3, ecx_14)
            var_8_4.b = 7
            
            if (data_cf65bc != 0)
                char* eax_23 = var_20
                
                if (eax_23 != 0 && *eax_23 != 0)
                    char* eax_24 = sub_63d4e0(&var_20)
                    int32_t temp1_1 = *(eax_24 + 4)
                    *(eax_24 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
                        var_20 = &data_801800
            
            var_8_3 = 8
            
            if (data_cf65bc != 0)
                char* eax_25 = var_18
                
                if (eax_25 != 0 && *eax_25 != 0)
                    char* eax_26 = sub_63d4e0(&var_18)
                    int32_t temp5_1 = *(eax_26 + 4)
                    *(eax_26 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                        var_18 = &data_801800
        
        eax_3 = var_34 + 1
        var_8_3.b = 0
        var_34 = eax_3
    
    if (*(arg2 + (eax_4 << 2)) == 0 || eax_3 s>= 0x20)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    arg2 = var_40
