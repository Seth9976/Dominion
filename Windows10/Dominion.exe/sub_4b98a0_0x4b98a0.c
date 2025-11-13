// 函数: sub_4b98a0
// 地址: 0x4b98a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_10 = arg5
int32_t var_14 = arg4
void* result = data_cc8d5c
int32_t var_1c = arg3
int32_t var_18 = arg2

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
        uint32_t edx = zx.d(result.w)
        
        if (edx u< *(ecx + 4))
            void* esi_2 = edx * 0x64 + *ecx
            
            if (*(esi_2 + 0x60) == result && esi_2 != 0)
                int32_t var_24_1 = 0xf42d3
                sub_689e00(result, 0x10, esi_2 + 0x50)
                result = sub_689be0(&var_1c, 0x10, esi_2 + 0x50, &var_1c)

CookieCheckFunction(result)
return result
