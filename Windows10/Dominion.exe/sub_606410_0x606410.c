// 函数: sub_606410
// 地址: 0x606410
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
void* eax = sub_571b30(ecx, 0x18)
int32_t edx = *(eax + 0x98)
int32_t esi = *(eax + 0x9c)
void* result

if ((edx & &data_1000000) == 0 && (edx & 0x2000000) == 0 && (edx & 0x4000000) == 0)
    void* eax_8 = edx & 0x40000000
    
    if (eax_8 == 0)
        result = eax_8 | (esi & 0x10000)
        
        if (result == 0 && (result | (esi & 0x20000)) == 0)
            void* eax_10 = edx & 0x800
            
            if (eax_10 == 0)
                result = eax_10 | (esi & 0x200)
                
                if (result == 0 && ((edx & 0x200000) | result) == 0 && (result | (esi & 0x80)) == 0)
                    result.b = 1
                    return result

result.b = 0
return result
