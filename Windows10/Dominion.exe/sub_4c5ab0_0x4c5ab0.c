// 函数: sub_4c5ab0
// 地址: 0x4c5ab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* eax_2 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t edx = *(eax_2 + 0x428c)
int64_t xmm0 = *(eax_2 + 0x71f4)
int32_t var_14 = *(eax_2 + 0x71fc)
void* eax_4 = data_cc8d5c
int32_t var_24 = *(eax_2 + 0x4288)
int32_t var_20 = edx
int64_t var_1c = xmm0

if (eax_4 == 0)
    sub_63b870(eax_4, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* result = *(eax_4 + 0x14)
void* ecx_3 = data_147abf4

if (result != 0)
    uint32_t edx_1 = zx.d(result.w)
    
    if (edx_1 u< *(ecx_3 + 4))
        void* esi_2 = edx_1 * 0x64 + *ecx_3
        
        if (*(esi_2 + 0x60) == result && esi_2 != 0)
            int32_t var_30_1 = 0xf42c8
            sub_689e00(result, 0x18, esi_2 + 0x50)
            result = sub_689be0(&var_24, 0x18, esi_2 + 0x50, &var_24)

CookieCheckFunction(result)
return result
