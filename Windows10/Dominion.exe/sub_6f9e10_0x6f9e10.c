// 函数: sub_6f9e10
// 地址: 0x6f9e10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg3
void* var_c_1 = arg3

if (arg3 == 0 || arg4 == 0)
    return 

int32_t* i = *(arg4 + 4)

while (i != 0)
    void* ebx_1 = *i
    i = i[1]
    void* var_1c_1 = ebx_1
    arg1 = sub_6f9a30(arg3 + 4)
    
    if (arg1 != 0)
        char* eax = *(ebx_1 + 8)
        
        if (eax != 0 && *eax != 0)
            sub_63d850(&arg1[2], ebx_1 + 8)
        
        arg1[3]
        sub_6f9e10(*(ebx_1 + 0xc))
    
    arg3 = var_c_1
