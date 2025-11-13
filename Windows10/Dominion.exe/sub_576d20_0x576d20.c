// 函数: sub_576d20
// 地址: 0x576d20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = arg2
int32_t result = 0
void* edi = arg3
void* var_c = eax
int32_t i = 0
void* var_8 = edi

if (*(eax + 0x400) s> 0)
    do
        uint32_t eax_1 = *(eax + (i << 2))
        int32_t eax_4
        
        if ((eax_1.b & 0x30) != 0)
            void* eax_3
            eax_3, arg2 = sub_5769e0(eax_1, arg2, edi, eax_1)
            eax_4 = *(eax_3 + 0x14)
        else
            void* eax_2
            eax_2, arg2 = sub_576940(eax_1, arg2, edi, eax_1)
            
            if (*(eax_2 + 0x4c) != 3)
                arg2 = sub_591930()
            
            eax_4 = *(eax_2 + 0x50)
            edi = var_8
        
        if (eax_4 == arg4)
            uint32_t eax_6 = *(var_c + (i << 2))
            int32_t eax_9
            
            if ((eax_6.b & 0x30) != 0)
                void* eax_8
                eax_8, arg2 = sub_5769e0(eax_6, arg2, edi, eax_6)
                eax_9 = *(eax_8 + 0x9c)
            else
                void* eax_7
                eax_7, arg2 = sub_576940(eax_6, arg2, edi, eax_6)
                
                if (*(eax_7 + 0x4c) != 3)
                    arg2 = sub_591930()
                
                eax_9 = *(eax_7 + 0x54)
                edi = var_8
            
            result += eax_9
        
        eax = var_c
        i += 1
    while (i s< *(eax + 0x400))

return result
