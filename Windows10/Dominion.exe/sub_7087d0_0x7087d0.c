// 函数: sub_7087d0
// 地址: 0x7087d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char* esi = arg2
free(*(arg3 + 8))
char* ecx = esi
void var_108
char i

do
    i = *ecx
    ecx = &ecx[1]
    *(&var_108 - esi + ecx - 1) = i
while (i != 0)

do
    i = *esi
    esi = &esi[1]
while (i != 0)

void* esi_1 = esi - &esi[1]

if (arg4 != 0)
    strncat(&var_108 + esi_1, arg4, 0xff - esi_1)

void* ecx_2 = &var_108

do
    i = *ecx_2
    ecx_2 += 1
while (i != 0)

int32_t eax_4 = data_147ded8
void* esi_2 = &var_108
int32_t eax_5
void var_107

if (eax_4 == 0)
    eax_5 = malloc(ecx_2 - &var_107 + 1)
else
    eax_5 = eax_4(ecx_2 - &var_107 + 1, 
        "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\SkeletonBinary.c", 0x58)
*(arg3 + 8) = eax_5
void* result

do
    result.b = *esi_2
    esi_2 += 1
    *(eax_5 - &var_108 + esi_2 - 1) = result.b
while (result.b != 0)

CookieCheckFunction(result)
return result
