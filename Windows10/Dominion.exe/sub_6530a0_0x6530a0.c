// 函数: sub_6530a0
// 地址: 0x6530a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
float result = arg5
int32_t esi_1 = *arg6
char* edx_2 = arg4
float result_1 = result
int32_t* var_82c = arg7
int32_t var_820 = 0

if (esi_1 s>= 0x3e8)
    sub_63b870(result, &data_801800, "attribMap.attributeCount < 1000", 
        "C:\x\ax2017\Engine\UI2.cpp", 0x15f9, "UI2MergeAttribMap")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t i = 0
int32_t var_810[0x100]
int32_t var_410[0x101]

if (esi_1 s> 0)
    int32_t* ecx_2 = var_82c
    
    do
        sub_650190(&var_820, i, arg6, arg3, arg2, ecx_2, &var_820, &var_410, &var_810, edx_2, 
            result, arg3 + 0xc14, arg8, arg9)
        int16_t top = top + 1
        i += 1
        edx_2 = arg4
        ecx_2 = var_82c
        result = result_1
    while (i s< *arg6)

int32_t esi_2 = 0

if (var_820 s> 0)
    do
        float xmm0_1 = var_810[esi_2]
        xmm0_1 - 1f
        int32_t* ecx_4 = var_410[esi_2]
        result:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
            | (xmm0_1 < 1f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (p_2)
            int32_t* var_83c_2 = ecx_4
            result = sub_652c30(arg3 + 0xc14, arg2, arg3, edx_2, result_1, arg3 + 0xc14, ecx_4, 
                var_82c, arg8, xmm0_1)
        else
            result = sub_6530a0(edx_2, result_1, ecx_4, var_82c, 0, 0)
        
        edx_2 = arg4
        esi_2 += 1
    while (esi_2 s< var_820)

CookieCheckFunction(result)
return result
