// 函数: sub_64ba00
// 地址: 0x64ba00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$parse_floating_point_possible_nan@_WV?$input_adapter_character_source@V?$string_input_adapter@_W@__crt_stdio_input@@@__crt_strtox@@_K@__crt_strtox@@YA?AW4floating_point_parse_result@0@AA_WAAV?$input_adapter_character_source@V?$string_input_adapter@_W@__crt_stdio_input@@@0@_K@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* _Source_2 = arg3
char* _Source = _Source_2

if (data_bf23b8 != 0)
    EnterCriticalSection(&data_bf23e8)
    _Source_2 = _Source

int32_t var_8_1 = 0
int32_t esi = 0
int32_t ebx = data_c1c800
char* _Source_1

if (ebx s> 0)
    void* edi_1 = &data_bf2404
    
    while (true)
        void* ecx = edi_1
        
        while (true)
            arg2 = *ecx
            char temp0_1 = *_Source_2
            bool c_1 = arg2 u< temp0_1
            
            if (arg2 == temp0_1)
                if (arg2 == 0)
                    _Source_1 = nullptr
                    break
                
                arg2 = *(ecx + 1)
                char temp1_1 = _Source_2[1]
                c_1 = arg2 u< temp1_1
                
                if (arg2 == temp1_1)
                    ecx += 2
                    _Source_2 = &_Source_2[2]
                    
                    if (arg2 != 0)
                        continue
                    
                    _Source_1 = nullptr
                    break
            
            _Source_1 = sbb.d(_Source_2, _Source_2, c_1) | 1
            break
        
        if (_Source_1 == 0)
            break
        
        _Source_2 = _Source
        esi += 1
        edi_1 += 0x548
        
        if (esi s>= ebx)
            goto label_64ba9d
    
    goto label_64bb4a

label_64ba9d:
int32_t var_34_1
char const* const var_30
char* ecx_1

if (ebx s< 0x80)
    data_c1c800 = ebx + 1
    _Source_2 = memset(ebx * 0x548 + &data_bf2400, 0, 0x548)
    
    if (ebx * 0x548 != 0xff40dbfc)
        if (_Source != 0)
            strncpy(ebx * 0x548 + &data_bf2404, _Source, 0x40)
            *(ebx * 0x548 + 0xbf2443) = 0
        
        _Source_2 = ebx * 0x548 + 0xbf2444
        
        if (_Source_2 == 0)
            goto label_64bb69
        
        *_Source_2 = 0
        
        if (ebx * 0x548 == 0xff40dabc)
            goto label_64bb69
        
        _Source_1 = arg4
        
        if (_Source_1 != 0)
            _Source_1 = strncpy(ebx * 0x548 + 0xbf2544, _Source_1, 0x400)
            *(ebx * 0x548 + 0xbf2943) = 0
        else
            *(ebx * 0x548 + 0xbf2544) = _Source_1.b
        
        *(ebx * 0x548 + &data_bf2400) = 1
        *(ebx * 0x548 + 0xbf2944) = 0
    label_64bb4a:
        
        if (data_bf23b8 != 0)
            _Source_1 = LeaveCriticalSection(&data_bf23e8)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return _Source_1
    
label_64bb69:
    var_30 = "StrCopySafe"
    var_34_1 = 0x26b
    ecx_1 = "dest != NULL"
else
    var_30 = "GamecenterAddPurchasedSku"
    var_34_1 = 0x29e
    ecx_1 = "gGameCenter.numOwnedDLC < MAX_DLC"

sub_63b870(_Source_2, &data_801800, ecx_1, "C:\x\ax2017\Engine\GameCenter.cpp", var_34_1, var_30)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
