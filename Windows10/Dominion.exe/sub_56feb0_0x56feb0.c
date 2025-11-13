// 函数: sub_56feb0
// 地址: 0x56feb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t edi = zx.d(arg1)
int32_t esi = edi * 0x64
int32_t ebx = *(sub_573400() + 4)
void* result
int32_t ebx_1

if (edi u< 0x320)
    ebx_1 = *(esi + ebx + 0x1a58)
    result = *(sub_573400() + 4)
else
    sub_591930()
    ebx_1 = *(ebx + esi + 0x1a58)
    arg1.d = *(sub_573400() + 4)
    sub_591930()
    result = arg1.d

if (*(esi + result + 0x1a50) == ebx_1)
    int32_t ebx_2 = *(sub_573400() + 4)
    
    if (edi u>= 0x320)
        sub_591930()
    
    if (*(esi + ebx_2 + 0x1a50) != 0x3eb)
        result.b = 1
        return result

result.b = 0
return result
