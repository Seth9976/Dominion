// 函数: sub_5921e0
// 地址: 0x5921e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4_1 = ebp
__chkstk(0x1914)
__security_cookie
void* arg_4
void* eax_2 = arg_4
int32_t arg_c84[0x321]
uint32_t eax_3 = sub_591b80(eax_2, arg1, eax_2, &arg_c84, &arg_4)
uint32_t ebx = eax_3
int32_t edi = 0
int32_t esi = 0

if (ebx s> 0)
    do
        if ((&arg_4)[esi] s>= 3)
            int32_t edx_1 = arg_c84[esi]
            
            if (edx_1 != 0x101 && edx_1 != 0)
                eax_3 = sub_5754f0(eax_3, edx_1, eax_2, 4, 0)
                
                if (eax_3.b != 0)
                    edi += 1
        
        esi += 1
    while (esi s< ebx)

*arg2 = edi
CookieCheckFunction(arg2)
return arg2
