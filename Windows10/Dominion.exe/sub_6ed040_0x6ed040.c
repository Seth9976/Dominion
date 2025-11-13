// 函数: sub_6ed040
// 地址: 0x6ed040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771b8f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* const var_1c = arg3
int32_t var_20 = 0
char* eax_4 = *arg2
char* var_24 = eax_4
char* const var_18 = &data_801800
int32_t* edi_1 = eax_4 * 0x58 + arg3
int32_t var_8_1 = 0
int32_t ecx = *edi_1

if (ecx u> 4)
    sub_63b870(eax_4, &data_801800, "Halt", "C:\x\ax2017\Engine\MaterialFnDef.cpp", 0x3f6, 
        "EmitItemFunction")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* var_40
char* var_14
void* ebx

switch (ecx)
    case 0
        ebx = arg4
        var_8_1.b = 0xd
        sub_63d850(&var_18, sub_6ecae0(eax_4, eax_4, &var_1c, edi_1, ebx))
        var_8_1.b = 0xe
    label_6ed3bf:
        
        if (data_cf65bc != 0)
            char* eax_34 = var_1c
            
            if (eax_34 != 0 && *eax_34 != 0)
                char* eax_35 = sub_63d4e0(&var_1c)
                int32_t temp3_1 = *(eax_35 + 4)
                *(eax_35 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_35, *(eax_35 + 0xc) + 0x10)
                    var_1c = &data_801800
    case 1
        char* var_3c_6 = eax_4
        var_8_1.b = 9
        var_40 = "samplerFn_layer%d"
        sub_63df30(&var_14, "samplerFn_layer%d")
        ebx = arg4
        char* ecx_16 = &data_801800
        int32_t var_20_2 = 8
        int32_t edx_10 = *(ebx + 0x2b4)
        int32_t var_48_3 = edx_10
        *(ebx + 0x2b4) = edx_10 + 1
        *(ebx + var_24 * 0xc + 0x168) = edx_10
        *(ebx + (edx_10 << 2) + 0x2a4) = edi_1[6]
        char* eax_27 = var_14
        
        if (eax_27 != 0)
            ecx_16 = eax_27
        
        char* var_4c_3 = ecx_16
        sub_63df30(&var_1c, 
            "float4 %s(float2 arg_uv, float4 color)\n{\n\treturn gMaterialColor%d;\n}\n")
        var_8_1.b = 0xa
        int32_t eax_28 = *(ebx + 0x104)
        void* esi_2 = ebx + (eax_28 << 3)
        *(ebx + 0x104) = eax_28 + 1
        sub_63d850(esi_2 + 4, &var_14)
        sub_63d850(esi_2 + 8, &var_1c)
        var_8_1.b = 0xb
        
        if (data_cf65bc != 0)
            char* const eax_30 = var_1c
            
            if (eax_30 != 0 && *eax_30 != 0)
                char* eax_31 = sub_63d4e0(&var_1c)
                int32_t temp2_1 = *(eax_31 + 4)
                *(eax_31 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                    var_1c = &data_801800
        
        var_8_1.b = 9
        sub_63d850(&var_18, &var_14)
        var_8_1.b = 0xc
        goto label_6ed256
    case 2
        char* var_3c_2 = eax_4
        var_8_1.b = 5
        var_40 = "samplerFn_layer%d"
        sub_63df30(&var_14, "samplerFn_layer%d")
        ebx = arg4
        char* ecx_8 = &data_801800
        int32_t var_20_1 = 4
        int32_t edx_5 = *(ebx + 0x2b4)
        int32_t var_48_2 = edx_5
        *(ebx + 0x2b4) = edx_5 + 1
        *(ebx + var_24 * 0xc + 0x168) = edx_5
        *(ebx + (edx_5 << 2) + 0x2a4) = edi_1[6]
        char* eax_16 = var_14
        
        if (eax_16 != 0)
            ecx_8 = eax_16
        
        char* var_4c_2 = ecx_8
        sub_63df30(&var_1c, "float4 %s(float2 arg_uv, float4 color)\n{\n\treturn color;\n}\n")
        var_8_1.b = 6
        int32_t eax_17 = *(ebx + 0x104)
        void* esi_1 = ebx + (eax_17 << 3)
        *(ebx + 0x104) = eax_17 + 1
        sub_63d850(esi_1 + 4, &var_14)
        sub_63d850(esi_1 + 8, &var_1c)
        var_8_1.b = 7
        
        if (data_cf65bc != 0)
            char* const eax_19 = var_1c
            
            if (eax_19 != 0 && *eax_19 != 0)
                char* eax_20 = sub_63d4e0(&var_1c)
                int32_t temp1_1 = *(eax_20 + 4)
                *(eax_20 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_20, *(eax_20 + 0xc) + 0x10)
                    var_1c = &data_801800
        
        var_8_1.b = 5
        sub_63d850(&var_18, &var_14)
        var_8_1.b = 8
    label_6ed256:
        
        if (data_cf65bc != 0)
            char* eax_21 = var_14
            
            if (eax_21 != 0 && *eax_21 != 0)
                char* eax_22 = sub_63d4e0(&var_14)
                int32_t temp5_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_22, *(eax_22 + 0xc) + 0x10)
                    var_14 = &data_801800
    case 3
        char* var_3c = eax_4
        var_40 = "group%d"
        sub_63df30(&var_14, "group%d")
        ebx = arg4
        var_8_1.b = 1
        char* edx = &data_801800
        char* eax_5 = var_14
        void* var_48_1 = ebx
        
        if (eax_5 != 0)
            edx = eax_5
        
        var_8_1.b = 2
        sub_63d850(&var_18, sub_6ed680(eax_5, edx, &var_1c, arg2, var_1c, edi_1[2]))
        var_8_1.b = 3
        
        if (data_cf65bc != 0)
            char* const eax_7 = var_1c
            
            if (eax_7 != 0 && *eax_7 != 0)
                char* eax_8 = sub_63d4e0(&var_1c)
                int32_t temp0_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                    var_1c = &data_801800
        
        *arg2 += edi_1[2]
        var_8_1.b = 4
        
        if (data_cf65bc != 0)
            char* eax_10 = var_14
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_63d4e0(&var_14)
                int32_t temp4_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                    var_14 = &data_801800
    case 4
        ebx = arg4
        void* var_3c_12 = ebx
        var_8_1.b = 0xf
        sub_63d850(&var_18, sub_6ec690(eax_4, eax_4, &var_1c, edi_1))
        var_8_1.b = 0x10
        goto label_6ed3bf

var_8_1.b = 0
char* const esi_3

if (arg5 == 0)
    var_40.q = _mm_cvtps_pd(edi_1[0xc])
    sub_63df30(&var_24, "%f")
    int32_t var_20_3 = 1
    var_8_1.b = 0x13
    int32_t eax_37 = edi_1[0xb]
    
    if (eax_37 u> 7)
        sub_63b870(eax_37, &data_801800, "Halt", "C:\x\ax2017\Engine\MaterialFnDef.cpp", 0x3ca, 
            "EmitBlendFn")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    char const* const edx_19
    
    switch (eax_37)
        case 0
            edx_19 = "BlendAlpha"
        case 1
            edx_19 = "BlendMultiply"
        case 2
            edx_19 = "BlendAdd"
        case 3
            edx_19 = "BlendOverlay"
        case 4
            edx_19 = "BlendMask"
        case 5
            edx_19 = "BlendFade"
        case 6
            edx_19 = "BlendColor"
        case 7
            edx_19 = "BlendColorHSL"
    
    sub_63d720(&var_14, edx_19)
    var_8_1.b = 0x14
    char* ecx_30 = &data_801800
    char* eax_38 = var_24
    char* const edx_20 = &data_801800
    char* edi_2 = var_14
    
    if (eax_38 != 0)
        ecx_30 = eax_38
    
    char* const eax_39 = &data_801800
    esi_3 = var_18
    char* var_3c_15 = ecx_30
    
    if (esi_3 != 0)
        eax_39 = esi_3
    
    char* const var_40_1 = eax_39
    
    if (edi_2 != 0)
        edx_20 = edi_2
    
    char* const var_44_5 = edx_20
    var_8_1.b = 0x15
    sub_6ecd70(ebx, sub_63df30(&var_1c, "\tretval = %s(retval, %s(uv, diffuse), %s);\n"))
    var_8_1.b = 0x16
    
    if (data_cf65bc != 0)
        char* const eax_41 = var_1c
        
        if (eax_41 != 0 && *eax_41 != 0)
            char* eax_42 = sub_63d4e0(&var_1c)
            int32_t temp8_1 = *(eax_42 + 4)
            *(eax_42 + 4) -= 1
            
            if (temp8_1 == 1)
                sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)
                var_1c = &data_801800
    
    var_8_1.b = 0x17
    
    if (data_cf65bc != 0 && edi_2 != 0 && *edi_2 != 0)
        char* eax_43 = sub_63d4e0(&var_14)
        int32_t temp9_1 = *(eax_43 + 4)
        *(eax_43 + 4) -= 1
        
        if (temp9_1 == 1)
            sub_64c080(eax_43, *(eax_43 + 0xc) + 0x10)
    
    var_8_1.b = 0x18
else
    esi_3 = var_18
    char* const edx_17 = &data_801800
    
    if (esi_3 != 0)
        edx_17 = esi_3
    
    char* const var_3c_14 = edx_17
    var_8_1.b = 0x11
    sub_6ecd70(ebx, sub_63df30(&var_24, "\tvec4 retval = %s(uv, diffuse);\n"))
    var_8_1.b = 0x12

if (data_cf65bc != 0)
    char* eax_44 = var_24
    
    if (eax_44 != 0 && *eax_44 != 0)
        char* eax_45 = sub_63d4e0(&var_24)
        int32_t temp6_1 = *(eax_45 + 4)
        *(eax_45 + 4) -= 1
        
        if (temp6_1 == 1)
            sub_64c080(eax_45, *(eax_45 + 0xc) + 0x10)

int32_t* result = arg2
*result += 1
int32_t var_8_2 = 0x19

if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
    result = sub_63d4e0(&var_18)
    int32_t temp7_1 = result[1]
    result[1] -= 1
    
    if (temp7_1 == 1)
        result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
