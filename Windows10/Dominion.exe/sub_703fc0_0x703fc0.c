// 函数: sub_703fc0
// 地址: 0x703fc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_wcsrtombs_internal@@YAIPADQAPB_WIQAU_Mbstatet@@AAV__crt_cached_ptd_host@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint8_t* var_1c = arg2
uint32_t result_2 = (*__glewCreateShader)(arg3)
uint32_t result

if (result_2 == 0)
    result = 0
else
    char* const esi_1 = &data_801800
    char* const var_18 = &data_801800
    int32_t var_8_1 = 0
    
    if (strstr(var_1c, "#define NEED_SKINNING_VERSION") != 0)
        int32_t* eax_6 = sub_64bfd0(0x32)
        eax_6[3] += 1
        
        if (*eax_6 == 0)
            sub_64be70(eax_6)
        
        int32_t* esi_2 = *eax_6
        char const* const ecx_1 = "#version 140\n#define VERSION_130\n"
        *eax_6 = *esi_2
        *esi_2 = 0xfafafafa
        esi_2[1] = 1
        esi_2[2] = 0x21
        esi_2[3] = 0x22
        esi_1 = &esi_2[4]
        var_18 = esi_1
        int32_t eax_7
        
        do
            eax_7.b = *ecx_1
            ecx_1 = &ecx_1[1]
            ecx_1[esi_1 + 0xff773057] = eax_7.b
        while (eax_7.b != 0)
    
    strstr(var_1c, "#define NEED_ANDROID_SAMPLEREXTERNALOES")
    char* const eax_9
    
    if (esi_1 == 0 || *esi_1 == 0)
        int32_t* eax_10 = sub_64bfd0(0x1e)
        eax_10[3] += 1
        
        if (*eax_10 == 0)
            sub_64be70(eax_10)
        
        int32_t* ecx_5 = *eax_10
        char* edx_3 = "#define GLSL\n"
        *eax_10 = *ecx_5
        eax_9 = &ecx_5[4]
        *ecx_5 = 0xfafafafa
        ecx_5[1] = 1
        ecx_5[2] = 0xd
        ecx_5[3] = 0xe
        var_18 = eax_9
        
        do
            ecx_5.b = *edx_3
            edx_3 = &edx_3[1]
            edx_3[eax_9 + 0xff77300b] = ecx_5.b
        while (ecx_5.b != 0)
    else
        char* eax_8 = sub_63d4e0(&var_18)
        int32_t esi_3 = *(eax_8 + 8)
        sub_63d5e0(eax_8, esi_3 + 0xd, &var_18, 1)
        eax_9 = var_18
        __builtin_strcpy(&eax_9[esi_3], "#define GLSL\n")
    
    char* const esi_7
    
    if (arg3 != 0x8b31)
        if (arg3 != 0x8b30)
            sub_63b870(eax_9, &data_801800, "Halt", "C:\x\ax2017\Engine\OpenGLGraphics.cpp", 
                0x113c, "GLLoadShader")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if (eax_9 == 0 || *eax_9 == 0)
            int32_t** eax_16 = sub_64bfd0(0x2b)
            eax_16[3] += 1
            
            if (*eax_16 == 0)
                sub_64be70(eax_16)
            
            int32_t* esi_9 = *eax_16
            char* ecx_14 = "#define HAVE_PIXEL_SHADER\n"
            *eax_16 = *esi_9
            *esi_9 = 0xfafafafa
            esi_9[1] = 1
            esi_9[2] = 0x1a
            esi_9[3] = 0x1b
            esi_7 = &esi_9[4]
            var_18 = esi_7
            int32_t* eax_17
            
            do
                eax_17.b = *ecx_14
                ecx_14 = &ecx_14[1]
                ecx_14[esi_7 + 0xff772fc7] = eax_17.b
            while (eax_17.b != 0)
        else
            char* eax_15 = sub_63d4e0(&var_18)
            int32_t edi_4 = *(eax_15 + 8)
            sub_63d5e0(eax_15, edi_4 + 0x1a, &var_18, 1)
            esi_7 = var_18
            __builtin_strncpy(&esi_7[edi_4], "#define HAVE_PIXEL_SHADER\n", 0x1b)
    else if (eax_9 == 0 || *eax_9 == 0)
        int32_t* eax_13 = sub_64bfd0(0x2c)
        eax_13[3] += 1
        
        if (*eax_13 == 0)
            sub_64be70(eax_13)
        
        int32_t* esi_8 = *eax_13
        char const* const ecx_10 = "#define HAVE_VERTEX_SHADER\n"
        *eax_13 = *esi_8
        *esi_8 = 0xfafafafa
        esi_8[1] = 1
        esi_8[2] = 0x1b
        esi_8[3] = 0x1c
        esi_7 = &esi_8[4]
        var_18 = esi_7
        int32_t eax_14
        
        do
            eax_14.b = *ecx_10
            ecx_10 = &ecx_10[1]
            ecx_10[esi_7 + 0xff772ffb] = eax_14.b
        while (eax_14.b != 0)
    else
        char* eax_12 = sub_63d4e0(&var_18)
        int32_t edi_2 = *(eax_12 + 8)
        sub_63d5e0(eax_12, edi_2 + 0x1b, &var_18, 1)
        esi_7 = var_18
        __builtin_strcpy(&esi_7[edi_2], "#define HAVE_VERTEX_SHADER\n")
    
    if (data_ccf6e7 != 0)
        if (esi_7 == 0 || *esi_7 == 0)
            int32_t** eax_19 = sub_64bfd0(0x28)
            eax_19[3] += 1
            
            if (*eax_19 == 0)
                sub_64be70(eax_19)
            
            int32_t* esi_10 = *eax_19
            char* ecx_18 = "#define HAVE_ADRENO420\n"
            *eax_19 = *esi_10
            *esi_10 = 0xfafafafa
            esi_10[1] = 1
            esi_10[2] = 0x17
            esi_10[3] = 0x18
            esi_7 = &esi_10[4]
            var_18 = esi_7
            int32_t* eax_20
            
            do
                eax_20.b = *ecx_18
                ecx_18 = &ecx_18[1]
                ecx_18[esi_7 + 0xff772fdf] = eax_20.b
            while (eax_20.b != 0)
        else
            char* eax_18 = sub_63d4e0(&var_18)
            int32_t edi_6 = *(eax_18 + 8)
            sub_63d5e0(eax_18, edi_6 + 0x17, &var_18, 1)
            esi_7 = var_18
            __builtin_strcpy(&esi_7[edi_6], "#define HAVE_ADRENO420\n")
    
    if (data_147d2c4 == 3)
        if (esi_7 == 0 || *esi_7 == 0)
            int32_t** eax_22 = sub_64bfd0(0x23)
            eax_22[3] += 1
            
            if (*eax_22 == 0)
                sub_64be70(eax_22)
            
            int32_t* esi_11 = *eax_22
            char* ecx_22 = "#define HAVE_RIFT\n"
            *eax_22 = *esi_11
            *esi_11 = 0xfafafafa
            esi_11[1] = 1
            esi_11[2] = 0x12
            esi_11[3] = 0x13
            esi_7 = &esi_11[4]
            var_18 = esi_7
            int32_t* eax_23
            
            do
                eax_23.b = *ecx_22
                ecx_22 = &ecx_22[1]
                ecx_22[esi_7 + 0xff772f93] = eax_23.b
            while (eax_23.b != 0)
        else
            char* eax_21 = sub_63d4e0(&var_18)
            int32_t edi_8 = *(eax_21 + 8)
            sub_63d5e0(eax_21, edi_8 + 0x12, &var_18, 1)
            esi_7 = var_18
            __builtin_strncpy(&esi_7[edi_8], "#define HAVE_RIFT\n", 0x13)
    
    if (data_147d2c4 == 5)
        if (esi_7 == 0 || *esi_7 == 0)
            int32_t** eax_25 = sub_64bfd0(0x25)
            eax_25[3] += 1
            
            if (*eax_25 == 0)
                sub_64be70(eax_25)
            
            int32_t* esi_12 = *eax_25
            char* ecx_26 = "#define HAVE_OPENVR\n"
            *eax_25 = *esi_12
            *esi_12 = 0xfafafafa
            esi_12[1] = 1
            esi_12[2] = 0x14
            esi_12[3] = 0x15
            esi_7 = &esi_12[4]
            var_18 = esi_7
            int32_t* eax_26
            
            do
                eax_26.b = *ecx_26
                ecx_26 = &ecx_26[1]
                ecx_26[esi_7 + 0xff772fab] = eax_26.b
            while (eax_26.b != 0)
        else
            char* eax_24 = sub_63d4e0(&var_18)
            int32_t edi_10 = *(eax_24 + 8)
            sub_63d5e0(eax_24, edi_10 + 0x14, &var_18, 1)
            esi_7 = var_18
            __builtin_strncpy(&esi_7[edi_10], "#define HAVE_OPENVR\n", 0x15)
    
    char* const eax_27 = &data_801800
    char* const ecx_27 = &data_801800
    
    if (esi_7 != 0)
        eax_27 = esi_7
    
    char* const var_34 = eax_27
    uint8_t* var_30_1 = var_1c
    char* eax_30 = *(arg4 + 0x20)
    
    if (eax_30 != 0)
        ecx_27 = eax_30
    
    char* const var_44_1 = ecx_27
    char* const ecx_28 = &data_801800
    char* eax_32 = *sub_63df30(&var_1c, "pre glShaderSource error in %s")
    
    if (eax_32 != 0)
        ecx_28 = eax_32
    
    sub_6fec00(ecx_28)
    var_8_1.b = 1
    
    if (data_cf65bc != 0)
        uint8_t* eax_33 = var_1c
        
        if (eax_33 != 0 && *eax_33 != 0)
            char* eax_34 = sub_63d4e0(&var_1c)
            int32_t temp0_1 = *(eax_34 + 4)
            *(eax_34 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                var_1c = &data_801800
    
    uint32_t result_1 = result_2
    var_8_1.b = 0
    (*__glewShaderSource)(result_1, 2, &var_34, 0)
    char* const ecx_32 = &data_801800
    char* eax_37 = *(arg4 + 0x20)
    
    if (eax_37 != 0)
        ecx_32 = eax_37
    
    char* const var_44_2 = ecx_32
    char* const edx_22 = &data_801800
    char* eax_39 = *sub_63df30(&var_1c, "glShaderSource error in %s")
    
    if (eax_39 != 0)
        edx_22 = eax_39
    
    sub_6fec00(edx_22)
    var_8_1.b = 2
    
    if (data_cf65bc != 0)
        uint8_t* eax_40 = var_1c
        
        if (eax_40 != 0 && *eax_40 != 0)
            char* eax_41 = sub_63d4e0(&var_1c)
            int32_t temp1_1 = *(eax_41 + 4)
            *(eax_41 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_41, *(eax_41 + 0xc) + 0x10)
                var_1c = &data_801800
    
    var_8_1.b = 0
    (*__glewCompileShader)(result_1)
    int32_t var_2c = 0
    (*__glewGetShaderiv)(result_1, 0x8b81, &var_2c)
    
    if (var_2c != 0)
        goto label_7046e7
    
    void* var_24 = nullptr
    (*__glewGetShaderiv)(result_1, 0x8b84, &var_24)
    void* edi_12 = var_24
    
    if (edi_12 == 0)
        result_1 = result_2
    label_7046e7:
        int32_t var_8_3 = 4
        
        if (data_cf65bc != 0 && esi_7 != 0 && *esi_7 != 0)
            char* eax_52 = sub_63d4e0(&var_18)
            int32_t temp2_1 = *(eax_52 + 4)
            *(eax_52 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_52, *(eax_52 + 0xc) + 0x10)
        
        result = result_1
    else
        __alloca_probe_16(edi_12)
        var_1c = &var_40
        uint32_t result_3
        
        if (&var_40 == 0)
            result_3 = result_2
        else
            result_3 = result_2
            (*__glewGetShaderInfoLog)(result_3, edi_12, 0, &var_40)
            char* const ecx_36 = &data_801800
            uint8_t* var_44_7 = var_1c
            char* eax_48 = *(arg4 + 0x20)
            
            if (eax_48 != 0)
                ecx_36 = eax_48
            
            char* const var_48_4 = ecx_36
            char const* const eax_49 = "vertex"
            
            if (arg3 != 0x8b31)
                eax_49 = "pixel"
            
            char const* const var_4c_6 = eax_49
            sub_63b5f0("Could not compile %s shader %s:\n%s\n")
        
        (*__glewDeleteShader)(result_3)
        int32_t var_8_2 = 3
        
        if (data_cf65bc != 0 && esi_7 != 0 && *esi_7 != 0)
            char* eax_51 = sub_63d4e0(&var_18)
            int32_t temp3_1 = *(eax_51 + 4)
            *(eax_51 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_51, *(eax_51 + 0xc) + 0x10)
        
        result = 0

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
