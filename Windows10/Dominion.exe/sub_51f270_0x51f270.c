// 函数: sub_51f270
// 地址: 0x51f270
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

bool cond:0

if ((*(*(sub_573400() + 4) + 0xd44) & 0x40) == 0)
    cond:0 = *(sub_573400() + 0xc) == 0
else
    cond:0 = *(sub_573400() + 0xc) == 1

if (not(cond:0))
    return sub_562100(0xa, 0)

void* eax_5
int32_t ecx
eax_5, ecx = sub_573400()
int32_t var_24 = 0x1509
int64_t var_18 = 0
uint32_t edx = *(eax_5 + 0xc)
void* ecx_1 = *(eax_5 + 4)
int64_t var_10 = 0
int32_t ecx_2 = sub_591310(&var_10, edx, ecx_1, edx, &var_10, &var_18, 0, ecx)
uint32_t edx_1 = *(eax_5 + 0xc)
var_10 = 0
var_18 = 0
int32_t var_24_1 = 0x1509
return sub_591310(&var_18, edx_1, *(eax_5 + 4), edx_1, &var_18, &var_10, 0, ecx_2)
