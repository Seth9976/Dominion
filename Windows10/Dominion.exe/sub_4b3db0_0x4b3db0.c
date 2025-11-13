// 函数: sub_4b3db0
// 地址: 0x4b3db0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t var_148
memset(&var_148, 0, 0x138)
int32_t var_14c = 4
char* const _Source = &data_801800
int32_t var_150 = 0x801
char* _Source_5 = *eax_2

if (_Source_5 != 0)
    _Source = _Source_5

char _Destination
strncpy(&_Destination, _Source, 0x10)
char var_135 = 0
char* const _Source_1 = &data_801800
int32_t var_134 = *(eax_2 + 8)
char* _Source_3 = *(eax_2 + 0x4248)

if (_Source_3 != 0)
    _Source_1 = _Source_3

char _Destination_1[0x1f]
strncpy(&_Destination_1, _Source_1, 0x20)
char var_111 = 0
char* const _Source_2 = &data_801800
var_148 = *(eax_2 + 0x424c)
char* _Source_4 = *arg1

if (_Source_4 != 0)
    _Source_2 = _Source_4

char _Destination_2[0xfe]
strncpy(&_Destination_2, _Source_2, 0xff)
void* result = data_cc8d5c
char var_12 = 0

if (result == 0)
    sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(result + 0x18) == 3)
    result = *(result + 0x14)
    void* ecx_2 = data_147abf4
    
    if (result != 0)
        uint32_t edx_1 = zx.d(result.w)
        
        if (edx_1 u< *(ecx_2 + 4))
            void* esi_2 = edx_1 * 0x64 + *ecx_2
            
            if (*(esi_2 + 0x60) == result && esi_2 != 0)
                int32_t var_164_1 = 0xf42a5
                sub_689e00(result, 0x140, esi_2 + 0x50)
                result = sub_689be0(&var_150, 0x140, esi_2 + 0x50, &var_150)

CookieCheckFunction(result)
return result
