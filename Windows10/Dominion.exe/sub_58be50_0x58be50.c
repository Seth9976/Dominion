// 函数: sub_58be50
// 地址: 0x58be50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t esi = 0xffffd8f1
int32_t ebx
ebx.b = 0
int32_t var_20[0x6]
sub_58bc10(arg1, &var_20)
int32_t eax_2 = *(arg1 + 0xd38)
char* ecx = nullptr

if (eax_2 s> 0)
    do
        int32_t eax_3 = var_20[ecx]
        *(ecx + arg2) = 0
        
        if (eax_3 s<= esi)
            eax_3 = esi
        
        ecx = &ecx[1]
        esi = eax_3
        eax_2 = *(arg1 + 0xd38)
    while (ecx s< eax_2)

int32_t i = eax_2 - 1

if (eax_2 - 1 s>= 0)
    while (ebx.b == 0 || *(arg1 + 0x19cc) != i)
        if (var_20[i] == esi)
            arg2[i] = 1
            ebx.b = 1
        
        int32_t i_1 = i
        i -= 1
        
        if (i_1 - 1 s< 0)
            break

void* result = sub_583350(arg1)
CookieCheckFunction(result)
return result
