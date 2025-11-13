// 函数: sub_66daf0
// 地址: 0x66daf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_vfscanf@D@@YAH_KQAU_iobuf@@QBDQAU__crt_locale_pointers@@QAD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
char const* const var_58_1
int32_t var_54
char const* const var_50_1
char* ecx

if (arg3 == 0x111)
    char const (** ecx_1)[0xa] = &data_8cae70
    int32_t* eax_4 = sub_6dd1e0(eax_3, arg2, &data_8cae70, data_17774f4, 0x110)
    int32_t* var_2c_1 = eax_4
    
    if (eax_4 == 0)
        int128_t var_40
        int32_t* eax_5
        int32_t edx_1
        edx_1:eax_5 = &var_40
        var_40 = zx.o(0)
        ecx_1 = &data_8cae70
        eax_4 = sub_6dd1e0(sub_6dcc50(eax_5, arg2, &data_8cae70, 0x110, eax_5, edx_1), arg2, 
            &data_8cae70, data_17774f4, 0x110)
        var_2c_1 = eax_4
        
        if (eax_4 == 0)
            sub_63b870(eax_4, &data_801800, "bindings", "C:\x\ax2017\Engine\UI2.cpp", 0x4440, 
                "UI2CommitBinding")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
    
    int32_t edi_1 = eax_4[2]
    int32_t esi_1 = 0
    int32_t var_28 = edi_1
    struct _EXCEPTION_REGISTRATION_RECORD** eax_20
    struct _EXCEPTION_REGISTRATION_RECORD*** ecx_18
    void* count
    char* edi_6
    
    if (edi_1 s> 0)
        char const (*** edi_2)[0xa] = *eax_4
        
        while (true)
            char* eax_7 = arg4
            ecx_1 = *edi_2
            int32_t eax_9
            
            while (true)
                char edx = *ecx_1
                char temp0_1 = *eax_7
                bool c_1 = edx u< temp0_1
                
                if (edx == temp0_1)
                    if (edx == 0)
                        eax_9 = 0
                        break
                    
                    edx = *(ecx_1 + 1)
                    char temp1_1 = eax_7[1]
                    c_1 = edx u< temp1_1
                    
                    if (edx == temp1_1)
                        ecx_1 += 2
                        eax_7 = &eax_7[2]
                        
                        if (edx != 0)
                            continue
                        
                        eax_9 = 0
                        break
                
                eax_9 = sbb.d(eax_7, eax_7, c_1) | 1
                break
            
            if (eax_9 == 0)
                sub_63d720(&var_28, &data_801800)
                int32_t eax_12 = var_28
                char* const ecx_7 = &data_801800
                char* edx_5 = arg5
                
                if (eax_12 != 0)
                    ecx_7 = eax_12
                
                void* const edi_4
                
                while (true)
                    eax_12.b = *ecx_7
                    char temp2_1 = *edx_5
                    bool c_2 = eax_12.b u< temp2_1
                    bool z_3 = eax_12.b == temp2_1
                    char var_21_1 = eax_12.b
                    eax_12 = var_28
                    
                    if (z_3)
                        if (var_21_1 == 0)
                            edi_4 = nullptr
                            break
                        
                        eax_12.b = ecx_7[1]
                        char temp3_1 = edx_5[1]
                        c_2 = eax_12.b u< temp3_1
                        bool z_4 = eax_12.b == temp3_1
                        char var_21_2 = eax_12.b
                        eax_12 = var_28
                        
                        if (z_4)
                            ecx_7 = &ecx_7[2]
                            edx_5 = &edx_5[2]
                            
                            if (var_21_2 != 0)
                                continue
                            
                            edi_4 = nullptr
                            break
                    
                    edi_4 = sbb.d(edi_2, edi_2, c_2) | 1
                    break
                
                int32_t var_14_1 = 0
                
                if (data_cf65bc != 0 && eax_12 != 0 && *eax_12 != 0)
                    char* eax_13 = sub_63d4e0(&var_28)
                    int32_t temp4_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                        var_28 = &data_801800
                
                int32_t var_14_2 = 0xffffffff
                
                if (edi_4 == 0)
                    int32_t* eax_14 = sub_69dd00(data_17774f4, 0)
                    uint32_t eax_15 = sub_6fb870(eax_14, eax_14, var_2c_1, esi_1, edi_4)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_15
                
                struct _EXCEPTION_REGISTRATION_RECORD*** esi_6 = (esi_1 << 4) + *var_2c_1 + 8
                int32_t ecx_15 = *(sub_69dd00(data_17774f0, 8) + 0x24)
                eax_3 = *esi_6
                
                if (eax_3 == 0)
                    var_50_1 = "DefinitionDeleteString"
                    var_54 = 0x17c
                    ecx = "*pString"
                    goto label_66deb4
                
                if (eax_3 != ecx_15)
                    eax_3 = _aligned_free(eax_3)
                    *esi_6 = nullptr
                
                edi_6 = arg5
                
                if (edi_6 == 0)
                    goto label_66dea5
                
                char* esi_7 = edi_6
                
                do
                    eax_3.b = *esi_7
                    esi_7 = &esi_7[1]
                while (eax_3.b != 0)
                
                count = esi_7 - &esi_7[1] + 1
                eax_20 = sub_687730(count)
                ecx_18 = esi_6
                goto label_66de57
            
            esi_1 += 1
            edi_2 = &edi_2[4]
            
            if (esi_1 s>= var_28)
                edi_1 = var_28
                break
    
    char const (** var_54_4)[0xa] = ecx_1
    int32_t* eax_10 = sub_69dd00(data_17774f4, 0)
    sub_6fb630(eax_10, eax_10, var_2c_1, edi_1)
    void* ecx_4 = data_17774f0
    int32_t edi_3 = edi_1 << 4
    struct _EXCEPTION_REGISTRATION_RECORD*** esi_4 = *var_2c_1 + edi_3
    var_28 = edi_3
    int32_t ecx_5 = *(sub_69dd00(ecx_4, 0) + 0x24)
    eax_3 = *esi_4
    
    if (eax_3 != 0)
        if (eax_3 != ecx_5)
            _aligned_free(eax_3)
            *esi_4 = nullptr
        
        eax_3 = arg4
        
        if (eax_3 == 0)
        label_66dea5:
            var_50_1 = "DefDeepCopyString"
            var_54 = 0x25b
            ecx = "pExistingString"
        else
            struct _EXCEPTION_REGISTRATION_RECORD** esi_9 = eax_3
            void* ecx_19 = esi_9 + 1
            
            do
                eax_3.b = *esi_9
                esi_9 += 1
            while (eax_3.b != 0)
            
            struct _EXCEPTION_REGISTRATION_RECORD** eax_21 = sub_687730(esi_9 - ecx_19 + 1)
            *esi_4 = eax_21
            memcpy(eax_21, arg4, esi_9 - ecx_19 + 1)
            struct _EXCEPTION_REGISTRATION_RECORD*** esi_14 = var_28 + 8 + *var_2c_1
            int32_t ecx_23 = *(sub_69dd00(data_17774f0, 8) + 0x24)
            eax_3 = *esi_14
            
            if (eax_3 != 0)
                if (eax_3 != ecx_23)
                    eax_3 = _aligned_free(eax_3)
                    *esi_14 = nullptr
                
                edi_6 = arg5
                
                if (edi_6 == 0)
                    goto label_66dea5
                
                char* esi_15 = edi_6
                
                do
                    eax_3.b = *esi_15
                    esi_15 = &esi_15[1]
                while (eax_3.b != 0)
                
                count = esi_15 - &esi_15[1] + 1
                eax_20 = sub_687730(count)
                ecx_18 = esi_14
            label_66de57:
                *ecx_18 = eax_20
                int32_t eax_24 = memcpy(eax_20, edi_6, count)
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_24
            
            var_50_1 = "DefinitionDeleteString"
            var_54 = 0x17c
            ecx = "*pString"
    else
        var_50_1 = "DefinitionDeleteString"
        var_54 = 0x17c
        ecx = "*pString"
    
label_66deb4:
    var_58_1 = "C:\x\ax2017\Engine\Definition.cpp"
else
    var_50_1 = "UI2CommitBinding"
    var_54 = 0x4437
    var_58_1 = "C:\x\ax2017\Engine\UI2.cpp"
    ecx = "attribTag == UIATTRIB_SLOT_BINDING"

sub_63b870(eax_3, &data_801800, ecx, var_58_1, var_54, var_50_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
