// 函数: sub_6ed9a0
// 地址: 0x6ed9a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771c85
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = arg1
char* var_18 = edi
char* const var_24 = &data_801800
int32_t var_8_1 = 0
char* const ebx = &data_801800
int32_t esi = *(edi + 0x104)
int32_t esi_1 = esi - 1

if (esi - 1 s>= 0)
    void* edi_1 = &edi[8 + (esi_1 << 3)]
    int32_t temp1_1
    
    do
        char* eax_5 = *edi_1
        char* const ecx = &data_801800
        
        if (eax_5 != 0)
            ecx = eax_5
        
        sub_63d960(&var_24, ecx)
        temp1_1 = esi_1
        esi_1 -= 1
        edi_1 -= 8
    while (temp1_1 - 1 s>= 0)
    edi = var_18

char* const var_14 = &data_801800
int32_t i = 0
var_8_1.b = 1
char* const var_28
char* const var_20

if (*(edi + 0x15c) s> 0)
    do
        if (i != 0)
            int32_t i_4 = i
            var_8_1.b = 4
            char* ecx_6 = &data_801800
            char* eax_11 = *sub_63df30(&var_28, "uniform sampler texDiffuse%d;\n")
            
            if (eax_11 != 0)
                ecx_6 = eax_11
            
            sub_63d960(&var_14, ecx_6)
            var_8_1.b = 5
            
            if (data_cf65bc != 0)
                char* const eax_12 = var_28
                
                if (eax_12 != 0 && *eax_12 != 0)
                    char* eax_13 = sub_63d4e0(&var_28)
                    int32_t temp3_1 = *(eax_13 + 4)
                    *(eax_13 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                        var_28 = &data_801800
        else
            int32_t i_3 = i
            var_8_1.b = 2
            char* ecx_2 = &data_801800
            char* eax_7 = *sub_63df30(&var_20, "uniform sampler texDiffuse;\n")
            
            if (eax_7 != 0)
                ecx_2 = eax_7
            
            sub_63d960(&var_14, ecx_2)
            var_8_1.b = 3
            
            if (data_cf65bc != i)
                char* eax_8 = var_20
                
                if (eax_8 != 0 && *eax_8 != 0)
                    char* eax_9 = sub_63d4e0(&var_20)
                    int32_t temp4_1 = *(eax_9 + 4)
                    *(eax_9 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                        var_20 = &data_801800
        
        i += 1
        var_8_1.b = 1
    while (i s< *(edi + 0x15c))

char* const edi_2 = &data_801800
var_20 = &data_801800
var_8_1.b = 6
int32_t i_1 = 0
char* eax_14 = var_18

if (*(eax_14 + 0x2a0) s> 0)
    do
        int32_t i_5 = i_1
        var_8_1.b = 7
        char* ecx_10 = &data_801800
        char* eax_16 = *sub_63df30(&var_28, "uniform float3x3 gTexAnim%d;\n")
        
        if (eax_16 != 0)
            ecx_10 = eax_16
        
        sub_63d960(&var_20, ecx_10)
        var_8_1.b = 8
        
        if (data_cf65bc != 0)
            char* eax_17 = var_28
            
            if (eax_17 != 0 && *eax_17 != 0)
                char* eax_18 = sub_63d4e0(&var_28)
                int32_t temp2_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                    var_28 = &data_801800
        
        var_8_1.b = 6
        i_1 += 1
        eax_14 = var_18
    while (i_1 s< *(eax_14 + 0x2a0))
    
    edi_2 = var_20

char* const esi_2 = &data_801800
char* const var_30 = &data_801800
var_8_1.b = 9

if (*(eax_14 + 0x2b4) s> 0)
    int32_t i_2 = 0
    
    do
        int32_t i_6 = i_2
        var_8_1.b = 0xa
        char* ecx_14 = &data_801800
        char* eax_20 = *sub_63df30(&var_28, "uniform float4 gMaterialColor%d;\n")
        
        if (eax_20 != 0)
            ecx_14 = eax_20
        
        sub_63d960(&var_30, ecx_14)
        var_8_1.b = 0xb
        
        if (data_cf65bc != 0)
            char* const eax_21 = var_28
            
            if (eax_21 != 0 && *eax_21 != 0)
                char* eax_22 = sub_63d4e0(&var_28)
                int32_t temp5_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
                    var_28 = &data_801800
        
        var_8_1.b = 9
        i_2 += 1
    while (i_2 s< *(var_18 + 0x2b4))
    
    esi_2 = var_30
    edi_2 = var_20

char* var_2c
sub_63d720(&var_2c, 
    "%s\n%s\n\t\nuniform float4x4 gWorldViewProj;\nuniform float4 gOverlayColor;\nuniform float4 "
"gMaterialColor;\n%s%s%s\nstruct VS_OUTPUT\n{\t\n\tfloat4 Position   SEM_POSITION;\n\tfloat4 Diffuse    "
"SEM_COLOR0;\n\tfloat4 UV         SEM_TEXCOORD0;\n};\t\n\t")
var_8_1.b = 0xc
sub_63d720(&var_18, 
    "#if !defined(HAVE_GLSLES)\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
"\t\t\t\t\t\t\t\t\t\t\t\n#define lowp\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n#define "
"mediump\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n#define highp\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
"\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n#endif\t\t\t\t\t\t\t\t\t"
"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n#ifdef "
"GLSL\t\t\t\t\t\t\t\t…")
var_8_1.b = 0xd
sub_63d720(&var_28, 
    "#ifndef SHADER_FUNCTIONS_INC\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n#define SHADER_FUNCTIONS_INC\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\n\t\t\t\t\t\t\t\t\t\t\t"
"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
"\nfloat3 RGBToHSL(float3 color)\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"
"\t\t\t\t\t\tt…")
var_8_1.b = 0xe
char* const eax_24 = &data_801800
char* const ecx_21 = &data_801800

if (edi_2 != 0)
    eax_24 = edi_2

char* const eax_25 = var_14

if (eax_25 != 0)
    ecx_21 = eax_25

char* const eax_26 = var_28
char* const ecx_22 = &data_801800

if (eax_26 != 0)
    ecx_22 = eax_26

char* eax_27 = var_18
char* const ecx_23 = &data_801800

if (eax_27 != 0)
    ebx = eax_27

char* const edx_9 = &data_801800
char* eax_28 = var_2c

if (eax_28 != 0)
    edx_9 = eax_28

char* const eax_29 = var_24

if (eax_29 != 0)
    ecx_23 = eax_29

char* const var_50_6 = ecx_23
char* const eax_30 = &data_801800

if (esi_2 != 0)
    eax_30 = esi_2

char* const var_54 = eax_30
char* const var_58_5 = eax_24
char* const var_5c = ecx_21
char* const var_60 = ecx_22
char* const var_64 = ebx
char* var_1c
sub_63df30(&var_1c, edx_9)
var_8_1.b = 0xf
char* const ecx_24 = &data_801800
char* eax_31 = var_1c

if (eax_31 != 0)
    ecx_24 = eax_31

int32_t result = sub_6d9270(ecx_24)
var_8_1.b = 0x10

if (data_cf65bc != 0)
    char* ecx_25 = var_1c
    
    if (ecx_25 != 0 && *ecx_25 != 0)
        char* eax_32 = sub_63d4e0(&var_1c)
        int32_t temp6_1 = *(eax_32 + 4)
        *(eax_32 + 4) -= 1
        
        if (temp6_1 == 1)
            sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
            var_1c = &data_801800

var_8_1.b = 0x11

if (data_cf65bc != 0)
    char* const eax_33 = var_28
    
    if (eax_33 != 0 && *eax_33 != 0)
        char* eax_34 = sub_63d4e0(&var_28)
        int32_t temp7_1 = *(eax_34 + 4)
        *(eax_34 + 4) -= 1
        
        if (temp7_1 == 1)
            sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)

var_8_1.b = 0x12

if (data_cf65bc != 0)
    char* eax_35 = var_18
    
    if (eax_35 != 0 && *eax_35 != 0)
        char* eax_36 = sub_63d4e0(&var_18)
        int32_t temp8_1 = *(eax_36 + 4)
        *(eax_36 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_64c080(eax_36, *(eax_36 + 0xc) + 0x10)

var_8_1.b = 0x13

if (data_cf65bc != 0)
    char* eax_37 = var_2c
    
    if (eax_37 != 0 && *eax_37 != 0)
        char* eax_38 = sub_63d4e0(&var_2c)
        int32_t temp9_1 = *(eax_38 + 4)
        *(eax_38 + 4) -= 1
        
        if (temp9_1 == 1)
            sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)

var_8_1.b = 0x14

if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
    char* eax_39 = sub_63d4e0(&var_30)
    int32_t temp10_1 = *(eax_39 + 4)
    *(eax_39 + 4) -= 1
    
    if (temp10_1 == 1)
        sub_64c080(eax_39, *(eax_39 + 0xc) + 0x10)

var_8_1.b = 0x15

if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
    char* eax_40 = sub_63d4e0(&var_20)
    int32_t temp11_1 = *(eax_40 + 4)
    *(eax_40 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_40, *(eax_40 + 0xc) + 0x10)

var_8_1.b = 0x16

if (data_cf65bc != 0)
    char* const eax_41 = var_14
    
    if (eax_41 != 0 && *eax_41 != 0)
        char* eax_42 = sub_63d4e0(&var_14)
        int32_t temp12_1 = *(eax_42 + 4)
        *(eax_42 + 4) -= 1
        
        if (temp12_1 == 1)
            sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)

int32_t var_8_2 = 0x17

if (data_cf65bc != 0)
    char* const eax_43 = var_24
    
    if (eax_43 != 0 && *eax_43 != 0)
        char* eax_44 = sub_63d4e0(&var_24)
        int32_t temp13_1 = *(eax_44 + 4)
        *(eax_44 + 4) -= 1
        
        if (temp13_1 == 1)
            sub_64c080(eax_44, *(eax_44 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
