// 函数: sub_4cca20
// 地址: 0x4cca20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$_Getloctxt@V?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@D@std@@YAHAAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0IPBDW4_Case_sensitive@0@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_70 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_58 = 0
*(sub_64e7a0(arg1) + 0x18bc) = sub_4cc050
sub_628360(arg1, &data_cc8d98)
int32_t* eax_4 = sub_571c40(&data_cc8d98)
int32_t eax_5 = sub_4dae80(eax_4)
int32_t var_78_1
char const* const ecx_3

if (data_cc8d98 == 3 && eax_5 == 1)
    if (data_cc8d9c == 0x100002)
        int32_t ecx_4 = 0
        int32_t eax_6 = 0
        void* const ecx_5
        
        while (true)
            if (*(eax_6 + &data_780878) == 0x100002)
                ecx_5 = ecx_4 * 0x10c + &data_780878
                break
            
            eax_6 += 0x10c
            ecx_4 += 1
            
            if (eax_6 u>= 0x28d4)
                ecx_5 = &data_780878
                break
        
        int32_t var_4c
        sub_4be540(ecx_5, &var_4c)
        int32_t var_40
        
        if (var_40 != 1)
            goto label_4ccba4
        
        eax_5 = var_4c
        
        if (eax_5 u> 6)
            char const* const var_74_6 = "StoreItemUpdate"
            var_78_1 = 0x263e
            goto label_4cd046
        
        int32_t var_48
        int32_t var_44
        uint32_t eax_10
        
        switch (eax_5)
            case 0, 1
                uint32_t eax_7 = sub_64e7a0(arg1)
                sub_665db0(eax_7, &data_8dc38c, eax_7, 0x3f800000, 0xffffffff, 0)
            case 2
                uint32_t eax_8 = sub_64e7a0(arg1)
                void* eax_9
                int32_t ecx_11
                eax_9, ecx_11 = sub_665db0(eax_8, &data_8dc3f8, eax_8, 0x3f800000, 0xffffffff, 0)
                
                if (var_48 != 0)
                    ecx_11 = sub_4cc890(eax_9, var_48, arg1, var_44)
                
                int32_t var_74_3 = ecx_11
                sub_4cc7b0(arg1, &var_4c)
                eax_10 = sub_64e7a0(arg1)
                int32_t var_78_2 = 0
                int32_t var_7c_1 = 0xffffffff
                sub_665db0(eax_10, &data_8dc548, eax_10, 0x3f800000, 0xffffffff, 0)
            case 3
                uint32_t eax_14 = sub_64e7a0(arg1)
                sub_4cc890(sub_665db0(eax_14, &data_8dc3f8, eax_14, 0x3f800000, 0xffffffff, 0), 
                    var_48, arg1, var_44)
                sub_4cc7b0(arg1, &var_4c)
                eax_10 = sub_64e7a0(arg1)
                int32_t var_78_3 = 0
                int32_t var_7c_3 = 0xffffffff
                sub_665db0(eax_10, &data_8dc554, eax_10, 0x3f800000, 0xffffffff, 0)
            case 4
                sub_4cc890(eax_5, var_48, arg1, var_44)
                eax_10 = sub_64e7a0(arg1)
                int32_t var_78_4 = 0
                int32_t var_7c_4 = 0xffffffff
                sub_665db0(eax_10, &data_8dc530, eax_10, 0x3f800000, 0xffffffff, 0)
            case 5
                uint32_t eax_16 = sub_64e7a0(arg1)
                sub_4cc890(sub_665db0(eax_16, &data_8dc3f8, eax_16, 0x3f800000, 0xffffffff, 0), 
                    var_48, arg1, var_44)
                uint32_t eax_18 = sub_64e7a0(arg1)
                sub_665db0(eax_18, &data_8dc548, eax_18, 0x3f800000, 0xffffffff, 0)
            case 6
                sub_4cc890(eax_5, var_48, arg1, var_44)
                eax_10 = sub_64e7a0(arg1)
                int32_t var_78_5 = 0
                int32_t var_7c_6 = 0xffffffff
                sub_665db0(eax_10, &data_8dc53c, eax_10, 0x3f800000, 0xffffffff, 0)
        
        goto label_4ccba4
    
    char const* const var_74_1 = "StoreItemUpdate"
    var_78_1 = 0x2609
    ecx_3 = "gStoreItemDlg.exp.type == (DLCType)DOM_CURRENT_BUNDLE"
label_4cd055:
    sub_63b870(eax_5, &data_801800, ecx_3, "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 
        var_78_1, "StoreItemUpdate")
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

char* var_50
uint32_t eax_13
void** edx_5

switch (eax_5)
    case 0
        eax_13 = sub_64e7a0(arg1)
        edx_5 = &data_8dc38c
        goto label_4ccdfe
    case 1
    label_4ccba4:
        
        if (data_cc8d98 == 0 && *eax_4 == 2)
            uint32_t eax_11 = sub_64e7a0(arg1)
            sub_665db0(eax_11, &data_8dc3f8, eax_11, 0x3f800000, 0xffffffff, 0)
        
        if (sub_4e3b00(*eax_4) != 0)
            eax_13 = sub_64e7a0(arg1)
            edx_5 = &data_8dc3b0
            goto label_4ccdfe
        
        uint32_t eax_19 = sub_64e7a0(arg1)
        sub_665db0(eax_19, &data_8dc398, eax_19, 0x3f800000, 0xffffffff, 0)
        var_50 = &data_801800
        int32_t var_8_1 = 0
        
        if (sub_64bba0(eax_4, &var_50) != 0)
            uint32_t eax_21 = sub_64e7a0(arg1)
            sub_665db0(eax_21, &data_8dc3e0, eax_21, 0x3f800000, 0xffffffff, 0)
            int32_t var_7c_7 = 0xffffffff
            sub_666380(&var_50, &data_8dc3ec, arg1, &var_50)
        
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* eax_23 = var_50
            
            if (eax_23 != 0 && *eax_23 != 0)
                char* eax_24 = sub_63d4e0(&var_50)
                int32_t temp0_1 = *(eax_24 + 4)
                *(eax_24 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
        
        int32_t var_8_3 = 0xffffffff
    case 2, 5
        eax_13 = sub_64e7a0(arg1)
        edx_5 = &data_8dc374
        goto label_4ccdfe
    case 4
        eax_13 = sub_64e7a0(arg1)
        edx_5 = &data_8dc3a4
        goto label_4ccdfe
    case 6
        eax_13 = sub_64e7a0(arg1)
        edx_5 = &data_8dc380
    label_4ccdfe:
        sub_665db0(eax_13, edx_5, eax_13, 0x3f800000, 0xffffffff, 0)
    default
        char const* const var_74_9 = "StoreItemUpdate"
        var_78_1 = 0x269b
    label_4cd046:
        ecx_3 = "Halt"
        goto label_4cd055

int32_t esi = eax_4[8]
uint32_t eax_25 = sub_64e7a0(arg1)
sub_665db0(eax_25, esi, eax_25, 0x3f800000, 0xffffffff, 0)
int32_t var_8_4 = 2
int32_t var_7c_8 = eax_4[9]
sub_63df30(&var_50, "dom_expansion_name_%s")
var_8_4.b = 3
char* eax_26 = var_50
char* edx_15 = &data_801800
int32_t var_88 = 0

if (eax_26 != 0)
    edx_15 = eax_26

void* result_1
sub_60db00(eax_26, edx_15, &result_1, 1)
int32_t var_58_1 = 1
var_8_4.b = 4

if (data_cf65bc != 0)
    char* eax_27 = var_50
    
    if (eax_27 != 0 && *eax_27 != 0)
        char* eax_28 = sub_63d4e0(&var_50)
        int32_t temp1_1 = *(eax_28 + 4)
        *(eax_28 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)

var_8_4.b = 2
int32_t var_74_7 = 0xffffffff
sub_666380(&result_1, &data_8dc4e8, arg1, &result_1)
char eax_30 = data_cc8d90

if (eax_30 == 0)
    uint32_t eax_31 = sub_64e7a0(arg1)
    sub_665db0(eax_31, &data_8dc4dc, eax_31, 0x3f800000, 0xffffffff, 0)
    eax_30 = data_cc8d90

uint32_t eax_32 = zx.d(eax_30)
uint32_t var_74_8 = eax_32
int32_t* var_84_1 = arg1
void var_90
sub_4ad380(eax_32, arg1, data_cc8d94, var_90)

if (sub_4aceb0(data_cc8d94, &var_50) != 0)
    uint32_t eax_34 = sub_64e7a0(arg1)
    sub_665db0(eax_34, &data_8dc4b8, eax_34, 0x3f800000, 0xffffffff, 0)
    char ebx_1 = var_50.b
    
    if ((ebx_1 & 2) != 0)
        uint32_t eax_35 = sub_64e7a0(arg1)
        sub_665db0(eax_35, &data_8dc4c4, eax_35, 0x3f800000, 0xffffffff, 0)
    
    if ((ebx_1 & 4) != 0)
        uint32_t eax_36 = sub_64e7a0(arg1)
        sub_665db0(eax_36, &data_8dc4d0, eax_36, 0x3f800000, 0xffffffff, 0)

if (sub_4cbfa0(&data_cc8d98) == data_cc8d9c)
    uint32_t eax_37 = sub_64e7a0(arg1)
    sub_665db0(eax_37, &data_8dbd64, eax_37, 0x3f800000, 0xffffffff, 0)

void* result
int32_t edx_21
result, edx_21 = sub_4cbf00(&data_cc8d98)

if (edx_21 == data_cc8d9c)
    uint32_t eax_38 = sub_64e7a0(arg1)
    result = sub_665db0(eax_38, &data_8dbd70, eax_38, 0x3f800000, 0xffffffff, 0)

int32_t var_8_5 = 5

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
