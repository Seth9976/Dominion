// 函数: sub_6a7ee0
// 地址: 0x6a7ee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f975
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
char* const result_1 = &data_801800
char* const var_24 = &data_801800
var_8_1.b = 2
char* arg_c
char* const esi = arg_c
char const* const var_44_1
int32_t var_40_4
char const* const var_3c_5
uint32_t _Stream
char* ecx_11
uint32_t _Stream_2

if (esi != 0)
    _Stream = strchr(esi, 0x2e)
    _Stream_2 = _Stream
    
    if (esi != 0)
        goto label_6a7f41
    
    var_3c_5 = "XString::XString"
    var_40_4 = 0x9a
    var_44_1 = "C:\x\ax2017\Engine\xString.cpp"
    ecx_11 = &data_871e0c
else
    esi = &data_801800
    _Stream_2 = strchr(&data_801800, 0x2e)
label_6a7f41:
    char* const _ElementCount_1 = &data_801800
    sub_63db30(&_ElementCount_1, esi, _Stream_2 - esi)
    var_8_1.b = 3
    sub_63d850(&result_1, &_ElementCount_1)
    var_8_1.b = 4
    
    if (data_cf65bc != 0)
        char* const _ElementCount_2 = _ElementCount_1
        
        if (_ElementCount_2 != 0 && *_ElementCount_2 != 0)
            char* eax_6 = sub_63d4e0(&_ElementCount_1)
            int32_t temp0_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
                _ElementCount_1 = &data_801800
    
    var_8_1.b = 2
    sub_63d8d0(&var_24, _Stream_2 + 1)
    sub_63d720(&_ElementCount_1, ".atlas")
    var_8_1.b = 5
    char* result_2
    sub_63dde0(&result_1, &result_2, &_ElementCount_1)
    var_8_1.b = 8
    
    if (data_cf65bc != 0)
        char* const _ElementCount_3 = _ElementCount_1
        
        if (_ElementCount_3 != 0 && *_ElementCount_3 != 0)
            char* eax_8 = sub_63d4e0(&_ElementCount_1)
            int32_t temp1_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                _ElementCount_1 = &data_801800
    
    char* const ebx_1 = &data_801800
    var_8_1.b = 7
    char* const lpFileName = &data_801800
    int32_t* edi = *arg1
    edi[8] = 0
    *edi = 0x19e3ba4
    edi[6] = 0
    char* lpFileName_1 = result_2
    
    if (lpFileName_1 != 0)
        lpFileName = lpFileName_1
    
    if (GetFileAttributesA(lpFileName) != 0xffffffff)
        char* result_3 = result_2
        char* const result_4 = &data_801800
        
        if (result_3 != 0)
            result_4 = result_3
        
        sub_6a7e20(edi, result_4)
    
    char* const esi_1 = var_24
    char* const eax_11 = &data_801800
    char const* const ecx_10 = "spine.json"
    
    if (esi_1 != 0)
        eax_11 = esi_1
    
    int32_t eax_13
    char edx_5
    
    while (true)
        edx_5 = *eax_11
        char const temp2_1 = *ecx_10
        bool c_1 = edx_5 u< temp2_1
        
        if (edx_5 == temp2_1)
            if (edx_5 == 0)
                eax_13 = 0
                break
            
            edx_5 = eax_11[1]
            char temp3_1 = ecx_10[1]
            c_1 = edx_5 u< temp3_1
            
            if (edx_5 == temp3_1)
                eax_11 = &eax_11[2]
                ecx_10 = &ecx_10[2]
                
                if (edx_5 != 0)
                    continue
                
                eax_13 = 0
                break
        
        eax_13 = sbb.d(eax_11, eax_11, c_1) | 1
        break
    
    if (eax_13 == 0)
        char* eax_14 = arg_c
        
        if (eax_14 != 0)
            ebx_1 = eax_14
        
        sub_6a7e20(&edi[2], ebx_1)
        goto label_6a81be
    
    char* const eax_15 = &data_801800
    char const* const ecx_13 = "skel"
    
    if (esi_1 != 0)
        eax_15 = esi_1
    
    char* result
    
    while (true)
        edx_5 = *eax_15
        char const temp4_1 = *ecx_13
        bool c_2 = edx_5 u< temp4_1
        
        if (edx_5 == temp4_1)
            if (edx_5 == 0)
                result = nullptr
                break
            
            edx_5 = eax_15[1]
            char temp5_1 = ecx_13[1]
            c_2 = edx_5 u< temp5_1
            
            if (edx_5 == temp5_1)
                eax_15 = &eax_15[2]
                ecx_13 = &ecx_13[2]
                
                if (edx_5 != 0)
                    continue
                
                result = nullptr
                break
        
        result = sbb.d(eax_15, eax_15, c_2) | 1
        break
    
    if (result != 0)
        goto label_6a81be
    
    _Stream = arg_c
    uint32_t _FileName = &data_801800
    
    if (_Stream != 0)
        _FileName = _Stream
    
    if (edi[4] == 0)
        _Stream = fopen(_FileName, "rb")
        
        if (_Stream != 0)
            fseek(_Stream, 0, 2)
            _ElementCount_1 = ftell(_Stream)
            fseek(_Stream, 0, 0)
            int32_t _Buffer = sub_687730(_ElementCount_1)
            uint32_t _Stream_1 = _Stream
            char* const _ElementCount = _ElementCount_1
            edi[4] = _Buffer
            _Stream = fread(_Buffer, 1, _ElementCount, _Stream_1)
            
            if (_Stream == _ElementCount_1)
                fclose(_Stream_1)
                *(edi + 0x18) = _ElementCount_1
            label_6a81be:
                var_8_1.b = 9
                
                if (data_cf65bc != 0)
                    result = result_2
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_2)
                        int32_t temp6_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp6_1 == 1)
                            sub_64c080(result, *(result + 0xc) + 0x10)
                            result_2 = &data_801800
                
                var_8_1.b = 0xa
                
                if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                    result = sub_63d4e0(&var_24)
                    int32_t temp7_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp7_1 == 1)
                        sub_64c080(result, *(result + 0xc) + 0x10)
                
                var_8_1.b = 0xb
                
                if (data_cf65bc != 0)
                    result = result_1
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&result_1)
                        int32_t temp8_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp8_1 == 1)
                            sub_64c080(result, *(result + 0xc) + 0x10)
                
                int32_t var_8_2 = 0xc
                
                if (data_cf65bc != 0)
                    result = arg_c
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&arg_c)
                        int32_t temp9_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp9_1 == 1)
                            sub_64c080(result, *(result + 0xc) + 0x10)
                
                result.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            var_3c_5 = "DefinitionReadFile"
            var_40_4 = 0x16e
            ecx_11 = "result == fileSize"
            var_44_1 = "C:\x\ax2017\Engine\Spine.cpp"
        else
            var_3c_5 = "DefinitionReadFile"
            var_40_4 = 0x166
            ecx_11 = "file"
            var_44_1 = "C:\x\ax2017\Engine\Spine.cpp"
    else
        var_3c_5 = "DefinitionReadFile"
        var_40_4 = 0x162
        ecx_11 = "*ptr == NULL"
        var_44_1 = "C:\x\ax2017\Engine\Spine.cpp"
sub_63b870(_Stream, &data_801800, ecx_11, var_44_1, var_40_4, var_3c_5)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
