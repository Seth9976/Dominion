// 函数: sub_5e0df0
// 地址: 0x5e0df0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_769f30
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_70 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg2
bool cond:0 = data_b809dc == 0
void* edi = *(ebx + 0x9c)
uint32_t var_4c = *(ebx + 0x98)
void* eax_4 = arg4

if (not(cond:0) && (eax_4.b & 2) == 0)
    uint32_t eax_5
    eax_5, arg2 = sub_573890(eax_4, *(ebx + 0x8c), 0xb80ad8, 1, 0xffffffff, 0xffffffff)
    var_4c = eax_5
    eax_4 = arg4
    edi = arg2

arg2.b = 0
char var_41 = 0

if ((edi & 0x20000) != 0)
    if ((eax_4.b & 2) != 0 || *(ebx + 0x8c) != 0x101)
    label_5e0eb4:
        var_41 = 1
        uint32_t eax_7 = sub_64e7a0(arg3)
        eax_4, arg2 = sub_665db0(eax_7, &data_be3400, eax_7, 0x3f800000, 0xffffffff, 0)
    else
        uint32_t eax_6 = sub_4b9370()
        
        if (eax_6.b == 0 || data_b824b0 == 0)
            goto label_5e0eb4
        
        eax_4, arg2 = sub_590c70(eax_6, data_b824a4, 0xb80ad8, 0x454)
        
        if (eax_4 == 0)
            goto label_5e0eb4
    
    arg2.b = var_41

if (*(ebx + 0x8c) == 0x104 && arg2.b == 0)
    sub_63b870(eax_4, &data_801800, "setStandard", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
        0x429e, "DomDeclareType")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_74)(struct _EXCEPTION_REGISTRATION_RECORD**
    * arg1) = sub_63d770
int32_t ebx_1 = 0
int32_t var_28[0x5]
`eh vector constructor iterator'(&var_28, 4, 5, 0x5a0be0)
int32_t var_8_1 = 0
void* i = &data_be3678
uint32_t esi_2 = var_4c
int32_t var_3c[0x5]

do
    if (((esi_2 & *i) | (*(i + 4) & edi)) != 0)
        var_3c[ebx_1] = i
        ebx_1 += 1
        
        if (ebx_1 s>= 5)
            break
    
    i += 0x18
while (i != &data_be3ac8)

if (ebx_1 != 0)
    int32_t eax_11 = ebx_1 << 2 s>> 2
    sub_4d4e30(eax_11, &var_3c[ebx_1], &var_3c, eax_11, sub_5e0d50)
    int32_t edi_1 = 0
    char* const var_48
    char* var_40
    
    if (ebx_1 s> 0)
        do
            int32_t esi_3 = var_3c[edi_1]
            uint32_t eax_12 = sub_64e7a0(arg3)
            sub_665db0(eax_12, esi_3 + 0xc, eax_12, 0x3f800000, 0xffffffff, 0)
            int32_t var_7c_1 = *(var_3c[edi_1] + 8)
            var_8_1.b = 1
            char* eax_15 = *sub_63df30(&var_48, "dom_card_type_%s")
            char* edx_4 = &data_801800
            
            if (eax_15 != 0)
                edx_4 = eax_15
            
            sub_4d47c0(&var_40, edx_4)
            var_8_1.b = 2
            char* eax_16 = var_28[edi_1]
            void* esi_4 = &var_28[edi_1]
            char* const edx_5 = &data_801800
            char* const ecx_10 = &data_801800
            
            if (eax_16 != 0)
                edx_5 = eax_16
            
            char* eax_17 = var_40
            
            if (eax_17 != 0)
                ecx_10 = eax_17
            
            if (edx_5 != ecx_10)
                if (data_cf65bc != 0)
                    char* ecx_11 = *esi_4
                    
                    if (ecx_11 != 0 && *ecx_11 != 0)
                        char* eax_18 = sub_63d4e0(esi_4)
                        int32_t temp4_1 = *(eax_18 + 4)
                        *(eax_18 + 4) -= 1
                        
                        if (temp4_1 == 1)
                            sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                        
                        eax_17 = var_40
                
                *esi_4 = eax_17
                
                if (eax_17 != 0 && *eax_17 != 0)
                    char* eax_19 = sub_63d4e0(esi_4)
                    *(eax_19 + 4) += 1
                    eax_17 = var_40
            
            var_8_1.b = 3
            
            if (data_cf65bc != 0 && eax_17 != 0 && *eax_17 != 0)
                char* eax_20 = sub_63d4e0(&var_40)
                int32_t temp3_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                    var_40 = &data_801800
            
            var_8_1.b = 4
            
            if (data_cf65bc != 0)
                char* eax_21 = var_48
                
                if (eax_21 != 0 && *eax_21 != 0)
                    char* eax_22 = sub_63d4e0(&var_48)
                    int32_t temp5_1 = *(eax_22 + 4)
                    *(eax_22 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
                        var_48 = &data_801800
            
            edi_1 += 1
            var_8_1.b = 0
        while (edi_1 s< ebx_1)
    
    char* const esi_5 = &data_801800
    var_40 = &data_801800
    var_8_1.b = 5
    
    if (ebx_1 != 1)
        int32_t var_74_1 = ebx_1
        var_8_1.b = 6
        char* eax_26 = *sub_63df30(&var_4c, "dom_card_type_%d")
        char* edx_12 = &data_801800
        
        if (eax_26 != 0)
            edx_12 = eax_26
        
        sub_4d47c0(&var_48, edx_12)
        var_8_1.b = 7
        char* eax_27 = var_48
        
        if (eax_27 != 0 && eax_27 != &data_801800)
            bool cond:1_1 = *eax_27 == 0
            esi_5 = eax_27
            var_40 = esi_5
            
            if (not(cond:1_1))
                char* eax_28 = sub_63d4e0(&var_40)
                *(eax_28 + 4) += 1
                eax_27 = var_48
        
        var_8_1.b = 8
        
        if (data_cf65bc != 0 && eax_27 != 0 && *eax_27 != 0)
            char* eax_29 = sub_63d4e0(&var_48)
            int32_t temp1_1 = *(eax_29 + 4)
            *(eax_29 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                var_48 = &data_801800
        
        var_8_1.b = 9
        
        if (data_cf65bc != 0)
            uint32_t eax_30 = var_4c
            
            if (eax_30 != 0 && *eax_30 != 0)
                char* eax_31 = sub_63d4e0(&var_4c)
                int32_t temp2_1 = *(eax_31 + 4)
                *(eax_31 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
        
        int32_t ecx_26 = 0
        var_8_1.b = 5
        int32_t var_5c_1 = 0
        
        if (ebx_1 s> 0)
            do
                char* eax_32 = var_28[ecx_26]
                char* const edi_2 = &data_801800
                
                if (eax_32 != 0)
                    edi_2 = eax_32
                
                int32_t var_74_2 = ecx_26 + 1
                var_8_1.b = 0xa
                char* const ecx_27 = &data_801800
                char* eax_35 = *sub_63df30(&var_4c, "[c%d]")
                char* edx_17 = &data_801800
                
                if (eax_35 != 0)
                    ecx_27 = eax_35
                
                if (esi_5 != 0)
                    edx_17 = esi_5
                
                char** eax_36 = sub_63dfa0(eax_35, edx_17, &var_48, ecx_27, edi_2)
                var_8_1.b = 0xb
                char* ecx_30 = *eax_36
                char* const edi_3 = &data_801800
                
                if (esi_5 != 0)
                    edi_3 = esi_5
                
                char* edx_18 = &data_801800
                
                if (ecx_30 != 0)
                    edx_18 = ecx_30
                
                if (edi_3 != edx_18)
                    if (data_cf65bc != 0 && esi_5 != 0 && *esi_5 != 0)
                        char* eax_37 = sub_63d4e0(&var_40)
                        int32_t temp7_1 = *(eax_37 + 4)
                        *(eax_37 + 4) -= 1
                        
                        if (temp7_1 == 1)
                            sub_64c080(eax_37, *(eax_37 + 0xc) + 0x10)
                    
                    esi_5 = *eax_36
                    var_40 = esi_5
                    
                    if (esi_5 != 0 && *esi_5 != 0)
                        char* eax_38 = sub_63d4e0(&var_40)
                        *(eax_38 + 4) += 1
                
                var_8_1.b = 0xc
                
                if (data_cf65bc != 0)
                    char* const eax_39 = var_48
                    
                    if (eax_39 != 0 && *eax_39 != 0)
                        char* eax_40 = sub_63d4e0(&var_48)
                        int32_t temp6_1 = *(eax_40 + 4)
                        *(eax_40 + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
                            var_48 = &data_801800
                
                var_8_1.b = 0xd
                
                if (data_cf65bc != 0)
                    uint32_t eax_41 = var_4c
                    
                    if (eax_41 != 0 && *eax_41 != 0)
                        char* eax_42 = sub_63d4e0(&var_4c)
                        int32_t temp8_1 = *(eax_42 + 4)
                        *(eax_42 + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)
                            var_4c = &data_801800
                
                ecx_26 = var_5c_1 + 1
                var_8_1.b = 5
                var_5c_1 = ecx_26
            while (ecx_26 s< ebx_1)
    else
        char* eax_23 = var_28[0]
        
        if (eax_23 != 0 && eax_23 != &data_801800)
            bool cond:2_1 = *eax_23 == 0
            esi_5 = eax_23
            var_40 = esi_5
            
            if (not(cond:2_1))
                char* eax_24 = sub_63d4e0(&var_40)
                *(eax_24 + 4) += 1
    
    int32_t var_74_4 = 0xffffffff
    sub_666380(&var_40, &data_be3ac8, arg3, &var_40)
    var_8_1.b = 0xe
    
    if (data_cf65bc != 0 && esi_5 != 0 && *esi_5 != 0)
        char* eax_44 = sub_63d4e0(&var_40)
        int32_t temp0_1 = *(eax_44 + 4)
        *(eax_44 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_44, *(eax_44 + 0xc) + 0x10)

int32_t var_8_2 = 0xffffffff
uint32_t result = `eh vector vbase constructor iterator'(&var_28, 4, 5, sub_63d770)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
