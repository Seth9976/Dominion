// 函数: sub_50a640
// 地址: 0x50a640
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi_2 = (data_cca784 << 0xb) + data_cca780
int32_t esi = 0
int32_t result

while (true)
    int32_t ecx_1 = *(edi_2 + (esi << 2) + 0xc)
    
    if (ecx_1 != 0)
        void* eax = sub_571b30(ecx_1, 0x17)
        
        if (((arg1 & *(eax + 0x98)) | (*(eax + 0x9c) & arg2)) != 0)
            break
        
        esi += 1
        
        if (esi s< 0xa)
            continue
    
    result.b = 0
    return result

result.b = 1
return result
