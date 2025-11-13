// 函数: sub_4b8d80
// 地址: 0x4b8d80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char _Destination
strncpy(&_Destination, arg1, 9)
void* result = data_cc8d5c
char var_c = 0

if (result == 0)
    sub_63b870(result, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(result + 0x18) == 3)
    result = *(result + 0x14)
    void* ecx = data_147abf4
    
    if (result != 0)
        uint32_t edx_1 = zx.d(result.w)
        
        if (edx_1 u< *(ecx + 4))
            void* esi_2 = edx_1 * 0x64 + *ecx
            
            if (*(esi_2 + 0x60) == result && esi_2 != 0)
                int32_t var_1c_1 = 0xf42a7
                sub_689e00(result, 9, esi_2 + 0x50)
                result = sub_689be0(&_Destination, 9, esi_2 + 0x50, &_Destination)

CookieCheckFunction(result)
return result
