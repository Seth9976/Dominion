// 函数: sub_639150
// 地址: 0x639150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t* ebx_1 = arg3
int32_t edi
int32_t var_20 = edi
int32_t eax_3 = (arg4 - ebx_1) s/ 0xc
char result
int32_t* esp

if (eax_3 s<= 0x28)
    if (arg5(arg2, ebx_1) != 0)
        sub_639300(arg2, ebx_1)
    
    result = arg5(arg4, arg2)
    esp = &var_20
    
    if (result != 0)
        sub_639300(arg4, arg2)
        result = arg5(arg2, ebx_1)
    label_6392e7:
        esp = &var_18
        
        if (result != 0)
            result = sub_639300(arg2, ebx_1)
else
    int32_t eax_5 = (eax_3 + 1) s>> 3
    int32_t eax_7 = eax_5 * 0xc
    int32_t* eax_8 = &ebx_1[eax_5 * 3]
    
    if (arg5(eax_8, ebx_1) != 0)
        sub_639300(eax_8, ebx_1)
    
    if (arg5(&ebx_1[eax_5 * 6], eax_8) != 0)
        sub_639300(&ebx_1[eax_5 * 6], eax_8)
        
        if (arg5(eax_8, ebx_1) != 0)
            sub_639300(eax_8, ebx_1)
    
    int32_t* ebx_3 = arg2 - eax_7
    int32_t* ecx_6 = &arg2[eax_5 * 3]
    
    if (arg5(arg2, ebx_3) != 0)
        sub_639300(arg2, ebx_3)
    
    if (arg5(ecx_6, arg2) != 0)
        sub_639300(ecx_6, arg2)
        
        if (arg5(arg2, ebx_3) != 0)
            sub_639300(arg2, ebx_3)
    
    void* eax_19 = arg4 - eax_5 * 0x18
    int32_t* ebx_5 = arg4 - eax_7
    int32_t* var_c_2 = eax_19
    
    if (arg5(ebx_5, eax_19) != 0)
        sub_639300(ebx_5, var_c_2)
    
    if (arg5(arg4, ebx_5) != 0)
        sub_639300(arg4, ebx_5)
        
        if (arg5(ebx_5, var_c_2) != 0)
            sub_639300(ebx_5, var_c_2)
    
    if (arg5(arg2, eax_8) != 0)
        sub_639300(arg2, eax_8)
    
    result = arg5(ebx_5, arg2)
    esp = &var_20
    
    if (result != 0)
        sub_639300(ebx_5, arg2)
        ebx_1 = eax_8
        result = arg5(arg2, ebx_1)
        goto label_6392e7

*esp
esp[1]
esp[2]
return result
