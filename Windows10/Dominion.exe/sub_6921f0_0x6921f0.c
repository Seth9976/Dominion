// 函数: sub_6921f0
// 地址: 0x6921f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76eeb1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* i_3 = arg2
int32_t ebx = 0
int32_t var_14 = 0
char* const arg_8
uint32_t eax_3
uint32_t i_10
eax_3, i_10 = __alldiv(arg4, arg_8, 0xf4240, 0)
uint32_t edi = eax_3
uint32_t i_7 = i_10
int32_t eax_4
int32_t edx
eax_4, edx = __allmul(edi, i_10, 0xf4240, 0)
int32_t ecx_1 = arg4 - eax_4
char* eax_6 = sbb.d(arg_8, edx, arg4 u< eax_4)
char* var_38 = eax_6

if (i_3 == 0 && eax_6 s>= 0 && (eax_6 s> 0 || ecx_1 u>= 0x7a120))
    uint32_t temp3_1 = edi
    edi += 1
    i_7 = adc.d(i_10, 0, temp3_1 u>= 0xffffffff)

char* const esi_2 = &data_801800
arg_8 = &data_801800
int32_t var_8_1 = 1
uint32_t i_9 = i_7
char* const var_28
char* var_24
uint32_t var_20

if ((edi | i_9) != 0)
    do
        uint32_t eax_13
        uint32_t i_11
        eax_13, i_11 = __alldiv(edi, i_9, 0x3e8, 0)
        i_7 = i_11
        int32_t edi_2 = edi - eax_13 * 0x3e8
        
        if (esi_2 == 0 || *esi_2 == 0)
            int32_t var_58_5 = edi_2
            sub_63df30(&var_28, "%d")
            ebx |= 0x10
            int32_t var_14_6 = ebx
            var_8_1.b = 0xa
            sub_63d850(&arg_8, &var_28)
            var_8_1.b = 0xb
            
            if (data_cf65bc != 0)
                char* const eax_26 = var_28
                
                if (eax_26 != 0 && *eax_26 != 0)
                    char* eax_27 = sub_63d4e0(&var_28)
                    int32_t temp5_1 = *(eax_27 + 4)
                    *(eax_27 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                        var_28 = &data_801800
        else
            if (arg5 == 0)
                sub_63b870(arg5, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                    "XString::XString")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            sub_63d720(&var_24, arg5)
            int32_t var_58_1 = edi_2
            var_8_1.b = 2
            sub_63df30(&var_20, "%d")
            int32_t ebx_1 = ebx | 2
            int32_t var_14_1 = ebx_1
            var_8_1.b = 4
            uint32_t eax_15 = var_20
            uint32_t var_1c = eax_15
            
            if (eax_15 != 0 && *eax_15 != 0)
                char* eax_16 = sub_63d4e0(&var_1c)
                *(eax_16 + 4) += 1
            
            char* eax_17 = var_24
            int32_t ebx_2 = ebx_1 | 4
            int32_t var_14_2 = ebx_2
            char* ecx_9 = &data_801800
            
            if (eax_17 != 0)
                ecx_9 = eax_17
            
            sub_63d960(&var_1c, ecx_9)
            var_8_1.b = 5
            uint32_t edi_3 = var_1c
            uint32_t var_18 = edi_3
            
            if (edi_3 != 0 && *edi_3 != 0)
                char* eax_18 = sub_63d4e0(&var_18)
                *(eax_18 + 4) += 1
            
            int32_t ebx_3 = ebx_2 | 8
            int32_t var_14_3 = ebx_3
            sub_63d960(&var_18, esi_2)
            sub_63d850(&arg_8, &var_18)
            int32_t ebx_4 = ebx_3 & 0xfffffff7
            int32_t var_14_4 = ebx_4
            var_8_1.b = 6
            
            if (data_cf65bc != 0)
                uint32_t eax_19 = var_18
                
                if (eax_19 != 0 && *eax_19 != 0)
                    char* eax_20 = sub_63d4e0(&var_18)
                    int32_t temp12_1 = *(eax_20 + 4)
                    *(eax_20 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                        var_18 = &data_801800
            
            ebx = ebx_4 & 0xfffffffb
            int32_t var_14_5 = ebx
            var_8_1.b = 7
            
            if (data_cf65bc != 0 && edi_3 != 0 && *edi_3 != 0)
                char* eax_21 = sub_63d4e0(&var_1c)
                int32_t temp13_1 = *(eax_21 + 4)
                *(eax_21 + 4) -= 1
                
                if (temp13_1 == 1)
                    sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                    var_1c = &data_801800
            
            var_8_1.b = 8
            
            if (data_cf65bc != 0)
                uint32_t eax_22 = var_20
                
                if (eax_22 != 0 && *eax_22 != 0)
                    char* eax_23 = sub_63d4e0(&var_20)
                    int32_t temp14_1 = *(eax_23 + 4)
                    *(eax_23 + 4) -= 1
                    
                    if (temp14_1 == 1)
                        sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                        var_20 = &data_801800
            
            var_8_1.b = 9
            
            if (data_cf65bc != 0)
                char* eax_24 = var_24
                
                if (eax_24 != 0 && *eax_24 != 0)
                    char* eax_25 = sub_63d4e0(&var_24)
                    int32_t temp15_1 = *(eax_25 + 4)
                    *(eax_25 + 4) -= 1
                    
                    if (temp15_1 == 1)
                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                        var_24 = &data_801800
        
        edi = eax_13
        var_8_1.b = 1
        i_9 = i_7
        esi_2 = arg_8
    while ((edi | i_9) != 0)
else
    sub_63d5e0(&data_801800, 1, &arg_8, 0)
    esi_2 = arg_8
    *esi_2 = 0x30

var_28 = &data_801800
var_8_1.b = 0xc
char* i_2 = i_3

if (i_2 == 0)
    *arg3 = esi_2
    
    if (esi_2 != 0 && *esi_2 != 0)
        char* eax_45 = sub_63d4e0(arg3)
        *(eax_45 + 4) += 1
    
    int32_t var_14_9 = ebx | 1
    int32_t var_8_4 = 0x12
else
    int32_t ecx_3 = 0xf4240
    
    if (i_2 s> 0)
        char* i_1 = i_2
        char* i
        
        do
            ecx_3 s/= 0xa
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    char* temp4_1 = var_38
    int32_t eax_11
    uint32_t edx_3
    edx_3:eax_11 = sx.q(ecx_3)
    var_20 = edx_3
    
    if (temp4_1 s> 0 || (temp4_1 s>= 0 && ecx_1 u>= 0))
        i_7 = 0
    else
        i_7 = 1
    
    if (edx_3 s> 0 || (edx_3 s>= 0 && eax_11 u>= 0))
        var_24 = nullptr
    else
        var_24 = 1
    
    uint32_t eax_30
    int32_t edx_15
    eax_30, edx_15 = __alldiv(eax_11, edx_3, 2, 0)
    int32_t var_64_4
    uint32_t var_60_6
    
    if (i_7 != var_24)
        var_60_6 = sbb.d(var_38, edx_15, ecx_1 u< eax_30)
        var_64_4 = ecx_1 - eax_30
    else
        var_60_6 = adc.d(edx_15, var_38, eax_30 + ecx_1 u< eax_30)
        var_64_4 = eax_30 + ecx_1
    
    uint32_t eax_34 = __alldiv(var_64_4, var_60_6, eax_11, var_20)
    char* i_4 = i_3
    sub_63df30(&i_7, "%%0%dd")
    var_8_1.b = 0xd
    char* const i_12 = &data_801800
    uint32_t i_8 = i_7
    uint32_t var_58_8 = eax_34
    
    if (i_8 != 0)
        i_12 = i_8
    
    var_8_1.b = 0xe
    char* i_5 = sub_63d850(&var_28, sub_63df30(&i_3, i_12))
    var_8_1.b = 0xf
    
    if (data_cf65bc != 0)
        i_5 = i_3
        
        if (i_5 != 0 && *i_5 != 0)
            i_5 = sub_63d4e0(&i_3)
            int32_t temp16_1 = *(i_5 + 4)
            *(i_5 + 4) -= 1
            
            if (temp16_1 == 1)
                i_5 = sub_64c080(i_5, *(i_5 + 0xc) + 0x10)
                i_3 = &data_801800
    
    var_8_1.b = 0x10
    
    if (data_cf65bc != 0)
        i_5 = i_7
        
        if (i_5 != 0 && *i_5 != 0)
            i_5 = sub_63d4e0(&i_7)
            int32_t temp17_1 = *(i_5 + 4)
            *(i_5 + 4) -= 1
            
            if (temp17_1 == 1)
                i_5 = sub_64c080(i_5, *(i_5 + 0xc) + 0x10)
                i_7 = &data_801800
    
    var_8_1.b = 0xc
    
    if (arg6 == 0)
        sub_63b870(i_5, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
            "XString::XString")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    sub_63d720(&var_38, arg6)
    var_8_1.b = 0x13
    var_8_1.b = 0x15
    int32_t* ecx_35 = arg3
    char* eax_37 = *sub_63dde0(&arg_8, &i_3, &var_38)
    *ecx_35 = eax_37
    
    if (eax_37 != 0 && *eax_37 != 0)
        char* eax_38 = sub_63d4e0(ecx_35)
        ecx_35 = arg3
        *(eax_38 + 4) += 1
    
    char* const edi_5 = var_28
    int32_t ebx_5 = ebx | 0x40
    int32_t var_14_7 = ebx_5
    char* const eax_39 = &data_801800
    
    if (edi_5 != 0)
        eax_39 = edi_5
    
    sub_63d960(ecx_35, eax_39)
    int32_t var_8_2 = 0x14
    int32_t var_14_8 = (ebx_5 & 0xffffffbf) | 1
    var_8_2.b = 0x16
    
    if (data_cf65bc != 0)
        char* i_6 = i_3
        
        if (i_6 != 0 && *i_6 != 0)
            char* eax_40 = sub_63d4e0(&i_3)
            int32_t temp18_1 = *(eax_40 + 4)
            *(eax_40 + 4) -= 1
            
            if (temp18_1 == 1)
                sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)
                i_3 = &data_801800
    
    var_8_2.b = 0x17
    
    if (data_cf65bc != 0)
        char* eax_41 = var_38
        
        if (eax_41 != 0 && *eax_41 != 0)
            char* eax_42 = sub_63d4e0(&var_38)
            int32_t temp19_1 = *(eax_42 + 4)
            *(eax_42 + 4) -= 1
            
            if (temp19_1 == 1)
                sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)
    
    var_8_2.b = 0x18
    
    if (data_cf65bc != 0 && edi_5 != 0 && *edi_5 != 0)
        char* eax_43 = sub_63d4e0(&var_28)
        int32_t temp20_1 = *(eax_43 + 4)
        *(eax_43 + 4) -= 1
        
        if (temp20_1 == 1)
            sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
    
    int32_t var_8_3 = 0x19

if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
    char* eax_46 = sub_63d4e0(&arg_8)
    int32_t temp8_1 = *(eax_46 + 4)
    *(eax_46 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_46, *(eax_46 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
