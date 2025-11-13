// 函数: sub_574670
// 地址: 0x574670
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg3
uint32_t eax = arg6
int32_t ebx = 0

if (eax s> 0)
    do
        sub_5727e0(arg5, arg5[ebx], arg3, 0x3eb, arg2, nullptr)
        eax = arg6
        ebx += 1
    while (ebx s< eax)

int32_t i_2 = 7 - eax

if (7 - eax s< 0)
    eax = sub_591930()
else if (i_2 s> 0)
    int32_t i
    
    do
        eax = sub_5727e0(eax, 0x104, arg3, 0x3eb, arg2, nullptr)
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t i_3 = 3
int32_t i_1

do
    eax = sub_5727e0(eax, 0x101, arg3, 0x3eb, arg2, nullptr)
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
int32_t eax_3
int32_t* ecx_4
eax_3, ecx_4 = sub_51bb20(&arg3[0x34e], arg2, arg3, &arg3[0x34e], 1)

if (arg4 != 0)
    int32_t* var_18_1 = ecx_4
    int32_t var_1c_5 = 0x92a
    void* eax_4
    int32_t* ecx_6
    eax_4, ecx_6 = sub_5745c0(eax_3, arg2, arg3, ecx_4)
    int32_t var_1c_6 = 0x92b
    void* eax_5
    int32_t* ecx_8
    eax_5, ecx_8 = sub_5745c0(eax_4, arg2, arg3, ecx_6)
    int32_t var_1c_7 = 0x929
    sub_5745c0(eax_5, arg2, arg3, ecx_8)

int32_t result = eax_3 | sub_51bb20(&arg3[0x34e], arg2, arg3, &arg3[0x34e], 0x20)
sub_583350(arg3)
return result
