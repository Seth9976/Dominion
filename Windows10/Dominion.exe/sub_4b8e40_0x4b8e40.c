// 函数: sub_4b8e40
// 地址: 0x4b8e40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char _Destination[0x3f]
strncpy(&_Destination, arg1, 0x40)
void* result = data_cc8d5c
char var_11 = 0

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
                int32_t var_5c_1 = 0xf42a8
                sub_689e00(result, 0x40, esi_2 + 0x50)
                result = sub_689be0(&_Destination, 0x40, esi_2 + 0x50, &_Destination)

CookieCheckFunction(result)
return result
