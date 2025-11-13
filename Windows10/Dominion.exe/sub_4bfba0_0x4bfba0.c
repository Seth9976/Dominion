// 函数: sub_4bfba0
// 地址: 0x4bfba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char* result = *(arg1 + 8)

if (result != 0 && *result != 0)
    void* esi_1 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
    sub_63d850(esi_1, arg1 + 8)
    int32_t eax_3
    uint32_t edx_1
    eax_3, edx_1 = _Xtime_get_ticks()
    uint32_t eax_4
    int32_t edx_2
    eax_4, edx_2 = __alldiv(eax_3, edx_1, 0x989680, 0)
    *(esi_1 + 0x4260) = eax_4
    char* const _Source = &data_801800
    *(esi_1 + 0x4264) = edx_2
    uint32_t var_28 = eax_4
    int32_t var_24_1 = edx_2
    char* _Source_1 = *esi_1
    
    if (_Source_1 != 0)
        _Source = _Source_1
    
    char _Destination
    strncpy(&_Destination, _Source, 0x10)
    result = data_cc8d5c
    char var_11_1 = 0
    
    if (result == 0)
    label_4bfccf:
        sub_63b870(result, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t eax_5 = *(result + 0x14)
    void* ecx_4 = data_147abf4
    
    if (eax_5 != 0)
        uint32_t edx_3 = zx.d(eax_5.w)
        
        if (edx_3 u< *(ecx_4 + 4))
            esi_1 = edx_3 * 0x64 + *ecx_4
            
            if (*(esi_1 + 0x60) == eax_5 && esi_1 != 0)
                int32_t var_34_2 = 0xf42bf
                sub_689e00(eax_5, 0x18, esi_1 + 0x50)
                sub_689be0(&var_28, 0x18, esi_1 + 0x50, &var_28)
    
    data_cc8dc8
    sub_4d8ad0(esi_1)
    result = data_cc8d5c
    
    if (result == 0)
        goto label_4bfccf
    
    *(result + 0x75b0) = 1

CookieCheckFunction(result)
return result
