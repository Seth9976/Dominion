// 函数: sub_6f9e80
// 地址: 0x6f9e80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7721fd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = data_147ded0
int32_t* var_2c = ebx
enum MESSAGEBOX_RESULT _FileName_3

if (ebx == 0)
    _FileName_3 = *4

if (ebx != 0 || _FileName_3 == 0x19 || _FileName_3 == 0x1b)
    char* _FileName_22 = ebx[8]
    int32_t esi_1 = ebx[1]
    char* _FileName_14 = arg1
    _FileName_14 = _FileName_22
    
    if (_FileName_22 != 0 && *_FileName_22 != 0)
        char* eax_3 = sub_63d4e0(&_FileName_14)
        *(eax_3 + 4) += 1
    
    enum MESSAGEBOX_RESULT _FileName_2
    sub_6c4b90(&_FileName_2, esi_1)
    int32_t var_8_1 = 0
    char* const lpText_1 = &data_801800
    enum MESSAGEBOX_RESULT _FileName_1 = _FileName_2
    char* const _FileName = &data_801800
    _FileName_14 = &data_878be8
    
    if (_FileName_1 != 0)
        _FileName = _FileName_1
    
    FILE* _FileName_23 = fopen(_FileName, _FileName_14)
    enum MESSAGEBOX_RESULT _FileName_8
    enum MESSAGEBOX_RESULT _FileName_9
    
    if (_FileName_23 == 0)
        char* _FileName_4 = _FileName_2
        char* const _FileName_11 = &data_801800
        
        if (_FileName_4 != 0)
            _FileName_11 = _FileName_4
        
        _FileName_14 = _FileName_11
        char* lpText_2 = *sub_63df30(&_FileName_9, "Can't open '%s' for saving.")
        
        if (lpText_2 != 0)
            lpText_1 = lpText_2
        
        HWND hWnd = GetForegroundWindow()
        _FileName_14 = &_FileName_8
        GetWindowThreadProcessId(hWnd, _FileName_14)
        uint32_t eax_6 = GetCurrentProcessId()
        bool cond:1_1 = _FileName_8 != eax_6
        _FileName_14 = nullptr
        
        if (cond:1_1)
            hWnd = nullptr
        
        MessageBoxA(hWnd, lpText_1, "Can't save")
        var_8_1.b = 1
        
        if (data_cf65bc != 0)
            _FileName_3 = _FileName_9
            
            if (_FileName_3 != 0 && *_FileName_3 != 0)
                _FileName_3 = sub_63d4e0(&_FileName_9)
                int32_t temp0_1 = *(_FileName_3 + 4)
                *(_FileName_3 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(_FileName_3, *(_FileName_3 + 0xc) + 0x10)
        
        int32_t var_8_2 = 2
    else if (*(data_147ac2c + 0x24) == 0)
        _FileName_14 = _FileName_23
        fclose(_FileName_14)
        enum MESSAGEBOX_RESULT _FileName_15 = *ebx
        _FileName_8 = _FileName_15
        enum MESSAGEBOX_RESULT* _FileName_25 = *(_FileName_15 + 4)
        enum MESSAGEBOX_RESULT* _FileName_20 = _FileName_25
        
        if ((*(_FileName_15 + 8) & 0x800) != 0)
            _FileName_14 = "EditorSave"
            sub_63b870(_FileName_15, &data_801800, 
                "(pDefHeader->defFlags & DEF_FIELD_FLAG_DO_NOT_WRITE_TO_PARSETREE) == 0", 
                "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0x1569, _FileName_14)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        enum MESSAGEBOX_RESULT _FileName_17 = *data_147d094
        _FileName_9 = _FileName_17
        
        if (_FileName_17 != 0 && *_FileName_17 != 0)
            _FileName_25 = &_FileName_9
            char* eax_11 = sub_63d4e0(_FileName_25)
            *(eax_11 + 4) += 1
        
        _FileName_14 = _FileName_25
        var_8_1.b = 5
        char* _FileName_24 = ebx[8]
        _FileName_14 = _FileName_24
        
        if (_FileName_24 != 0 && *_FileName_24 != 0)
            char* eax_12 = sub_63d4e0(&_FileName_14)
            *(eax_12 + 4) += 1
        
        char* _FileName_10
        sub_6c5250(&_FileName_10)
        var_8_1.b = 6
        char* _FileName_18 = _FileName_10
        char* _FileName_21 = _FileName_18
        
        if (_FileName_18 != 0 && *_FileName_18 != 0)
            char* eax_13 = sub_63d4e0(&_FileName_21)
            *(eax_13 + 4) += 1
        
        var_8_1.b = 7
        int32_t* ecx_10 = data_147d094
        _FileName_14 = &_FileName_21
        sub_63d850(ecx_10, _FileName_14)
        var_8_1.b = 8
        
        if (data_cf65bc != 0 && _FileName_18 != 0 && *_FileName_18 != 0)
            char* eax_14 = sub_63d4e0(&_FileName_21)
            int32_t temp2_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
        
        var_8_1.b = 6
        enum MESSAGEBOX_RESULT _FileName_16 = _FileName_8
        int32_t* edi_1 = *(_FileName_16 + 0xc)
        *_FileName_16
        int32_t* _FileName_26 = sub_6a2fa0()
        _FileName_14 = nullptr
        _FileName_21 = _FileName_26
        sub_6a6290(edi_1, _FileName_14)
        enum MESSAGEBOX_RESULT _FileName_19 = _FileName_8
        char* _FileName_27 = _FileName_21
        _FileName_21 = _FileName_17
        *(_FileName_19 + 4) = _FileName_27
        
        if (_FileName_17 != 0 && *_FileName_17 != 0)
            char* eax_15 = sub_63d4e0(&_FileName_21)
            *(eax_15 + 4) += 1
        
        var_8_1.b = 9
        int32_t* ecx_15 = data_147d094
        _FileName_14 = &_FileName_21
        char* eax_16
        int32_t edx_9
        eax_16, edx_9 = sub_63d850(ecx_15, _FileName_14)
        var_8_1.b = 0xa
        
        if (data_cf65bc != 0 && _FileName_17 != 0 && *_FileName_17 != 0)
            eax_16 = sub_63d4e0(&_FileName_21)
            int32_t temp4_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp4_1 == 1)
                eax_16, edx_9 = sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
        
        var_8_1.b = 6
        
        if (_FileName_20 != 0)
            void* ecx_18 = *(_FileName_19 + 4)
            _FileName_14 = _FileName_20
            sub_6f9e10(eax_16, edx_9, ecx_18, _FileName_14)
            sub_6a3220(_FileName_20)
        
        if (sub_69fc10(var_2c).b != 0)
            data_147d49c = 0
            var_8_1.b = 0xf
            char* _FileName_6
            
            if (data_cf65bc != 0)
                _FileName_6 = _FileName_10
                
                if (_FileName_6 != 0 && *_FileName_6 != 0)
                    _FileName_6 = sub_63d4e0(&_FileName_10)
                    int32_t temp5_1 = *(_FileName_6 + 4)
                    *(_FileName_6 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(_FileName_6, *(_FileName_6 + 0xc) + 0x10)
                        _FileName_10 = &data_801800
            
            var_8_1.b = 0x10
            
            if (data_cf65bc != 0 && _FileName_17 != 0 && *_FileName_17 != 0)
                _FileName_6 = sub_63d4e0(&_FileName_9)
                int32_t temp6_1 = *(_FileName_6 + 4)
                *(_FileName_6 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_64c080(_FileName_6, *(_FileName_6 + 0xc) + 0x10)
            
            int32_t var_8_5 = 0x11
            
            if (data_cf65bc != 0)
                _FileName_6 = _FileName_2
                
                if (_FileName_6 != 0 && *_FileName_6 != 0)
                    _FileName_6 = sub_63d4e0(&_FileName_2)
                    int32_t temp7_1 = *(_FileName_6 + 4)
                    *(_FileName_6 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        sub_64c080(_FileName_6, *(_FileName_6 + 0xc) + 0x10)
            
            _FileName_6.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return _FileName_6
        
        enum MESSAGEBOX_RESULT _FileName_7 = _FileName_2
        char* lpText = &data_801800
        enum MESSAGEBOX_RESULT _FileName_13 = &data_801800
        
        if (_FileName_7 != 0)
            _FileName_13 = _FileName_7
        
        _FileName_14 = _FileName_13
        char* lpText_4 = *sub_63df30(&_FileName_8, "Failed to save '%s'.")
        
        if (lpText_4 != 0)
            lpText = lpText_4
        
        HWND hWnd_2 = GetForegroundWindow()
        _FileName_14 = &var_2c
        GetWindowThreadProcessId(hWnd_2, _FileName_14)
        uint32_t eax_19 = GetCurrentProcessId()
        bool cond:5_1 = var_2c != eax_19
        _FileName_14 = nullptr
        
        if (cond:5_1)
            hWnd_2 = nullptr
        
        MessageBoxA(hWnd_2, lpText, "Can't save")
        var_8_1.b = 0xb
        
        if (data_cf65bc != 0)
            _FileName_3 = _FileName_8
            
            if (_FileName_3 != 0 && *_FileName_3 != 0)
                _FileName_3 = sub_63d4e0(&_FileName_8)
                int32_t temp8_1 = *(_FileName_3 + 4)
                *(_FileName_3 + 4) -= 1
                
                if (temp8_1 == 1)
                    sub_64c080(_FileName_3, *(_FileName_3 + 0xc) + 0x10)
        
        var_8_1.b = 0xc
        
        if (data_cf65bc != 0)
            _FileName_3 = _FileName_10
            
            if (_FileName_3 != 0 && *_FileName_3 != 0)
                _FileName_3 = sub_63d4e0(&_FileName_10)
                int32_t temp9_1 = *(_FileName_3 + 4)
                *(_FileName_3 + 4) -= 1
                
                if (temp9_1 == 1)
                    sub_64c080(_FileName_3, *(_FileName_3 + 0xc) + 0x10)
                    _FileName_10 = &data_801800
        
        var_8_1.b = 0xd
        
        if (data_cf65bc != 0 && _FileName_17 != 0 && *_FileName_17 != 0)
            _FileName_3 = sub_63d4e0(&_FileName_9)
            int32_t temp10_1 = *(_FileName_3 + 4)
            *(_FileName_3 + 4) -= 1
            
            if (temp10_1 == 1)
                sub_64c080(_FileName_3, *(_FileName_3 + 0xc) + 0x10)
        
        int32_t var_8_4 = 0xe
    else
        enum MESSAGEBOX_RESULT _FileName_5 = _FileName_2
        enum MESSAGEBOX_RESULT _FileName_12 = &data_801800
        
        if (_FileName_5 != 0)
            _FileName_12 = _FileName_5
        
        _FileName_14 = _FileName_12
        char* lpText_3 =
            *sub_63df30(&_FileName_9, "Can't save '%s', current build settings elide data labels.")
        
        if (lpText_3 != 0)
            lpText_1 = lpText_3
        
        HWND hWnd_1 = GetForegroundWindow()
        _FileName_14 = &_FileName_8
        GetWindowThreadProcessId(hWnd_1, _FileName_14)
        uint32_t eax_10 = GetCurrentProcessId()
        bool cond:3_1 = _FileName_8 != eax_10
        _FileName_14 = nullptr
        
        if (cond:3_1)
            hWnd_1 = nullptr
        
        MessageBoxA(hWnd_1, lpText_1, "Can't save")
        var_8_1.b = 3
        
        if (data_cf65bc != 0)
            _FileName_3 = _FileName_9
            
            if (_FileName_3 != 0 && *_FileName_3 != 0)
                _FileName_3 = sub_63d4e0(&_FileName_9)
                int32_t temp1_1 = *(_FileName_3 + 4)
                *(_FileName_3 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(_FileName_3, *(_FileName_3 + 0xc) + 0x10)
        
        int32_t var_8_3 = 4
    
    if (data_cf65bc != 0)
        _FileName_3 = _FileName_2
        
        if (_FileName_3 != 0 && *_FileName_3 != 0)
            _FileName_3 = sub_63d4e0(&_FileName_2)
            int32_t temp3_1 = *(_FileName_3 + 4)
            *(_FileName_3 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(_FileName_3, *(_FileName_3 + 0xc) + 0x10)

_FileName_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return _FileName_3
