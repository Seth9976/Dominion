// 函数: sub_6ec690
// 地址: 0x6ec690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7719f0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_44 = arg2
int32_t var_8_1 = 0
int32_t var_14 = 0
sub_63df30(arg3, "samplerFn_layer%d")
int32_t var_8_2 = 0
char* arg_4
char* edi = arg_4
int32_t var_14_1 = 1
char* var_28
sub_6ec490(&edi[0x34], arg2, &var_28, &edi[0x34], arg4)
int32_t var_8_3 = 1
int32_t esi_1 = 0
int32_t ecx_1 = *(arg4 + 0x15c)

if (ecx_1 s<= 0)
label_6ec72c:
    esi_1 = 0xffffffff
else
    void* eax_5 = arg4 + 0x14c
    
    while (*eax_5 != *(edi + 0x10))
        esi_1 += 1
        eax_5 += 4
        
        if (esi_1 s>= ecx_1)
            goto label_6ec72c

sub_63d720(&arg_4, "texDiffuse")
var_8_3.b = 2
char* const ebx_1 = &data_801800
char* const var_1c

if (esi_1 s> 0)
    int32_t var_44_1 = esi_1
    var_8_3.b = 3
    char* ecx_3 = &data_801800
    char* eax_7 = *sub_63df30(&var_1c, "%d")
    
    if (eax_7 != 0)
        ecx_3 = eax_7
    
    sub_63d960(&arg_4, ecx_3)
    var_8_3.b = 4
    
    if (data_cf65bc != 0)
        char* eax_8 = var_1c
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_63d4e0(&var_1c)
            int32_t temp2_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                var_1c = &data_801800
    
    var_8_3.b = 2

char* var_20
sub_6ec520(&var_20, edi)
var_1c = &data_801800
var_8_3.b = 6
int32_t eax_10 = *(edi + 0x1c)
char* var_24
char* var_30

if (eax_10 == 0)
    char* esi_3 = arg_4
    var_30 = esi_3
    
    if (esi_3 != 0 && *esi_3 != 0)
        char* eax_16 = sub_63d4e0(&var_30)
        *(eax_16 + 4) += 1
    
    var_8_3.b = 8
    sub_63d720(&var_24, 
        "\tfloat2 duv = uv - float2(.5, .5);\n\tfloat dist = duv.x*duv.x + duv.y*duv.y;\n\tfloat alpha = "
    "1.0 - smoothstep(0.24, 0.25, dist);\n\treturn float4(1.0, 1.0, 1.0, alpha);\n")
    int32_t var_14_4 = 3
    var_8_3.b = 9
    
    if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
        char* eax_17 = sub_63d4e0(&var_30)
        int32_t temp3_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
    
    var_8_3.b = 7
    sub_63d850(&var_1c, &var_24)
    int32_t var_14_5 = 1
    var_8_3.b = 0xa
else
    if (eax_10 != 1)
        sub_63b870(eax_10 - 1, &data_801800, "Halt", "C:\x\ax2017\Engine\MaterialFnDef.cpp", 0x33d, 
            "EmitTextureFn")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    char* esi_2 = arg_4
    var_30 = esi_2
    
    if (esi_2 != 0 && *esi_2 != (eax_10 - 1).b)
        char* eax_13 = sub_63d4e0(&var_30)
        *(eax_13 + 4) += 1
    
    var_8_3.b = 0xc
    char* const eax_14 = &data_801800
    
    if (esi_2 != 0)
        eax_14 = esi_2
    
    char* const var_44_3 = eax_14
    sub_63df30(&var_24, 
        "\n\n    const float PI = 3.14159265358979323846264;\n    float2 normUV = (uv - .5) * 2.0;\n\t"
    "float angle   = atan2(normUV.y, normUV.x) / (2.0 * PI);\n    float2 sampleUV = float2(angle, ."
    "5);\n\tfloat4 retval = tex2D(%s, sampleUV);\n\treturn retval;\n\n")
    int32_t var_14_2 = 5
    var_8_3.b = 0xd
    
    if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
        char* eax_15 = sub_63d4e0(&var_30)
        int32_t temp5_1 = *(eax_15 + 4)
        *(eax_15 + 4) -= 1
        
        if (temp5_1 == 1)
            sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
    
    var_8_3.b = 0xb
    sub_63d850(&var_1c, &var_24)
    int32_t var_14_3 = 1
    var_8_3.b = 0xe

if (data_cf65bc != 0)
    char* eax_18 = var_24
    
    if (eax_18 != 0 && *eax_18 != 0)
        char* eax_19 = sub_63d4e0(&var_24)
        int32_t temp4_1 = *(eax_19 + 4)
        *(eax_19 + 4) -= 1
        
        if (temp4_1 == 1)
            sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)

var_8_3.b = 6
char* const ecx_19 = &data_801800
char* const edi_1 = var_1c
char* const edx_11 = &data_801800
char* eax_20 = var_20
char* const esi_4 = &data_801800

if (edi_1 != 0)
    ebx_1 = edi_1

char* const var_44_6 = ebx_1

if (eax_20 != 0)
    edx_11 = eax_20

char* eax_21 = var_28
char* const var_48 = edx_11

if (eax_21 != 0)
    ecx_19 = eax_21

char* const var_4c_3 = ecx_19
char* eax_23 = *arg3

if (eax_23 != 0)
    esi_4 = eax_23

char* const var_50_1 = esi_4
char* const var_18
sub_63df30(&var_18, "float4 %s(float2 arg_uv, float4 diffuse)\n{\n%s\n%s\n%s}\n")
var_8_3.b = 0xf
int32_t eax_24 = *(arg4 + 0x104)
void* ebx_2 = arg4 + (eax_24 << 3)
*(arg4 + 0x104) = eax_24 + 1
sub_63d850(ebx_2 + 4, arg3)
sub_63d850(ebx_2 + 8, &var_18)
var_8_3.b = 0x10
char* esi_5 = arg_4

if (data_cf65bc != 0)
    char* eax_26 = var_18
    
    if (eax_26 != 0 && *eax_26 != 0)
        char* eax_27 = sub_63d4e0(&var_18)
        int32_t temp6_1 = *(eax_27 + 4)
        *(eax_27 + 4) -= 1
        
        if (temp6_1 == 1)
            sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
            var_18 = &data_801800

var_8_3.b = 0x11

if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
    char* eax_28 = sub_63d4e0(&var_1c)
    int32_t temp7_1 = *(eax_28 + 4)
    *(eax_28 + 4) -= 1
    
    if (temp7_1 == 1)
        sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)

var_8_3.b = 0x12

if (data_cf65bc != 0)
    char* eax_29 = var_20
    
    if (eax_29 != 0 && *eax_29 != 0)
        char* eax_30 = sub_63d4e0(&var_20)
        int32_t temp8_1 = *(eax_30 + 4)
        *(eax_30 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
            var_20 = &data_801800

var_8_3.b = 0x13

if (data_cf65bc != 0 && esi_5 != 0 && *esi_5 != 0)
    char* eax_31 = sub_63d4e0(&arg_4)
    int32_t temp9_1 = *(eax_31 + 4)
    *(eax_31 + 4) -= 1
    
    if (temp9_1 == 1)
        sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)

int32_t var_8_4 = 0x14

if (data_cf65bc != 0)
    char* eax_32 = var_28
    
    if (eax_32 != 0 && *eax_32 != 0)
        char* eax_33 = sub_63d4e0(&var_28)
        int32_t temp10_1 = *(eax_33 + 4)
        *(eax_33 + 4) -= 1
        
        if (temp10_1 == 1)
            sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
