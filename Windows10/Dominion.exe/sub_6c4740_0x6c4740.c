// 函数: sub_6c4740
// 地址: 0x6c4740
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7701c6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t __saved_esi_1
int32_t __saved_esi = __saved_esi_1
int32_t __saved_edi_1
int32_t __saved_edi = __saved_edi_1
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_1c = arg1
char* _Str2 = 0x2e
int32_t var_18 = 0
int32_t _Str1
char* _Str2_1
_Str1, _Str2_1 = strrchr(arg2, _Str2.b)
char const* const ecx

if (_Str1 == 0)
label_6c47b2:
    _Str2 = _Str2_1
    
    if (arg2 != 0)
        sub_63d720(&_Str2, arg2)
        char* _Str2_4
        sub_6a0010(&_Str2_4)
        int32_t var_8_1 = 1
        char* esi_1 = nullptr
        char* _Str2_3 = _Str2_4
        char* const _Str2_2 = &data_801800
        
        while (true)
            int32_t ecx_4
            
            if (_Str2_3 == 0 || *_Str2_3 == 0)
                ecx_4 = 0
            else
                ecx_4 = *(sub_63d4e0(&_Str2_4) + 8)
                _Str2_3 = _Str2_4
            
            if (esi_1 s>= ecx_4)
                break
            
            char* _Str2_5 = &data_801800
            
            if (_Str2_3 != 0)
                _Str2_5 = _Str2_3
            
            if (*(_Str2_5 + esi_1) == 0x3a)
                _Str2 = 0x5f
                sub_63dc00(&_Str2_4, esi_1, _Str2.b)
                _Str2_3 = _Str2_4
            
            esi_1 = &esi_1[1]
        
        char const* const ecx_6
        
        if (data_cc8ddd != 0)
            ecx_6 = "xbin/ios/"
        else if (data_cc8ddc == 0)
            ecx_6 = "xbin/"
        else
            ecx_6 = "xbin/web/"
        
        var_8_1.b = 1
        
        if (_Str2_3 != 0)
            _Str2_2 = _Str2_3
        
        _Str2 = _Str2_2
        char const* const var_3c_4 = ecx_6
        char const* const var_40_1 = "%s%s.xbin"
        sub_63df30(arg1, "%s%s.xbin")
        int32_t var_18_1 = 1
        int32_t var_8_2 = 7
        
        if (data_cf65bc != 0)
            char* _Str2_6 = _Str2_4
            
            if (_Str2_6 != 0 && *_Str2_6 != 0)
                char* eax_4 = sub_63d4e0(&_Str2_4)
                int32_t temp0_1 = *(eax_4 + 4)
                *(eax_4 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg1
    
    char const* const var_3c_5 = "XString::XString"
    int32_t var_40_2 = 0x94
    char const* const var_44_2 = "C:\x\ax2017\Engine\xString.cpp"
    ecx = &data_871e0c
else
    _Str2 = ".xpack"
    _Str1, _Str2_1 = _stricmp(_Str1, _Str2)
    
    if (_Str1 != 0)
        goto label_6c47b2
    
    _Str2 = "DefLoadRelativeXbinPathFromAssetPath"
    int32_t var_3c_2 = 0xb3
    char const* const var_40 = "C:\x\ax2017\Engine\DefLoad.cpp"
    ecx = "!AssetPathIsXPack(assetPath)"

sub_63b870(_Str1, &data_801800, ecx)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
