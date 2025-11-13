// 函数: sub_6f2220
// 地址: 0x6f2220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771e9c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_194 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t var_198 = 0x103
char var_11c = 0
void var_11b
memset(&var_11b, 0, var_198)
char* const esi = &data_801800
char* const var_12c = &data_801800
var_198 = 0x58
int32_t var_8_1 = 0
int32_t var_184
var_198 = memset(&var_184, 0, var_198)
uint32_t* ecx_1 = &var_198
char* var_124
char* var_120

if (arg1 == 0)
    uint32_t eax_9 = *(data_147ded0 + 0x20)
    var_198 = eax_9
    
    if (eax_9 != 0 && *eax_9 != 0)
        char* eax_10 = sub_63d4e0(ecx_1)
        *(eax_10 + 4) += 1
    
    sub_6c5250(&var_120)
    var_8_1.b = 2
    char* eax_11 = var_120
    char* edx_4 = &data_801800
    
    if (eax_11 != 0)
        edx_4 = eax_11
    
    var_198 = sub_6c4050(&var_124, edx_4)
    var_8_1.b = 3
    sub_63d850(&var_12c, var_198)
    var_8_1.b = 4
    
    if (data_cf65bc != 0)
        char* eax_13 = var_124
        
        if (eax_13 != 0 && *eax_13 != 0)
            char* eax_14 = sub_63d4e0(&var_124)
            int32_t temp0_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
    
    esi = var_12c
    char* const eax_15 = &data_801800
    
    if (esi != 0)
        eax_15 = esi
    
    char* const var_158_1 = eax_15
    var_8_1.b = 5
    
    if (data_cf65bc != 0)
        char* eax_16 = var_120
        
        if (eax_16 != 0 && *eax_16 != 0)
            char* eax_17 = sub_63d4e0(&var_120)
            int32_t temp1_1 = *(eax_17 + 4)
            *(eax_17 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
else
    var_124 = *(arg1 + 4)
    uint32_t eax_4 = *(arg1 + 0x20)
    var_198 = eax_4
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_63d4e0(ecx_1)
        *(eax_5 + 4) += 1
    
    sub_6c4b90(&var_120, var_124)
    char* eax_6 = var_120
    char* const edx_1 = &data_801800
    
    if (eax_6 != 0)
        edx_1 = eax_6
    
    int32_t edi_1 = &var_11c - edx_1
    char i
    
    do
        i = *edx_1
        edx_1 = &edx_1[1]
        edx_1[edi_1 - 1] = i
    while (i != 0)
    
    var_8_1.b = 1
    
    if (data_cf65bc != 0 && eax_6 != 0 && *eax_6 != i)
        char* eax_7 = sub_63d4e0(&var_120)
        int32_t temp2_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)

var_8_1.b = 0
int32_t var_180 = data_147d46c
var_184 = 0x58
char* var_168 = &var_11c
int32_t var_164 = 0x104
char const* const var_178 = "Image (*.jpg, *.png)"
int32_t var_16c = 0
int32_t var_160 = 0
int32_t var_15c = 0
char const* const var_154 = "Pick Image File"
int32_t var_150 = 0x2001808

if (arg2 == 8 || arg2 == 9)
    char const* const var_178_4 = "Structure (*.fbx)"
else if (arg2 == 0xb)
    char const* const var_178_1 = "Material (*.materialFn.xml)"
else if (arg2 == 0xa)
    char const* const var_178_2 = "Material (*.material.xml)"
else if (arg2 == 0x4c)
    char const* const var_178_3 = "Particle (*.particle)"

int32_t result = 0
var_198 = &var_184

if (GetOpenFileNameA(var_198) != 0)
    sub_63d720(&var_124, &var_11c)
    var_8_1.b = 6
    char* edx_10 = &data_801800
    char* edi_2 = var_124
    
    if (edi_2 != 0)
        edx_10 = edi_2
    
    sub_6c4220(&var_120, edx_10)
    var_8_1.b = 7
    char* ecx_14 = &data_801800
    char* eax_20 = var_120
    
    if (eax_20 != 0)
        ecx_14 = eax_20
    
    result = sub_6fb0d0(ecx_14)
    var_8_1.b = 8
    
    if (data_cf65bc != 0)
        char* ecx_15 = var_120
        
        if (ecx_15 != 0 && *ecx_15 != 0)
            char* eax_22 = sub_63d4e0(&var_120)
            int32_t temp4_1 = *(eax_22 + 4)
            *(eax_22 + 4) -= 1
            
            if (temp4_1 == 1)
                sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
                var_120 = &data_801800
    
    var_8_1.b = 9
    
    if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
        char* eax_23 = sub_63d4e0(&var_124)
        int32_t temp5_1 = *(eax_23 + 4)
        *(eax_23 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)

int32_t var_8_2 = 0xa

if (data_cf65bc != 0 && esi != 0 && *esi != 0)
    char* eax_24 = sub_63d4e0(&var_12c)
    int32_t temp3_1 = *(eax_24 + 4)
    *(eax_24 + 4) -= 1
    
    if (temp3_1 == 1)
        sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
