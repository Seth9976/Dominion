// 函数: sub_71bba0
// 地址: 0x71bba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi
int32_t var_c = edi
sub_71a2f0(arg1, arg2, arg2, edi)
bool cond:0 = arg1[0xe] f> 1f
arg1[0x2b] = arg2
int32_t ecx = arg1[0x2c]
int32_t eax
eax.b = cond:0

if (eax == 0)
    int32_t edx_4
    
    if (ecx s>= 0)
        arg1[0x29]
        edx_4 = mods.dp.d(sx.q(arg2 + ecx - arg1[0x2a]), arg1[0x29])
    else
        arg1[0x2c] = 0
        edx_4 = 0
        arg1[0x2a] = arg2
    
    uint32_t count_1 = arg1[0x28]
    int32_t edi_3 = arg1[0x2d] + (((count_1 u>> 2) * edx_4) << 2)
    memset(edi_3, 0, count_1)
    return sub_71b6c0(arg1, edi_3) __tailcall

int32_t edx

if (ecx s>= 0)
    arg1[0x29]
    edx = mods.dp.d(sx.q(arg2 + ecx - arg1[0x2a]), arg1[0x29])
else
    arg1[0x2c] = 0
    edx = 0
    arg1[0x2a] = arg2

uint32_t count = arg1[0x28]
float* edi_1 = arg1[0x2d] + (((count u>> 2) * edx) << 2)
memset(edi_1, 0, count)
return sub_71b360(arg1, edi_1) __tailcall
