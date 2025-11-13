// 函数: sub_5846c0
// 地址: 0x5846c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* edi = arg4

if (*(edi + 0x400) s< 0)
    arg2 = sub_591930()

int32_t result = 0
int32_t i = 0
int32_t result_1 = 0

if (*(edi + 0x400) s> 0)
    do
        uint32_t eax = *(edi + (i << 2))
        int32_t eax_3
        
        if ((eax.b & 0x30) != 0)
            void* eax_2
            eax_2, arg2 = sub_5769e0(eax, arg2, arg3, eax)
            eax_3 = *(eax_2 + 0x14)
        else
            void* eax_1
            eax_1, arg2 = sub_576940(eax, arg2, arg3, eax)
            
            if (*(eax_1 + 0x4c) != 3)
                arg2 = sub_591930()
            
            eax_3 = *(eax_1 + 0x50)
            edi = arg4
        
        if (eax_3 != arg5)
            result = result_1
        else
            uint32_t eax_4 = *(edi + (i << 2))
            int32_t eax_7
            
            if ((eax_4.b & 0x30) != 0)
                void* eax_6
                eax_6, arg2 = sub_5769e0(eax_4, arg2, arg3, eax_4)
                eax_7 = *(eax_6 + 0x9c)
            else
                void* eax_5
                eax_5, arg2 = sub_576940(eax_4, arg2, arg3, eax_4)
                
                if (*(eax_5 + 0x4c) != 3)
                    arg2 = sub_591930()
                
                eax_7 = *(eax_5 + 0x54)
                edi = arg4
            
            result = result_1
            
            if (eax_7 == arg6)
                result += 1
                result_1 = result
        
        i += 1
    while (i s< *(edi + 0x400))

result.b = result s> 0
return result
