// 函数: sub_6c4b90
// 地址: 0x6c4b90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?consume@?$source_block@V?$multi_link_registry@V?$ITarget@W4agent_status@Concurrency@@@Concurrency@@@Concurrency@@V?$ordered_message_processor@W4agent_status@Concurrency@@@2@@Concurrency@@UAEPAV?$message@W4agent_status@Concurrency@@@2@HPAV?$ITarget@W4agent_status@Concurrency@@@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* const esi = nullptr
int32_t var_24 = 0
int32_t var_8_1 = 1

if (data_8c4157 == 0)
    sub_63b870(arg2, &data_801800, "gCompilingMode", "C:\x\ax2017\Engine\DefLoad.cpp", 0x143, 
        "AssetSourceGetFullPath")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char const (** var_34)[0x5]
char* const var_2c
sub_6c4a30(arg2, &var_34, arg2, &var_2c)
char* arg_4
char** result
char* const var_20
char* var_1c

if (var_2c != 0)
    char* eax_10 = arg_4
    char* const edi = &data_801800
    char* edx_6 = &data_801800
    
    if (eax_10 != 0)
        edx_6 = eax_10
    
    char* var_18
    sub_69feb0(&var_18, edx_6)
    int32_t ebx_1 = 0
    var_8_1.b = 7
    char* var_28
    
    if (var_2c s<= 0)
    label_6c4e1a:
        char const (** eax_21)[0x5] = var_34
        char const (* edx_15)[0x5] = *eax_21
        
        if (edx_15 == 0)
            sub_63b870(eax_21, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                "XString::XString")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        sub_63d720(&var_28, edx_15)
        var_8_1.b = 0x13
        var_8_1.b = 0x14
        char* eax_27 = *sub_63dde0(&var_18, &var_2c, &var_28)
        
        if (eax_27 != 0)
            edi = eax_27
        
        result = arg1
        sub_6c4050(result, edi)
        int32_t var_24_5 = esi | 1
        var_8_1.b = 0x15
        
        if (data_cf65bc != 0)
            char* eax_28 = var_2c
            
            if (eax_28 != 0 && *eax_28 != 0)
                char* eax_29 = sub_63d4e0(&var_2c)
                int32_t temp3_1 = *(eax_29 + 4)
                *(eax_29 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                    var_2c = &data_801800
        
        var_8_1.b = 0x16
        
        if (data_cf65bc != 0)
            char* eax_30 = var_28
            
            if (eax_30 != 0 && *eax_30 != 0)
                char* eax_31 = sub_63d4e0(&var_28)
                int32_t temp4_1 = *(eax_31 + 4)
                *(eax_31 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
        
        var_8_1.b = 0x17
        
        if (data_cf65bc != 0)
            char* eax_32 = var_18
            
            if (eax_32 != 0 && *eax_32 != 0)
                char* eax_33 = sub_63d4e0(&var_18)
                int32_t temp6_1 = *(eax_33 + 4)
                *(eax_33 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                    var_18 = &data_801800
        
        int32_t var_8_4 = 0x18
    else
        while (true)
            char const (** eax_11)[0x5] = var_34
            char* edx_7 = eax_11[ebx_1]
            
            if (edx_7 == 0)
                sub_63b870(eax_11, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                    "XString::XString")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            sub_63d720(&var_28, edx_7)
            var_8_1.b = 9
            char* eax_12 = var_18
            var_1c = eax_12
            
            if (eax_12 != 0 && *eax_12 != 0)
                char* eax_13 = sub_63d4e0(&var_1c)
                *(eax_13 + 4) += 1
            
            char* esi_1 = esi | 2
            char* const eax_14 = &data_801800
            var_20 = esi_1
            char* edi_1 = var_28
            char* var_24_2 = esi_1
            
            if (edi_1 != 0)
                eax_14 = edi_1
            
            sub_63d960(&var_1c, eax_14)
            char* esi_2 = var_1c
            char* edx_8 = &data_801800
            
            if (esi_2 != 0)
                edx_8 = esi_2
            
            char* const lpFileName_2
            sub_6c4050(&lpFileName_2, edx_8)
            void* eax_16 = var_20 & 0xfffffffd
            var_20 = eax_16
            void* var_24_3 = eax_16
            var_8_1.b = 0xc
            
            if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                char* eax_17 = sub_63d4e0(&var_1c)
                int32_t temp5_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                    var_1c = &data_801800
            
            var_8_1.b = 0xe
            
            if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                char* eax_18 = sub_63d4e0(&var_28)
                int32_t temp7_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp7_1 == 1)
                    sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                    var_28 = &data_801800
            
            var_8_1.b = 0xd
            edi = &data_801800
            char* const lpFileName_1 = lpFileName_2
            char* const lpFileName = &data_801800
            
            if (lpFileName_1 != 0)
                lpFileName = lpFileName_1
            
            if (GetFileAttributesA(lpFileName) != 0xffffffff)
                result = arg1
                char* lpFileName_4 = lpFileName_2
                *result = lpFileName_4
                
                if (lpFileName_4 != 0 && *lpFileName_4 != 0)
                    char* eax_22 = sub_63d4e0(result)
                    *(eax_22 + 4) += 1
                    lpFileName_4 = lpFileName_2
                
                int32_t var_24_4 = var_20 | 1
                var_8_1.b = 0xf
                
                if (data_cf65bc != 0 && lpFileName_4 != 0 && *lpFileName_4 != 0)
                    char* eax_23 = sub_63d4e0(&lpFileName_2)
                    int32_t temp9_1 = *(eax_23 + 4)
                    *(eax_23 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                        lpFileName_2 = &data_801800
                
                var_8_1.b = 0x10
                
                if (data_cf65bc != 0)
                    char* eax_24 = var_18
                    
                    if (eax_24 != 0 && *eax_24 != 0)
                        char* eax_25 = sub_63d4e0(&var_18)
                        int32_t temp10_1 = *(eax_25 + 4)
                        *(eax_25 + 4) -= 1
                        
                        if (temp10_1 == 1)
                            sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                            var_18 = &data_801800
                
                int32_t var_8_3 = 0x11
                break
            
            var_8_1.b = 0x12
            
            if (data_cf65bc != 0)
                char* lpFileName_3 = lpFileName_2
                
                if (lpFileName_3 != 0 && *lpFileName_3 != 0)
                    char* eax_20 = sub_63d4e0(&lpFileName_2)
                    int32_t temp8_1 = *(eax_20 + 4)
                    *(eax_20 + 4) -= 1
                    
                    if (temp8_1 == 1)
                        sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                        lpFileName_2 = &data_801800
            
            var_8_1.b = 7
            ebx_1 += 1
            esi = var_20
            
            if (ebx_1 s>= var_2c)
                goto label_6c4e1a
else
    sub_63d720(&var_1c, ".xml")
    var_8_1.b = 2
    var_8_1.b = 3
    char* const edx_1 = &data_801800
    char* eax_5 = *sub_63dde0(&arg_4, &var_20, &var_1c)
    result = arg1
    
    if (eax_5 != 0)
        edx_1 = eax_5
    
    sub_6c4050(result, edx_1)
    int32_t var_24_1 = 1
    var_8_1.b = 4
    
    if (data_cf65bc != 0)
        char* eax_6 = var_20
        
        if (eax_6 != 0 && *eax_6 != 0)
            char* eax_7 = sub_63d4e0(&var_20)
            int32_t temp0_1 = *(eax_7 + 4)
            *(eax_7 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                var_20 = &data_801800
    
    var_8_1.b = 5
    
    if (data_cf65bc != 0)
        char* eax_8 = var_1c
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_63d4e0(&var_1c)
            int32_t temp1_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
    
    int32_t var_8_2 = 6

if (data_cf65bc != 0)
    char* eax_34 = arg_4
    
    if (eax_34 != 0 && *eax_34 != 0)
        char* eax_35 = sub_63d4e0(&arg_4)
        int32_t temp2_1 = *(eax_35 + 4)
        *(eax_35 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_35, *(eax_35 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
