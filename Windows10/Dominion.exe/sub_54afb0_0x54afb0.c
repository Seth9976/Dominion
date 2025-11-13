// 函数: sub_54afb0
// 地址: 0x54afb0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x1918)
__security_cookie
int32_t ecx = 7
int32_t* eax_4 = *(sub_573400() + 4) + 0x1594

while (*eax_4 != 0x1128)
    if (eax_4[1] == 0x1128)
        break
    
    ecx += 1
    eax_4 = &eax_4[4]
    
    if (ecx s>= 0x48)
        ecx = 0
        break

int32_t var_14 = ecx
int32_t var_18 = 0

if (sub_568960(eax_4, 0, ecx, 0) == 0)
    uint32_t eax_5
    eax_5.b = 0
    CookieCheckFunction(eax_5)
    return eax_5

int32_t var_14_1 = 0
void var_8
void arg_c80
__builtin_memcpy(&arg_c80, sub_5685f0(&var_8, 0, 0x3e9, &var_8, 2), 0xc84)
sub_561a00(&arg_c80, nullptr)
uint32_t eax_8
eax_8.b = arg1 s>= 3
CookieCheckFunction(eax_8)
return eax_8
