// 函数: sub_576b30
// 地址: 0x576b30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void var_81c
uint32_t eax_3
int32_t edx
eax_3, edx = sub_576170(&var_81c, arg2, arg3, &var_81c, arg4, 0)
uint32_t result = 0
int32_t var_414[0x100]
__builtin_memcpy(&var_414, eax_3, 0x404)
int32_t esi_1 = 0
int32_t var_14

if (var_14 s> 0)
    int32_t ecx = arg7
    
    do
        if ((arg6 | ecx) == 0)
        label_576ba8:
            uint32_t eax_8 = var_414[esi_1]
            int32_t eax_11
            
            if ((eax_8.b & 0x30) != 0)
                void* eax_10
                eax_10, edx = sub_5769e0(eax_8, edx, arg3, eax_8)
                eax_11 = *(eax_10 + 0x9c)
            else
                void* eax_9
                eax_9, edx = sub_576940(eax_8, edx, arg3, eax_8)
                
                if (*(eax_9 + 0x4c) != 3)
                    edx = sub_591930()
                
                eax_11 = *(eax_9 + 0x54)
            
            ecx = arg7
            
            if (eax_11 == arg5)
                result += 1
        else
            uint32_t eax_6 = var_414[esi_1]
            
            if ((eax_6.b & 0x30) != 0)
                goto label_576ba8
            
            void* eax_7
            eax_7, edx = sub_576940(eax_6, edx, arg3, eax_6)
            ecx = arg7
            
            if (*(eax_7 + 8) == arg6 && *(eax_7 + 0xc) == ecx)
                goto label_576ba8
        
        esi_1 += 1
    while (esi_1 s< var_14)

CookieCheckFunction(result)
return result
