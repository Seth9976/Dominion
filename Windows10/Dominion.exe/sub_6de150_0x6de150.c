// 函数: sub_6de150
// 地址: 0x6de150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
arg5 - 0f
int128_t* var_8c = arg3
float xmm1 = arg4
float var_78 = xmm1
uint32_t result
result:1.b =
    (arg5 == 0f ? 1 : 0) << 6 | (is_unordered.d(arg5, 0f) ? 1 : 0) << 2 | (arg5 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    int32_t* edx = *(arg2 + 0x10)
    int32_t edi_1 = 0
    int32_t* var_88_1 = edx
    result = edx[1]
    uint32_t result_2 = result
    
    if (result s> 0)
        result = 0
        uint32_t result_1 = 0
        
        do
            void* esi_2 = edx[2] + result
            
            if (*(esi_2 + 0x10) != 0xffffffff)
                void var_40
                sub_6ddc00(&var_40, edi_1, var_88_1, xmm1, &var_40)
                int16_t top = top + 1
                int128_t var_70 = *var_8c
                int128_t var_60_1 = var_8c[1]
                int32_t var_48_1 = *(var_8c + 0x28)
                int64_t var_50_1 = var_8c[2].q
                sub_6ddeb0(&var_40, &var_70, &var_40, &var_40)
                arg5 - 1f
                int32_t* eax_6
                eax_6:1.b = (arg5 == 1f ? 1 : 0) << 6 | (is_unordered.d(arg5, 1f) ? 1 : 0) << 2
                    | (arg5 < 1f ? 1 : 0)
                bool p_3 = unimplemented  {test ah, 0x44}
                
                if (p_3)
                    sub_63b870(eax_6, &data_801800, "fractionWeight == 1.0f", 
                        "C:\x\ax2017\Engine\Animation.cpp", 0x1f8, 
                        "AnimDefAccumDifferenceBonePosition")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                int32_t* edx_4 = *(esi_2 + 0x10) * 0x2c + arg6
                sub_6ddeb0(&var_40, edx_4, edx_4, &var_40)
                xmm1 = var_78
                arg3 = var_8c
                result = result_1
                edx = var_88_1
            
            edi_1 += 1
            result += 0x18
            arg3 += 0x2c
            result_1 = result
            var_8c = arg3
        while (edi_1 s< result_2)

CookieCheckFunction(result)
return result
