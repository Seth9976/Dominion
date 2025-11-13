// 函数: sub_4d5720
// 地址: 0x4d5720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
int32_t var_1c = ebx
int32_t esi
int32_t var_20 = esi
int32_t edi
int32_t var_24 = edi
int32_t* edi_1 = arg3
int32_t eax_2 = (arg4 - edi_1) s>> 5
char result
int32_t* esp

if (eax_2 s<= 0x28)
    if (arg5(arg2, edi_1) != 0)
        sub_4d58c0(arg2, edi_1)
    
    result = arg5(arg4, arg2)
    esp = &var_24
    
    if (result != 0)
        sub_4d58c0(arg4, arg2)
        result = arg5(arg2, edi_1)
    label_4d58a5:
        esp = &var_1c
        
        if (result != 0)
            result = sub_4d58c0(arg2, edi_1)
else
    int32_t eax_4 = (eax_2 + 1) s>> 3
    int32_t eax_5 = eax_4 << 5
    int32_t* eax_6 = &edi_1[eax_4 * 8]
    
    if (arg5(eax_6, edi_1) != 0)
        sub_4d58c0(eax_6, edi_1)
    
    if (arg5(&edi_1[eax_4 * 0x10], eax_6) != 0)
        sub_4d58c0(&edi_1[eax_4 * 0x10], eax_6)
        
        if (arg5(eax_6, edi_1) != 0)
            sub_4d58c0(eax_6, edi_1)
    
    int32_t* edi_3 = arg2 - eax_5
    int32_t* ecx_6 = &arg2[eax_4 * 8]
    
    if (arg5(arg2, edi_3) != 0)
        sub_4d58c0(arg2, edi_3)
    
    if (arg5(ecx_6, arg2) != 0)
        sub_4d58c0(ecx_6, arg2)
        
        if (arg5(arg2, edi_3) != 0)
            sub_4d58c0(arg2, edi_3)
    
    void* eax_17 = arg4 - (eax_4 << 6)
    int32_t* edi_5 = arg4 - eax_5
    int32_t* var_c_2 = eax_17
    
    if (arg5(edi_5, eax_17) != 0)
        sub_4d58c0(edi_5, var_c_2)
    
    if (arg5(arg4, edi_5) != 0)
        sub_4d58c0(arg4, edi_5)
        
        if (arg5(edi_5, var_c_2) != 0)
            sub_4d58c0(edi_5, var_c_2)
    
    if (arg5(arg2, eax_6) != 0)
        sub_4d58c0(arg2, eax_6)
    
    result = arg5(edi_5, arg2)
    esp = &var_24
    
    if (result != 0)
        sub_4d58c0(edi_5, arg2)
        edi_1 = eax_6
        result = arg5(arg2, edi_1)
        goto label_4d58a5

*esp
esp[1]
esp[2]
return result
