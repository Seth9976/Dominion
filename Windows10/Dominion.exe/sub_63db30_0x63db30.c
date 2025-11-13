// 函数: sub_63db30
// 地址: 0x63db30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t count = arg3

if (count == 0)
    return 

int32_t var_18_1
void* eax
void* const ecx

if (arg2 == 0)
    char const* const var_14_1 = "XString::AppendLength"
    var_18_1 = 0x131
    ecx = &data_871e0c
label_63dbda:
    sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\xString.cpp", var_18_1, 
        "XString::AppendLength")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*arg2 == 0)
    return 

char* eax_1 = *arg1

if (eax_1 == 0 || *eax_1 == 0)
    sub_63d540(arg1, count)
    arg3 = 0
    memcpy(*arg1 + arg3, arg2, count)
    *(*arg1 + arg3 + count) = 0
    return 

char* eax_2 = sub_63d4e0(arg1)
void* edx_1 = *arg1
uint32_t ecx_1 = *(eax_2 + 8)
eax = edx_1 + ecx_1

if (eax u>= arg2)
    eax = &arg2[count]
    
    if (eax u>= edx_1)
        char const* const var_14_3 = "XString::AppendLength"
        var_18_1 = 0x145
        ecx = "mMagicDataPtr + originalLength < str || str + length < mMagicDataPtr"
        goto label_63dbda

sub_63d5e0(eax, ecx_1 + count, arg1, 1)
memcpy(*arg1 + ecx_1, arg2, count)
*(*arg1 + ecx_1 + count) = 0
