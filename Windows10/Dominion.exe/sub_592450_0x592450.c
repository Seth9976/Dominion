// 函数: sub_592450
// 地址: 0x592450
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4_1 = ebp
__chkstk(0x1914)
__security_cookie
void* arg_4
void* ebx = arg_4
void arg_c84
uint32_t __return_addr_1 = sub_591b80(&arg_4, arg1, ebx, &arg_4, &arg_c84)
__return_addr = __return_addr_1
int32_t edi = 0
int32_t esi = 0

if (__return_addr_1 s> 0)
    do
        int32_t edx_1 = (&arg_4)[esi]
        
        if (edx_1 != 0)
            __return_addr_1 = sub_5754f0(__return_addr_1, edx_1, ebx, 8, 0)
        else
            __return_addr_1.b = 0
        
        int32_t ecx_2 = edi + 1
        
        if (__return_addr_1.b == 0)
            ecx_2 = edi
        
        esi += 1
        edi = ecx_2
    while (esi s< __return_addr)

*arg2 = edi
CookieCheckFunction(arg2)
return arg2
