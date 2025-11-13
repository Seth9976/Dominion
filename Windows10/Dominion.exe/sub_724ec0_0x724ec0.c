// 函数: sub_724ec0
// 地址: 0x724ec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg3
char* esi = nullptr

if (eax s> 0)
    void* ebx_1 = arg1
    int32_t i_2 = arg4
    
    do
        if (i_2 s> 0)
            int32_t i_1 = i_2
            void* eax_1 = ebx_1
            int32_t i
            
            do
                eax_1 += 1
                *(eax_1 - 1) = esi[arg2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            i_2 = arg4
            eax = arg3
        
        esi = &esi[1]
        ebx_1 += i_2
    while (esi s< eax)

return arg1
