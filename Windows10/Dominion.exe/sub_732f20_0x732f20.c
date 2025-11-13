// 函数: sub_732f20
// 地址: 0x732f20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772b05
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_114 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* ebx = *arg2
void* var_18 = ebx
char** i_3 = nullptr
int32_t var_2c = 0
int32_t var_28 = 0
int32_t ecx
int32_t var_118 = ecx
var_8_1.b = 1
sub_732e10(&i_3, "HAVE_VERTEX_SHADER")
sub_732e10(&i_3, "HAVE_PIXEL_SHADER")
int32_t esi = 0
HRESULT result_1

while (true)
    char* eax_3 = _aligned_malloc(0x50, 0x10)
    char* edi_1 = eax_3
    char const* const var_120_4
    int32_t var_11c_12
    char const* const var_118_8
    char* ecx_21
    
    if (edi_1 == 0)
        var_118_8 = "XMalloc"
        var_11c_12 = 0x57
        var_120_4 = "C:\x\ax2017\Engine\xMemory.cpp"
        ecx_21 = "pBuffer"
    else
        sub_69ca80(edi_1, data_1777524)
        int32_t ecx_4 = esi * 5
        char* edx_1 = *(ebx + (ecx_4 << 3))
        
        if (*edx_1 == 0)
            if (esi != 1)
                char* eax_4 = "MainVS"
                
                if (esi != 0)
                    eax_4 = edx_1
                
                edx_1 = eax_4
            else
                edx_1 = "MainPS"
        
        char* const result_7 = &data_801800
        HRESULT result_2 = result_1
        
        if (arg3 != 0)
            if (result_2 != 0)
                result_7 = result_2
            
            if (sub_6b2780(&i_3, edx_1, result_7, edi_1, esi, &i_3, &edi_1[0x28], &edi_1[0x20], 1)
                    == 0)
                HRESULT result_3 = result_1
                char* const result_8 = &data_801800
                
                if (result_3 != 0)
                    result_8 = result_3
                
                void* const eax_9 = &data_8007fc
                char* const eax_10
                
                while (true)
                    if (*eax_9 == esi)
                        eax_10 = *(eax_9 + 4)
                        break
                    
                    eax_9 += 8
                    
                    if (*(eax_9 + 4) == 0)
                        eax_10 = &data_801800
                        break
                
                char* const result_12 = result_8
                char* const var_11c_2 = eax_10
                sub_63b5f0("dx11 shader %s reimport failed to read '%s'")
            
            char* result_4 = result_1
            char* const result_9 = &data_801800
            
            if (result_4 != 0)
                result_9 = result_4
            
            if (sub_705f00(result_9, edi_1) == 0)
                HRESULT result_5 = result_1
                char* const result_10 = &data_801800
                
                if (result_5 != 0)
                    result_10 = result_5
                
                void* const eax_12 = &data_8007fc
                
                while (true)
                    if (*eax_12 == esi)
                        char* const result_14 = result_10
                        int32_t var_11c_4 = *(eax_12 + 4)
                        sub_63b5f0("shader %s opengl reimport failed to read '%s'")
                        break
                    
                    eax_12 += 8
                    
                    if (*(eax_12 + 4) == 0)
                        char* const result_13 = result_10
                        char* const var_11c_3 = &data_801800
                        sub_63b5f0("shader %s opengl reimport failed to read '%s'")
                        break
            
            goto label_7330eb
        
        if (result_2 != 0)
            result_7 = result_2
        
        eax_3 = sub_6b2780(&i_3, edx_1, result_7, edi_1, esi, &i_3, &edi_1[0x28], &edi_1[0x20], 0)
        
        if (eax_3.b == 0)
            var_118_8 = "ShaderImport"
            var_11c_12 = 0x98
            var_120_4 = "C:\x\ax2017\Engine\ShaderImport.cpp"
            ecx_21 = "Halt"
        else
            HRESULT result_6 = result_1
            HRESULT result_11 = &data_801800
            
            if (result_6 != 0)
                result_11 = result_6
            
            eax_3 = sub_705d70(result_11, edi_1)
            
            if (eax_3.b == 0)
                var_118_8 = "ShaderImport"
                var_11c_12 = 0xb1
                var_120_4 = "C:\x\ax2017\Engine\ShaderImport.cpp"
                ecx_21 = "Halt"
            else
            label_7330eb:
                esi += 1
                *(ebx + (ecx_4 << 3) + 8) = edi_1
                ebx = var_18
                
                if (esi s>= 2)
                    break
                
                continue
    
    sub_63b870(eax_3, &data_801800, ecx_21, var_120_4, var_11c_12, var_118_8)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

*(ebx + 0x50) = 0
void* eax_18 = *(ebx + 8)
int32_t* ppReflector = nullptr

if (D3DReflect(*(eax_18 + 0x28), *(eax_18 + 0x20), &data_77e8c4, &ppReflector) s>= 0)
    int32_t* ppReflector_1 = ppReflector
    void var_104
    (*(*ppReflector_1 + 0xc))(ppReflector_1, &var_104)
    int32_t var_f8
    
    if (var_f8 u> 0)
        int32_t* ppReflector_2 = ppReflector
        int32_t* ebx_2 = (*(*ppReflector_2 + 0x10))(ppReflector_2, 0)
        int32_t* var_20_1 = ebx_2
        void var_44
        int32_t eax_20 = (**ebx_2)(ebx_2, &var_44)
        
        if (eax_20 s< 0)
            sub_63b870(eax_20, &data_801800, "SUCCEEDED(hr)", 
                "C:\x\ax2017\Engine\ShaderImport.cpp", 0xe2, "ShaderImport")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        int32_t ecx_10 = 0
        int32_t var_24_1 = 0
        int32_t var_3c
        
        if (var_3c u> 0)
            do
                int32_t* eax_22 = (*(*ebx_2 + 4))(ebx_2, ecx_10)
                char* _Str2_1
                (**eax_22)(eax_22, &_Str2_1)
                char* _Str2 = _Str2_1
                int32_t i = 0
                char* _Str2_2 = _Str2
                
                if (data_8ce7c4 s> 0)
                    int32_t edi_2 = 0
                    
                    do
                        void* ebx_3 = data_8ce7c0
                        
                        if (_stricmp(*(ebx_3 + edi_2 + 4), _Str2) == 0)
                            int32_t eax_24 = *(ebx_3 + edi_2)
                            
                            if (eax_24 != 0x60 && eax_24 != 0x61 && eax_24 != 0x62)
                                goto label_73320b
                            
                            *(var_18 + 0x50) = 1
                            int32_t var_60
                            *(var_18 + 0x54) = var_60 u>> 6
                            goto label_73322f
                        
                        _Str2 = _Str2_2
                        i += 1
                        edi_2 += 0x3c
                    while (i s< data_8ce7c4)
                    
                label_73320b:
                    ebx_2 = var_20_1
                
                ecx_10 = var_24_1 + 1
                var_24_1 = ecx_10
            while (ecx_10 u< var_3c)
    
label_73322f:
    int32_t* ppReflector_3 = ppReflector
    (*(*ppReflector_3 + 8))(ppReflector_3)
    var_8_1.b = 4
    char** i_1 = i_3
    
    while (i_1 != 0)
        char** i_5 = i_1
        i_1 = i_1[2]
        sub_4d6960(i_5)
        sub_64c080(i_5, 0x10)
    
    int32_t var_8_3 = 5
else
    var_8_1.b = 2
    char** i_2 = i_3
    
    while (i_2 != 0)
        char** i_4 = i_2
        i_2 = i_2[2]
        sub_4d6960(i_4)
        sub_64c080(i_4, 0x10)
    
    int32_t var_8_2 = 3

HRESULT result

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
