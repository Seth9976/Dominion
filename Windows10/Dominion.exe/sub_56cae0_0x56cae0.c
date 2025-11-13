// 函数: sub_56cae0
// 地址: 0x56cae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* eax_1
int32_t edx
eax_1, edx = sub_573400()
void* edi = eax_1

if (arg4 != 0x601 && arg4 != 0xc00 && arg4 != 0x1200 && arg4 != 0xe01)
    eax_1, edx = sub_591930()

int32_t result = sub_583f70(eax_1, edx, *(edi + 4), arg4, arg3)
int32_t result_1 = arg5

if (result_1 s>= result)
    void* eax_2
    int32_t edx_1
    eax_2, edx_1 = sub_573400()
    void* edi_1 = eax_2
    
    if (arg4 != 0x601 && arg4 != 0xc00 && arg4 != 0x1200 && arg4 != 0xe01)
        eax_2, edx_1 = sub_591930()
    
    result = sub_583f70(eax_2, edx_1, *(edi_1 + 4), arg4, arg3)
    result_1 = result

if (result_1 == 0)
    return result

uint32_t ebx_1

if (arg2 u> 0x48)
    ebx_1 = *(eax + 0xc)
else
    ebx_1 = 0xffffffff

int32_t ecx_2 = *(eax + 0xc)
int32_t* eax_4 = *(eax + 4)

if (arg3 - 7 u> 0x40)
    sub_591930()

int32_t var_2c_2 = 0
int32_t var_30_2 = 0xffffffff
int32_t var_34_1 = 0
int32_t eax_8 = neg.d(result_1)
int32_t var_2c_3 = 0
int32_t var_30_3 = ecx_2
int32_t var_34_2 = 0
return sub_571fa0(sub_571fa0(eax_8, 0xffffffff, eax_4, arg4, eax_8, arg3, nullptr), ebx_1, eax_4, 
    arg4, result_1, arg2, nullptr)
