// 函数: sub_51fbe0
// 地址: 0x51fbe0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = *(arg1 + 0xc)
int32_t edi = *(arg1 + 8)
void* eax_1 = sub_571b30(*arg2, 0x17)
int32_t result

if (((edi & *(eax_1 + 0x98)) | (*(eax_1 + 0x9c) & esi)) == 0)
    result.b = 0
    return result

result.b = 1
return result
