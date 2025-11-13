// 函数: sub_6a34e0
// 地址: 0x6a34e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* var_2c = arg2
*(arg5 + 0x10) = arg4
uint32_t _Str2_1 = *(arg2 + 0x10) - 1
int32_t var_4c_1
char const* const var_48_2
char* ecx_2

if (_Str2_1 u> 0x2a)
label_6a392e:
    var_48_2 = "DefParseReadSimpleField"
    var_4c_1 = 0x1ca
    ecx_2 = "Halt"
label_6a3947:
    sub_63b870(_Str2_1, &data_801800, ecx_2, "C:\x\ax2017\Engine\DefParseTree.cpp", var_4c_1, 
        var_48_2)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

_Str2_1 = zx.d(lookup_table_6a39ac[_Str2_1])
char* const edi_1 = &data_801800
char* var_54_2
int16_t var_1c
void* eax_23
char* const ecx_19
bool cond:4_1

switch (_Str2_1)
    case 0
        _Str2_1 = *(arg4 + 0x28)
        
        if ((_Str2_1.b & 0x22) == 0)
            char* eax_4 = *(arg5 + 4)
            char* const ecx_1 = &data_801800
            uint32_t* var_48_1 = arg3
            
            if (eax_4 != 0)
                ecx_1 = eax_4
            
            _Str2_1, arg2 = sub_64b6d0(eax_4, arg2, ecx_1, ecx_1, "%d")
            cond:4_1 = _Str2_1 == 1
            goto label_6a38e8
        
        uint32_t* edi_2 = *(arg4 + 0x1c)
        
        if ((_Str2_1.b & 0x20) != 0)
            char* const edx = &data_801800
            
            if (edi_2 == 0)
                var_48_2 = "DefParseReadEnum"
                var_4c_1 = 0xdd
                ecx_2 = "pAttribTable"
                goto label_6a3947
            
            char* eax_5 = *(arg5 + 4)
            
            if (eax_5 != 0)
                edx = eax_5
            
            _Str2_1, arg2 = sub_6dd380(edi_2, edx)
            
            if (_Str2_1 == 0xffffffff)
                goto label_6a35cd
            
            *arg3 = _Str2_1
            arg2.b = 1
            edi_1 = &data_801800
        else if (edi_2 == 0)
        label_6a35cd:
            arg2.b = 0
            edi_1 = &data_801800
        else
            _Str2_1 = *(arg5 + 4)
            char* const _Str2 = &data_801800
            
            if (_Str2_1 != 0)
                _Str2 = _Str2_1
            
            var_1c.d = _Str2
            
            if (edi_2[1] == 0)
                goto label_6a35cd
            
            while (true)
                _Str2_1, arg2 = _stricmp(edi_2[1], _Str2)
                
                if (_Str2_1 == 0)
                    break
                
                _Str2 = var_1c.d
                edi_2 = &edi_2[2]
                
                if (edi_2[1] == 0)
                    goto label_6a35cd
            
            if (edi_2 == 0)
                goto label_6a35cd
            
            _Str2_1 = *edi_2
            arg2.b = 1
            *arg3 = _Str2_1
            edi_1 = &data_801800
    case 1
        char* eax_6 = *(arg5 + 4)
        char* const ecx_4 = &data_801800
        
        if (eax_6 != 0)
            ecx_4 = eax_6
        
        int16_t* var_48_4 = &var_1c
        _Str2_1, arg2 = sub_64b6d0(&var_1c, arg2, ecx_4, ecx_4, "%d")
        cond:4_1 = _Str2_1 == 1
        _Str2_1.w = var_1c
        *arg3 = _Str2_1.w
        goto label_6a38e8
    case 2
        char* eax_11 = *(arg5 + 4)
        char* const ecx_7 = &data_801800
        
        if (eax_11 != 0)
            ecx_7 = eax_11
        
        char var_20
        char* var_48_6 = &var_20
        _Str2_1, arg2 = sub_64b6d0(&var_20, arg2, ecx_7, ecx_7, "%d")
        cond:4_1 = _Str2_1 == 1
        _Str2_1.b = var_20
        *arg3 = _Str2_1.b
        goto label_6a38e8
    case 3
        char* eax_15 = *(arg5 + 4)
        char* const ecx_9 = &data_801800
        uint32_t* var_48_8 = arg3
        
        if (eax_15 != 0)
            ecx_9 = eax_15
        
        _Str2_1, arg2 = sub_64b6d0(eax_15, arg2, ecx_9, ecx_9, "%g")
        cond:4_1 = _Str2_1 == 1
        goto label_6a38e8
    case 4
        char* eax_17 = *(arg5 + 4)
        int32_t ecx_13
        
        if (eax_17 == 0 || *eax_17 == 0)
            ecx_13 = 0
        else
            ecx_13 = *(sub_63d4e0(arg5 + 4) + 8)
        
        uint32_t edi_3 = sub_687730(ecx_13 + 1)
        char* const edx_2 = &data_801800
        *arg3 = edi_3
        char* ecx_15 = *(arg5 + 4)
        
        if (ecx_15 != 0)
            edx_2 = ecx_15
        
        do
            _Str2_1.b = *edx_2
            edx_2 = &edx_2[1]
            *edi_3 = _Str2_1.b
            edi_3 += 1
        while (_Str2_1.b != 0)
        
        CookieCheckFunction(_Str2_1)
        return _Str2_1
    case 5
        char* eax_13 = *(arg5 + 4)
        char* const ecx_8 = &data_801800
        
        if (eax_13 != 0)
            ecx_8 = eax_13
        
        int32_t var_24
        int32_t* var_48_7 = &var_24
        _Str2_1, arg2 = sub_64b6d0(&var_24, arg2, ecx_8, ecx_8, "%d")
        arg2.b = _Str2_1 == 1
        _Str2_1.b = var_24 != 0
        *arg3 = _Str2_1.b
    case 6
        char* eax_8 = *(arg5 + 4)
        char* const ecx_5 = &data_801800
        
        if (eax_8 != 0)
            ecx_5 = eax_8
        
        uint32_t _Str2_2
        int32_t* var_48_5 = &_Str2_2
        int32_t eax_10
        eax_10, arg2 = sub_64b6d0(&_Str2_2, arg2, ecx_5, ecx_5, "%lld")
        cond:4_1 = eax_10 == 1
        int32_t var_30
        arg3[1] = var_30
        _Str2_1 = _Str2_2
        *arg3 = _Str2_1
        goto label_6a38e8
    case 7
        _Str2_1, arg2 = sub_6a3280(arg3, arg5)
        arg2.b = _Str2_1.b
    case 8
        char* eax_16 = *(arg5 + 4)
        char* const ecx_10 = &data_801800
        uint32_t* var_48_9 = arg3
        
        if (eax_16 != 0)
            ecx_10 = eax_16
        
        _Str2_1, arg2 = sub_64b6d0(eax_16, arg2, ecx_10, ecx_10, "%lf")
        cond:4_1 = _Str2_1 == 1
        goto label_6a38e8
    case 9
        char* eax_42 = *(arg5 + 4)
        char* const ecx_23 = &data_801800
        
        if (eax_42 != 0)
            ecx_23 = eax_42
        
        void* var_48_15 = &arg3[3]
        void* var_4c_8 = &arg3[2]
        void* var_50_12 = &arg3[1]
        uint32_t* var_54_6 = arg3
        _Str2_1, arg2 = sub_64b6d0(&arg3[1], arg2, ecx_23, ecx_23, "%d %d %d %d")
        cond:4_1 = _Str2_1 == 4
        goto label_6a38e8
    case 0xa
        char* eax_24 = *(arg5 + 4)
        char* const ecx_20 = &data_801800
        
        if (eax_24 != 0)
            ecx_20 = eax_24
        
        void* var_48_12 = &arg3[3]
        void* var_4c_5 = &arg3[2]
        void* var_50_9 = &arg3[1]
        uint32_t* var_54_3 = arg3
        _Str2_1, arg2 = sub_64b6d0(&arg3[1], arg2, ecx_20, ecx_20, "%f %f %f %f")
        cond:4_1 = _Str2_1 == 4
        goto label_6a38e8
    case 0xb
        char* eax_19 = *(arg5 + 4)
        char* const ecx_18 = &data_801800
        
        if (eax_19 != 0)
            ecx_18 = eax_19
        
        void* var_48_10 = &arg3[1]
        uint32_t* var_4c_3 = arg3
        _Str2_1, arg2 = sub_64b6d0(&arg3[1], arg2, ecx_18, ecx_18, "%f %f")
        cond:4_1 = _Str2_1 == 2
        goto label_6a38e8
    case 0xc
        char* eax_21 = *(arg5 + 4)
        ecx_19 = &data_801800
        
        if (eax_21 != 0)
            ecx_19 = eax_21
        
        void* var_48_11 = &arg3[2]
        eax_23 = &arg3[1]
        void* var_4c_4 = eax_23
        uint32_t* var_50_8 = arg3
        var_54_2 = "%f %f %f"
    label_6a38dd:
        _Str2_1, arg2 = sub_64b6d0(eax_23, arg2, ecx_19, ecx_19, var_54_2)
        cond:4_1 = _Str2_1 == 3
    label_6a38e8:
        arg2.b = cond:4_1
        goto label_6a38eb
    case 0xd
        char* eax_28 = *(arg5 + 4)
        char* const ecx_21 = &data_801800
        
        if (eax_28 != 0)
            ecx_21 = eax_28
        
        void* var_48_13 = &arg3[5]
        void* var_4c_6 = &arg3[4]
        void* var_50_10 = &arg3[3]
        void* var_54_4 = &arg3[2]
        void* var_58_1 = &arg3[1]
        uint32_t* var_5c_2 = arg3
        _Str2_1, arg2 = sub_64b6d0(&arg3[1], arg2, ecx_21, ecx_21, "%f %f %f %f %f %f")
        cond:4_1 = _Str2_1 == 6
        goto label_6a38e8
    case 0xe
        char* eax_34 = *(arg5 + 4)
        char* const ecx_22 = &data_801800
        
        if (eax_34 != 0)
            ecx_22 = eax_34
        
        void* var_48_14 = &arg3[7]
        void* var_4c_7 = &arg3[6]
        void* var_50_11 = &arg3[5]
        void* var_54_5 = &arg3[4]
        void* var_58_2 = &arg3[3]
        void* var_5c_3 = &arg3[2]
        void* var_60_1 = &arg3[1]
        uint32_t* var_64_2 = arg3
        _Str2_1, arg2 = sub_64b6d0(&arg3[1], arg2, ecx_22, ecx_22, "%f %f %f %f %f %f %f %f")
        cond:4_1 = _Str2_1 == 8
        goto label_6a38e8
    case 0xf
        va_list eax_46 = *(arg5 + 4)
        va_list ecx_24 = &data_801800
        
        if (eax_46 != 0)
            ecx_24 = eax_46
        
        void* var_48_16 = &arg3[1]
        uint32_t* var_4c_9 = arg3
        _Str2_1, arg2 = sub_64b6d0(&arg3[1], arg2, ecx_24, ecx_24, "%d %d")
        cond:4_1 = _Str2_1 == 2
        goto label_6a38e8
    case 0x10
        char* eax_53 = *(arg5 + 4)
        ecx_19 = &data_801800
        
        if (eax_53 != 0)
            ecx_19 = eax_53
        
        void* var_48_18 = &arg3[2]
        eax_23 = &arg3[1]
        void* var_4c_11 = eax_23
        uint32_t* var_50_14 = arg3
        var_54_2 = "%d %d %d"
        goto label_6a38dd
    case 0x11
        char* eax_48 = *(arg5 + 4)
        char* const ecx_25 = &data_801800
        
        if (eax_48 != 0)
            ecx_25 = eax_48
        
        char var_c
        char* var_48_17 = &var_c
        char var_10
        char* var_4c_10 = &var_10
        char var_14
        char* var_50_13 = &var_14
        char _Str2_3
        char* var_54_8 = &_Str2_3
        int32_t eax_50
        eax_50, arg2 = sub_64b6d0(&_Str2_3, arg2, ecx_25, ecx_25, "%d %d %d %d")
        arg2.b = eax_50 == 4
        _Str2_1 = zx.d(_Str2_3)
        *arg3 = ((zx.d(var_c) << 8 | zx.d(var_10)) << 8 | zx.d(var_14)) << 8 | _Str2_1
    case 0x12
        goto label_6a392e

label_6a38eb:

if (arg2.b != 0)
    CookieCheckFunction(_Str2_1)
    return _Str2_1

char* eax_55 = *(arg5 + 4)

if (eax_55 != 0)
    edi_1 = eax_55

char* const var_48_19 = edi_1
int32_t var_4c_12 = *(arg4 + 4)
int32_t eax_57 = sub_69c750(sub_63b5f0("DefParse: failed to read '%s': %s"), var_2c, arg3, arg4)
CookieCheckFunction(eax_57)
return eax_57
