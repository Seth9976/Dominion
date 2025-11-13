// 函数: sub_535ff0
// 地址: 0x535ff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t edi = zx.d((*arg1).w)
int32_t ebx = *(sub_573400() + 4)

if (edi u>= 0x320)
    sub_591930()

int32_t esi_1 = edi * 0x64
void* result

if (*(esi_1 + ebx + 0x1a4c) != 0x105)
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (edi u>= 0x320)
        sub_591930()
    
    if (*(esi_1 + ebx_1 + 0x1a4c) != 0x106)
        result.b = 0
        return result

result.b = 1
return result
