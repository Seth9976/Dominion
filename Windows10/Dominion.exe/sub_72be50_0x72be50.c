// 函数: sub_72be50
// 地址: 0x72be50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = arg5
void var_10
void* ecx = &var_10

if (eax != 0)
    ecx = eax

char* i_1 = 0x5c
arg5 = 0x5c
char* i

do
    void* eax_1 = *(arg3 + 0xa8)
    
    if (eax_1 u< *(arg3 + 0xac))
        *(arg3 + 0xa8) = eax_1 + 1
    else if (*(arg3 + 0x20) != 0)
        void* eax_4 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg3 + 0x28, *(arg3 + 0x24))
        
        if (eax_4 != 0)
            *(arg3 + 0xac) = eax_4 + 0x28 + arg3
        else
            *(arg3 + 0x20) = eax_4
            *(arg3 + 0xac) = arg3 + 0x29
            *(arg3 + 0x28) = 0
        
        i_1 = arg5
        *(arg3 + 0xa8) = arg3 + 0x29
    
    i = i_1
    i_1 -= 1
    arg5 = i_1
while (i != 1)
arg5 = sub_7202a0(arg3)
uint32_t eax_9 = sub_7202a0(arg3)

if (*(arg3 + 0x10) == 0)
label_72bf15:
    
    if (*(arg3 + 0xa8) u< *(arg3 + 0xac))
        goto label_72bf21
else if ((*(arg3 + 0x18))(*(arg3 + 0x1c)) == 0)
label_72bf21:
    char* edi_2 = arg5
    
    if (edi_2 s>= 0 && eax_9 s>= 0)
        int32_t eax_12
        int32_t edx
        
        if (eax_9 != 0)
            edx:eax_12 = 0x7fffffff
        
        if (eax_9 == 0 || edi_2 s<= divs.dp.d(edx:eax_12, eax_9))
            int32_t eax_15 = eax_9 * edi_2
            
            if (eax_15 s>= 0 && eax_15 s<= 0x1fffffff)
                sub_7202a0(arg3)
                sub_7202a0(arg3)
                sub_7202a0(arg3)
                sub_7202a0(arg3)
                int32_t eax_16
                int32_t edx_2
                
                if (eax_9 != 0)
                    edx_2:eax_16 = 0x7fffffff
                
                char* ecx_8
                
                if (eax_9 == 0 || edi_2 s<= divs.dp.d(edx_2:eax_16, eax_9))
                    char* eax_21 = malloc((eax_9 * edi_2) << 2)
                    arg5 = eax_21
                    ecx_8 = eax_21
                else
                    ecx_8 = nullptr
                    arg5 = nullptr
                
                if (sub_72b850(memset(ecx_8, 0xff, (eax_9 * edi_2) << 2), edi_2, arg3, eax_9, ecx, 
                        arg5) == 0)
                    free(arg5)
                    arg5 = nullptr
                
                *arg2 = edi_2
                *arg4 = eax_9
                return sub_720510(ecx, 4, arg5, *ecx, edi_2, eax_9)
else if (*(arg3 + 0x20) != 0)
    goto label_72bf15

return 0
