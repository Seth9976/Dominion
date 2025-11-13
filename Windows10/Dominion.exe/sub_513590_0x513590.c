// 函数: sub_513590
// 地址: 0x513590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
int32_t esi = 0
int32_t* edi = arg3 + 0x28

while (true)
    int32_t ecx = *edi
    
    if (ecx != 0)
        void* eax = sub_571b30(ecx, 0x17)
        
        if (((arg4 & *(eax + 0x98)) | (*(eax + 0x9c) & arg5)) != 0)
            break
        
        esi += 1
        edi = &edi[0xf]
        
        if (esi s< 4)
            continue
    
    arg1.b = 0
    return arg1

arg1.b = 1
return arg1
