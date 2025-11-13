// 函数: sub_63cca0
// 地址: 0x63cca0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76c3b5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_94 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint16_t* _First1 = arg3
int128_t* var_6c = arg2
int32_t eax_4 = 0xf
int128_t var_54 = zx.o(0)
uint16_t* _First1_1 = _First1
uint16_t const* _Mid1 = _First1
int32_t var_40 = 0xf
var_54.b = 0
int32_t var_14_1 = 0
int32_t esi = 0xf
int128_t var_3c = zx.o(0)
int32_t var_2c = 0
int32_t var_28 = 0xf
var_3c.b = 0
var_14_1.b = 1
void* _State = arg1 + 0x40

if (*(arg1 + 0x48) != 0)
    _State = arg1 + 0x40
else
    *(arg1 + 0x40) = 0
    *(arg1 + 0x44) = 0

uint16_t* _Last1 = arg4
void* var_44 = 8
var_54.q = 0
var_54:8.b = 0
*(arg1 + 0x4c) = 0
int128_t* result

while (true)
    int32_t ecx_11
    void* edx_3
    
    if (_First1 == _Last1)
        result = arg2
        __builtin_memset(result, 0, 0x18)
        *result = var_3c
        result[1].q = var_2c.q
        
        if (eax_4 u<= 0xf)
            break
        
        edx_3 = var_54.d
        ecx_11 = eax_4 + 1
        void* eax_42 = edx_3
        
        if (ecx_11 u>= 0x1000)
            edx_3 = *(eax_42 - 4)
            ecx_11 += 0x23
            
            if (eax_42 - edx_3 - 4 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
    else
        int128_t* _First2 = &var_54
        
        if (eax_4 u> 0xf)
            _First2 = var_54.d
        
        char* _Mid2
        int32_t eax_8 = std::codecvt<wchar_t, char, struct _Mbstatet>::out(*(arg1 + 4), _State, 
            _First1, _Last1, &_Mid1, _First2, var_44 + _First2, &_Mid2)
        
        if (eax_8 == 0 || eax_8 == 1)
            char* _Mid2_1 = _Mid2
            
            if (_First2 u< _Mid2_1)
                int32_t edx_1 = var_2c
                uint32_t count = _Mid2_1 - _First2
                
                if (count u> esi - edx_1)
                    sub_63d320(&var_3c, count, 0.d, _First2)
                    esi = var_28
                else
                    var_2c = edx_1 + count
                    int128_t* eax_17 = &var_3c
                    
                    if (esi u> 0xf)
                        eax_17 = var_3c.d
                    
                    char* esi_1 = eax_17 + edx_1
                    memmove(esi_1, _First2, count)
                    esi_1[count] = 0
                    esi = var_28
                
                goto label_63cea2
            
            void* ecx_5 = var_44
            
            if (ecx_5 u>= 0x10)
                if (*(arg1 + 0x49) == 0)
                    sub_63bbb0()
                    noreturn
                
                result = arg2
                sub_5bbfb0(result, arg1 + 0x10)
                
                if (esi u> 0xf)
                    void* ecx_16 = var_3c.d
                    int32_t esi_3 = esi + 1
                    void* eax_36 = ecx_16
                    
                    if (esi_3 u>= 0x1000)
                        ecx_16 = *(eax_36 - 4)
                        esi_3 += 0x23
                        
                        if (eax_36 - ecx_16 - 4 u> 0x1f)
                            _invalid_parameter_noinfo_noreturn()
                            noreturn
                    
                    int32_t var_98_8 = esi_3
                    operator new(ecx_16)
                
                if (var_40 u<= 0xf)
                    break
                
                edx_3 = var_54.d
                ecx_11 = var_40 + 1
                void* eax_39 = edx_3
                
                if (ecx_11 u>= 0x1000)
                    edx_3 = *(eax_39 - 4)
                    ecx_11 += 0x23
                    
                    if (eax_39 - edx_3 - 4 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
            else
                if (var_40 - ecx_5 u< 8)
                    var_6c.b = 0
                    int32_t var_a0_5 = 0
                    void* var_a4_3 = ecx_5
                    sub_63d1e0(&var_54)
                else
                    var_44 = ecx_5 + 8
                    int64_t* eax_21 = &var_54
                    
                    if (var_40 u> 0xf)
                        eax_21 = var_54.d
                    
                    *(eax_21 + ecx_5) = 0
                    *(eax_21 + ecx_5 + 8) = 0
                
            label_63cea2:
                _Last1 = arg4
                _First1 = _Mid1
            label_63ceb2:
                *(arg1 + 0x4c) = (_First1 - _First1_1) s>> 1
                eax_4 = var_40
                continue
        else
            if (eax_8 == 3)
                _First1 = _Mid1
                
                while (_First1 != _Last1)
                    _First1.b = *_First1
                    int32_t ecx_1 = var_2c
                    
                    if (ecx_1 u>= esi)
                        int32_t var_98_2 = _First1.b.d
                        int32_t var_9c_2 = 0.d
                        sub_63d0a0(&var_3c, ecx_1.b)
                    else
                        var_2c = ecx_1 + 1
                        char* eax_13 = &var_3c
                        
                        if (esi u> 0xf)
                            eax_13 = var_3c.d
                        
                        eax_13[ecx_1] = _First1.b
                        eax_13[ecx_1 + 1] = 0
                    
                    esi = var_28
                    _First1 = &_Mid1[1]
                    _Mid1 = _First1
                
                goto label_63ceb2
            
            if (*(arg1 + 0x49) == 0)
                sub_63bbb0()
                noreturn
            
            result = arg2
            sub_5bbfb0(result, arg1 + 0x10)
            
            if (esi u> 0xf)
                void* ecx_9 = var_3c.d
                int32_t esi_2 = esi + 1
                void* eax_27 = ecx_9
                
                if (esi_2 u>= 0x1000)
                    ecx_9 = *(eax_27 - 4)
                    esi_2 += 0x23
                    
                    if (eax_27 - ecx_9 - 4 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                int32_t var_98_5 = esi_2
                operator new(ecx_9)
            
            if (var_40 u<= 0xf)
                break
            
            edx_3 = var_54.d
            ecx_11 = var_40 + 1
            void* eax_30 = edx_3
            
            if (ecx_11 u>= 0x1000)
                edx_3 = *(eax_30 - 4)
                ecx_11 += 0x23
                
                if (eax_30 - edx_3 - 4 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
    
    int32_t var_98_6 = ecx_11
    operator new(edx_3)
    break

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
