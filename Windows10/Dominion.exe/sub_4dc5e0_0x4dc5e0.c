// 函数: sub_4dc5e0
// 地址: 0x4dc5e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = *arg1
int32_t esi = arg1[1]
void* ebx_3 = *(arg2 + 4) - eax - esi + *arg2
char* edi = eax + esi
int32_t esi_1 = 0
char* var_8 = edi

if (ebx_3 s> 0)
    do
        if (strchr("():, \t\r\n", edi[esi_1]) == 0)
            return &edi[esi_1]
        
        edi = var_8
        esi_1 += 1
    while (esi_1 s< ebx_3)

int64_t var_c = 0
return 0
