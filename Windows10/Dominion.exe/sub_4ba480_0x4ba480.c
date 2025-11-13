// 函数: sub_4ba480
// 地址: 0x4ba480
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
void* result = __security_cookie ^ &__saved_ebp
void* result_1 = result

if (arg3 != 0)
    int32_t eax_1 = arg2[1].d
    int64_t var_24_1
    __builtin_memset(&var_24_1, 0, 0x18)
    int64_t var_1c
    var_1c.d = eax_1
    int64_t var_24_2 = *arg2
    int64_t xmm0_2 = *arg4
    int64_t var_14
    var_14:4.d = arg4[1].d
    result = data_cc8d5c
    int32_t var_28 = arg3
    var_1c = xmm0_2
    
    if (result == 0)
        sub_63b870(result, &data_801800, "gClient", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
        
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
                    int32_t var_34_1 = 0xf42cb
                    sub_689e00(result, 0x1c, esi_2 + 0x50)
                    result = sub_689be0(&var_28, 0x1c, esi_2 + 0x50, &var_28)

CookieCheckFunction(result)
return result
