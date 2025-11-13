// 函数: sub_5ac5a0
// 地址: 0x5ac5a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x5038)
__security_cookie
void* i = data_b4a5c0

for (void* ecx_1 = data_b4a5c4 * 0x510c + i; i u< ecx_1; i += 0x510c)
    if ((*(i + 0x5108) & 0xffff0000) != 0)
        while (i != 0xffffffff)
            if (*i != 3 && *(i + 4) == 1)
                uint32_t eax_5 = *(i + 0x5108)
                CookieCheckFunction(eax_5)
                return eax_5
            
            i += 0x510c
            
            if (i u>= ecx_1)
                break
            
            while ((*(i + 0x5108) & 0xffff0000) == 0)
                i += 0x510c
                
                if (i u>= ecx_1)
                    goto label_5ac5e5
        
        break

label_5ac5e5:
int32_t var_5034 = 0
int32_t var_5038 = 1
int32_t var_5030 = sub_63eb70()

if (sub_51b500() == 0)
    CookieCheckFunction(0)
    return 0

void var_502c
uint32_t eax_4 = sub_5ac2e0(&var_502c)
CookieCheckFunction(eax_4)
return eax_4
