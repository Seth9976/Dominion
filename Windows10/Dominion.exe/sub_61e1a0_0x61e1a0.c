// 函数: sub_61e1a0
// 地址: 0x61e1a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b3d4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx = __chkstk(0x5074)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28_1
char const* const var_24_1
char* ecx_1

if (ecx s>= 3)
    eax_3 = ecx - 3
    
    if (*(eax_3 * 0x9c + 0x790198) == ecx)
        char* edi_3 = *(eax_3 * 0x9c + 0x790224)
        void* eax_4 = 6
        
        if (ecx != 4)
            eax_4 = ecx
        
        void* ecx_2 = eax_4 + 2
        
        if (ecx != 0x11)
            ecx_2 = eax_4
        
        void* eax_5 = ecx_2 + 1
        
        if (ecx != 8)
            eax_5 = ecx_2
        
        void* ecx_3 = eax_5 + 0x17
        
        if (ecx != 9)
            ecx_3 = eax_5
        
        void* eax_6 = ecx_3 + 0x66
        
        if (ecx != 0xe)
            eax_6 = ecx_3
        
        void* edx = eax_6 + 4
        
        if (ecx != 0x10)
            edx = eax_6
        
        void* eax_7 = edx + 1
        
        if (ecx != 0x12)
            eax_7 = edx
        
        uint32_t result
        
        if (edi_3 != 0)
            if (data_171efcc == 0)
                data_171efc8 = 0
            
            sub_61dd90(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x353c)
            struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_24_2)(struct 
                _EXCEPTION_REGISTRATION_RECORD*** arg1) = sub_63d770
            void var_40
            `eh vector constructor iterator'(&var_40, 4, 0xb, 0x5a0be0)
            int32_t var_8_1 = 0
            char* var_5068
            sub_63d720(&var_5068, edi_3)
            var_8_1.b = 1
            char* const i_2
            char** eax_9
            int32_t ecx_10
            int32_t edx_2
            eax_9, ecx_10, edx_2 = sub_63e810(&i_2)
            int32_t var_24_3 = ecx_10
            var_8_1.b = 2
            int32_t i_3 = sub_61d5b0(eax_9, edx_2, eax_9, &var_40)
            var_8_1.b = 3
            
            if (data_cf65bc != 0)
                char* i_4 = i_2
                
                if (i_4 != 0 && *i_4 != 0)
                    char* eax_11 = sub_63d4e0(&i_2)
                    int32_t temp0_1 = *(eax_11 + 4)
                    *(eax_11 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                        i_2 = &data_801800
            
            var_8_1.b = 4
            
            if (data_cf65bc != 0)
                char* eax_12 = var_5068
                
                if (eax_12 != 0 && *eax_12 != 0)
                    char* eax_13 = sub_63d4e0(&var_5068)
                    int32_t temp1_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
            
            var_8_1.b = 0
            
            if (i_3 s> 0)
                void* esi_1 = &var_40
                int32_t i
                
                do
                    var_8_1.b = 5
                    sub_63d850(esi_1, sub_63e810(&var_5068))
                    var_8_1.b = 6
                    
                    if (data_cf65bc != 0)
                        char* eax_15 = var_5068
                        
                        if (eax_15 != 0 && *eax_15 != 0)
                            char* eax_16 = sub_63d4e0(&var_5068)
                            int32_t temp3_1 = *(eax_16 + 4)
                            *(eax_16 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
                                var_5068 = &data_801800
                    
                    esi_1 += 4
                    var_8_1.b = 0
                    i = i_3
                    i_3 -= 1
                while (i != 1)
            
            void* eax_17 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
            sub_63d850(eax_17 + 0x350c, &var_40)
            void var_3c
            void* ebx = &var_3c
            i_2 = 0xa
            void* edi_4 = eax_17 + 0x3510
            char* eax_20
            char* const i_1
            
            do
                char** eax_19 = sub_63e810(&var_5068)
                var_8_1.b = 7
                char* const esi_3 = &data_801800
                eax_20 = *edi_4
                char* edx_11 = &data_801800
                char* ecx_25 = *eax_19
                
                if (eax_20 != 0)
                    esi_3 = eax_20
                
                if (ecx_25 != 0)
                    edx_11 = ecx_25
                
                if (esi_3 != edx_11)
                    if (data_cf65bc != 0 && eax_20 != 0 && *eax_20 != 0)
                        char* eax_21 = sub_63d4e0(edi_4)
                        int32_t temp6_1 = *(eax_21 + 4)
                        *(eax_21 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                            *edi_4 = &data_801800
                    
                    eax_20 = *eax_19
                    *edi_4 = eax_20
                    
                    if (eax_20 != 0 && *eax_20 != 0)
                        eax_20 = sub_63d4e0(edi_4)
                        *(eax_20 + 4) += 1
                
                var_8_1.b = 8
                
                if (data_cf65bc != 0)
                    eax_20 = var_5068
                    
                    if (eax_20 != 0 && *eax_20 != 0)
                        eax_20 = sub_63d4e0(&var_5068)
                        int32_t temp5_1 = *(eax_20 + 4)
                        *(eax_20 + 4) -= 1
                        
                        if (temp5_1 == 1)
                            eax_20 = sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                            var_5068 = &data_801800
                
                var_8_1.b = 0
                ebx += 4
                edi_4 += 4
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            int32_t var_5064
            sub_4e6680(eax_20, eax_17 + 0x350c, &var_5064, eax_17 + 0x3510)
            void* var_505c_1 = eax_7
            sub_4e5ac0(eax_7, eax_17 + 0x350c, &var_5064, eax_17 + 0x3510)
            data_cc8dc8
            sub_4d8ad0(eax_17 + 0x3510)
            data_171efd0 = sub_5ac2e0(&var_5064)
            memcpy(&data_171efd4, &var_5064, 0x5020)
            int32_t var_8_2 = 0xffffffff
            result = `eh vector vbase constructor iterator'(&var_40, 4, 0xb, sub_63d770)
        else
            result = sub_61e070(ecx)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    var_24_1 = "ExpansionCampaignDefGet"
    var_28_1 = 0x672
    ecx_1 = "retval.exp == exp"
else
    var_24_1 = "ExpansionCampaignDefGet"
    var_28_1 = 0x669
    ecx_1 = "exp >= DOM_EXP_INTRIGUE"

sub_63b870(eax_3, &data_801800, ecx_1, "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp", 
    var_28_1, var_24_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
