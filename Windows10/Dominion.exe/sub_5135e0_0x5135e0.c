// 函数: sub_5135e0
// 地址: 0x5135e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* esi_2 = (data_cca784 << 0xb) + data_cca780
void* eax
int32_t edx
eax, edx = sub_571b30(arg1, 0x17)
int32_t eax_2 = *(eax + 0x98) & 0x80000000
int32_t result

if (eax_2 != 0)
    result = sub_513590(eax_2, edx, esi_2 + 0xc, 0, 0x40)

if (eax_2 == 0 || result.b != 0)
    int32_t edx_2 = *(sub_571b30(arg1, 0x17) + 0x9c) & 0x400
    
    if (edx_2 != 0)
        result = sub_513590(edx_2, edx_2, esi_2 + 0xc, 0, 0x800)
    
    if (edx_2 == 0 || result.b != 0)
        result.b = arg1 != 0x707
        return result

result.b = 0
return result
