// 函数: sub_4e5ee0
// 地址: 0x4e5ee0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = arg3[1]
void* var_40 = *arg3
int32_t var_44 = arg2
int32_t edi = 0
char* var_38
sub_4dc550(&var_38, &var_40)
var_40.q = 0
int32_t var_20
int32_t result = sub_4dc830(&var_20, var_40, ecx)
char* ecx_3 = var_38

if (ecx_3 != var_20)
    result = arg4
    struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = arg2 + (result << 2)
    
    while (edi s< arg5)
        int32_t var_54_2 = 1
        uint32_t var_34
        struct _EXCEPTION_REGISTRATION_RECORD* eax_1 = sub_4dd260(result, var_34, ecx_3, ecx_3)
        *ebx_1 = eax_1
        var_40 = &ebx_1[1]
        edi += 1
        void* eax_2 = sub_571b30(eax_1, 0x17)
        int32_t i = 0
        void* ecx_5 = eax_2 + 0xc8
        
        do
            int32_t esi_1 = *(ecx_5 - 0x20)
            
            if (esi_1 == 0)
                break
            
            if (esi_1 == 0xd && *ecx_5 != 0)
                int32_t eax_3 = i * 0xb4
                int32_t eax_4 = *(eax_3 + eax_2 + 0xc0)
                
                if (eax_4 != 0)
                    sub_4e5ee0(*(eax_3 + eax_2 + 0xbc), eax_4)
                
                break
            
            i += 1
            ecx_5 += 0xb4
        while (i s< 8)
        
        int32_t var_28
        int32_t var_24
        result = sub_4dc830(&var_38, var_28, var_24)
        ecx_3 = var_38
        ebx_1 = var_40
        
        if (ecx_3 == var_20)
            break

return result
